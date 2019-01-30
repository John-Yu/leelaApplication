/*
    This file is part of Leela Zero.
    Copyright (C) 2017-2018 Gian-Carlo Pascutto and contributors

    Leela Zero is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Leela Zero is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Leela Zero.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "config.h"

#include <cstdint>
#include <algorithm>
#include <boost/filesystem.hpp>
#include <boost/format.hpp>
#include <boost/program_options.hpp>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "GTP.h"
#include "GameState.h"
#include "Network.h"
#include "NNCache.h"
#include "Random.h"
#include "ThreadPool.h"
#include "Utils.h"
#include "Zobrist.h"

using namespace Utils;

static void license_blurb() {
    printf(
        "Leela Zero %s  Copyright (C) 2017-2018  Gian-Carlo Pascutto and contributors\n"
        "This program comes with ABSOLUTELY NO WARRANTY.\n"
        "This is free software, and you are welcome to redistribute it\n"
        "under certain conditions; see the COPYING file for details.\n\n",
        PROGRAM_VERSION);
}

static void parse_commandline(int argc, char *argv[]) {
    namespace po = boost::program_options;
    // Declare the supported options.
    po::options_description gen_desc("Generic options");
    gen_desc.add_options()
        ("help,h", "Show commandline options.")
        ("gtp,g", "Enable GTP mode.")
        ("threads,t", po::value<int>()->default_value(cfg_num_threads),
                      "Number of threads to use.")
        ("playouts,p", po::value<int>(),
                       "Weaken engine by limiting the number of playouts. "
                       "Requires --noponder.")
        ("visits,v", po::value<int>(),
                     "Weaken engine by limiting the number of visits.")
        ("lagbuffer,b", po::value<int>()->default_value(cfg_lagbuffer_cs),
                        "Safety margin for time usage in centiseconds.")
        ("resignpct,r", po::value<int>()->default_value(cfg_resignpct),
                        "Resign when winrate is less than x%.\n"
                        "-1 uses 10% but scales for handicap.")
        ("weights,w", po::value<std::string>()->default_value(cfg_weightsfile), "File with network weights.")
        ("logfile,l", po::value<std::string>(), "File to log input/output to.")
        ("quiet,q", "Disable all diagnostic output.")
        ("timemanage", po::value<std::string>()->default_value("auto"),
                       "[auto|on|off|fast|no_pruning] Enable time management features.\n"
                       "auto = no_pruning when using -n, otherwise on.\n"
                       "on = Cut off search when the best move can't change"
                       ", but use full time if moving faster doesn't save time.\n"
                       "fast = Same as on but always plays faster.\n"
                       "no_pruning = For self play training use.\n")
        ("noponder", "Disable thinking on opponent's time.")
        ("benchmark", "Test network and exit. Default args:\n-v3200 --noponder "
                      "-m0 -t1 -s1.")
        ("cpu-only", "Use CPU-only implementation and do not use GPU.")
        ;
#ifdef USE_OPENCL
    po::options_description gpu_desc("GPU options");
    gpu_desc.add_options()
        ("gpu",  po::value<std::vector<int> >(),
                "ID of the OpenCL device(s) to use (disables autodetection).")
        ("full-tuner", "Try harder to find an optimal OpenCL tuning.")
        ("tune-only", "Tune OpenCL only and then exit.")
#ifdef USE_HALF
        ("precision", po::value<std::string>(), "Floating-point precision (single/half/auto).\n"
                                                "Default is to auto which automatically determines which one to use.")
#endif
        ;
#endif
    po::options_description selfplay_desc("Self-play options");
    selfplay_desc.add_options()
        ("noise,n", "Enable policy network randomization.")
        ("seed,s", po::value<std::uint64_t>(),
                   "Random number generation seed.")
        ("dumbpass,d", "Don't use heuristics for smarter passing.")
        ("randomcnt,m", po::value<int>()->default_value(cfg_random_cnt),
                        "Play more randomly the first x moves.")
        ("randomvisits",
            po::value<int>()->default_value(cfg_random_min_visits),
            "Don't play random moves if they have <= x visits.")
        ("randomtemp",
            po::value<float>()->default_value(cfg_random_temp),
            "Temperature to use for random move selection.")
        ;
#ifdef USE_TUNER
    po::options_description tuner_desc("Tuning options");
    tuner_desc.add_options()
        ("puct", po::value<float>())
        ("softmax_temp", po::value<float>())
        ("fpu_reduction", po::value<float>())
        ;
#endif
    // These won't be shown, we use them to catch incorrect usage of the
    // command line.
    po::options_description h_desc("Hidden options");
    h_desc.add_options()
        ("arguments", po::value<std::vector<std::string>>());
    po::options_description visible;
    visible.add(gen_desc)
#ifdef USE_OPENCL
       .add(gpu_desc)
#endif
       .add(selfplay_desc)
#ifdef USE_TUNER
       .add(tuner_desc);
#else
        ;
#endif
    // Parse both the above, we will check if any of the latter are present.
    po::options_description all;
    all.add(visible).add(h_desc);
    po::positional_options_description p_desc;
    p_desc.add("arguments", -1);
    po::variables_map vm;
    try {
        po::store(po::command_line_parser(argc, argv)
                  .options(all).positional(p_desc).run(), vm);
        po::notify(vm);
    }  catch(const boost::program_options::error& e) {
        printf("ERROR: %s\n", e.what());
        license_blurb();
        std::cout << visible << std::endl;
        exit(EXIT_FAILURE);
    }

    // Handle commandline options
    if (vm.count("help") || vm.count("arguments")) {
        auto ev = EXIT_SUCCESS;
        // The user specified an argument. We don't accept any, so explain
        // our usage.
        if (vm.count("arguments")) {
            for (auto& arg : vm["arguments"].as<std::vector<std::string>>()) {
                std::cout << "Unrecognized argument: " << arg << std::endl;
            }
            ev = EXIT_FAILURE;
        }
        license_blurb();
        std::cout << visible << std::endl;
        exit(ev);
    }

    if (vm.count("quiet")) {
        cfg_quiet = true;
    }

    if (vm.count("benchmark")) {
        cfg_quiet = true;  // Set this early to avoid unnecessary output.
    }

#ifdef USE_TUNER
    if (vm.count("puct")) {
        cfg_puct = vm["puct"].as<float>();
    }
    if (vm.count("softmax_temp")) {
        cfg_softmax_temp = vm["softmax_temp"].as<float>();
    }
    if (vm.count("fpu_reduction")) {
        cfg_fpu_reduction = vm["fpu_reduction"].as<float>();
    }
#endif

    if (vm.count("logfile")) {
        cfg_logfile = vm["logfile"].as<std::string>();
        myprintf("Logging to %s.\n", cfg_logfile.c_str());
        cfg_logfile_handle = fopen(cfg_logfile.c_str(), "a");
    }

    cfg_weightsfile = vm["weights"].as<std::string>();
    if (vm["weights"].defaulted() && !boost::filesystem::exists(cfg_weightsfile)) {
        printf("A network weights file is required to use the program.\n");
        printf("By default, Leela Zero looks for it in %s.\n", cfg_weightsfile.c_str());
        exit(EXIT_FAILURE);
    }

    if (vm.count("gtp")) {
        cfg_gtp_mode = true;
    }

#ifdef USE_OPENCL
    if (vm.count("gpu")) {
        //cfg_gpus = vm["gpu"].as<std::vector<int> >();
		cfg_gpus = { 0,2 }; //YUHZ
        // if we use OpenCL, we probably need more threads for the max
        // so that we can saturate the GPU.
        cfg_max_threads *= cfg_gpus.size();
        // we can't exceed MAX_CPUS
        cfg_max_threads = std::min(cfg_max_threads, MAX_CPUS);
    }

    if (vm.count("full-tuner")) {
        cfg_sgemm_exhaustive = true;
    }

    if (vm.count("tune-only")) {
        cfg_tune_only = true;
    }

#ifdef USE_HALF
    if (vm.count("precision")) {
        auto precision = vm["precision"].as<std::string>();
        if ("single" == precision) {
            cfg_precision = precision_t::SINGLE;
        } else if ("half" == precision) {
            cfg_precision = precision_t::HALF;
        } else if ("auto" == precision) {
            cfg_precision = precision_t::AUTO;
        } else {
            printf("Unexpected option for --precision, expecting single/half/auto\n");
            exit(EXIT_FAILURE);
        }
    }
#endif
#endif

    if (!vm["threads"].defaulted()) {
        auto num_threads = vm["threads"].as<int>();
        if (num_threads > cfg_max_threads) {
            myprintf("Clamping threads to maximum = %d\n", cfg_max_threads);
            num_threads = cfg_max_threads;
        }
        cfg_num_threads = num_threads;
    }
    myprintf("Using %d thread(s).\n", cfg_num_threads);

    if (vm.count("seed")) {
        cfg_rng_seed = vm["seed"].as<std::uint64_t>();
        if (cfg_num_threads > 1) {
            myprintf("Seed specified but multiple threads enabled.\n");
            myprintf("Games will likely not be reproducible.\n");
        }
    }
    myprintf("RNG seed: %llu\n", cfg_rng_seed);

    if (vm.count("noponder")) {
        cfg_allow_pondering = false;
    }

    if (vm.count("noise")) {
        cfg_noise = true;
    }

    if (vm.count("dumbpass")) {
        cfg_dumbpass = true;
    }

    if (vm.count("cpu-only")) {
        cfg_cpu_only = true;
    }

    if (vm.count("playouts")) {
        cfg_max_playouts = vm["playouts"].as<int>();
        if (!vm.count("noponder")) {
            printf("Nonsensical options: Playouts are restricted but "
                   "thinking on the opponent's time is still allowed. "
                   "Add --noponder if you want a weakened engine.\n");
            exit(EXIT_FAILURE);
        }

        // 0 may be specified to mean "no limit"
        if (cfg_max_playouts == 0) {
            cfg_max_playouts = UCTSearch::UNLIMITED_PLAYOUTS;
        }
    }

    if (vm.count("visits")) {
        cfg_max_visits = vm["visits"].as<int>();

        // 0 may be specified to mean "no limit"
        if (cfg_max_visits == 0) {
            cfg_max_visits = UCTSearch::UNLIMITED_PLAYOUTS;
        }
    }

    if (vm.count("resignpct")) {
        cfg_resignpct = vm["resignpct"].as<int>();
    }

    if (vm.count("randomcnt")) {
        cfg_random_cnt = vm["randomcnt"].as<int>();
    }

    if (vm.count("randomvisits")) {
        cfg_random_min_visits = vm["randomvisits"].as<int>();
    }

    if (vm.count("randomtemp")) {
        cfg_random_temp = vm["randomtemp"].as<float>();
    }

    if (vm.count("timemanage")) {
        auto tm = vm["timemanage"].as<std::string>();
        if (tm == "auto") {
            cfg_timemanage = TimeManagement::AUTO;
        } else if (tm == "on") {
            cfg_timemanage = TimeManagement::ON;
        } else if (tm == "off") {
            cfg_timemanage = TimeManagement::OFF;
        } else if (tm == "fast") {
            cfg_timemanage = TimeManagement::FAST;
        } else if (tm == "no_pruning") {
            cfg_timemanage = TimeManagement::NO_PRUNING;
        } else {
            printf("Invalid timemanage value.\n");
            exit(EXIT_FAILURE);
        }
    }
    if (cfg_timemanage == TimeManagement::AUTO) {
        cfg_timemanage =
            cfg_noise ? TimeManagement::NO_PRUNING : TimeManagement::ON;
    }

    if (vm.count("lagbuffer")) {
        int lagbuffer = vm["lagbuffer"].as<int>();
        if (lagbuffer != cfg_lagbuffer_cs) {
            myprintf("Using per-move time margin of %.2fs.\n",
                     lagbuffer/100.0f);
            cfg_lagbuffer_cs = lagbuffer;
        }
    }
    if (vm.count("benchmark")) {
        // These must be set later to override default arguments.
        cfg_allow_pondering = false;
        cfg_benchmark = true;
        cfg_noise = false;  // Not much of a benchmark if random was used.
        cfg_random_cnt = 0;
        cfg_rng_seed = 1;
        cfg_timemanage = TimeManagement::OFF;  // Reliable number of playouts.
        if (vm["threads"].defaulted()) {
            cfg_num_threads = 1;
        }
        if (!vm.count("playouts") && !vm.count("visits")) {
            cfg_max_visits = 3200; // Default to self-play and match values.
        }
    }

    // Do not lower the expected eval for root moves that are likely not
    // the best if we have introduced noise there exactly to explore more.
    cfg_fpu_root_reduction = cfg_noise ? 0.0f : cfg_fpu_reduction;

    auto out = std::stringstream{};
    for (auto i = 1; i < argc; i++) {
        out << " " << argv[i];
    }
    if (!vm.count("seed")) {
        out << " --seed " << cfg_rng_seed;
    }
    cfg_options_str = out.str();
}

static void initialize_network() {
    auto network = std::make_unique<Network>();
    auto playouts = std::min(cfg_max_playouts, cfg_max_visits);
    network->initialize(playouts, cfg_weightsfile);

    GTP::initialize(std::move(network));
}

// Setup global objects after command line has been parsed
void init_global_objects() {
    thread_pool.initialize(cfg_num_threads);

    // Use deterministic random numbers for hashing
    auto rng = std::make_unique<Random>(5489);
    Zobrist::init_zobrist(*rng);

    // Initialize the main thread RNG.
    // Doing this here avoids mixing in the thread_id, which
    // improves reproducibility across platforms.
    Random::get_Rng().seedrandom(cfg_rng_seed);

    initialize_network();
}

void benchmark(GameState& game) {
    game.set_timecontrol(0, 1, 0, 0);  // Set infinite time.
    game.play_textmove("b", "r16");
    game.play_textmove("w", "d4");
    game.play_textmove("b", "c3");

    auto search = std::make_unique<UCTSearch>(game, *GTP::s_network);
    game.set_to_move(FastBoard::WHITE);
    search->think(FastBoard::WHITE);
}

int main(int argc, char *argv[]) {
    // Set up engine parameters
    GTP::setup_default_parameters();
    parse_commandline(argc, argv);

    // Disable IO buffering as much as possible
    std::cout.setf(std::ios::unitbuf);
    std::cerr.setf(std::ios::unitbuf);
    std::cin.setf(std::ios::unitbuf);

    setbuf(stdout, nullptr);
    setbuf(stderr, nullptr);
#ifndef _WIN32
    setbuf(stdin, nullptr);
#endif

    if (!cfg_gtp_mode && !cfg_benchmark) {
        license_blurb();
    }

    init_global_objects();

    auto maingame = std::make_unique<GameState>();

    /* set board limits */
    auto komi = 7.5f;
    maingame->init_game(BOARD_SIZE, komi);

    if (cfg_benchmark) {
        cfg_quiet = false;
        benchmark(*maingame);
        return 0;
    }

    for (;;) {
        if (!cfg_gtp_mode) {
            maingame->display_state();
            std::cout << "Leela: ";
        }

        auto input = std::string{};
        if (std::getline(std::cin, input)) {
            Utils::log_input(input);
            GTP::execute(*maingame, input);
        } else {
            // eof or other error
            std::cout << std::endl;
            break;
        }

        // Force a flush of the logfile
        if (cfg_logfile_handle) {
            fclose(cfg_logfile_handle);
            cfg_logfile_handle = fopen(cfg_logfile.c_str(), "a");
        }
    }

    return 0;
}

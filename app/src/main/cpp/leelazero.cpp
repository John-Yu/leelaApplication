#include <string>
#include <iostream>
#include <unistd.h>

#include "leelazero.h"

#include "leela0.16/GTP.h"
#include "leela0.16/Random.h"
#include "leela0.16/ThreadPool.h"
#include "leela0.16/Utils.h"
#include "leela0.16/Zobrist.h"

static int pfd[2];
static FILE *stdoutFile = nullptr;
static bool isRedirect = false;
std::unique_ptr<GameState> maingame = nullptr;



int StopEngine() {
    if(maingame != nullptr) {
        maingame = nullptr;
        GTP::s_network = nullptr;
    }
    return 1;
}

int StartEngine(std::string weightfilename) {
    if(maingame == nullptr) {
        GTP::setup_default_parameters();
        cfg_weightsfile = weightfilename;
        // Setup global objects after command line has been parsed
        thread_pool.initialize(cfg_num_threads);
        // Use deterministic random numbers for hashing
        auto rng = std::make_unique<Random>(5489);
        Zobrist::init_zobrist(*rng);
        // Initialize the main thread RNG.
        // Doing this here avoids mixing in the thread_id, which
        // improves reproducibility across platforms.
        Random::get_Rng().seedrandom(cfg_rng_seed);
        //initalize network
        auto playouts = std::min(cfg_max_playouts, cfg_max_visits);
        auto network = std::make_unique<Network>();
        network->initialize(playouts, cfg_weightsfile);
        GTP::initialize(std::move(network));
        //Create maingame
        maingame = std::make_unique<GameState>();
        //set board limits
        auto komi = 7.5f;
        maingame->init_game(BOARD_SIZE, komi);
    }
    return 1;
}

int SendGTP(std::string cmd) {

    if(maingame != nullptr) {
        GTP::execute(*maingame, cmd);
    }
    return 1;
}

std::string getStdout() {
    if(!isRedirect){
        /* make stdout line-buffered and stderr unbuffered */
        setvbuf(stdout, 0, _IONBF, 0);
        setvbuf(stderr, 0, _IONBF, 0);

        /* create the pipe and redirect stdout and stderr */
        pipe(pfd);
        dup2(pfd[1], STDOUT_FILENO);
        dup2(pfd[1], STDERR_FILENO);
        stdoutFile = fdopen(pfd[0], "r");
        close(pfd[1]);
        isRedirect = true;
    }
    char buf[512];
    fgets(buf, sizeof(buf), stdoutFile);
    std::string hello = buf;
    return hello;
}

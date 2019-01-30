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

#ifndef GTP_H_INCLUDED
#define GTP_H_INCLUDED

#include "config.h"

#include <cstdio>
#include <string>
#include <vector>

#include "Network.h"
#include "GameState.h"
#include "UCTSearch.h"

extern bool cfg_gtp_mode;
extern bool cfg_allow_pondering;
extern int cfg_num_threads;
extern int cfg_max_threads;
extern int cfg_max_playouts;
extern int cfg_max_visits;
extern size_t cfg_max_memory;
extern size_t cfg_max_tree_size;
extern int cfg_max_cache_ratio_percent;
extern TimeManagement::enabled_t cfg_timemanage;
extern int cfg_lagbuffer_cs;
extern int cfg_resignpct;
extern int cfg_noise;
extern int cfg_random_cnt;
extern int cfg_random_min_visits;
extern float cfg_random_temp;
extern std::uint64_t cfg_rng_seed;
extern bool cfg_dumbpass;
#ifdef USE_OPENCL
extern std::vector<int> cfg_gpus;
extern bool cfg_sgemm_exhaustive;
extern bool cfg_tune_only;
#ifdef USE_HALF
enum class precision_t {
    AUTO, SINGLE, HALF
};
extern precision_t cfg_precision;
#endif
#endif
extern float cfg_puct;
extern float cfg_softmax_temp;
extern float cfg_fpu_reduction;
extern float cfg_fpu_root_reduction;
extern std::string cfg_logfile;
extern std::string cfg_weightsfile;
extern FILE* cfg_logfile_handle;
extern bool cfg_quiet;
extern std::string cfg_options_str;
extern bool cfg_benchmark;
extern bool cfg_cpu_only;
extern int cfg_analyze_interval_centis;

static constexpr size_t MiB = 1024LL * 1024LL;

/*
    A list of all valid GTP2 commands is defined here:
    https://www.lysator.liu.se/~gunnar/gtp/gtp2-spec-draft2/gtp2-spec.html
    GTP is meant to be used between programs. It's not a human interface.
*/
class GTP {
public:
    static std::unique_ptr<Network> s_network;
    static void initialize(std::unique_ptr<Network>&& network);
    static void execute(GameState & game, const std::string& xinput);
    static void setup_default_parameters();
private:
    static constexpr int GTP_VERSION = 2;

    static std::string get_life_list(const GameState & game, bool live);
    static const std::string s_commands[];
    static const std::string s_options[];
    static std::pair<std::string, std::string> parse_option(
        std::istringstream& is);
    static std::pair<bool, std::string> set_max_memory(
        size_t max_memory, int cache_size_ratio_percent);
    static void execute_setoption(UCTSearch& search,
                                  int id, const std::string& command);

    // Memory estimation helpers
    static size_t get_base_memory();
    static size_t add_overhead(size_t s) { return s * 11LL / 10LL; }
    static size_t remove_overhead(size_t s) { return s * 10LL / 11LL; }
};


#endif

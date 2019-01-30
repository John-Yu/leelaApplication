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

#ifndef NETWORK_H_INCLUDED
#define NETWORK_H_INCLUDED

#include "config.h"

#include <deque>
#include <array>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <fstream>

#include "NNCache.h"
#include "FastState.h"
#ifdef USE_OPENCL
#include "OpenCLScheduler.h"
#endif
#include "GameState.h"
#include "ForwardPipe.h"
#ifdef USE_OPENCL
#include "OpenCLScheduler.h"
#endif
#ifdef USE_OPENCL_SELFCHECK
#include "SMP.h"
#endif


// Winograd filter transformation changes 3x3 filters to M + 3 - 1
constexpr auto WINOGRAD_M = 4;
constexpr auto WINOGRAD_ALPHA = WINOGRAD_M + 3 - 1;
constexpr auto WINOGRAD_WTILES = BOARD_SIZE / WINOGRAD_M + (BOARD_SIZE % WINOGRAD_M != 0);
constexpr auto WINOGRAD_TILE = WINOGRAD_ALPHA * WINOGRAD_ALPHA;
constexpr auto WINOGRAD_P = WINOGRAD_WTILES * WINOGRAD_WTILES;
constexpr auto SQ2 = 1.4142135623730951f; // Square root of 2

class Network {
    using ForwardPipeWeights = ForwardPipe::ForwardPipeWeights;
public:
    static constexpr auto NUM_SYMMETRIES = 8;
    static constexpr auto IDENTITY_SYMMETRY = 0;
    enum Ensemble {
        DIRECT, RANDOM_SYMMETRY, AVERAGE
    };
    using PolicyVertexPair = std::pair<float,int>;
    using Netresult = NNCache::Netresult;

    Netresult get_output(const GameState* const state,
                         const Ensemble ensemble,
                         const int symmetry = -1,
                         const bool skip_cache = false,
                         const bool force_selfcheck = false);

    static constexpr auto INPUT_MOVES = 8;
    static constexpr auto INPUT_CHANNELS = 2 * INPUT_MOVES + 2;
    static constexpr auto OUTPUTS_POLICY = 2;
    static constexpr auto OUTPUTS_VALUE = 1;
    static constexpr auto VALUE_LAYER = 256;

    void initialize(int playouts, const std::string & weightsfile);

    float benchmark_time(int centiseconds);
    void benchmark(const GameState * const state,
                   const int iterations = 1600);
    static void show_heatmap(const FastState * const state,
                             const Netresult & netres, const bool topmoves);

    static std::vector<float> gather_features(const GameState* const state,
                                              const int symmetry);
    static std::pair<int, int> get_symmetry(const std::pair<int, int>& vertex,
                                            const int symmetry,
                                            const int board_size = BOARD_SIZE);

    size_t get_estimated_size();
    size_t get_estimated_cache_size();
    void nncache_resize(int max_count);

private:
    std::pair<int, int> load_v1_network(std::istream& wtfile);
    std::pair<int, int> load_network_file(const std::string& filename);

    static std::vector<float> winograd_transform_f(const std::vector<float>& f,
                                                   const int outputs, const int channels);
    static std::vector<float> zeropad_U(const std::vector<float>& U,
                                        const int outputs, const int channels,
                                        const int outputs_pad, const int channels_pad);
    static void winograd_transform_in(const std::vector<float>& in,
                                      std::vector<float>& V,
                                      const int C);
    static void winograd_transform_out(const std::vector<float>& M,
                                       std::vector<float>& Y,
                                       const int K);
    static void winograd_convolve3(const int outputs,
                                   const std::vector<float>& input,
                                   const std::vector<float>& U,
                                   std::vector<float>& V,
                                   std::vector<float>& M,
                                   std::vector<float>& output);
    static void winograd_sgemm(const std::vector<float>& U,
                               const std::vector<float>& V,
                               std::vector<float>& M, const int C, const int K);
    Netresult get_output_internal(const GameState* const state,
                                  const int symmetry, bool selfcheck = false);
    static void fill_input_plane_pair(const FullBoard& board,
                                      std::vector<float>::iterator black,
                                      std::vector<float>::iterator white,
                                      const int symmetry);
    bool probe_cache(const GameState* const state, Network::Netresult& result);
    std::unique_ptr<ForwardPipe>&& init_net(int channels,
                                            std::unique_ptr<ForwardPipe>&& pipe);
#ifdef USE_HALF
    void select_precision(int channels);
#endif
    std::unique_ptr<ForwardPipe> m_forward;
#ifdef USE_OPENCL_SELFCHECK
    void compare_net_outputs(const Netresult& data, const Netresult& ref);
    std::unique_ptr<ForwardPipe> m_forward_cpu;
#endif

    NNCache m_nncache;

    size_t estimated_size{0};

    // Residual tower
    std::shared_ptr<ForwardPipeWeights> m_fwd_weights;

    // Policy head
    std::array<float, OUTPUTS_POLICY> m_bn_pol_w1;
    std::array<float, OUTPUTS_POLICY> m_bn_pol_w2;

    std::array<float, OUTPUTS_POLICY
                      * NUM_INTERSECTIONS
                      * POTENTIAL_MOVES> m_ip_pol_w;
    std::array<float, POTENTIAL_MOVES> m_ip_pol_b;

    // Value head
    std::array<float, OUTPUTS_VALUE> m_bn_val_w1;
    std::array<float, OUTPUTS_VALUE> m_bn_val_w2;

    std::array<float, OUTPUTS_VALUE
                      * NUM_INTERSECTIONS
                      * VALUE_LAYER> m_ip1_val_w;
    std::array<float, VALUE_LAYER> m_ip1_val_b;

    std::array<float, VALUE_LAYER> m_ip2_val_w;
    std::array<float, 1> m_ip2_val_b;
    bool m_value_head_not_stm;
};
#endif

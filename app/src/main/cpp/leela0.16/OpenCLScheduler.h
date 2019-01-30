/*
    This file is part of Leela Zero.
    Copyright (C) 2018 Junhee Yoo and contributors

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

#ifndef OPENCLSCHEDULER_H_INCLUDED
#define OPENCLSCHEDULER_H_INCLUDED
#include "config.h"

#include <list>
#include <vector>

#include "SMP.h"
#include "ForwardPipe.h"
#include "OpenCL.h"
#include "ThreadPool.h"


template <typename net_t>
class OpenCLScheduler : public ForwardPipe {
    class ContextPoolEntry {
    public:
        size_t net_index;
        OpenCLContext context;
        ContextPoolEntry(size_t index) : net_index(index) {}
    };
public:
    OpenCLScheduler();
    virtual void initialize(const int channels);
    virtual void forward(const std::vector<float>& input,
                         std::vector<float>& output_pol,
                         std::vector<float>& output_val);
    virtual bool needs_autodetect();
    virtual void push_weights(unsigned int filter_size,
                              unsigned int channels,
                              unsigned int outputs,
                              std::shared_ptr<const ForwardPipeWeights> weights);
private:
    std::vector<std::unique_ptr<OpenCL_Network<net_t>>> m_networks;
    std::vector<std::unique_ptr<OpenCL<net_t>>> m_opencl;

    using ContextPoolQueue = std::list<std::shared_ptr<ContextPoolEntry>>;
    std::vector<ContextPoolQueue> m_context_pool;

    SMP::Mutex m_context_pool_mutex;

    void push_input_convolution(unsigned int filter_size,
                                unsigned int channels,
                                unsigned int outputs,
                                const std::vector<float>& weights,
                                const std::vector<float>& means,
                                const std::vector<float>& variances);

    void push_residual(unsigned int filter_size,
                       unsigned int channels,
                       unsigned int outputs,
                       const std::vector<float>& weights_1,
                       const std::vector<float>& means_1,
                       const std::vector<float>& variances_1,
                       const std::vector<float>& weights_2,
                       const std::vector<float>& means_2,
                       const std::vector<float>& variances_2);

    void push_convolve(unsigned int filter_size,
                       unsigned int channels,
                       unsigned int outputs,
                       const std::vector<float>& weights);
};

#endif

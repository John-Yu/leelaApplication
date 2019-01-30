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

#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include "config.h"

#include <atomic>
#include <limits>
#include <string>

#include "ThreadPool.h"

extern Utils::ThreadPool thread_pool;

namespace Utils {
    void myprintf_error(const char *fmt, ...);
    void myprintf(const char *fmt, ...);
    void gtp_printf(int id, const char *fmt, ...);
    void gtp_printf_raw(const char *fmt, ...);
    void gtp_fail_printf(int id, const char *fmt, ...);
    void log_input(const std::string& input);
    bool input_pending();

    template<class T>
    void atomic_add(std::atomic<T> &f, T d) {
        T old = f.load();
        while (!f.compare_exchange_weak(old, old + d));
    }

    template<typename T>
    T rotl(const T x, const int k) {
        return (x << k) | (x >> (std::numeric_limits<T>::digits - k));
    }

    inline bool is7bit(int c) {
        return c >= 0 && c <= 127;
    }

    size_t ceilMultiple(size_t a, size_t b);

    const std::string leelaz_file(std::string file);
}

#endif

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
#ifndef ZOBRIST_H_INCLUDED
#define ZOBRIST_H_INCLUDED

#include "config.h"

#include <array>
#include <cstdint>

#include "FastBoard.h"
#include "Random.h"

class Zobrist {
public:
    static constexpr auto zobrist_empty = 0x1234567887654321;
    static constexpr auto zobrist_blacktomove = 0xABCDABCDABCDABCD;

    static std::array<std::array<std::uint64_t, FastBoard::NUM_VERTICES>,     4> zobrist;
    static std::array<std::uint64_t, FastBoard::NUM_VERTICES>                    zobrist_ko;
    static std::array<std::array<std::uint64_t, FastBoard::NUM_VERTICES * 2>, 2> zobrist_pris;
    static std::array<std::uint64_t, 5>                                          zobrist_pass;

    static void init_zobrist(Random& rng);
};

#endif

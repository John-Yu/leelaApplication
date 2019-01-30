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

#ifndef SGFPARSER_H_INCLUDED
#define SGFPARSER_H_INCLUDED

#include <cstddef>
#include <cstdint>
#include <climits>
#include <sstream>
#include <string>
#include <vector>

#include "SGFTree.h"

class SGFParser {
private:
    static std::string parse_property_name(std::istringstream & strm);
    static bool parse_property_value(std::istringstream & strm, std::string & result);
public:
    static std::string chop_from_file(std::string fname, size_t index);
    static std::vector<std::string> chop_all(std::string fname,
                                             size_t stopat = SIZE_MAX);
    static std::vector<std::string> chop_stream(std::istream& ins,
                                                size_t stopat = SIZE_MAX);
    static void parse(std::istringstream & strm, SGFTree * node);
};


#endif

/*  Python-rgbcx Texture Compression Library
    Copyright (C) 2021 Andrew Cassidy <drewcassidy@me.com>
    Partially derived from rgbcx.h written by Richard Geldreich <richgel99@gmail.com>
    and licenced under the public domain

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "../bc4/BC4Block.h"

namespace quicktex::s3tc {

class alignas(8) BC5Block {
   public:
    static constexpr int Width = 4;
    static constexpr int Height = 4;

    constexpr BC5Block() {
        static_assert(sizeof(BC5Block) == 16);
        static_assert(sizeof(std::array<BC5Block, 10>) == 16 * 10);
        static_assert(alignof(BC5Block) >= 8);
        chan0_block = chan1_block = BC4Block();
    }

    BC5Block(const BC4Block &chan0, const BC4Block &chan1) {
        chan0_block = chan0;
        chan1_block = chan1;
    }

    BC4Block chan0_block;
    BC4Block chan1_block;
};
}  // namespace quicktex::s3tc
/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2023 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MU_ENGRAVING_LYRICSLAYOUT_DEV_H
#define MU_ENGRAVING_LYRICSLAYOUT_DEV_H

#include "layoutcontext.h"

namespace mu::engraving {
class Score;
class System;
class Lyrics;
class LyricsLine;
class LyricsLineSegment;
}

namespace mu::engraving::rendering::dev {
class LyricsLayout
{
public:
    LyricsLayout() = default;

    static void layout(Lyrics* item, LayoutContext& ctx);
    static void layout(LyricsLine* item, LayoutContext& ctx);
    static void layout(LyricsLineSegment* item, LayoutContext& ctx);

    static void layoutLyrics(LayoutContext& ctx, System* system);

private:
    static void createOrRemoveLyricsLine(Lyrics* item, LayoutContext& ctx);
};
}
#endif // MU_ENGRAVING_LYRICSLAYOUT_DEV_H

// Copyright (C) 2011  Davis E. King (davis@dlib.net)
// License: Boost Software License   See LICENSE.txt for the full license.
#ifndef DLIB_FULL_OBJECT_DeTECTION_H__
#define DLIB_FULL_OBJECT_DeTECTION_H__

#include "../geometry.h"
#include "full_object_detection_abstract.h"
#include <vector>

namespace dlib
{

// ----------------------------------------------------------------------------------------

    const static point MOVABLE_PART_NOT_PRESENT(0x7FFFFFFF,
                                                0x7FFFFFFF);

// ----------------------------------------------------------------------------------------

    struct full_object_detection
    {
        full_object_detection(
            const rectangle& rect_,
            const std::vector<point>& movable_parts_
        ) : rect(rect_), movable_parts(movable_parts) {}

        full_object_detection(
            const rectangle& rect_
        ) : rect(rect_) {}

        rectangle rect;
        std::vector<point> movable_parts;  // it should always be the case that rect.contains(movable_parts[i]) == true
    };

// ----------------------------------------------------------------------------------------

}

#endif // DLIB_FULL_OBJECT_DeTECTION_H_


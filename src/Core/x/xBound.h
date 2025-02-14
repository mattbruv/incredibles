#pragma once

#include "xMath3.h"
#include "xQuickCull.h"

struct xBound
{
    xQCData qcd;
    uint8 type;
    uint8 pad[3];
    union
    {
        xSphere sph;
        xBBox box;
        xCylinder cyl;
    };
    xMat4x3* mat;
};
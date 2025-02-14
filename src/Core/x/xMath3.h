#pragma once

#include "xVec3.h"

struct xVec4
{
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};

struct xMat3x3
{
    xVec3 right;
    int32 flags;
    xVec3 up;
    uint32 pad1;
    xVec3 at;
    uint32 pad2;
};

struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    uint32 pad3;
};

struct xBox
{
    xVec3 upper;
    xVec3 lower;
};

struct xBBox
{
    xVec3 center;
    xBox box;
};

struct xSphere
{
    xVec3 center;
    float32 r;
};

struct xCylinder
{
    xVec3 center;
    float32 r;
    float32 h;
};
#pragma once

#include "xBase.h"

struct xEnt;

struct xSurface : xBase
{
    uint32 idx;
    uint32 type;
    union
    {
        uint32 mat_idx;
        xEnt* ent;
        void* obj;
    };
    float32 friction;
    uint8 state;
    uint8 pad[3];
    void* moprops;
};

void xSurfaceInit(uint16 num_surfs);
void xSurfaceExit();
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceReset(xSurface*);
uint16 xSurfaceGetNumSurfaces();
xSurface* xSurfaceGetByIdx(uint16 n);
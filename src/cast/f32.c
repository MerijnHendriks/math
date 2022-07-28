#include "../../automata/cast.h"

s32 f32_as_s32(f32 x)
{
    return *(s32*)&x;
}

u32 f32_as_u32(f32 x)
{
    return *(u32*)&x;
}

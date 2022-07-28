#include "../../automata/cast.h"

f32 u32_as_f32(u32 x)
{
    return *(f32*)&x;
}

s32 u32_as_s32(u32 x)
{
    return *(s32*)&x;
}

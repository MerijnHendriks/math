#include "../../automata/cast.h"

f32 s32_as_f32(s32 x)
{
    return *(f32*)&x;
}

u32 s32_as_u32(s32 x)
{
    return *(u32*)&x;
}

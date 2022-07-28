#include "../../automata/math.h"

bool s32_ispow2(s32 x)
{
    return x > 0 && ((x & (x - 1)) == 0);
}

int s32_min(s32 x, s32 y)
{
    return x < y ? x : y;
}

int s32_max(s32 x, s32 y)
{
    return x > y ? x : y;
}

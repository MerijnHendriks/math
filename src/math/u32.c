#include "../../automata/math.h"

bool u32_ispow2(u32 x)
{
    return x > 0 && ((x & (x - 1)) == 0);
}

int u32_min(u32 x, u32 y)
{
    return x < y ? x : y;
}

int u32_max(u32 x, u32 y)
{
    return x > y ? x : y;
}

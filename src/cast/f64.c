#include "../../automata/cast.h"

s64 f64_as_s64(f64 x)
{
    return *(s64*)&x;
}

u64 f64_as_u64(f64 x)
{
    return *(u64*)&x;
}

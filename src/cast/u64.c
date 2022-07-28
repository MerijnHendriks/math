#include "../../automata/cast.h"

f64 u64_as_f64(u64 x)
{
    return *(f64*)&x;
}

s64 u64_as_s64(u32 x)
{
    return *(s64*)&x;
}

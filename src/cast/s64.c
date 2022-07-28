#include "../../automata/cast.h"

f64 s64_as_f64(s64 x)
{
    return *(f64*)&x;
}

u64 s64_as_u64(s64 x)
{
    return *(u64*)&x;
}

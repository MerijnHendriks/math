#include "../../automata/cast.h"
#include "../../automata/math.h"

bool f64_isnan(f64 x)
{
    return (f64_as_u64(x) & 0x7FFFFFFFFFFFFFFF) > 0x7FF0000000000000;
}

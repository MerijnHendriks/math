#include "../../automata/cast.h"
#include "../../automata/math.h"

bool f32_isnan(f32 x)
{
    return (f32_as_u32(x) & 0x7FFFFFFF) > 0x7F800000;
}

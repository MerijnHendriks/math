#include "../../automata/cast.h"

s8 u8_as_s8(u8 x)
{
    return *(s8*)&x;
}

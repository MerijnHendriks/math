#include "../../automata/cast.h"

u8 s8_as_u8(s8 x)
{
    return *(u8*)&x;
}

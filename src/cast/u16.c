#include "../../automata/cast.h"

s16 u16_as_s16(u16 x)
{
    return *(s16*)&x;
}

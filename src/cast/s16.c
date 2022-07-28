#include "../../automata/cast.h"

u16 s16_as_u16(s16 x)
{
    return *(u16*)&x;
}

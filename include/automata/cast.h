#ifndef AUTOMATA_CAST_H
#define AUTOMATA_CAST_H

#include "type.h"

u8 s8_as_u8(s8 x);
u16 s16_as_u16(s16 x);
f32 s32_as_f32(s32 x);
u32 s32_as_u32(s32 x);
f64 s64_as_f64(s64 x);
u64 s64_as_u64(s64 x);
s8 u8_as_s8(u8 x);
s16 u16_as_s16(u16 x);
f32 u32_as_f32(u32 x);
s32 u32_as_s32(u32 x);
f64 u64_as_f64(u64 x);
s64 u64_as_s64(u32 x);
s32 f32_as_s32(f32 x);
u32 f32_as_u32(f32 x);
s64 f64_as_s64(f64 x);
u64 f64_as_u64(f64 x);

#endif

#pragma once

#include <inttypes.h>
#include <x86intrin.h>

namespace FloatConversion{
  void ConvertToSinglePrecision(const uint16_t *in, __m128 *out, size_t size); 
}

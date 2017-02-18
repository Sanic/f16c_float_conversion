#include "float_conv.h"

void FloatConversion::ConvertToSinglePrecision(const uint16_t *in, __m128 *out, size_t size) 
{
  for(size_t i = 0; i < size; ++i, in += 4, ++out)
  {
    *out = _mm_cvtph_ps(_mm_set_epi16(0, 0, 0, 0, *(in + 3), *(in + 2), *(in + 1), *(in + 0)));
  }
}

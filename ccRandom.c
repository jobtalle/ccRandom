#include "ccRandom.h"

#define CCR_MULTIPLY_32           69069
#define CCR_ADD_32                1
#define CCR_MULTIPLY_64           6364136223846793005
#define CCR_ADD_64                1

#define CCR_LCG32 (*randomizer = *randomizer * CCR_MULTIPLY_32 + CCR_ADD_32)
#define CCR_LCG64 (*randomizer = *randomizer * CCR_MULTIPLY_64 + CCR_ADD_64)

#define CCR_MIN(a, b) ((a) < (b) ? (a) : (b))

ccRandomizer32 ccrSeed32(const uint32_t seed)
{
	return (ccRandomizer32)seed;
}

ccRandomizer64 ccrSeed64(const uint64_t seed)
{
	return (ccRandomizer64)seed;
}

uint32_t ccrGenerateSeed32(ccRandomizer32 *randomizer)
{
	return CCR_LCG32;
}

uint64_t ccrGenerateSeed64(ccRandomizer64 *randomizer)
{
	return CCR_LCG64;
}

uint32_t ccrGenerateInt32(ccRandomizer32 *randomizer, const uint32_t min, const uint32_t max)
{
	return CCR_MIN(max, min + (uint32_t)((max - min + 1) * ccrGenerateFloat32(randomizer)));
}

uint32_t ccrGenerateInt64(ccRandomizer64 *randomizer, const uint32_t min, const uint32_t max)
{
	return CCR_MIN(max, min + (uint32_t)((max - min + 1) * ccrGenerateFloat64(randomizer)));
}

float ccrGenerateFloat32(ccRandomizer32 *randomizer)
{
	return (float)CCR_LCG32 / UINT32_MAX;
}

float ccrGenerateFloat64(ccRandomizer64 *randomizer)
{
	return (float)CCR_LCG64 / UINT64_MAX;
}

double ccrGenerateDouble32(ccRandomizer32 *randomizer)
{
	return (double)CCR_LCG32 / UINT32_MAX;
}

double ccrGenerateDouble64(ccRandomizer64 *randomizer)
{
	return (double)CCR_LCG64 / UINT64_MAX;
}

bool ccrGenerateBool32(ccRandomizer32 *randomizer)
{
	return ccrGenerateFloat32(randomizer) > 0.5f;
}

bool ccrGenerateBool64(ccRandomizer64 *randomizer)
{
	return ccrGenerateFloat64(randomizer) > 0.5f;
}
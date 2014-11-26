#include <ccRandom/ccRandom.h>

#define CCR_MULTIPY_32 69069
#define CCR_ADD_32     1
#define CCR_MULTIPY_64 6364136223846793005
#define CCR_ADD_64     1

void ccrSeed32(ccRandomizer32 *randomizer, uint32_t seed)
{
	*randomizer = seed;
}

void ccrSeed64(ccRandomizer64 *randomizer, uint64_t seed)
{
	*randomizer = seed;
}

uint32_t ccrGenerateUint32(ccRandomizer32 *randomizer)
{
	return *randomizer = *randomizer * CCR_MULTIPY_32 + CCR_ADD_32;
}

uint64_t ccrGenerateUint64(ccRandomizer64 *randomizer)
{
	return *randomizer = *randomizer * CCR_MULTIPY_64 + CCR_ADD_64;
}

float ccrGenerateFloat32(ccRandomizer32 *randomizer)
{
	return (float)(*randomizer = *randomizer * CCR_MULTIPY_32 + CCR_ADD_32) / UINT32_MAX;
}

float ccrGenerateFloat64(ccRandomizer64 *randomizer)
{
	return (float)(*randomizer = *randomizer * CCR_MULTIPY_64 + CCR_ADD_64) / UINT64_MAX;
}

double ccrGenerateDouble32(ccRandomizer32 *randomizer)
{
	return (double)(*randomizer = *randomizer * CCR_MULTIPY_32 + CCR_ADD_32) / UINT32_MAX;
}

double ccrGenerateDouble64(ccRandomizer64 *randomizer)
{
	return (double)(*randomizer = *randomizer * CCR_MULTIPY_64 + CCR_ADD_64) / UINT64_MAX;
}
#include <ccRandom/ccRandom.h>

#define CCR_MULTIPY 69069
#define CCR_ADD     1

void ccrSeed(ccRandomizer *randomizer, unsigned int seed)
{
	*randomizer = seed;
}

unsigned int ccrGenerateUint(ccRandomizer *randomizer)
{
	return *randomizer = *randomizer * CCR_MULTIPY + CCR_ADD;
}

float ccrGenerateFloat(ccRandomizer *randomizer)
{
	return (float)(*randomizer = *randomizer * CCR_MULTIPY + CCR_ADD) / UINT32_MAX;
}

double ccrGenerateDouble(ccRandomizer *randomizer)
{
	return (*randomizer = *randomizer * CCR_MULTIPY + CCR_ADD) / UINT32_MAX;
}
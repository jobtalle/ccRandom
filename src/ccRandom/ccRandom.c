#include <ccRandom/ccRandom.h>

#define CCR_MULTIPY 69069
#define CCR_ADD     1

void ccrSeed(ccrGenerator *generator, unsigned int seed)
{
	generator->seed = seed;
}

unsigned int ccrGenerateUint(ccrGenerator *generator)
{
	return generator->seed = generator->seed * CCR_MULTIPY + CCR_ADD;
}
//__________________________________________________________________________________//
//                                                                                  //
//                       _____                 _                                    //
//                      |  __ \               | |                                   //
//               ___ ___| |__) |__ _ _ __   __| | ___  _ __ ___                     //
//              / __/ __|  _  // _` | '_ \ / _` |/ _ \| '_ ` _ \                    //
//             | (_| (__| | \ \ (_| | | | | (_| | (_) | | | | | |                   //
//              \___\___|_|  \_\__,_|_| |_|\__,_|\___/|_| |_| |_| 1.1               //
//                                                                                  //
//              Copyright (C) 2014 - 2015 \ Job Talle (jobtalle@hotmail.com)        //
//__________________________________________________________________________________//
//                                                                                  //
//      This program is free software: you can redistribute it and/or modify        //
//      it under the terms of the 3-clause BSD license.                             //
//                                                                                  //
//      You should have received a copy of the 3-clause BSD License along with      //
//      this program. If not, see <http://opensource.org/licenses/>.                //
//__________________________________________________________________________________//

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef uint32_t ccRandomizer32;
typedef uint64_t ccRandomizer64;

ccRandomizer32 ccrSeed32(const uint32_t seed);
ccRandomizer64 ccrSeed64(const uint64_t seed);

uint32_t ccrGenerateSeed32(ccRandomizer32 *randomizer);
uint64_t ccrGenerateSeed64(ccRandomizer64 *randomizer);

uint32_t ccrGenerateInt32(ccRandomizer32 *randomizer, const uint32_t min, const uint32_t max);
uint64_t ccrGenerateInt64(ccRandomizer64 *randomizer, const uint64_t min, const uint64_t max);

float ccrGenerateFloat32(ccRandomizer32 *randomizer);
float ccrGenerateFloat64(ccRandomizer64 *randomizer);

double ccrGenerateDouble32(ccRandomizer32 *randomizer);
double ccrGenerateDouble64(ccRandomizer64 *randomizer);

#ifdef __cplusplus
}
#endif
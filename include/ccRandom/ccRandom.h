//__________________________________________________________________________________//
//                                                                                  //
//                       _____                 _                                    //
//                      |  __ \               | |                                   //
//               ___ ___| |__) |__ _ _ __   __| | ___  _ __ ___                     //
//              / __/ __|  _  // _` | '_ \ / _` |/ _ \| '_ ` _ \                    //
//             | (_| (__| | \ \ (_| | | | | (_| | (_) | | | | | |                   //
//              \___\___|_|  \_\__,_|_| |_|\__,_|\___/|_| |_| |_| 1.0               //
//                                                                                  //
//                                                                                  //
//             Copyright (C) 2014 \ Job Talle (job@ccore.org)                       //
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

typedef uint32_t ccRandomizer;

void ccrSeed(ccRandomizer *randomizer, unsigned int seed);

unsigned int ccrGenerateUint(ccRandomizer *randomizer);
float ccrGenerateFloat(ccRandomizer *randomizer);
double ccrGenerateDouble(ccRandomizer *randomizer);

#ifdef __cplusplus
}
#endif
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

typedef struct {
	unsigned int *buffer;
} ccrGenerator;

void ccrSeed(ccrGenerator *generator, unsigned int seed);
unsigned int ccrGenerateUint(ccrGenerator *generator);
/*
 * userRam.h
 *
 *  Created on: 18.11.2021
 *      Author: dridders
 */

#ifndef SBLIB_EIB_USERRAM_BCU2_H_
#define SBLIB_EIB_USERRAM_BCU2_H_

#include <sblib/eib/userRamBCU1.h>

/**
 * The user RAM.
 *
 * The user RAM can be accessed by name, like userRam.status and as an array, like
 * userRam[addr]. Please note that the start address of the RAM is subtracted.
 */
class UserRamBCU2 : public UserRamBCU1
{
public:
	UserRamBCU2() : UserRamBCU1() {};

protected:
	UserRamBCU2(int start, int size) : UserRamBCU1(start, size) {}
};

#endif /* SBLIB_EIB_USERRAM_H_ */
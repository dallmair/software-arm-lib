/*
 * userRam.h
 *
 *  Created on: 18.11.2021
 *      Author: dridders
 */

#ifndef SBLIB_EIB_USERRAM_SYSTEMB_H_
#define SBLIB_EIB_USERRAM_SYSTEMB_H_

#include <sblib/eib/userRamMASK0701.h>

/**
 * The user RAM.
 *
 * The user RAM can be accessed by name, like userRam.status and as an array, like
 * userRam[addr]. Please note that the start address of the RAM is subtracted.
 */
class UserRamSYSTEMB : public UserRamMASK0701
{
public:
	UserRamSYSTEMB() : UserRamMASK0701(0, 0x304) {}

protected:
	UserRamSYSTEMB(int start, int size) : UserRamMASK0701(start, size) {}
};

#endif /* SBLIB_EIB_USERRAM_H_ */
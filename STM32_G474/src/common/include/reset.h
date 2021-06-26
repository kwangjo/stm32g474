/*
 * reset.h
 *
 *  Created on: Jun 26, 2021
 *      Author: kj
 */

#ifndef SRC_COMMON_INCLUDE_RESET_H_
#define SRC_COMMON_INCLUDE_RESET_H_


#include "hw_def.h"


#ifdef _USE_HW_RESET

#define RESET_REG_PARAM			0
#define RESET_REG_COUNT			1

bool resetInit(void);

uint32_t resetGetCount(void);
void resetToBoot(uint32_t timeout);
void resetToSystemBoot(void);

#endif

#endif /* SRC_COMMON_INCLUDE_RESET_H_ */

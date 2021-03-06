/*
 * hw.h
 *
 *  Created on: Jun 13, 2021
 *      Author: kj
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_

#include "hw_def.h"


#include "led.h"
#include "rtc.h"
#include "reset.h"
#include "cdc.h"
#include "usb.h"
#include "uart.h"
#include "can.h"

bool hwInit(void);

#endif /* SRC_HW_HW_H_ */

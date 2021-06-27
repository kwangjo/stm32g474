/*
 * usb.h
 *
 *  Created on: Jun 26, 2021
 *      Author: kj
 */

#ifndef SRC_COMMON_INCLUDE_USB_H_
#define SRC_COMMON_INCLUDE_USB_H_





#include "hw_def.h"

#ifdef _USE_HW_USB


typedef enum
{
  USB_NON_MODE,
  USB_CDC_MODE,
  USB_MSC_MODE
} UsbMode;



bool usbInit(void);
bool usbBegin(UsbMode usb_mode);
void usbDeInit(void);
bool usbIsOpen(void);
bool usbIsConnect(void);

UsbMode usbGetMode(void);


#endif


#endif /* SRC_COMMON_INCLUDE_USB_H_ */
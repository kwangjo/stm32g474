/*
 * hw.c
 *
 *  Created on: Jun 13, 2021
 *      Author: kj
 */


#include "hw.h"





bool hwInit(void)
{
	bool ret = true;

	ret &= bspInit();

	ret &= rtcInit();
#ifdef _USE_HW_RESET
	ret &= resetInit();
#endif
	ret &= ledInit();

#ifdef _USE_HW_RESET
	if (resetGetCount() == 2)
	{
		// Jump To SystemBootloader
		resetToSystemBoot();
	}
#endif

	ret &= usbInit();
	ret &= usbBegin(USB_CDC_MODE);

	return ret;
}

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

	ret &= ledInit();

	return ret;
}

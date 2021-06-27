/*
 * ap.c
 *
 *  Created on: Jun 13, 2021
 *      Author: kj
 */


#include "ap.h"





void apInit(void)
{

}

void apMain(void)
{
	uint32_t pre_time[1];

	pre_time[0] = millis();
	while(1)
	{
//		ledToggle(_DEF_LED1);
//		delay(500);

//		if (millis() - pre_time[0] >= 200) {
//			pre_time[0] = millis();
//			ledToggle(_DEF_LED1);
//		}
		if (cdcIsConnect() == true)
		{
			ledOn(_DEF_LED1);
		}
		else
		{
			ledOff(_DEF_LED1);
		}
	}
}

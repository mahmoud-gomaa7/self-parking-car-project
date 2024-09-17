/*
 * Servo.c
 *
 *  Created on: Mar 22, 2020
 *      Author: Lenovo
 */

#include"STD_TYPE.h"
#include"TIMER1.h"
#include"DIO.h"




void Servo_VidInit(void)
{

	TIMER1_VidFastPWMSetT_totalCTC(3750 , 64);

}



void Servo_VidSetAngle(u8 LOC_u8Angle , u8 LOC_u8Channel)
{

	if(LOC_u8Channel==TIMER1_CHANNELA){
		if(LOC_u8Angle==0){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,375);
		}
		else if(LOC_u8Angle==90){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,290);
		}
		else if(LOC_u8Angle==180){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,250);
		}
	}
	else if(LOC_u8Channel==TIMER1_CHANNELB){
		if(LOC_u8Angle==0){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,375);
		}
		else if(LOC_u8Angle==90){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,290);
		}
		else if(LOC_u8Angle==180){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,190);
		}
	}

}


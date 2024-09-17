/*
 * main.c
 *
 *  Created on: Mar 22, 2020
 *      Author: Lenovo
 */

#include "util/delay.h"
#include "STD_TYPE.h"
#include "avr/io.h"
#include "TIMER1.h"

int main(){


	TIMER1_VidSetOverFlowInitialValue(0); /* Set timer1 count zero */

	                         //ICR1 = 2499;
	TIMER1_VidFastPWMSetT_totalCTC(2499,prescaler);
	/* Set Fast PWM, TOP in ICR1, Clear OC1A on compare match, clk/64 */

	DIO_VidSetPinDirection(PORTD, PIN5, OUTPUT); /* Make OC1A pin as output */





	while(1){



	}

	return 0;
}


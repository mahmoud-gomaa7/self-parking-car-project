/*
 * Servo.h
 *
 *  Created on: Mar 22, 2020
 *      Author: Lenovo
 */

#ifndef HAL_SERVO_H_
#define HAL_SERVO_H_


//Red------>Power
//Brown---->Ground
//Orange--->OC1A




void Servo_VidInit(void);

void Servo_VidSetAngle(u8 LOC_u8Angle , u8 LOC_u8Channel);

#endif /* HAL_SERVO_H_ */

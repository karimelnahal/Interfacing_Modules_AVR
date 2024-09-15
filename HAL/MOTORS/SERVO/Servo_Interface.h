/*
 * Servo_Interface.h
 *
 * Created: 3/1/2024 2:55:57 PM
 *  Author: karim
 */ 


#ifndef SERVO_INTERFACE_H_
#define SERVO_INTERFACE_H_

#include "../../MOTORS/SERVO/Servo_Private.h"


void ServoMotor_Initialize(void);
void ServoMotor_Rotate(uint8_t angle);

void SERVO_DIO_Initialize(void);
void Servo_DIO_AngleRotation(void);




#endif /* SERVO_INTERFACE_H_ */

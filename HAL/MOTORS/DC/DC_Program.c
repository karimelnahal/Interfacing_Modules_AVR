/*
* DC_Program.c
*
* Created: 3/1/2024 2:54:23 PM
*  Author: karim
*/


#include "../../MOTORS/DC/DC_Interface.h"

void DC_Motor_Initialize(void)
{
	DIO_SetPinDirection(DC_CONTROL_PORT, DC_MOTOR_EN1, DC_OUTPUT);
	DIO_SetPinDirection(DC_CONTROL_PORT, DC_MOTOR_EN2, DC_OUTPUT);
	
	DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN1, DC_MOTOR_LOW);
	DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN2, DC_MOTOR_LOW);
	
	DIO_SetPinDirection(DC_MOTION_PORT, DC_MOTOR_A1, DC_OUTPUT);
	DIO_SetPinDirection(DC_MOTION_PORT, DC_MOTOR_A2, DC_OUTPUT);
	DIO_SetPinDirection(DC_MOTION_PORT, DC_MOTOR_B1, DC_OUTPUT);
	DIO_SetPinDirection(DC_MOTION_PORT, DC_MOTOR_B2, DC_OUTPUT);
	
	DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A1, DC_MOTOR_LOW);
	DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A2, DC_MOTOR_LOW);
	DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B1, DC_MOTOR_LOW);
	DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B2, DC_MOTOR_LOW);
	
}
void DC_Rotate(dcMotor motor, dcDirection direction)
{
	switch (motor)
	{
		case DC_MOTOR1:
		DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN1, DC_MOTOR_HIGH);
		switch (direction)
		{
			case DC_CW:
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A1, DC_MOTOR_HIGH);
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A2, DC_MOTOR_LOW);
			break;
			case DC_CCW:
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A1, DC_MOTOR_LOW);
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A2, DC_MOTOR_HIGH);
			break;
		}
		break;
		case DC_MOTOR2:
		DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN2, DC_MOTOR_HIGH);
		switch (direction)
		{
			case DC_CW:
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B1, DC_MOTOR_HIGH);
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B2, DC_MOTOR_LOW);
			break;
			case DC_CCW:
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B1, DC_MOTOR_LOW);
			DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B2, DC_MOTOR_HIGH);
			break;
		}
		break;
	}
}
void DC_Brake(dcMotor motor)
{
	switch (motor)
	{
		case DC_MOTOR1:
		DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN1, DC_MOTOR_LOW);
		DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A1, DC_MOTOR_LOW);
		DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_A2, DC_MOTOR_LOW);
		break;
		case DC_MOTOR2:
		DIO_SetPinValue(DC_CONTROL_PORT, DC_MOTOR_EN2, DC_MOTOR_LOW);
		DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B1, DC_MOTOR_LOW);
		DIO_SetPinValue(DC_MOTION_PORT, DC_MOTOR_B2, DC_MOTOR_LOW);
		break;
	}
}

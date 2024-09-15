/*
* DC_Configuration.h
*
* Created: 3/1/2024 2:54:07 PM
*  Author: karim
*/


#ifndef DC_CONFIGURATION_H_
#define DC_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"

#define DC_CONTROL_PORT DIO_PORTD
#define DC_MOTOR_EN1    DIO_PIN4
#define DC_MOTOR_EN2    DIO_PIN5

#define DC_MOTION_PORT  DIO_PORTC
#define DC_MOTOR_A1     DIO_PIN3
#define DC_MOTOR_A2     DIO_PIN4
#define DC_MOTOR_B1     DIO_PIN5
#define DC_MOTOR_B2     DIO_PIN6

#define DC_MOTOR_LOW    DIO_LOW
#define DC_MOTOR_HIGH   DIO_HIGH

#define DC_OUTPUT       DIO_OUTPUT

typedef enum
{
	DC_MOTOR1 = 0,
	DC_MOTOR2 = 1
}dcMotor;

typedef enum
{
	DC_CW  = 0,
	DC_CCW = 1
}dcDirection;

#endif /* DC_CONFIGURATION_H_ */

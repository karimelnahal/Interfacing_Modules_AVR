/*
 * Servo_Configuration.h
 *
 * Created: 3/1/2024 5:27:25 PM
 *  Author: karim
 */ 


#ifndef SERVO_CONFIGURATION_H_
#define SERVO_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"

typedef enum
{
	Angle_0 = 5,
	Angle_P90 = 7,
	Angle_N90 = 10
}servo_angle;

typedef enum
{
	SERVO_0 = 0,
	SERVO_1 = 1,
	SERVO_2 = 2,
	SERVO_3 = 3,
	SERVO_4 = 4,
	SERVO_5 = 5,
	SERVO_6 = 6,
	SERVO_7 = 7,
}servo;


#define SERVO_DDR  DDRB

#define SERVO_PORT PORTB



#endif /* SERVO_CONFIGURATION_H_ */

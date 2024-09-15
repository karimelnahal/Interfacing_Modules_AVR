/*
 * Stepper_Configuration.h
 *
 * Created: 3/1/2024 5:26:48 PM
 *  Author: karim
 */ 


#ifndef STEPPER_CONFIGURATION_H_
#define STEPPER_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"

typedef enum
{
	Half_Step = 0,
	Full_Step = 1
}stepperStep;

typedef enum
{
	Stp_CW = 0,
	Stp_CCW = 1
}stepperDirection;

#define Stepper                PORTD

#define Stepper_Port           DIO_PORTD

#define Stepper_Coil_APlus     DIO_PIN0
#define Stepper_Coil_AMinus    DIO_PIN1

#define Stepper_Coil_BPlus     DIO_PIN2
#define Stepper_Coil_BMinus    DIO_PIN3

#define Stepper_Out            DIO_OUTPUT

#define Stepper_Low            DIO_LOW
#define Stepper_High           DIO_HIGH



#endif /* STEPPER_CONFIGURATION_H_ */

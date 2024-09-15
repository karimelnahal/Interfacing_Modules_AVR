/*
* Interrupts_Configuration.h
*
* Created: 2/9/2024 4:53:17 PM
*  Author: karim
*/


#ifndef INTERRUPTS_CONFIGURATION_H_
#define INTERRUPTS_CONFIGURATION_H_

#include "../Interrupts/Interrupts_Address.h"

typedef enum
{
	EXT_INTERRUPT_SENSE_LOW      = 0,
	EXT_INTERRUPT_SENSE_HIGH     = 1,
	EXT_INTERRUPT_SENSE_FALLING  = 2,
	EXT_INTERRUPT_SENSE_RISING   = 3
}interruptSense;

typedef enum
{
	EXT_INT0 = 0,
	EXT_INT1 = 1,
	EXT_INT2 = 2
}interruptPin;


#endif /* INTERRUPTS_CONFIGURATION_H_ */

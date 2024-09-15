/*
 * CPU_Configuration.h
 *
 * Created: 1/13/2024 4:43:45 PM
 *  Author: karim
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

/*--------------------CPU Configurations--------------------*/
#undef F_CPU               // Deactivate internal clock (1 MHz)
#define F_CPU 16000000     // Activate external clock (16 MHz)
#include <avr/io.h>        // AVR Libraries
#include <avr/interrupt.h> // AVR Interrupt Libraries
#include <util/delay.h>    // AVR Delay Functions
/*---------------------------END---------------------------*/
#include "../CPU_CONFIGURATION/BIT_MATH.h"
#include "../CPU_CONFIGURATION/STD_TYPES.h"

#endif /* CPU_CONFIGURATION_H_ */

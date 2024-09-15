/*
 * BTN0_Configuration.h
 *
 * Created: 2/2/2024 4:41:18 PM
 *  Author: karim
 */ 


#ifndef BTN0_CONFIGURATION_H_
#define BTN0_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"

#define BTN0           DIO_PIN0
#define BTN0_PORT      DIO_PORTB
#define BTN0_INPUT     DIO_INPUT
#define BTN0_PRESSED   DIO_HIGH
#define BTN0_NPRESSED  DIO_LOW

#endif /* BTN0_CONFIGURATION_H_ */

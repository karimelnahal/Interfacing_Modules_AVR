/*
 * BTN2_Configuration.h
 *
 * Created: 2/2/2024 4:41:18 PM
 *  Author: karim
 */ 


#ifndef BTN2_CONFIGURATION_H_
#define BTN2_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"


#define BTN2           DIO_PIN2
#define BTN2_PORT      DIO_PORTD
#define BTN2_INPUT     DIO_INPUT
#define BTN2_PRESSED   DIO_HIGH
#define BTN2_NPRESSED  DIO_LOW

#endif /* BTN2_CONFIGURATION_H_ */

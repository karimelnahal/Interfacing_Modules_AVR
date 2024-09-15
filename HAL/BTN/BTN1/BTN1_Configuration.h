/*
 * BTN1_Configuration.h
 *
 * Created: 2/2/2024 4:41:18 PM
 *  Author: karim
 */ 


#ifndef BTN1_CONFIGURATION_H_
#define BTN1_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"


#define BTN1           DIO_PIN6
#define BTN1_PORT      DIO_PORTD
#define BTN1_INPUT     DIO_INPUT
#define BTN1_PRESSED   DIO_HIGH
#define BTN1_NPRESSED  DIO_LOW

#endif /* BTN1_CONFIGURATION_H_ */

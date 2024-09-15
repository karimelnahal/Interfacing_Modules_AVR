/*
 * RELAY_Configuration.h
 *
 * Created: 1/13/2024 5:45:23 PM
 *  Author: karim
 */ 


#ifndef RELAY_CONFIGURATION_H_
#define RELAY_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"


//Renaming Port
#define RELAY_PORT   DIO_PORTA
//Renaming Pin
#define RELAY_PIN    DIO_PIN2
//Renaming State
#define RELAY_OUTPUT DIO_OUTPUT
//Renaming Status
#define RELAY_LOW    DIO_LOW
#define RELAY_HIGH   DIO_HIGH




#endif /* RELAY_CONFIGURATION_H_ */

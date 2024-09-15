/*
 * SEV_SEGMENT_Configuration.h
 *
 * Created: 1/26/2024 2:55:42 PM
 *  Author: karim
 */ 


#ifndef SEV_SEGMENT_CONFIGURATION_H_
#define SEV_SEGMENT_CONFIGURATION_H_
//Macros
#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"
//Renaming Port
#define SEVSEG_PORT         PORTA
#define SEVSEG_DATA_PORT    DIO_PORTA
#define SEVSEG_CONTROL_PORT DIO_PORTB
//Renaming pin
#define SEVSEG_DATA_A       DIO_PIN4
#define SEVSEG_DATA_B       DIO_PIN5
#define SEVSEG_DATA_C       DIO_PIN6
#define SEVSEG_DATA_D       DIO_PIN7
#define SEVSEG_CONTROL_EN1  DIO_PIN1
#define SEVSEG_CONTROL_EN2  DIO_PIN2
#define SEVSEG_CONTROL_DIP  DIO_PIN3
//Renaming state
#define SEVSEG_OUTPUT DIO_OUTPUT
//Renaming status
#define SEVSEG_LOW  DIO_LOW
#define SEVSEG_HIGH DIO_HIGH

#endif /* SEV_SEGMENT_CONFIGURATION_H_ */

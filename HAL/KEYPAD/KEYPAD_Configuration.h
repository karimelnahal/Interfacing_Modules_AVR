/*
 * KEYPAD_Configuration.h
 *
 * Created: 2/2/2024 4:42:12 PM
 *  Author: karim
 */ 


#ifndef KEYPAD_CONFIGURATION_H_
#define KEYPAD_CONFIGURATION_H_

#include "../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"


//Renaming ports
#define KEYPAD_PORT       DIO_PORTD
//Renaming pins
#define KEYPAD_PIN_OUT0   DIO_PIN0
#define KEYPAD_PIN_OUT1   DIO_PIN1
#define KEYPAD_PIN_OUT2   DIO_PIN2
#define KEYPAD_PIN_OUT3   DIO_PIN3

#define KEYPAD_PIN_INP0   DIO_PIN4
#define KEYPAD_PIN_INP1   DIO_PIN5
#define KEYPAD_PIN_INP2   DIO_PIN6
#define KEYPAD_PIN_INP3   DIO_PIN7
//Renaming states
#define KEYPAD_INPUT      DIO_INPUT
#define KEYPAD_OUTPUT     DIO_OUTPUT
//Renaming status
#define KEYPAD_LOW        DIO_LOW
#define KEYPAD_HIGH       DIO_HIGH
//Renaming of row & column
#define KEYPAD_COL_STRT 0
#define KEYPAD_COL_END  3

#define KEYPAD_ROW_STRT 4
#define KEYPAD_ROW_END  7

#define KEYPAD_PRESSED  0


#endif /* KEYPAD_CONFIGURATION_H_ */

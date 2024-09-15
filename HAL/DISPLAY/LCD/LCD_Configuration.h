/*
* LCD_Configuration.h
*
* Created: 1/27/2024 4:10:37 PM
*  Author: karim
*/


#ifndef LCD_CONFIGURATION_H_
#define LCD_CONFIGURATION_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"
//New dataTypes
typedef enum
{
	ROW0 = 0,
	ROW1 = 1
}row;
typedef enum
{
	COL0  = 0,
	COL1  = 1,
	COL2  = 2,
	COL3  = 3,
	COL4  = 4,
	COL5  = 5,
	COL6  = 6,
	COL7  = 7,
	COL8  = 8,
	COL9  = 9,
	COL10 = 10,
	COL11 = 11,
	COL12 = 12,
	COL13 = 13,
	COL14 = 14,
	COL15 = 15
}column;
//Renaming Port
#define LCD_PORT         PORTA
#define LCD_DATA_PORT    DIO_PORTA
#define LCD_CONTROL_PORT DIO_PORTB
//Renaming pin
#define LCD_D0  DIO_PIN0
#define LCD_D1  DIO_PIN1
#define LCD_D2  DIO_PIN2
#define LCD_D3  DIO_PIN3
#define LCD_D4  DIO_PIN4
#define LCD_D5  DIO_PIN5
#define LCD_D6  DIO_PIN6
#define LCD_D7  DIO_PIN7

#define LCD_RS  DIO_PIN1
#define LCD_RW  DIO_PIN2
#define LCD_EN  DIO_PIN3
//Renaming state
#define LCD_OUTPUT DIO_OUTPUT
//Renaming status
#define LCD_LOW  DIO_LOW
#define LCD_HIGH DIO_HIGH
#endif /* LCD_CONFIGURATION_H_ */

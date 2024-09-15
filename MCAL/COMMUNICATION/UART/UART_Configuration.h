/*
* UART_Configuration.h
*
* Created: 3/8/2024 5:04:59 PM
*  Author: karim
*/


#ifndef UART_CONFIGURATION_H_
#define UART_CONFIGURATION_H_

#include "../UART/UART_Address.h"

#define Tx PD1
#define Rx PD0
#define UART_FREQ     160000
#define UART_BAUDRATE 96

typedef enum
{
	UART_9600    = 0,
	UART_38400   = 1,
	UART_115200  = 2
}uart_baudrate;

typedef enum
{
	UART_ASYNCHRONOUS = 0,
	UART_SYNCHRONOUS  = 1
}uart_mode;

typedef enum
{
	UART_DISABLE = 0,
	UART_EVEN    = 1,
	UART_ODD     = 2
}uart_parity;

typedef enum
{
	UART_STOP_1BIT = 0,
	UART_STOP_2BIT = 1
}uart_stopbits;

typedef enum
{
	UART_5BITS = 0,
	UART_6BITS = 1,
	UART_7BITS = 2,
	UART_8BITS = 3,
	UART_9BITS = 4
}uart_datalength;

#endif /* UART_CONFIGURATION_H_ */

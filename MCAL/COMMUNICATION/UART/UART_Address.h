/*
 * UART_Address.h
 *
 * Created: 3/8/2024 5:05:36 PM
 *  Author: karim
 */ 


#ifndef UART_ADDRESS_H_
#define UART_ADDRESS_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define UART_UDR   (*(volatile uint8_t*) (0x2C))
#define UART_UCSRA (*(volatile uint8_t*) (0x2B))
#define UART_UCSRB (*(volatile uint8_t*) (0x2A))
#define UART_UCSRC (*(volatile uint8_t*) (0x40))
#define UART_UBRRL (*(volatile uint8_t*) (0x29))
#define UART_UBRRH (*(volatile uint8_t*) (0x40)) 

#endif /* UART_ADDRESS_H_ */

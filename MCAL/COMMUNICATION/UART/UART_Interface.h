/*
 * UART_Interface.h
 *
 * Created: 3/8/2024 5:05:26 PM
 *  Author: karim
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

#include "../UART/UART_Configuration.h"

void UART_Initialize(void);
void UART_Transmit_Character(uint8_t character);
uint8_t UART_Receive_Character(void);
void UART_Transmit_String(uint8_t* str);
uint8_t* UART_Receive_String (void);

#endif /* UART_INTERFACE_H_ */

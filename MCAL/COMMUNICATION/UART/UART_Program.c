/*
 * UART_Program.c
 *
 * Created: 3/8/2024 5:05:45 PM
 *  Author: karim
 */ 


#include "../UART/UART_Interface.h"



void UART_Initialization(uart_baudrate baudrate, uart_mode modes, uart_parity parity, uart_datalength datalength, uart_stopbits stopbits)
{
	switch (baudrate)
	{
		case UART_9600:   break;
		case UART_38400:  break;
		case UART_115200: break;
		default:          break;
		
	}
	switch(modes)
	{
		case UART_SYNCHRONOUS:  break;
		case UART_ASYNCHRONOUS: break;
		default:                break;
	}
	switch (parity)
	{
		case UART_DISABLE: break;
		case UART_EVEN:    break;
		case UART_ODD:     break;
		default:           break;
	}
	switch (datalength)
	{
		case UART_5BITS: break;
		case UART_6BITS: break;
		case UART_7BITS: break;
		case UART_8BITS: break;
		case UART_9BITS: break;
		default:         break;
	}
	switch (stopbits)
	{
		case UART_STOP_1BIT: break;
		case UART_STOP_2BIT: break;
		default:             break;
	}
}

void UART_Initialize(void)
{
	uint16_t UBRR_Val = 0;
	DDRD |= (1<<Tx);//Define direction as output, Transmit
	DDRD &=~(1<<Rx);//Define direction as input, Receive
	UCSRB |= ((1<<RXEN) | (1<<TXEN));//Enable transmit & receive
	UCSRC |= ((1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0));//Choose data length(8-Bits), mode, parity, stop
	UBRR_Val = (((UART_FREQ) / (16 * UART_BAUDRATE)) - 1);//Frequency calculations
	UBRRL = UBRR_Val;
	UBRRH = UBRR_Val >> 8;
}
void UART_Transmit_Character(uint8_t character)
{
	UART_UDR = character;
	while (((UCSRA>>TXC)&0x01) != 1);//Wait until flag of transmitting received
	return;//Termination of transmit function
}
uint8_t UART_Receive_Character(void)
{
	uint8_t character = 0;
	while (((UCSRA>>TXC)&0x01) != 1);//Wait until flag of transmitting received
	character = UART_UDR;
	return character;
}
void UART_Transmit_String(uint8_t* str)
{
	while (*str != '\0')
	{
		UART_Transmit_Character(*str);
		str++;
	}
} 
uint8_t* UART_Receive_String (void)
{
	uint8_t characters = 'D';
	uint8_t* str = " ";
	while (characters != '\0')
	{
		characters = UART_Receive_Character();
		*str += characters;
	}
	return str;
}

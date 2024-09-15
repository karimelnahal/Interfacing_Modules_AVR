/*
* DIO_Program.c
*
* Created: 1/13/2024 5:00:06 PM
*  Author: karim
*/
#include "../DIO/DIO_Interface.h"

void DIO_SetPinDirection(dioPort port, dioPin pin, dioState state)
{
	switch(state)
	{
		case DIO_INPUT:
		switch (port)
		{
			case DIO_PORTA: CLR_BIT(_DIO_DDRA, pin); break;
			case DIO_PORTB: CLR_BIT(_DIO_DDRB, pin); break;
			case DIO_PORTC: CLR_BIT(_DIO_DDRC, pin); break;
			case DIO_PORTD: CLR_BIT(_DIO_DDRD, pin); break;
		}
		break;
		case DIO_OUTPUT:
		switch (port)
		{
			case DIO_PORTA: SET_BIT(_DIO_DDRA, pin); break;
			case DIO_PORTB: SET_BIT(_DIO_DDRB, pin); break;
			case DIO_PORTC: SET_BIT(_DIO_DDRC, pin); break;
			case DIO_PORTD: SET_BIT(_DIO_DDRD, pin); break;
		}
		break;
	}
}

void DIO_SetPinValue(dioPort port, dioPin pin, dioStatus status)
{
	switch(status)
	{
		case DIO_LOW:
		switch (port)
		{
			case DIO_PORTA: CLR_BIT(_DIO_PORTA, pin); break;
			case DIO_PORTB: CLR_BIT(_DIO_PORTB, pin); break;
			case DIO_PORTC: CLR_BIT(_DIO_PORTC, pin); break;
			case DIO_PORTD: CLR_BIT(_DIO_PORTD, pin); break;
		}
		break;
		case DIO_HIGH:
		switch (port)
		{
			case DIO_PORTA: SET_BIT(_DIO_PORTA, pin); break;
			case DIO_PORTB: SET_BIT(_DIO_PORTB, pin); break;
			case DIO_PORTC: SET_BIT(_DIO_PORTC, pin); break;
			case DIO_PORTD: SET_BIT(_DIO_PORTD, pin); break;
		}
		break;
	}
}

void DIO_TogglePinValue(dioPort port, dioPin pin)
{
	switch (port)
	{
		case DIO_PORTA: TGL_BIT(_DIO_PORTA, pin); break;
		case DIO_PORTB: TGL_BIT(_DIO_PORTB, pin); break;
		case DIO_PORTC: TGL_BIT(_DIO_PORTC, pin); break;
		case DIO_PORTD: TGL_BIT(_DIO_PORTD, pin); break;
	}
}

uint8_t DIO_GetPinValue(dioPort port, dioPin pin)
{
	uint8_t dioRead = 0;
	switch (port)
	{
		case DIO_PORTA: dioRead = GET_BIT(_DIO_PINA, pin); break;
		case DIO_PORTB: dioRead = GET_BIT(_DIO_PINB, pin); break;
		case DIO_PORTC: dioRead = GET_BIT(_DIO_PINC, pin); break;
		case DIO_PORTD: dioRead = GET_BIT(_DIO_PIND, pin); break;
	}
	return dioRead;
}

void DIO_SetPinPullUp(dioPort port, dioPin pin)
{
	switch (port)
	{
		case DIO_PORTA: SET_BIT(_DIO_PORTA, pin); break;
		case DIO_PORTB: SET_BIT(_DIO_PORTB, pin); break;
		case DIO_PORTC: SET_BIT(_DIO_PORTC, pin); break;
		case DIO_PORTD: SET_BIT(_DIO_PORTD, pin); break;
	}
}

/*
 * BTN0_Program.c
 *
 * Created: 2/2/2024 4:41:42 PM
 *  Author: karim
 */ 

#include "../BTN0/BTN0_Interface.h"


void BTN0_Initialize(void)
{
	DIO_SetPinDirection(BTN0_PORT, BTN0, BTN0_INPUT);
}
uint8_t BTN0_Read(void)
{
	uint8_t read = BTN0_NPRESSED;
	read = DIO_GetPinValue(BTN0_PORT, BTN0);
	return read;
}

/*
 * BTN2_Program.c
 *
 * Created: 2/2/2024 4:41:42 PM
 *  Author: karim
 */ 

#include "../BTN2/BTN2_Interface.h"


void BTN2_Initialize(void)
{
	DIO_SetPinDirection(BTN2_PORT, BTN2, BTN2_INPUT);
}
uint8_t BTN2_Read(void)
{
	uint8_t read = BTN2_NPRESSED;
	read = DIO_GetPinValue(BTN2_PORT, BTN2);
	return read;
}

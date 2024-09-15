/*
 * BTN1_Program.c
 *
 * Created: 2/2/2024 4:41:42 PM
 *  Author: karim
 */ 

#include "../BTN1/BTN1_Interface.h"


void BTN1_Initialize(void)
{
	DIO_SetPinDirection(BTN1_PORT, BTN1, BTN1_INPUT);
}
uint8_t BTN1_Read(void)
{
	uint8_t read = BTN1_NPRESSED;
	read = DIO_GetPinValue(BTN1_PORT, BTN1);
	return read;
}

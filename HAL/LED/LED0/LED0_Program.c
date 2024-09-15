/*
 * LED0_Program.c
 *
 * Created: 1/13/2024 5:46:02 PM
 *  Author: karim
 */ 

#include "../../LED/LED0/LED0_Interface.h"

void LED0_Initialization(void)
{
	DIO_SetPinDirection(LED0_PORT, LED0_PIN, LED0_OUTPUT);
}
void LED0_ON (void)
{
	DIO_SetPinValue(LED0_PORT, LED0_PIN, LED0_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPinValue(LED0_PORT, LED0_PIN, LED0_LOW);
}
void LED0_Toggle(void)
{
	DIO_TogglePinValue(LED0_PORT, LED0_PIN);
}

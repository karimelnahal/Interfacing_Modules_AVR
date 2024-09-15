/*
 * RELAY_Program.c
 *
 * Created: 1/13/2024 5:46:02 PM
 *  Author: karim
 */ 

#include "../RELAY/RELAY_Interface.h"

void RELAY_Initialization(void)
{
	DIO_SetPinDirection(RELAY_PORT, RELAY_PIN, RELAY_OUTPUT);
}
void RELAY_ON (void)
{
	DIO_SetPinValue(RELAY_PORT, RELAY_PIN, RELAY_HIGH);
}
void RELAY_OFF(void)
{
	DIO_SetPinValue(RELAY_PORT, RELAY_PIN, RELAY_LOW);
}
void RELAY_Toggle(void)
{
	DIO_TogglePinValue(RELAY_PORT, RELAY_PIN);
}

/*
 * BUZZER_Program.c
 *
 * Created: 1/13/2024 5:46:02 PM
 *  Author: karim
 */ 

#include "../BUZZER/BUZZER_Interface.h"

void BUZZER_Initialization(void)
{
	DIO_SetPinDirection(BUZZER_PORT, BUZZER_PIN, BUZZER_OUTPUT);
}
void BUZZER_ON (void)
{
	DIO_SetPinValue(BUZZER_PORT, BUZZER_PIN, BUZZER_HIGH);
}
void BUZZER_OFF(void)
{
	DIO_SetPinValue(BUZZER_PORT, BUZZER_PIN, BUZZER_LOW);
}
void BUZZER_Toggle(void)
{
	DIO_TogglePinValue(BUZZER_PORT, BUZZER_PIN);
}

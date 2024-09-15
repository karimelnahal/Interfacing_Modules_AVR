/*
* KEYPAD_Program.c
*
* Created: 2/2/2024 4:42:36 PM
*  Author: karim
*/

#include "../KEYPAD/KEYPAD_Interface.h"

const uint8_t keypad[4][4] =
{
	{'7', '4', '1', 'C'},
	{'8', '5', '2', '0'},
	{'9', '6', '3', '='},
	{'/', '*', '-', '+'}
};

void Keypad_Initialize(void)
{
	//Define Output pins
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_OUT0, KEYPAD_OUTPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_OUT1, KEYPAD_OUTPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_OUT2, KEYPAD_OUTPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_OUT3, KEYPAD_OUTPUT);
	//Set all pins high
	DIO_SetPinValue(KEYPAD_PORT, KEYPAD_PIN_OUT0, KEYPAD_HIGH);
	DIO_SetPinValue(KEYPAD_PORT, KEYPAD_PIN_OUT1, KEYPAD_HIGH);
	DIO_SetPinValue(KEYPAD_PORT, KEYPAD_PIN_OUT2, KEYPAD_HIGH);
	DIO_SetPinValue(KEYPAD_PORT, KEYPAD_PIN_OUT3, KEYPAD_HIGH);
	//Define Input pins
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_INP0, KEYPAD_INPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_INP1, KEYPAD_INPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_INP2, KEYPAD_INPUT);
	DIO_SetPinDirection(KEYPAD_PORT, KEYPAD_PIN_INP3, KEYPAD_INPUT);
	//Activate Pull-Up
	DIO_SetPinPullUp(KEYPAD_PORT, KEYPAD_PIN_INP0);
	DIO_SetPinPullUp(KEYPAD_PORT, KEYPAD_PIN_INP1);
	DIO_SetPinPullUp(KEYPAD_PORT, KEYPAD_PIN_INP2);
	DIO_SetPinPullUp(KEYPAD_PORT, KEYPAD_PIN_INP3);
}

uint8_t Keypad_Read(void)
{
	uint8_t Val = 0;
	uint8_t Btn = 0;
	uint8_t Row_Loc = 0;
	uint8_t Col_Loc = 0;
	for(Col_Loc = KEYPAD_COL_STRT; Col_Loc <= KEYPAD_COL_END; Col_Loc++)//Loop on columns, rotate zero position
	{
		DIO_SetPinValue(KEYPAD_PORT, Col_Loc, KEYPAD_LOW);
		for (Row_Loc = KEYPAD_ROW_STRT; Row_Loc <= KEYPAD_ROW_END; Row_Loc++)//Loop on rows, rotate inputs
		{
			Btn = DIO_GetPinValue(KEYPAD_PORT, Row_Loc);
			if(Btn == KEYPAD_PRESSED)
			{
				Val = keypad[Row_Loc - KEYPAD_ROW_STRT][Col_Loc - KEYPAD_COL_STRT];
				while (Btn == KEYPAD_PRESSED)
				{
					Btn = DIO_GetPinValue(KEYPAD_PORT, Row_Loc);
				}
				_delay_ms(10);
			}
		}
		DIO_SetPinValue(KEYPAD_PORT, Col_Loc, KEYPAD_HIGH);
	}
	return Val;
}

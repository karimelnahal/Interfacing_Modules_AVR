/*
* Stepper_Program.c
*
* Created: 3/1/2024 5:27:01 PM
*  Author: karim
*/


#include "Stepper_Interface.h"


static const uint8_t FullStep_Arr[4] = {0x08, 0x04, 0x02, 0x01};

static const uint8_t HalfStep_Arr[8] = {0x09, 0x08, 0x0C, 0x04, 0x06, 0x02, 0x03, 0x01};

static const uint8_t period = 100;


void Stepper_Initialization(void)
{
	//Define directions for pins
	DIO_SetPinDirection(Stepper_Port, Stepper_Coil_APlus, Stepper_Out);
	DIO_SetPinDirection(Stepper_Port, Stepper_Coil_AMinus, Stepper_Out);
	DIO_SetPinDirection(Stepper_Port, Stepper_Coil_BPlus, Stepper_Out);
	DIO_SetPinDirection(Stepper_Port, Stepper_Coil_BMinus, Stepper_Out);
}

void Stepper_Rotate(stepperStep step, stepperDirection direction)
{
	uint8_t iter;
	if(direction == Stp_CW)
	{
		if(step == Full_Step)
		{
			for(iter = 0; iter < 4; iter++)
			{
				Stepper = FullStep_Arr[iter];
				_delay_ms(period);
			}
		}
		else if(step == Half_Step)
		{
			for(iter = 0; iter < 8; iter++)
			{
				Stepper = HalfStep_Arr[iter];
				_delay_ms(period);
			}
		}
	}
	else if(direction == Stp_CCW)
	{
		if(step == Full_Step)
		{
			for(iter = 3; iter >= 0; iter--)
			{
				Stepper = FullStep_Arr[iter];
				_delay_ms(period);
			}
		}
		else if(step == Half_Step)
		{
			for(iter = 7; iter >= 0; iter--)
			{
				Stepper = HalfStep_Arr[iter];
				_delay_ms(period);
			}
		}
	}
	_delay_ms(125);
}

void Stepper_Brake(void)
{
	Stepper = 0x00;
	_delay_ms(250);
	Stepper = 0x09;
}
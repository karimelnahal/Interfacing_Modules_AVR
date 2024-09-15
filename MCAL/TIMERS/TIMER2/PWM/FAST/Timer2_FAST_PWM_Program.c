/*
* Timer0_CTC_Program.c
*
* Created: 2/16/2024 5:41:30 PM
*  Author: karim
*/


#include "Timer2_FAST_PWM_Interface.h"

void Timer2_FAST_PWM_WithInterrupt_Initialize (void)
{
	DDRD |= (1<<OC2_Pin);
	_T2_FAST_PWM_TCCR2 |= ((1<<WGM21)|(1<<WGM20));
	_T2_FAST_PWM_TCCR2 &=~((1<<FOC2)|(1<<COM21)|(1<<COM20)|(1<<CS21)|(1<<CS22)|(1<<CS20));
	
}
void Timer2_FAST_PWM_Start (void)
{
	/* Prescalar 256 */
	_T2_FAST_PWM_TCCR2 |= (1<<CS22);
	_T2_FAST_PWM_TCCR2 &=~((1<<CS21)|(1<<CS20));
}
void Timer2_FAST_PWM_Stop (void)
{
	/* Prescalar 0 */
	_T2_FAST_PWM_TCCR2 &=~((1<<CS21)|(1<<CS22)|(1<<CS20));
}
void Timer2_FAST_PWM_SetDuty (_t2_fast_pwm_pin pin, uint8_t dutycyle)
{
	switch (pin)
	{
		case _T2_FAST_PWM_Pin_Disconnected:
		_T2_FAST_PWM_TCCR2 &=~((1<<COM21)|(1<<COM20));
		_T2_FAST_PWM_OCR2 = 0;
		break;
		case _T2_FAST_PWM_Pin_Inverting:
		_T2_FAST_PWM_TCCR2 |= ((1<<COM21)|(1<<COM20));
		_T2_FAST_PWM_OCR2 = (_T2_FAST_PWM_BITS - 1) - (((_T2_FAST_PWM_BITS * dutycyle) * 100) - 1);
		break;
		case _T2_FAST_PWM_Pin_Non_inverting:
		_T2_FAST_PWM_TCCR2 &=~(1<<COM20);
		_T2_FAST_PWM_TCCR2 |= (1<<COM21);
		_T2_FAST_PWM_OCR2 = (((_T2_FAST_PWM_BITS * dutycyle) * 100) - 1);
		break;
	}
}
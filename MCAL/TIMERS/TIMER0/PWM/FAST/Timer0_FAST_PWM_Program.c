/*
* Timer0_CTC_Program.c
*
* Created: 2/16/2024 5:41:30 PM
*  Author: karim
*/


#include "Timer0_FAST_PWM_Interface.h"

void Timer0_FAST_PWM_WithInterrupt_Initialize (void)
{
	DDRB |= (1<<OC0_Pin);
	_T0_FAST_PWM_TCCR0 |= ((1<<WGM01)|(1<<WGM00));
	_T0_FAST_PWM_TCCR0 &=~((1<<FOC0)|(1<<COM01)|(1<<COM00)|(1<<CS01)|(1<<CS02)|(1<<CS00));
	
}
void Timer0_FAST_PWM_Start (void)
{
	/* Prescalar 256 */
	_T0_FAST_PWM_TCCR0 |= (1<<CS02);
	_T0_FAST_PWM_TCCR0 &=~((1<<CS01)|(1<<CS00));
}
void Timer0_FAST_PWM_Stop (void)
{
	/* Prescalar 0 */
	_T0_FAST_PWM_TCCR0 &=~((1<<CS01)|(1<<CS02)|(1<<CS00));
}
void Timer0_FAST_PWM_SetDuty (_t0_fast_pwm_pin pin, uint8_t dutycyle)
{
	switch (pin)
	{
		case _T0_FAST_PWM_Pin_Disconnected:
		_T0_FAST_PWM_TCCR0 &=~((1<<COM01)|(1<<COM00));
		_T0_FAST_PWM_OCR0 = 0;
		break;
		case _T0_FAST_PWM_Pin_Inverting:
		_T0_FAST_PWM_TCCR0 |= ((1<<COM01)|(1<<COM00));
		_T0_FAST_PWM_OCR0 = (_T0_FAST_PWM_BITS - 1) - (((_T0_FAST_PWM_BITS * dutycyle) * 100) - 1);
		break;
		case _T0_FAST_PWM_Pin_Non_inverting:
		_T0_FAST_PWM_TCCR0 &=~(1<<COM00);
		_T0_FAST_PWM_TCCR0 |= (1<<COM01);
		_T0_FAST_PWM_OCR0 = (((_T0_FAST_PWM_BITS * dutycyle) * 100) - 1);
		break;
	}
}
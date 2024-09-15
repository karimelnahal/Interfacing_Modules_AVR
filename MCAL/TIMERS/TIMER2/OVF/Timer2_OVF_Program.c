/*
* Timer2_OVF_Program.c
*
* Created: 2/16/2224 5:41:32 PM
*  Author: karim
*/


#include "Timer2_OVF_Interface.h"


uint32_t _T2_OVF_Count  = 0;
uint8_t  _T2_OVF_iValue = 0;

void Timer2_OVF_WithInterrupt_Initialize (void)
{
	/*
		1- Choose Normal mode
		2- Disconnect pin OC0
		3- Enable interrupt
		4- Enable global interrupt
	*/
	DDRD |= (1<<PD7);
	_T2_OVF_TCCR2 &=~((1<<FOC2)|(1<<WGM21)|(1<<WGM20)|(1<<COM21)|(1<<COM20)|(1<<CS22)|(1<<CS21)|(1<<CS20));
	_T2_OVF_TIMSK |= ((1<<TOIE2));
	//_T2_OVF_TCCR2 &=~((1<<FOC2)|(1<<WGM21)|(1<<WGM20)|(1<<CS22)|(1<<CS21)|(1<<CS20));
	//_T2_OVF_TCCR2 |= ((1<<CS21) | (1<<COM20));
	sei();
}
void Timer2_OVF_WithInterrupt_Start (void)
{
	/*Choose prescaler 1024*/
	_T2_OVF_TCCR2 |= ((1<<CS22)|(1<<CS21)|(1<<CS20));
}
void Timer2_OVF_WithInterrupt_Stop (void)
{
	_T2_OVF_TCCR2 &=~((1<<CS22)|(1<<CS21)|(1<<CS20));
}
void Timer2_OVF_WithInterrupt_SetDelay (uint32_t delay)
{
	/*
		1- Create counter
		2- Create tick = 1 * Prescaler / frequency
		3- Create Count = delay * 10^k / Tick
		4- Create OVF = Count / 2^8 + 1
		5- Create Initial value = 2^8 - (Count % 2^8)
		6- Set initial value
	*/
	uint8_t Tick = ((1*_T2_OVF_PRESCALER)/_T2_OVF_FREQUENCY);
	uint32_t Count = ((delay * _T2_OVF_MICROSECOND) / Tick);
	_T2_OVF_Count = (Count / _T2_OVF_BITS) + 1;
	_T2_OVF_iValue = _T2_OVF_BITS - (Count % _T2_OVF_BITS);
	_T2_OVF_TCNT2 = _T2_OVF_iValue;
}

void Timer2_OVF_WithoutInterrupt_Initialize (void)
{
	/*
	1- Choose Normal mode
	2- Disconnect pin OC0
	3- Disable interrupt
	*/
	_T2_OVF_TCCR2 &=~((1<<FOC2)|(1<<WGM21)|(1<<WGM20)|(1<<COM21)|(1<<COM20)|(1<<CS22)|(1<<CS21)|(1<<CS20));
	_T2_OVF_TIMSK &=~((1<<TOIE2));
}
void Timer2_OVF_WithoutInterrupt_Start (void)
{
	/*Choose prescaler 1024*/
	_T2_OVF_TCCR2 |= ((1<<CS22)|(1<<CS21)|(1<<CS20));
}
void Timer2_OVF_WithoutInterrupt_Stop (void)
{
	_T2_OVF_TCCR2 &=~((1<<CS22)|(1<<CS21)|(1<<CS20));
}
void Timer2_OVF_WithoutInterrupt_SetDelay (uint32_t delay)
{
	/*
		1- Create counter
		2- Create tick = 1 * Prescaler / frequency
		3- Create Count = delay * 10^k / Tick
		4- Create OVF = Count / 2^8 + 1
		5- Create Initial value = 2^8 - (Count % 2^8)
		6- Set initial value
		7- Wait until flag raise
		8- Re-Initialize flag
		9- Increment counter
	*/
	uint32_t counter = 0;
	uint8_t Tick = ((1*_T2_OVF_PRESCALER)/_T2_OVF_FREQUENCY);
	uint32_t Count = ((delay * _T2_OVF_MICROSECOND) / Tick);
	uint32_t OVF = (Count / _T2_OVF_BITS) + 1;
	uint8_t iValue = _T2_OVF_BITS - (Count % _T2_OVF_BITS);
	_T2_OVF_TCNT2 = iValue;
	while (counter != OVF)
	{
		while (GET_BIT(_T2_OVF_TIFR, TOV2) != 1);
		_T2_OVF_TIFR |= (1<<TOV2);
		counter++;
	}
}

uint8_t Timer2_OVF_CounterValue (void)
{
	return _T2_OVF_TCNT2;
}
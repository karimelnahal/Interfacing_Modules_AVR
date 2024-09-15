/*
* Timer0_CTC_Program.c
*
* Created: 2/16/2024 5:41:30 PM
*  Author: karim
*/


#include "Timer0_CTC_Interface.h"

uint32_t _T0_CTC_Count  = 0;
uint8_t  _T0_CTC_iValue = 0;

void Timer0_CTC_WithInterrupt_Initialize (void)
{
	/*
	1- Choose Clear Timer on Compare Match mode
	2- Disconnect pin OC0
	3- Enable interrupt
	4- Enable global interrupt
	*/
	/*
		_T0_CTC_TCCR0 &=~((1<<FOC0)|(1<<WGM01)|(1<<WGM00)|(1<<CS01)|(1<<CS02)|(1<<CS00));
		_T0_CTC_TCCR0 |= ((1<<CS01) | (1<<COM00));
	*/
	DDRB |= (1<<PB3);
	_T0_CTC_TCCR0 &=~((1<<FOC0)|(1<<WGM00)|(1<<COM01)|(1<<COM00)|(1<<CS01)|(1<<CS02)|(1<<CS00));
	_T0_CTC_TCCR0 |= (1<<WGM01);
	_T0_CTC_TIMSK |= ((1<<TOIE0));
	sei();
}
void Timer0_CTC_WithInterrupt_Start (void)
{
	/*Choose prescaler 1024*/
	_T0_CTC_TCCR0 &=~((1<<CS01));
	_T0_CTC_TCCR0 |= ((1<<CS02)|(1<<CS00));
}
void Timer0_CTC_WithInterrupt_Stop (void)
{
	/*Choose prescaler 0*/
	_T0_CTC_TCCR0 &=~((1<<CS01)|(1<<CS02)|(1<<CS00));
}
void Timer0_CTC_WithInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue)
{
	/*
	1- Create counter
	2- Create tick = 1 * Prescaler / frequency
	3- Create Count = delay * 10^k / Tick
	4- Create CTC = Count / 2^8 + 1
	5- Create Initial value = 2^8 - (Count % 2^8)
	6- Set initial value
	*/
	uint8_t Tick = ((1*_T0_CTC_PRESCALER)/_T0_CTC_FREQUENCY);
	uint32_t Count = ((delay * _T0_CTC_MICROSECOND) / Tick);
	OCR0 = ocrValue;
	_T0_CTC_Count = (Count / OCR0) + 1;
	_T0_CTC_iValue = OCR0 - (Count % OCR0);
	_T0_CTC_TCNT0 = _T0_CTC_iValue;
}

void Timer0_CTC_WithoutInterrupt_Initialize (void)
{
	/*
	1- Choose Clear Timer on Compare Match mode
	2- Disconnect pin OC0
	3- Disable interrupt
	*/
	_T0_CTC_TCCR0 &=~((1<<FOC0)|(1<<WGM00)|(1<<COM01)|(1<<COM00)|(1<<CS01)|(1<<CS02)|(1<<CS00));
	_T0_CTC_TCCR0 |= (1<<WGM01);
	_T0_CTC_TIMSK &=~((1<<TOIE0));
}
void Timer0_CTC_WithoutInterrupt_Start (void)
{
	/*Choose prescaler 1024*/
	_T0_CTC_TCCR0 &=~((1<<CS01));
	_T0_CTC_TCCR0 |= ((1<<CS02)|(1<<CS00));
}
void Timer0_CTC_WithoutInterrupt_Stop (void)
{
	/*Choose prescaler 0*/
	_T0_CTC_TCCR0 &=~((1<<CS01)|(1<<CS02)|(1<<CS00));
}
void Timer0_CTC_WithoutInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue)
{
	/*
	1- Create counter
	2- Create tick = 1 * Prescaler / frequency
	3- Create Count = delay * 10^k / Tick
	4- Create CTC = Count / OCR + 1
	5- Create Initial value = 2^8 - (Count % 2^8)
	6- Set initial value
	7- Wait until flag raise
	8- Re-Initialize flag
	9- Increment counter
	*/
	uint32_t counter = 0;
	uint8_t Tick = ((1*_T0_CTC_PRESCALER)/_T0_CTC_FREQUENCY);
	uint32_t Count = ((delay * _T0_CTC_MICROSECOND) / Tick);
	OCR0 = ocrValue;
	uint32_t CTC = (Count / OCR0) + 1;
	uint8_t iValue = OCR0 - (Count % OCR0);
	_T0_CTC_TCNT0 = iValue;
	while (counter != CTC)
	{
		while (GET_BIT(_T0_CTC_TIFR, TOV0) != 1);
		_T0_CTC_TIFR |= (1<<TOV0);
		counter++;
	}
}

uint8_t Timer0_CTC_CounterValue (void)
{
	return _T0_CTC_TCNT0;
}
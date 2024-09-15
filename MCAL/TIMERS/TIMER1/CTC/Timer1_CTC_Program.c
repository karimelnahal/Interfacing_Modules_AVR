/*
* Timer0_CTC_Program.c
*
* Created: 2/16/2024 5:41:30 PM
*  Author: karim
*/

#include "Timer1_CTC_Interface.h"

uint32_t _T1_CTC_Count  = 0;
uint16_t _T1_CTC_iValue = 0;

void Timer1_CTC_WithInterrupt_Initialize (void)
{
	//Choose mode as normal mode
	_T1_CTC_TCCR1A &=~((1<<WGM11)|(1<<WGM10));
	_T1_CTC_TCCR1B &=~((1<<WGM13)|(1<<WGM12));
	//Pin disconnected
	_T1_CTC_TCCR1A &=~((1<<COM1A1)|(1<<COM1A0)|(1<<COM1B1)|(1<<COM1B0));
	//Enable interrupt
	_T1_CTC_TIMSK |= (1<<TOIE1);
	//Enable global interrupt
	sei();
}
void Timer1_CTC_WithInterrupt_Start (void)
{
	//Prescalar 8
	//_T1_CTC_TCCR1B &=~((1<<CS12)|(1<<CS10));
	//_T1_CTC_TCCR1B |= (1<<CS11);
	//Prescalar 64
	_T1_CTC_TCCR1B &=~(1<<CS12);
	_T1_CTC_TCCR1B |= ((1<<CS11)|(1<<CS10));
}
void Timer1_CTC_WithInterrupt_Stop (void)
{
	_T1_CTC_TCCR1B&=~((1<<CS12)|(1<<CS11)|(1<<CS10));
}
void Timer1_CTC_WithInterrupt_SetDelay (uint32_t delay, uint16_t ocrValue)
{
	uint16_t Tick = ((1*_T1_CTC_PRESCALER)/_T1_CTC_FREQUENCY);
	uint32_t Count = ((delay * _T1_CTC_MICROSECOND) / Tick);
	_T1_CTC_OCR1A = ocrValue;
	_T1_CTC_Count = (Count / _T1_CTC_OCR1A) + 1;
	_T1_CTC_iValue = _T1_CTC_BITS - (Count % _T1_CTC_BITS);
	_T1_CTC_TCNT1 = _T1_CTC_iValue;
}

void Timer1_CTC_WithoutInterrupt_Initialize (void)
{
	//Choose mode as normal mode
	_T1_CTC_TCCR1A &=~((1<<WGM11)|(1<<WGM10));
	_T1_CTC_TCCR1B &=~((1<<WGM13)|(1<<WGM12));
	//Pin disconnected
	_T1_CTC_TCCR1A &=~((1<<COM1A1)|(1<<COM1A0)|(1<<COM1B1)|(1<<COM1B0));
	//Disable interrupt
	_T1_CTC_TIMSK &=~(1<<TOIE1);
}
void Timer1_CTC_WithoutInterrupt_Start (void)
{
	//Prescalar 8
	//_T1_CTC_TCCR1B &=~((1<<CS12)|(1<<CS10));
	//_T1_CTC_TCCR1B |= (1<<CS11);
	//Prescalar 64
	_T1_CTC_TCCR1B &=~(1<<CS12);
	_T1_CTC_TCCR1B |= ((1<<CS11)|(1<<CS10));
}
void Timer1_CTC_WithoutInterrupt_Stop (void)
{
	_T1_CTC_TCCR1B&=~((1<<CS12)|(1<<CS11)|(1<<CS10));
}
void Timer1_CTC_WithoutInterrupt_SetDelay (uint32_t delay, uint16_t ocrValue)
{
	/*
	1- Create counter
	2- Create tick = 1 * Prescaler / frequency
	3- Create Count = delay * 10^k / Tick
	4- Create CTC = Count / 2^8 + 1
	5- Create Initial value = 2^8 - (Count % 2^8)
	6- Set initial value
	7- Wait until flag raise
	8- Re-Initialize flag
	9- Increment counter
	*/
	uint32_t counter = 0;
	uint16_t Tick = ((1*_T1_CTC_PRESCALER)/_T1_CTC_FREQUENCY);
	uint32_t Count = ((delay * _T1_CTC_MICROSECOND) / Tick);
	_T1_CTC_OCR1A = ocrValue;
	uint32_t CTC = (Count / _T1_CTC_OCR1A) + 1;
	uint16_t iValue = _T1_CTC_BITS - (Count % _T1_CTC_BITS);
	_T1_CTC_TCNT1 = iValue;
	while (counter != CTC)
	{
		while (GET_BIT(_T1_CTC_TIFR, OCF1A) != 1);
		_T1_CTC_TIFR |= (1<<OCF1A);
		counter++;
	}
}

uint16_t Timer1_CTC_CounterValue (void)
{
	return _T1_CTC_TCNT1;
}
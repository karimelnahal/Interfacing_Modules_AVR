/*
 * Timer0_CTC_Interface.h
 *
 * Created: 2/16/2024 5:40:57 PM
 *  Author: karim
 */ 


#ifndef TIMER0_CTC_INTERFACE_H_
#define TIMER0_CTC_INTERFACE_H_

#include "Timer0_CTC_Private.h"

void Timer0_CTC_WithInterrupt_Initialize (void);
void Timer0_CTC_WithInterrupt_Start (void);
void Timer0_CTC_WithInterrupt_Stop (void);
void Timer0_CTC_WithInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue);

void Timer0_CTC_WithoutInterrupt_Initialize (void);
void Timer0_CTC_WithoutInterrupt_Start (void);
void Timer0_CTC_WithoutInterrupt_Stop (void);
void Timer0_CTC_WithoutInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue);

uint8_t Timer0_CTC_CounterValue (void);

#endif /* TIMER0_CTC_INTERFACE_H_ */
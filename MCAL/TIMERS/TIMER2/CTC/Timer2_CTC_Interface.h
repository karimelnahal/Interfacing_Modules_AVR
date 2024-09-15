/*
 * TIMER2_CTC_Interface.h
 *
 * Created: 2/16/2024 5:40:57 PM
 *  Author: karim
 */ 


#ifndef TIMER2_CTC_INTERFACE_H_
#define TIMER2_CTC_INTERFACE_H_

#include "Timer2_CTC_Private.h"

void Timer2_CTC_WithInterrupt_Initialize (void);
void Timer2_CTC_WithInterrupt_Start (void);
void Timer2_CTC_WithInterrupt_Stop (void);
void Timer2_CTC_WithInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue);

void Timer2_CTC_WithoutInterrupt_Initialize (void);
void Timer2_CTC_WithoutInterrupt_Start (void);
void Timer2_CTC_WithoutInterrupt_Stop (void);
void Timer2_CTC_WithoutInterrupt_SetDelay (uint32_t delay, uint8_t ocrValue);

uint8_t TIMER2_CTC_CounterValue (void);

#endif /* TIMER2_CTC_INTERFACE_H_ */
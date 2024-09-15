/*
 * Timer0_OVF_Interface.h
 *
 * Created: 2/16/2024 5:40:57 PM
 *  Author: karim
 */ 


#ifndef TIMER1_CTC_INTERFACE_H_
#define TIMER1_CTC_INTERFACE_H_

#include "Timer1_CTC_Private.h"

void Timer1_CTC_WithInterrupt_Initialize (void);
void Timer1_CTC_WithInterrupt_Start (void);
void Timer1_CTC_WithInterrupt_Stop (void);
void Timer1_CTC_WithInterrupt_SetDelay (uint32_t delay, uint16_t ocrValue);

void Timer1_CTC_WithoutInterrupt_Initialize (void);
void Timer1_CTC_WithoutInterrupt_Start (void);
void Timer1_CTC_WithoutInterrupt_Stop (void);
void Timer1_CTC_WithoutInterrupt_SetDelay (uint32_t delay, uint16_t ocrValue);

uint16_t Timer1_CTC_CounterValue (void);

#endif /* TIMER1_CTC_INTERFACE_H_ */
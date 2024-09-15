/*
 * Timer0_CTC_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER2_FAST_PWM_ADDRESS_H_
#define TIMER2_FAST_PWM_ADDRESS_H_

#include "../../../../CPU_CONFIGURATION/CPU_Configuration.h"

#define _T2_FAST_PWM_OCR2  (*(volatile uint8_t*)(0x5C))
#define _T2_FAST_PWM_TIFR  (*(volatile uint8_t*)(0x58))
#define _T2_FAST_PWM_TCCR2 (*(volatile uint8_t*)(0x53))
#define _T2_FAST_PWM_TCNT2 (*(volatile uint8_t*)(0x52))
#define _T2_FAST_PWM_TIMSK (*(volatile uint8_t*)(0x59))

#endif /* TIMER0_FAST_PWM_ADDRESS_H_ */

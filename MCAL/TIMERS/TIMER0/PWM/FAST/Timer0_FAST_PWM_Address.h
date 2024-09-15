/*
 * Timer0_CTC_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER0_FAST_PWM_ADDRESS_H_
#define TIMER0_FAST_PWM_ADDRESS_H_

#include "../../../../CPU_CONFIGURATION/CPU_Configuration.h"

#define _T0_FAST_PWM_OCR0  (*(volatile uint8_t*)(0x5C))
#define _T0_FAST_PWM_TIFR  (*(volatile uint8_t*)(0x58))
#define _T0_FAST_PWM_TCCR0 (*(volatile uint8_t*)(0x53))
#define _T0_FAST_PWM_TCNT0 (*(volatile uint8_t*)(0x52))
#define _T0_FAST_PWM_TIMSK (*(volatile uint8_t*)(0x59))

#endif /* TIMER0_FAST_PWM_ADDRESS_H_ */

/*
 * Timer0_CTC_Interface.h
 *
 * Created: 2/16/2024 5:40:57 PM
 *  Author: karim
 */ 


#ifndef TIMER0_FAST_PWM_INTERFACE_H_
#define TIMER0_FAST_PWM_INTERFACE_H_

#include "Timer0_FAST_PWM_Private.h"

void Timer0_FAST_PWM_WithInterrupt_Initialize (void);
void Timer0_FAST_PWM_Start (void);
void Timer0_FAST_PWM_Stop (void);
void Timer0_FAST_PWM_SetDuty (_t0_fast_pwm_pin pin, uint8_t dutycyle);


#endif /* TIMER0_FAST_PWM_INTERFACE_H_ */
/*
 * Timer0_CTC_Interface.h
 *
 * Created: 2/16/2024 5:40:57 PM
 *  Author: karim
 */ 


#ifndef TIMER2_FAST_PWM_INTERFACE_H_
#define TIMER2_FAST_PWM_INTERFACE_H_

#include "Timer2_FAST_PWM_Private.h"

void Timer2_FAST_PWM_WithInterrupt_Initialize (void);
void Timer2_FAST_PWM_Start (void);
void Timer2_FAST_PWM_Stop (void);
void Timer2_FAST_PWM_SetDuty (_t2_fast_pwm_pin pin, uint8_t dutycyle);


#endif /* TIMER0_FAST_PWM_INTERFACE_H_ */
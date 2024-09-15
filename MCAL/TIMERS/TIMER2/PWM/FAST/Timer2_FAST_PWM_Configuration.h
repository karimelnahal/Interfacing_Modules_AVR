/*
* Timer0_CTC_Configuration.h
*
* Created: 2/16/2024 5:41:12 PM
*  Author: karim
*/


#ifndef TIMER2_FAST_PWM_CONFIGURATION_H_
#define TIMER2_FAST_PWM_CONFIGURATION_H_

#include "Timer2_FAST_PWM_Address.h"

#define OC2_Pin PD7

#define _T2_FAST_PWM_BITS         256
#define _T2_FAST_PWM_PRESCALER    1024
#define _T2_FAST_PWM_FREQUENCY    16
#define _T2_FAST_PWM_MICROSECOND  1000

typedef enum
{
	_T2_FAST_PWM_Pin_Disconnected   = 0,
	_T2_FAST_PWM_Pin_Inverting      = 1,
	_T2_FAST_PWM_Pin_Non_inverting  = 2
}_t2_fast_pwm_pin;


#endif /* TIMER0_FAST_PWM_CONFIGURATION_H_ */
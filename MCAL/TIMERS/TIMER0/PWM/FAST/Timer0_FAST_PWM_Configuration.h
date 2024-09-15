/*
* Timer0_CTC_Configuration.h
*
* Created: 2/16/2024 5:41:12 PM
*  Author: karim
*/


#ifndef TIMER0_FAST_PWM_CONFIGURATION_H_
#define TIMER0_FAST_PWM_CONFIGURATION_H_

#include "Timer0_FAST_PWM_Address.h"

#define OC0_Pin PB3

#define _T0_FAST_PWM_BITS         256
#define _T0_FAST_PWM_PRESCALER    1024
#define _T0_FAST_PWM_FREQUENCY    16
#define _T0_FAST_PWM_MICROSECOND  1000

typedef enum
{
	_T0_FAST_PWM_Pin_Disconnected   = 0,
	_T0_FAST_PWM_Pin_Inverting      = 1,
	_T0_FAST_PWM_Pin_Non_inverting  = 2
}_t0_fast_pwm_pin;


#endif /* TIMER0_FAST_PWM_CONFIGURATION_H_ */
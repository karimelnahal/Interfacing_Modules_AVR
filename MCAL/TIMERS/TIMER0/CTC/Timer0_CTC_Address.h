/*
 * Timer0_CTC_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER0_CTC_ADDRESS_H_
#define TIMER0_CTC_ADDRESS_H_

#include "../../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _T0_CTC_OCR0  (*(volatile uint8_t*)(0x5C))
#define _T0_CTC_TIFR  (*(volatile uint8_t*)(0x58))
#define _T0_CTC_TCCR0 (*(volatile uint8_t*)(0x53))
#define _T0_CTC_TCNT0 (*(volatile uint8_t*)(0x52))
#define _T0_CTC_TIMSK (*(volatile uint8_t*)(0x59))

#endif /* TIMER0_CTC_ADDRESS_H_ */

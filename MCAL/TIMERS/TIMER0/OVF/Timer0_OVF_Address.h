/*
 * Timer0_OVF_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER0_OVF_ADDRESS_H_
#define TIMER0_OVF_ADDRESS_H_

#include "../../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _T0_OVF_OCR0  (*(volatile uint8_t*)(0x5C))
#define _T0_OVF_TIFR  (*(volatile uint8_t*)(0x58))
#define _T0_OVF_TCCR0 (*(volatile uint8_t*)(0x53))
#define _T0_OVF_TCNT0 (*(volatile uint8_t*)(0x52))
#define _T0_OVF_TIMSK (*(volatile uint8_t*)(0x59))

#endif /* TIMER0_OVF_ADDRESS_H_ */

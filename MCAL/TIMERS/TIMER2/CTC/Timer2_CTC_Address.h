/*
 * TIMER2_CTC_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER2_CTC_ADDRESS_H_
#define TIMER2_CTC_ADDRESS_H_

#include "../../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _T2_CTC_OCR2  (*(volatile uint8_t*)(0x43))
#define _T2_CTC_TIFR  (*(volatile uint8_t*)(0x58))
#define _T2_CTC_TCCR2 (*(volatile uint8_t*)(0x45))
#define _T2_CTC_TCNT2 (*(volatile uint8_t*)(0x44))
#define _T2_CTC_TIMSK (*(volatile uint8_t*)(0x59))

#endif /* TIMER2_CTC_ADDRESS_H_ */

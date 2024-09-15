/*
 * Timer2_OVF_Address.h
 *
 * Created: 2/16/2224 5:42:36 PM
 *  Author: karim
 */ 


#ifndef TIMER2_OVF_ADDRESS_H_
#define TIMER2_OVF_ADDRESS_H_

#include "../../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _T2_OVF_OCR2  (*(volatile uint8_t*)(0x43))
#define _T2_OVF_TIFR  (*(volatile uint8_t*)(0x58))
#define _T2_OVF_TCCR2 (*(volatile uint8_t*)(0x45))
#define _T2_OVF_TCNT2 (*(volatile uint8_t*)(0x44))
#define _T2_OVF_TIMSK (*(volatile uint8_t*)(0x59))



#endif /* TIMER2_OVF_ADDRESS_H_ */

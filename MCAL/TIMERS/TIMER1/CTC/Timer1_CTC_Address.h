/*
 * Timer0_OVF_Address.h
 *
 * Created: 2/16/2024 5:40:36 PM
 *  Author: karim
 */ 


#ifndef TIMER1_CTC_ADDRESS_H_
#define TIMER1_CTC_ADDRESS_H_

#include "../../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _T1_CTC_OCR1AL  (*(volatile uint8_t*)(0x4A))
#define _T1_CTC_OCR1AH  (*(volatile uint8_t*)(0x4B))
#define _T1_CTC_OCR1A   (*(volatile uint16_t*)(0x4A))
			
#define _T1_CTC_OCR1BL  (*(volatile uint8_t*)(0x48))
#define _T1_CTC_OCR1BH  (*(volatile uint8_t*)(0x49))
#define _T1_CTC_OCR1B   (*(volatile uint16_t*)(0x48))
		
#define _T1_CTC_TCNT1L (*(volatile uint8_t*)(0x4C))
#define _T1_CTC_TCNT1H (*(volatile uint8_t*)(0x4D))
#define _T1_CTC_TCNT1  (*(volatile uint16_t*)(0x4C))
			
#define _T1_CTC_ICR1L  (*(volatile uint8_t*)(0x46))
#define _T1_CTC_ICR1H  (*(volatile uint8_t*)(0x47))
#define _T1_CTC_ICR1   (*(volatile uint16_t*)(0x46))
		
#define _T1_CTC_TCCR1A (*(volatile uint8_t*)(0x4F))
#define _T1_CTC_TCCR1B (*(volatile uint8_t*)(0x4E))
			
#define _T1_CTC_TIFR   (*(volatile uint8_t*)(0x58))
#define _T1_CTC_TIMSK  (*(volatile uint8_t*)(0x59))

#endif /* TIMER1_CTC_ADDRESS_H_ */

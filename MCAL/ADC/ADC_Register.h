/*
 * ADC_Address.h
 *
 * Created: 2/10/2024 4:20:02 PM
 *  Author: karim
 */ 


#ifndef ADC_REGISTER_H_
#define ADC_REGISTER_H_

#include "../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _ADC_ADCL    (*(volatile uint8_t*)(0x24))
#define _ADC_ADCH    (*(volatile uint8_t*)(0x25))
#define _ADC_ADMUX   (*(volatile uint8_t*)(0x27))
#define _ADC_ADCSRA  (*(volatile uint8_t*)(0x26))
#define _ADC_SFIOR   (*(volatile uint8_t*)(0x50))

#define _ADC_DATA    (*(volatile uint16_t*)(0x24))

#endif /* ADC_REGISTER_H_ */

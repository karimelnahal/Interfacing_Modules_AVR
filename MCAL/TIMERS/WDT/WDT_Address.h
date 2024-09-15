/*
 * WDT_Address.h
 *
 * Created: 2/23/2024 5:12:10 PM
 *  Author: karim
 */ 


#ifndef WDT_ADDRESS_H_
#define WDT_ADDRESS_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _WDT_WDTCR  (*(volatile uint8_t*)(0x41))
#define _WDT_MCUCSR (*(volatile uint8_t*)(0x54))



#endif /* WDT_ADDRESS_H_ */

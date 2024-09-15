/*
 * Interrupts_Address.h
 *
 * Created: 2/9/2024 4:53:25 PM
 *  Author: karim
 */ 


#ifndef INTERRUPTS_ADDRESS_H_
#define INTERRUPTS_ADDRESS_H_

#include "../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define _INTERRUPT_GICR   (*(volatile uint8_t*)(0x5B))
#define _INTERRUPT_GIFR   (*(volatile uint8_t*)(0x5A))
#define _INTERRUPT_MCUCR  (*(volatile uint8_t*)(0x55))
#define _INTERRUPT_MCUCSR (*(volatile uint8_t*)(0x54))
#define _INTERRUPT_SREG   (*(volatile uint8_t*)(0x5F))

#endif /* INTERRUPTS_ADDRESS_H_ */

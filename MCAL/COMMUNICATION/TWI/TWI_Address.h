/*
 * TWI_Address.h
 *
 * Created: 3/8/2024 5:05:36 PM
 *  Author: karim
 */ 


#ifndef TWI_ADDRESS_H_
#define TWI_ADDRESS_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define TWI_TWAR (*(volatile uint8_t*)(0x22))
#define TWI_TWBR (*(volatile uint8_t*)(0x20))
#define TWI_TWCR (*(volatile uint8_t*)(0x56))
#define TWI_TWDR (*(volatile uint8_t*)(0x23))
#define TWI_TWSR (*(volatile uint8_t*)(0x21))

#endif /* TWI_ADDRESS_H_ */

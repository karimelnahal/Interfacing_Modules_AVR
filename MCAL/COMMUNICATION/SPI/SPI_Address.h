/*
 * SPI_Address.h
 *
 * Created: 3/8/2024 5:05:36 PM
 *  Author: karim
 */ 


#ifndef SPI_ADDRESS_H_
#define SPI_ADDRESS_H_

#include "../../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"

#define SPI_SPCR (*(volatile uint8_t*) (0x2D))
#define SPI_SPSR (*(volatile uint8_t*) (0x2E))
#define SPI_SPDR (*(volatile uint8_t*) (0x2F))

#endif /* SPI_ADDRESS_H_ */

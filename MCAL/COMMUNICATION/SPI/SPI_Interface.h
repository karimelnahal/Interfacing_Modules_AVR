/*
 * SPI_Interface.h
 *
 * Created: 3/8/2024 5:05:26 PM
 *  Author: karim
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include "../SPI/SPI_Private.h"

void SPI_Master_WithInterrupt_Initialization(void);
void SPI_SLave_WithInterrupt_Initialization(void);
void SPI_Master_WithoutInterrupt_Initialization(void);
void SPI_SLave_WithoutInterrupt_Initialization(void);
void SPI_Transmit_Character(uint8_t dataTransmit);
uint8_t SPI_Receive_Character(void);
uint8_t SPI_TranCeive_Character(uint8_t dataTransmit);
void SPI_Transmit_String(uint8_t* str);
uint8_t* SPI_Receive_String(void);
void SPI_SlaveSelection(spi_Slave slave);

#endif /* SPI_INTERFACE_H_ */

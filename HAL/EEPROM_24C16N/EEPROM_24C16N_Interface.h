/*
 * EEPROM_24C16N_Interface.h
 *
 * Created: 4/27/2024 1:12:58 AM
 *  Author: karim
 */ 


#ifndef EEPROM_24C16N_INTERFACE_H_
#define EEPROM_24C16N_INTERFACE_H_

#include "EEPROM_24C16N_Private.h"

void EEPROM_Initialize(void);
void EEPROM_Write_DataByte(uint16_t wordAddress, uint8_t dataTransmit);
uint8_t EEPROM_Read_DataByte(uint16_t wordAddress);

#endif /* EEPROM_24C16N_INTERFACE_H_ */
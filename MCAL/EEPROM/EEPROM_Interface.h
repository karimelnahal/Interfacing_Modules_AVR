/*
 * EEPROM_Interface.h
 *
 * Created: 3/16/2024 3:47:35 PM
 *  Author: karim
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

#include "EEPROM_Private.h"

void EEPROM_Write_Byte(uint16_t uinAddress, uint8_t uinData);
uint8_t EEPROM_Read_Byte(uint16_t uinAddress);
/* Write a 32-bit double word to EEPROM address */
void eeprom_write_dword (uint32_t *__p, uint32_t __value);
/* Write float value to EEPROM address */
void eeprom_write_float (float *__p, float __value);
/* Write a block of bytes to EEPROM address */
void eeprom_write_block (const void *__src, void *__dst, size_t __n);
/* Update byte value to EEPROM address */
void eeprom_update_byte (uint8_t *__p, uint8_t __value);
/* Update word val to EEPROM address */
void eeprom_update_word (uint16_t *__p, uint16_t __value);
/* Update a 32-bit double word value to EEPROM address */
void eeprom_update_dword (uint32_t *__p, uint32_t __value);
/* Update float value to EEPROM address */
void eeprom_update_float (float *__p, float __value);
/* Up-date a block of bytes to EEPROM address */
void eeprom_update_block (const void *__src, void *__dst, size_t __n);

#endif /* EEPROM_INTERFACE_H_ */
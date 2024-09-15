/*
* EEPROM_24C16N_Program.c
*
* Created: 4/27/2024 1:13:08 AM
*  Author: karim
*/

#include "EEPROM_24C16N_Interface.h"
void EEPROM_Initialize(void)
{
	TWI_Master_Initialize();
}

void EEPROM_Write_DataByte(uint16_t wordAddress, uint8_t dataTransmit)
{
	uint8_t wordAddressL = wordAddress;
	uint8_t wordAddressH = (((wordAddress>>8)&0x07) | 0x50);
	TWI_Start_Condition();
	TWI_Slave_Write_Operation(wordAddressH);
	TWI_Transmit_Byte(wordAddressL);
	TWI_Transmit_Byte(dataTransmit);
	TWI_Stop_Condition();
	_delay_ms(5);
	return;
}

uint8_t EEPROM_Read_DataByte(uint16_t wordAddress)
{
	uint8_t dataReceived = 0;
	uint8_t wordAddressL = wordAddress;
	uint8_t wordAddressH = (((wordAddress>>8)&0x07) | 0x50);
	TWI_Master_Initialize();
	TWI_Start_Condition();
	TWI_Slave_Write_Operation(wordAddressH);
	TWI_Transmit_Byte(wordAddressL);
	TWI_RepeatedStart_Condition();
	TWI_Slave_Read_Operation(wordAddressH);
	dataReceived = TWI_MasterReceiveDataByteWithNoACK();
	TWI_Stop_Condition();
	_delay_ms(5);
	return dataReceived;
}
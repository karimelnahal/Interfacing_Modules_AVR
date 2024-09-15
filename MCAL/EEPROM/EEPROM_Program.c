/*
* EEPROM_Program.c
*
* Created: 3/16/2024 3:48:15 PM
*  Author: karim
*/

#include "EEPROM_Interface.h"

void EEPROM_Write_Byte(uint16_t uinAddress, uint8_t uinData)
{
	/*
	1. Wait until EEWE becomes zero.
	2. Wait until SPMEN in SPMCR becomes zero.
	3. Write new EEPROM address to EEAR (optional) or increment by default next address
	4. Write new EEPROM data to EEDR (optional).
	5. Write a logical one to the EEMWE bit while writing a zero to EEWE in EECR.
	6. Within four clock cycles after setting EEMWE, write a logical one to EEWE.
	*/
	
	/* Wait for completion of previous write if exists*/
	while(_EEPROM_EECR & (1<<EEWE));
	if(uinAddress >= 0 && uinAddress < 1024)//0->1023
	{
		/* Set up address and data registers */
		_EEPROM_EEAR = uinAddress;
		_EEPROM_EEDR = uinData;
		/* Write logical one to EEMWE */
		_EEPROM_EECR |= (1<<EEMWE);
		/* Start EEPROM write by setting EEWE */
		_EEPROM_EECR |= (1<<EEWE);
	}
}

uint8_t EEPROM_Read_Byte(uint16_t uinAddress)
{
	uint8_t eepromData = 0;
	/* Wait for completion of previous write if exists*/
	while(_EEPROM_EECR & (1<<EEWE));
	if(uinAddress >= 0 && uinAddress < 1024)//0->1023
	{
		/* Set up address register */
		_EEPROM_EEAR = uinAddress;
		/* Start EEPROM read by writing EERE */
		_EEPROM_EECR |= (1<<EERE);
		/* Return data from data register */
		eepromData = _EEPROM_EEDR;
	}
	return eepromData;
}

eeprom_status EEPROM_Erase_Byte(uint16_t uinAddress)
{
	/*
	Every time flash code will automatically erase EEPROM every time
	*/
	return EEPROM_OK;
}
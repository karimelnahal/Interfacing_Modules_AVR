/*
* SPI_Program.c
*
* Created: 3/8/2024 5:05:45 PM
*  Author: karim
*/

#include "../SPI/SPI_Interface.h"

void SPI_Master_WithInterrupt_Initialization(void)
{
	DDRB |= ((1<<MOSI) | (1<<SCK) | (1<<SS));
	DDRB &=~(1<<MISO);
	_SPI_SPCR = 0xD3; //0b1101 0011
}

void SPI_SLave_WithInterrupt_Initialization(void)
{
	DDRB &=~((1<<MOSI) | (1<<SCK) | (1<<SS));
	DDRB |= (1<<MISO);
	_SPI_SPCR = 0xC3; //0b1100 0011
}

void SPI_Master_WithoutInterrupt_Initialization(void)
{
	DDRB |= ((1<<MOSI) | (1<<SCK) | (1<<SS));
	DDRB &=~(1<<MISO);
	_SPI_SPCR = 0x53; //0b01010011
}

void SPI_SLave_WithoutInterrupt_Initialization(void)
{
	DDRB &=~((1<<MOSI) | (1<<SCK) | (1<<SS));
	DDRB |= (1<<MISO);
	_SPI_SPCR = 0x43; //0b01000011
}

void SPI_Transmit_Character(uint8_t dataTransmit)
{
	_SPI_SPDR = dataTransmit;
	while (GET_BIT(_SPI_SPSR, SPIF) != 1);
}

uint8_t SPI_Receive_Character(void)
{
	uint8_t dataReceive = 0;
	while (GET_BIT(_SPI_SPSR, SPIF) != 1);
	dataReceive = _SPI_SPDR;
	return dataReceive;
}

uint8_t SPI_TranCeive_Character(uint8_t dataTransmit)
{
	uint8_t dataReceive = 0;
	_SPI_SPDR = dataTransmit;
	while (GET_BIT(_SPI_SPSR, SPIF) != 1);
	dataReceive = _SPI_SPDR;
	return dataReceive;
}

void SPI_Transmit_String(uint8_t* str)
{
	while (*str != '\0')
	{
		SPI_Transmit_Character(*str);
		str++;
	}
}

uint8_t* SPI_Receive_String(void)
{
	uint8_t characters = 'D';
	uint8_t* str = (uint8_t*)' ';
	while (characters != '\0')
	{
		characters = SPI_Receive_Character();
		*str += characters;
	}
	return str;
}

void SPI_SlaveSelection(spi_Slave slave)
{
	switch (slave)
	{
		case SPI_SLAVE0:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case SPI_SLAVE1:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case SPI_SLAVE2:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case SPI_SLAVE3:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
	}
}

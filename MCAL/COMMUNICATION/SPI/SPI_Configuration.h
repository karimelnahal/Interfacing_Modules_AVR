/*
 * SPI_Configuration.h
 *
 * Created: 3/8/2024 5:04:59 PM
 *  Author: karim
 */ 


#ifndef SPI_CONFIGURATION_H_
#define SPI_CONFIGURATION_H_

#include "../SPI/SPI_Address.h"

//Pin names
#define MOSI   PB5
#define MISO   PB6
#define SCK    PB7
#define SS     PB4

typedef enum
{
	SPI_SLAVE0 = 0,
	SPI_SLAVE1 = 1,
	SPI_SLAVE2 = 2,
	SPI_SLAVE3 = 3
}spi_Slave;

typedef enum
{
	SPI_PRE4   = 0,
	SPI_PRE16  = 1,
	SPI_PRE64  = 2,
	SPI_PRE128 = 3
}spi_Prescalar;

typedef enum
{
	SPI_Rising  = 0,
	SPI_Falling = 1
}spi_ClockPolarity;

typedef enum
{
	SPI_Sample = 0,
	SPI_Setup  = 1
}spi_ClockPhase;

typedef enum
{
	SPI_LSB = 0,
	SPI_MSB = 1
}spi_DataOrder;

typedef enum
{
	SPI_Slave  = 0,
	SPI_Master = 1
}spi_ModeSelect;

#endif /* SPI_CONFIGURATION_H_ */

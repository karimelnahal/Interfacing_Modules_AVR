/*
 * TWI_Interface.h
 *
 * Created: 3/8/2024 5:05:26 PM
 *  Author: karim
 */ 


#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

#include "../TWI/TWI_Private.h"

//Another option
void TWI_Initialize(twi_mode mode, uint8_t slaveAddress);
void TWI_Transmit(uint8_t data, uint8_t address, uint8_t operation);
uint8_t TWI_Receive(uint8_t addres);
// Define Mode of Operation
void TWI_Master_Initialize(void);
void TWI_SLave_Initialize(uint8_t slaveNumber);
/*Frame of I2C*/
//Start Condition Or Repeated Start
void TWI_Start_Condition(void);
void TWI_RepeatedStart_Condition(void);
//Slave Address + Operation
void TWI_Slave_Write_Operation(uint8_t address);
void TWI_Slave_Read_Operation(uint8_t address);
//Data + Operation
void TWI_Trasmit_Byte(uint8_t data);
uint8_t TWI_Receive_Byte(void);
//Stop Condition
void TWI_Stop_Condition(void);



#endif /* TWI_INTERFACE_H_ */

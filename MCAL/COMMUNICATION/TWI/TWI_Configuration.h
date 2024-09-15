/*
 * TWI_Configuration.h
 *
 * Created: 3/8/2024 5:04:59 PM
 *  Author: karim
 */ 


#ifndef TWI_CONFIGURATION_H_
#define TWI_CONFIGURATION_H_

#include "../TWI/TWI_Address.h"

#define TWI_SDA PC1
#define TWI_SCL PC0

//Another option, Create new data type
typedef enum
{
	TWI_SLave = 0,
	TWI_Master = 1
}twi_mode;
typedef enum
{
	Master_Start_Ack = 0x08,
	Master_Repeated_Start_Ack = 0x10,
	Master_SLA_WR_Ack = 0x18,
	Master_SLA_WR_NAck = 0x20,
	Master_Data_Trasmit_Ack = 0x28,
	Master_Data_Trasmit_NAck = 0x30,
	Master_ArbitrationLost_SLA_WR = 0x38,
	Master_SLA_RD_ACK = 0x40,
	Master_SLA_RD_NACK = 0x48,
	Master_Data_receive_Ack = 0x50,
	Master_Data_receive_NAck = 0x58,
}twi_master_status;

#define START_ACK                0x08 // Start has been transmitted
#define REP_START_ACK            0x10 // Repeated start has been transmitted
#define STOP_ACK                 0xA0 // Stop has been transmitted
#define SLAVE_ADD_WR_ACK         0x18 // Slave address + Write transmitted acknowledgment has been received
#define SLAVE_ADD_WR_NOACK       0x20 // Slave address + Write transmitted acknowledgment has not been received
#define SLAVE_ADD_RD_ACK         0x40 // Slave address + Read transmitted acknowledgment has been received
#define SLAVE_ADD_RD_NOACK       0x48 // Slave address + Read transmitted acknowledgment has not been received
#define WR_BYTE_ACK              0x28 // Data byte + Write transmitted acknowledgment has been received
#define WR_BYTE_NOACK            0x30 // Data byte + Write transmitted acknowledgment has not been received
#define RD_BYTE_ACK              0x50 // Data byte + Write transmitted acknowledgment has been received
#define RD_BYTE_NOACK            0x58 // Data byte + Write transmitted acknowledgment has not been received
#define SLAVE_ADD_RCVD_WR_REQ    0x60 // Slave received + Write own address acknowledgment has been received
#define SLAVE_ADD_RCVD_RD_REQ    0xA8 // Slave received + Read own address acknowledgment has been received
#define SLAVE_DATA_RECEIVED
#define SLAVE_DATA_TRANSMIT

#endif /* TWI_CONFIGURATION_H_ */

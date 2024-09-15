/*
 * DIO_Interface.h
 *
 * Created: 1/13/2024 4:59:56 PM
 *  Author: karim
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../DIO/DIO_Private.h"

void DIO_SetPinDirection(dioPort port, dioPin pin, dioState state);

void DIO_SetPinValue(dioPort port, dioPin pin, dioStatus status);

void DIO_TogglePinValue(dioPort port, dioPin pin);

uint8_t DIO_GetPinValue(dioPort port, dioPin pin);

void DIO_SetPinPullUp(dioPort port, dioPin pin);

#endif /* DIO_INTERFACE_H_ */

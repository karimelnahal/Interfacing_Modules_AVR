/*
 * DC_Interface.h
 *
 * Created: 3/1/2024 2:54:13 PM
 *  Author: karim
 */ 


#ifndef DC_INTERFACE_H_
#define DC_INTERFACE_H_

#include "../../MOTORS/DC/DC_Private.h"

void DC_Motor_Initialize(void);
void DC_Rotate(dcMotor motor, dcDirection direction);
void DC_Brake(dcMotor motor);


#endif /* DC_INTERFACE_H_ */

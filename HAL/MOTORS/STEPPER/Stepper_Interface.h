/*
 * Stepper_Interface.h
 *
 * Created: 3/1/2024 2:55:43 PM
 *  Author: karim
 */ 


#ifndef STEPPER_INTERFACE_H_
#define STEPPER_INTERFACE_H_


#include "Stepper_Private.h"

void Stepper_Initialization(void);

void Stepper_Rotate(stepperStep step, stepperDirection direction);

void Stepper_Brake(void);


#endif /* STEPPER_INTERFACE_H_ */
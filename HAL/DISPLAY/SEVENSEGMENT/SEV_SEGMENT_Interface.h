/*
 * SEV_SEGMENT_Interface.h
 *
 * Created: 1/26/2024 2:56:05 PM
 *  Author: karim
 */ 


#ifndef SEV_SEGMENT_INTERFACE_H_
#define SEV_SEGMENT_INTERFACE_H_

#include "../SEVENSEGMENT/SEV_SEGMENT_Private.h"

void SEVENSEGMENT_Initialize(void);
void SEVENSEGMENT_DIP_Enable(void);
void SEVENSEGMENT_DIP_Disable(void);
void SEVENSEGMENT_Display_Number(uint8_t number);

#endif /* SEV_SEGMENT_INTERFACE_H_ */

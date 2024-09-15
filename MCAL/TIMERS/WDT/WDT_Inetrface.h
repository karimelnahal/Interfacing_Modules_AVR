/*
 * WDT_Inetrface.h
 *
 * Created: 2/23/2024 5:12:27 PM
 *  Author: karim
 */ 


#ifndef WDT_INETRFACE_H_
#define WDT_INETRFACE_H_

#include "WDT_Private.h"

void WDT_Initialize (void);

void WDT_Start (WDT_Voltage volt, WDT_Prescaler_3V pre3Volt, WDT_Prescaler_5V pre5Volt);

void WDT_Refresh (void);



#endif /* WDT_INETRFACE_H_ */
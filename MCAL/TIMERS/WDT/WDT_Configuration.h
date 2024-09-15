/*
 * WDT_Configuration.h
 *
 * Created: 2/23/2024 5:12:37 PM
 *  Author: karim
 */ 


#ifndef WDT_CONFIGURATION_H_
#define WDT_CONFIGURATION_H_

#include "WDT_Address.h"

typedef enum
{
	WDT_3V = 0,
	WDT_5V = 1
}WDT_Voltage;

typedef enum
{
	WDT_3V_17ms = 0,
	WDT_3V_34ms = 1,
	WDT_3V_68ms = 2,
	WDT_3V_140ms = 3,
	WDT_3V_270ms = 4,
	WDT_3V_550ms = 5,
	WDT_3V_1100ms = 6,
	WDT_3V_2200ms = 7
}WDT_Prescaler_3V;

typedef enum
{
	WDT_5V_16ms = 0,
	WDT_5V_32ms = 1,
	WDT_5V_65ms = 2,
	WDT_5V_130ms = 3,
	WDT_5V_260ms = 4,
	WDT_5V_520ms = 5,
	WDT_5V_1000ms = 6,
	WDT_5V_2100ms = 7
}WDT_Prescaler_5V;


#endif /* WDT_CONFIGURATION_H_ */
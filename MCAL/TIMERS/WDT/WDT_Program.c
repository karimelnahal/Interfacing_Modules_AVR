/*
 * WDT_Program.c
 *
 * Created: 2/23/2024 5:12:47 PM
 *  Author: karim
 */ 
#include "WDT_Inetrface.h"



void WDT_Initialize (void)
{
	//Enable Watchdog timer & enable watchdog timer turn_off
	_WDT_WDTCR |= ((1<<WDTOE)|(1<<WDE));
}

void WDT_Start (WDT_Voltage volt, WDT_Prescaler_3V pre3Volt, WDT_Prescaler_5V pre5Volt)
{
	_WDT_WDTCR |= ((1<<WDP2)|(1<<WDP1)|(1<<WDP0));
}

void WDT_Refresh (void)
{
	//Watchdog reset functionality 
	asm("WDR");
}
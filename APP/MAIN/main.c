/*
* AMIT_D62_Interfacing.c
*
* Created: 1/12/2024 5:19:57 PM
* Author : karim
*/


#include "../MAIN/main.h"

int main()
{
	LCD_Initialize();
	LCD_Clear_Screen();
	LCD_Write_String("FreeRTOS...");
	_delay_ms(1500);
	freeRTOS_API_Run();
	while (1)
	{
	
	}
}

ISR(INT0_vect)
{
	LED0_Toggle();
}
ISR(INT1_vect)
{
	LED1_Toggle();
}

extern uint32_t _T0_OVF_Count;
extern uint8_t  _T0_OVF_iValue;
ISR(TIMER0_OVF_vect)
{
	static uint32_t cntT0 = 0;
	if(cntT0 == _T0_OVF_Count)
	{
		LED0_Toggle();
		_T0_OVF_TCNT0 = _T0_OVF_iValue;
		cntT0 = 0;
	}
	cntT0++;
}

extern uint32_t _T1_OVF_Count;
extern uint16_t _T1_OVF_iValue;
ISR(TIMER1_OVF_vect)
{
	static uint32_t cntT1 = 0;
	if(cntT1 == _T1_OVF_Count)
	{
		RELAY_Toggle();
		_T1_OVF_TCNT1 = _T1_OVF_iValue;	
		cntT1 = 0;
	}
	cntT1++;
}

extern uint32_t _T2_OVF_Count;
extern uint8_t  _T2_OVF_iValue;
ISR(TIMER2_OVF_vect)
{
	static uint32_t cntT2 = 0;
	if(cntT2 == _T2_OVF_Count)
	{
		LED1_Toggle();
		_T2_OVF_TCNT2 = _T2_OVF_iValue;
		cntT2 = 0;
	}
	cntT2++;
}

/*
* Interrupts_Program.c
*
* Created: 2/9/2024 4:53:56 PM
*  Author: karim
*/


#include "../Interrupts/Interrupts_Interface.h"

void External_Interrupt_Initialization(interruptPin intrrupt, interruptSense sense)
{
	cli();//Disable global interrupt clear bit 7 in SREG (Apartment door)
	switch (intrrupt)
	{
		case EXT_INT0:
		CLR_BIT(DDRD, INT0);//Define direction for interrupt pin as input
		SET_BIT(GICR, INT0);//Enable peripheral interrupt (Room door)
		switch (sense)
		{
			case EXT_INTERRUPT_SENSE_LOW:
			CLR_BIT(_INTERRUPT_MCUCR, ISC01); CLR_BIT(_INTERRUPT_MCUCR, ISC00);// 0       0
			break;
			case EXT_INTERRUPT_SENSE_HIGH:
			CLR_BIT(_INTERRUPT_MCUCR, ISC01); SET_BIT(_INTERRUPT_MCUCR, ISC00);// 0       1
			break;
			case EXT_INTERRUPT_SENSE_FALLING:
			SET_BIT(_INTERRUPT_MCUCR, ISC01); CLR_BIT(_INTERRUPT_MCUCR, ISC00);// 1       0
			break;
			case EXT_INTERRUPT_SENSE_RISING:
			SET_BIT(_INTERRUPT_MCUCR, ISC01); SET_BIT(_INTERRUPT_MCUCR, ISC00);// 1       1
			break;
		}
		break;
		case EXT_INT1:
		CLR_BIT(DDRD, INT1);//Define direction for interrupt pin as input
		SET_BIT(GICR, INT1);//Enable peripheral interrupt (Room door)
		switch (sense)
		{
			case EXT_INTERRUPT_SENSE_LOW:
			CLR_BIT(_INTERRUPT_MCUCR, ISC11); CLR_BIT(_INTERRUPT_MCUCR, ISC10);// 0       0
			break;
			case EXT_INTERRUPT_SENSE_HIGH:
			CLR_BIT(_INTERRUPT_MCUCR, ISC11); SET_BIT(_INTERRUPT_MCUCR, ISC10);// 0       1
			break;
			case EXT_INTERRUPT_SENSE_FALLING:
			SET_BIT(_INTERRUPT_MCUCR, ISC11); CLR_BIT(_INTERRUPT_MCUCR, ISC10);// 1       0
			break;
			case EXT_INTERRUPT_SENSE_RISING:
			SET_BIT(_INTERRUPT_MCUCR, ISC11); SET_BIT(_INTERRUPT_MCUCR, ISC10);// 1       1
			break;
		}
		break;
		case EXT_INT2:
		break;
	}
	sei();//Enable global interrupt set bit 7 in SREG (Apartment door)
}

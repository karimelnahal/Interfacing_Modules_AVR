/*
* ADC_Program.c
*
* Created: 2/10/2024 4:20:49 PM
*  Author: karim
*/

#include "../ADC/ADC_Interface.h"


void ADC_Initialize_WithoutInterrupt (adc_vref vref, adc_prescaler prescaler)
{
	/*
	1- ADC enable
	2- select prescaler
	3- Auto-Trigger
	4- Right adjust
	5- Disable peripheral interrupt
	*/
	_ADC_ADMUX  = 0x40;  //0b 0100 0000
	_ADC_ADCSRA = 0xA7;  //0b 1010 0111
}

void ADC_Initialize_WithInterrupt(adc_vref vref, adc_prescaler prescaler)
{
	/*
	1- ADC enable
	2- select prescaler
	3- Auto-Trigger
	4- Right adjust
	5- Enable peripheral interrupt
	*/
	_ADC_ADMUX  = 0x40;  //0b 0100 0000
	_ADC_ADCSRA = 0xAF;  //0b 1010 1111
}

uint16_t ADC_Read(adc_channel channel)
{
	/*
	1- Create variable for reading
	2- Choose channel to read
	3- Start conversion
	4- Wait until end conversion
	5- Return reading
	*/
	uint16_t ADC_read = 0;
	switch (channel)
	{
		case ADC_channel_0:
		_ADC_ADMUX = 0x40;//0b 010 00000
		break;
		case ADC_channel_1:
		_ADC_ADMUX = 0x41;//0b 010 00001
		break;
		case ADC_channel_2:
		_ADC_ADMUX = 0x42;//0b 010 00010
		break;
		case ADC_channel_3:
		_ADC_ADMUX = 0x43;//0b 010 00011
		break;
		case ADC_channel_4:
		_ADC_ADMUX = 0x44;//0b 010 00100
		break;
		case ADC_channel_5:
		_ADC_ADMUX = 0x45;//0b 010 00101
		break;
		case ADC_channel_6:
		_ADC_ADMUX = 0x46;//0b 010 00110
		break;
		case ADC_channel_7:
		_ADC_ADMUX = 0x47;//0b 0100 0111
		break;
		default:
		_ADC_ADMUX = 0x40;
		break;
	}
	_ADC_ADCSRA |= (1<<ADSC);
	while (GET_BIT(_ADC_ADCSRA, ADIF) != 1);
	ADC_read = _ADC_DATA;
	return ADC_read;
}

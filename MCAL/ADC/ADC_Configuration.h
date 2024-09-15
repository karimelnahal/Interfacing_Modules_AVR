/*
* ADC_Configuration.h
*
* Created: 2/10/2024 4:20:21 PM
*  Author: karim
*/


#ifndef ADC_CONFIGURATION_H_
#define ADC_CONFIGURATION_H_

#include "../ADC/ADC_Register.h"
//Renaming voltage reference
typedef enum
{
	ADC_Aref = 0,
	ADC_Avcc = 1,
	ADC_Internal = 2
}adc_vref;
//Renaming channels
typedef enum
{
	ADC_channel_0 = 0,
	ADC_channel_1 = 1,
	ADC_channel_2 = 2,
	ADC_channel_3 = 3,
	ADC_channel_4 = 4,
	ADC_channel_5 = 5,
	ADC_channel_6 = 6,
	ADC_channel_7 = 7
}adc_channel;
//Renaming Pre-Scalar
typedef enum
{
	ADC_PRE1   = 0,
	ADC_PRE2   = 1,
	ADC_PRE4   = 2,
	ADC_PRE8   = 3,
	ADC_PRE16  = 4,
	ADC_PRE32  = 5,
	ADC_PRE64  = 6,
	ADC_PRE128 = 7
}adc_prescaler;

#endif /* ADC_CONFIGURATION_H_ */

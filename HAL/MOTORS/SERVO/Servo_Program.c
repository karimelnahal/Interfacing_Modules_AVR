/*
* Servo_Program.c
*
* Created: 3/1/2024 5:27:34 PM
*  Author: karim
*/


#include "../../MOTORS/SERVO/Servo_Interface.h"

void ServoMotor_Initialize(void)
{
	//Define direction of OC1A pin
	DDRD |= (1<<PD5);
	//Choose mode of timer 1
	TCCR1B |= ((1<<WGM13) | (1<<WGM12) | (1<<WGM13));
	TCCR1A &=~(1<<WGM10);
	//Choose non-inverting
	TCCR1A |= (1<<COM1A1);
	TCCR1A &=~(1<<COM1A0);
	//Choose PreScalar
	TCCR1B |= (1<<CS12);
	TCCR1B &=~((1<<CS11)|(1<<CS10));
	//Choose new top value
	ICR1 = 1249;
}
void ServoMotor_Rotate(uint8_t angle)
{
	OCR1A = ((ICR1 * angle) / 100) - 1;
}

void SERVO_DIO_Initialize(void)
{
	SERVO_DDR = 0xFF;
}
void Servo_DIO_AngleRotation(void)
{
	SERVO_PORT = 0xFF;
	_delay_us(1000);
	SERVO_PORT = 0x00;
	
	_delay_ms(1000);
	
	SERVO_PORT = 0xFF;
	_delay_us(1500);
	SERVO_PORT = 0x00;
	
	_delay_ms(1000);
	
	SERVO_PORT = 0xFF;
	_delay_us(2000);
	SERVO_PORT = 0x00;
	
	_delay_ms(1000);
	
	SERVO_PORT = 0xFF;
	_delay_us(1500);
	SERVO_PORT = 0x00;
	
	_delay_ms(1000);
	
	SERVO_PORT = 0xFF;
	_delay_us(1000);
	SERVO_PORT = 0x00;
	
	_delay_ms(1000);
}

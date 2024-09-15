/*
 * DIO_Address.h
 *
 * Created: 1/13/2024 4:59:18 PM
 *  Author: karim
 */ 


#ifndef DIO_ADDRESS_H_
#define DIO_ADDRESS_H_

#define _DIO_PORTA (*(volatile uint8_t*)(0x3B))
#define _DIO_DDRA  (*(volatile uint8_t*)(0x3A))
#define _DIO_PINA  (*(volatile uint8_t*)(0x39))
		
#define _DIO_PORTB (*(volatile uint8_t*)(0x38))
#define _DIO_DDRB  (*(volatile uint8_t*)(0x37))
#define _DIO_PINB  (*(volatile uint8_t*)(0x36))
		
#define _DIO_PORTC (*(volatile uint8_t*)(0x35))
#define _DIO_DDRC  (*(volatile uint8_t*)(0x34))
#define _DIO_PINC  (*(volatile uint8_t*)(0x33))
		
#define _DIO_PORTD (*(volatile uint8_t*)(0x32))
#define _DIO_DDRD  (*(volatile uint8_t*)(0x31))
#define _DIO_PIND  (*(volatile uint8_t*)(0x30))

#endif /* DIO_ADDRESS_H_ */
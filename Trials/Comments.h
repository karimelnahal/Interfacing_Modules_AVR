/*
 * Comments.h
 *
 * Created: 4/5/2024 3:31:00 PM
 *  Author: karim
 */ 


#ifndef COMMENTS_H_
#define COMMENTS_H_


/*
MCAL
1- DIO
2- CPU Configuration
HAL
1- LCD
2- Keypad
3- Buttons
4- LEDS
APP
1- Real life calculator
*/
/*
#include <string.h>

int main(void)
{
uint8_t read = 0, i, num1[4], num2[4], operand, num1Iter = 0, num2Iter = 0;
uint32_t result = 0;
LCD_Initialize();
LCD_Clear_Screen();
Keypad_Initialize();
LCD_Write_Location(ROW0, COL0);
LCD_Write_String((uint8_t*)"***Calculator***");
_delay_ms(250);
LCD_Write_Location(ROW1, COL0);
LCD_Write_String((uint8_t*)"Loading");
for (i = 0; i < 9; i++)
{
_delay_ms(250);
LCD_Write_Character('.');
}
_delay_ms(250);
LCD_Clear_Screen();
LCD_Write_Location(ROW0, COL0);
Replace with your application code
while (1)
{
_delay_ms(10);
read = Keypad_Read();
if(read != 0)
{
if(read == 'C')
{
LCD_Clear_Screen();
num1Iter = 0;
num2Iter = 0;
}
else if(read == '=')
{
LCD_Write_Location(ROW1, COL0);
LCD_Write_String((uint8_t*)"Num1= ");
for (i = 0; (i < strlen(num1)) && (i <= num1Iter); i++)
{
LCD_Write_Character(num1[i]);
}
//LCD_Write_String((uint8_t*)num1);
}
else
{
if(read != '+' || read != '-' || read != '*' || read != '/')
{
if(num1Iter <= 3)
{
num1[num1Iter++] = read;
}
else
{
num1Iter = 0;
}
}
LCD_Write_Character(read);
}
read = 0;
}
}
}
*/



#endif /* COMMENTS_H_ */
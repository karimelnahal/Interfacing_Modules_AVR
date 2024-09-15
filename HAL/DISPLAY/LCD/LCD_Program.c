/*
* LCD_Program.c
*
* Created: 1/27/2024 4:11:30 PM
*  Author: karim
*/

#include "../LCD/LCD_Interface.h"

void reverse(char* str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int intToStr(int x, char str[], int d)
{
	int i = 0;
	while (x) {
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	
	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
	str[i++] = '0';
	
	reverse(str, i);
	str[i] = '\0';
	return i;
}
void ftoa(float n, char* res, int afterpoint)
{
	// Extract integer part
	int ipart = (int)n;
	
	// Extract floating part
	float fpart = n - (float)ipart;
	
	// convert integer part to string
	int i = intToStr(ipart, res, 0);
	
	// check for display option after point
	if (afterpoint != 0) {
		res[i] = '.'; // add dot
		
		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter
		// is needed to handle cases like 233.007
		fpart = fpart * pow(10, afterpoint);
		
		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}

void LCD_Initialize(void)
{
	DIO_SetPinDirection(LCD_DATA_PORT, LCD_D4, LCD_OUTPUT);
	DIO_SetPinDirection(LCD_DATA_PORT, LCD_D5, LCD_OUTPUT);
	DIO_SetPinDirection(LCD_DATA_PORT, LCD_D6, LCD_OUTPUT);
	DIO_SetPinDirection(LCD_DATA_PORT, LCD_D7, LCD_OUTPUT);
	
	DIO_SetPinDirection(LCD_CONTROL_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPinDirection(LCD_CONTROL_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPinDirection(LCD_CONTROL_PORT, LCD_EN, LCD_OUTPUT);
	
	LCD_Write_Command(0x33);
	LCD_Write_Command(0x32);
	LCD_Write_Command(0x28);
	LCD_Write_Command(0x01);//Clear Screen
	LCD_Write_Command(0x02);//Return home
	LCD_Write_Command(0x06);//Shift cursor right
	LCD_Write_Command(0x0C);//Display On, Cursor Off
	_delay_ms(2);
}
void LCD_Clear_Screen(void)
{
	LCD_Write_Command(0x01);//Clear Screen
}
void LCD_Write_Command(uint8_t command)
{
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_RS, LCD_LOW);//Select control register
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_RW, LCD_LOW);//Write on LCD
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW);//Disable LCD
	//Send High Nibble
	LCD_PORT = (command & 0xF0) | (LCD_PORT & 0x0F);
	//Send high to low pulse for 1ms
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_HIGH);//Enable LCD
	_delay_ms(1);
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW);//Disable LCD
	//Send Low Nibble
	LCD_PORT = ((command & 0x0F) << 4) | (LCD_PORT & 0x0F);
	//Send high to low pulse for 1ms
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_HIGH);//Enable LCD
	_delay_ms(1);
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW);//Disable LCD
	_delay_ms(2);
}
void LCD_Write_Character(uint8_t character)
{
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_RS, LCD_HIGH);//Select data register
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_RW, LCD_LOW) ;//Write on LCD
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW) ;//Disable LCD
	//Send High Nibble
	LCD_PORT = (character & 0xF0) | (LCD_PORT & 0x0F);
	//Send high to low pulse for 1ms
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_HIGH);//Enable LCD
	_delay_ms(1);
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW);//Disable LCD
	//Send Low Nibble
	LCD_PORT = ((character & 0x0F) << 4) | (LCD_PORT & 0x0F);
	//Send high to low pulse for 1ms
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_HIGH);//Enable LCD
	_delay_ms(1);
	DIO_SetPinValue(LCD_CONTROL_PORT, LCD_EN, LCD_LOW);//Disable LCD
	_delay_ms(2);
}
void LCD_Write_String(uint8_t* string)
{
	while (*string != '\0')
	{
		LCD_Write_Character(*string);
		string++;
		_delay_ms(10);
	}
}
void LCD_Write_IntegerNumber(uint32_t IntNumber)
{
	char Inum[10];
	ltoa(IntNumber, Inum, 10);//Long to Ascii
	LCD_Write_String((uint8_t*)Inum);
}
void LCD_Write_FloatNumber(fint32_t FltNumber)
{
	char Fnum[10];
	ftoa(FltNumber, Fnum, 3);//Float to Ascii
	LCD_Write_String((uint8_t*)Fnum);
}
void LCD_Write_Location(row Rows, column Columns)
{
	uint8_t location = 0;
	switch(Rows)
	{
		case ROW0:
		location = 0x80 + Columns;
		break;
		case ROW1:
		location = 0xC0 + Columns;
		break;
	}
	LCD_Write_Command(location);
}
void LCD_Write_SpecialCharacter(uint8_t* customChatacter, uint8_t location)
{
	//uint8_t iter = 0;
	/*Start write location 0 in CGRAM*/
	LCD_Write_Command(0x40);
	/*Write array that has been executed from web-site*/
	/*for(iter = 0; iter < 8; iter++)
	{
		LCD_Write_Character(customChatacter[iter]);
	}*/
	LCD_Write_Character(0x0E);
	LCD_Write_Character(0x0A);
	LCD_Write_Character(0x04);
	LCD_Write_Character(0x1F);
	LCD_Write_Character(0x04);
	LCD_Write_Character(0x04);
	LCD_Write_Character(0x1B);
}

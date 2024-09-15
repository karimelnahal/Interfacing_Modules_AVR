/*
 * LCD_Private.h
 *
 * Created: 1/27/2024 4:10:59 PM
 *  Author: karim
 */ 


#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../LCD/LCD_Configuration.h"

void reverse(char* str, int len);
int intToStr(int x, char str[], int d);
void ftoa(float n, char* res, int afterpoint);

#endif /* LCD_PRIVATE_H_ */

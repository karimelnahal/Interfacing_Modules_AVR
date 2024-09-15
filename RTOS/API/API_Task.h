/*
 * API_Task.h
 *
 * Created: 4/6/2024 2:51:33 PM
 *  Author: karim
 */ 


#ifndef API_TASK_H_
#define API_TASK_H_

#include "../../MCAL/CPU_CONFIGURATION/CPU_Configuration.h"
#include "../../MCAL/CPU_CONFIGURATION/PERIPHERAL_LIBRARY.h"
#include "../../HAL/HAL_CONFIGURATION/MODULE_LIBRARY.h"
#include "../Header/FreeRTOS.h"
#include "../Header/task.h"
#include "../Header/semphr.h"
//Function ProtoTypes 
void freeRTOS_API_Run(void);
/* ---------------------------------Task 0 Initialize-------------------------------------- */
void vTask0_Initialize(void* ptr);
/* ---------------------------------Task 1 LED0 Toggle------------------------------------- */
void vTask1_LED0_Toggle(void* ptr);
/* ---------------------------------Task 2 LED0 On----------------------------------------- */
void vTask2_LED0_ON(void* ptr);
/* ---------------------------------Task 3 LED0 Off---------------------------------------- */
void vTask3_LED0_OFF(void* ptr);
/* ---------------------------------Task 4 LED1 Toggle------------------------------------- */
void vTask4_LED1_Toggle(void* ptr);
/* ---------------------------------Task 5 LED1 On----------------------------------------- */
void vTask5_LED1_ON(void* ptr);
/* ---------------------------------Task 6 LED1 Off---------------------------------------- */
void vTask6_LED1_OFF(void* ptr);
/* ---------------------------------Task 7 LED2 Toggle------------------------------------- */
void vTask7_LED2_Toggle(void* ptr);
/* ---------------------------------Task 8 LED2 On----------------------------------------- */
void vTask8_LED2_ON(void* ptr);
/* ---------------------------------Task 9 LED2 Off---------------------------------------- */
void vTask9_LED2_OFF(void* ptr);
/* ---------------------------------Task 10 LCD Write Count-------------------------------- */
void vTask10_LCD_Write_Count(void* ptr);
/* ---------------------------------Task 11 LCD Write Count-------------------------------- */
void vTask11_LCD_Write_Count(void* ptr);
/* ---------------------------------Task 12 Push Button0 Press----------------------------- */
void vTask12_BTN0(void* ptr);
/* ---------------------------------Task 13 Push Button1 Press----------------------------- */
void vTask13_BTN1(void* ptr);
/* ---------------------------------Task 14 Push Button2 Press----------------------------- */
void vTask14_BTN2(void* ptr);
/* ---------------------------------Task 15 Push Button0 LED 0----------------------------- */
void vTask15_BTN0_LED0(void* ptr);
/* ---------------------------------Task 16 Push Button1 LED 1----------------------------- */
void vTask16_BTN1_LED1(void* ptr);
/* ---------------------------------Task 17 Push Button2 LED 2----------------------------- */
void vTask17_BTN2_LED2(void* ptr);
/* ---------------------------------Task 18 Push Button0 LCD------------------------------- */
void vTask18_BTN0_LCD_Increment(void* ptr);
/* ---------------------------------Task 19 Push Button1 LCD------------------------------- */
void vTask19_BTN1_LCD_Decrement(void* ptr);


#endif /* API_TASK_H_ */

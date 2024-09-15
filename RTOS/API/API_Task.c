/*
 * API_Task.c
 *
 * Created: 4/6/2024 2:51:22 PM
 *  Author: karim
 */ 

#include "../API/API_Task.h"
/* ---------------------------------Global Variables--------------------------------------- */
uint32_t count = 0;
uint8_t btnFlag0 = 0;
uint8_t btnFlag1 = 0;
uint8_t btnFlag2 = 0;
/* ---------------------------------Task 0 Initialize-------------------------------------- */
TaskHandle_t* Initialize_Task = NULL;
void vTask0_Initialize(void* ptr)
{
	while (1)
	{
		BTN0_Initialize();
		BTN1_Initialize();
		BTN2_Initialize();
		
		LED0_Initialization();
		LED1_Initialization();
		LED2_Initialization();
		
		LED0_ON();
		LED1_ON();
		LED2_ON();
		
		LCD_Initialize();
		LCD_Clear_Screen();
		
		vTaskSuspend( (TaskHandle_t*) Initialize_Task );
	}
}
/* ---------------------------------Task 1 LED0 Toggle------------------------------------- */
TaskHandle_t* LED0_Toggle_Task = NULL;
void vTask1_LED0_Toggle(void* ptr)
{
	while (1)
	{
		LED0_Toggle();
		vTaskDelay(1000);
	}
}
/* ---------------------------------Task 2 LED0 On----------------------------------------- */
TaskHandle_t* LED0_ON_Task = NULL;
void vTask2_LED0_ON(void* ptr)
{
	while (1)
	{
		LED0_ON();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 3 LED0 Off---------------------------------------- */
TaskHandle_t* LED0_OFF_Task = NULL;
void vTask3_LED0_OFF(void* ptr)
{
	while (1)
	{
		LED0_OFF();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 4 LED1 Toggle------------------------------------- */
TaskHandle_t* LED1_Toggle_Task = NULL;
void vTask4_LED1_Toggle(void* ptr)
{
	while (1)
	{
		LED1_Toggle();
		vTaskDelay(1000);
	}
}
/* ---------------------------------Task 5 LED1 On----------------------------------------- */
TaskHandle_t* LED1_ON_Task = NULL;
void vTask5_LED1_ON(void* ptr)
{
	while (1)
	{
		LED1_ON();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 6 LED1 Off---------------------------------------- */
TaskHandle_t* LED1_OFF_Task = NULL;
void vTask6_LED1_OFF(void* ptr)
{
	while (1)
	{
		LED1_OFF();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 7 LED2 Toggle------------------------------------- */
TaskHandle_t* LED2_Toggle_Task = NULL;
void vTask7_LED2_Toggle(void* ptr)
{
	while (1)
	{
		LED2_Toggle();
		vTaskDelay(1000);
	}
}
/* ---------------------------------Task 8 LED2 On----------------------------------------- */
TaskHandle_t* LED2_ON_Task = NULL;
void vTask8_LED2_ON(void* ptr)
{
	while (1)
	{
		LED2_ON();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 9 LED2 Off---------------------------------------- */
TaskHandle_t* LED2_OFF_Task = NULL;
void vTask9_LED2_OFF(void* ptr)
{
	while (1)
	{
		LED2_OFF();
		vTaskDelay(500);
	}
}
/* ---------------------------------Task 10 LCD Write Count-------------------------------- */
TaskHandle_t* LCD_Count1_Task = NULL;
void vTask10_LCD_Write_Count(void* ptr)
{
	while (1)
	{
		LCD_Clear_Screen();
		LCD_Write_Location(ROW0, COL0);
		LCD_Write_String((uint8_t*)"Count = ");
		LCD_Write_IntegerNumber(count++);
		vTaskDelay(3000);
	}
}
/* ---------------------------------Task 11 LCD Write Count-------------------------------- */
TaskHandle_t* LCD_Count2_Task = NULL;
void vTask11_LCD_Write_Count(void* ptr)
{
	while (1)
	{
		LCD_Clear_Screen();
		LCD_Write_Location(ROW1, COL0);
		LCD_Write_String((uint8_t*)"Count = ");
		LCD_Write_IntegerNumber(count++);
		vTaskDelay(3000);
	}
}
/* ---------------------------------Task 12 Push Button0 Press----------------------------- */
TaskHandle_t* Push_Button0_Task = NULL;
void vTask12_BTN0(void* ptr)
{
	uint8_t btnRead = 0;
	while (1)
	{
		btnRead = BTN0_Read();
		if(btnRead != 0)
		{
			btnFlag0 = 1;
			btnRead  = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 13 Push Button1 Press----------------------------- */
TaskHandle_t* Push_Button1_Task = NULL;
void vTask13_BTN1(void* ptr)
{
	uint8_t btnRead = 0;
	while (1)
	{
		btnRead = BTN1_Read();
		if(btnRead != 0)
		{
			btnFlag1 = 1;
			btnRead  = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 14 Push Button2 Press----------------------------- */
TaskHandle_t* Push_Button2_Task = NULL;
void vTask14_BTN2(void* ptr)
{
	uint8_t btnRead = 0;
	while (1)
	{
		btnRead = BTN2_Read();
		if(btnRead != 0)
		{
			btnFlag2 = 1;
			btnRead  = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 15 Push Button0 LED 0----------------------------- */
TaskHandle_t* Push_Button0_LED0_Task = NULL;
void vTask15_BTN0_LED0(void* ptr)
{
	while (1)
	{
		if(btnFlag0 == 1)
		{
			LED0_Toggle();
			btnFlag0 = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 16 Push Button1 LED 1----------------------------- */
TaskHandle_t* Push_Button1_LED1_Task = NULL;
void vTask16_BTN1_LED1(void* ptr)
{
	while (1)
	{
		if(btnFlag1 == 1)
		{
			LED1_Toggle();
			btnFlag1 = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 17 Push Button2 LED 2----------------------------- */
TaskHandle_t* Push_Button2_LED2_Task = NULL;
void vTask17_BTN2_LED2(void* ptr)
{
	while (1)
	{
		if(btnFlag2 == 1)
		{
			LED2_Toggle();
			btnFlag2 = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 18 Push Button0 LCD------------------------------- */
TaskHandle_t* Push_Button0_LCD_Task = NULL;
void vTask18_BTN0_LCD_Increment(void* ptr)
{
	while (1)
	{
		if(btnFlag0 == 1)
		{
			LCD_Clear_Screen();
			LCD_Write_String((uint8_t*)"Count = ");
			LCD_Write_IntegerNumber(++count);
			btnFlag0 = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------Task 18 Push Button0 LCD------------------------------- */
TaskHandle_t* Push_Button1_LCD_Task = NULL;
void vTask19_BTN1_LCD_Decrement(void* ptr)
{
	while (1)
	{
		if(btnFlag1 == 1)
		{
			LCD_Clear_Screen();
			LCD_Write_String((uint8_t*)"Count = ");
			LCD_Write_IntegerNumber(--count);
			btnFlag1 = 0;
		}
		vTaskDelay(100);
	}
}
/* ---------------------------------FreeRTOS API Run--------------------------------------- */
void freeRTOS_API_Run(void)
{
	xTaskCreate(vTask0_Initialize , "Initialize Task"  , configMINIMAL_STACK_SIZE, NULL, 4, Initialize_Task  );
	//xTaskCreate(vTask1_LED0_Toggle, "LED0 TOGLE Task", configMINIMAL_STACK_SIZE, NULL, 3, LED0_Toggle_Task );
	//xTaskCreate(vTask4_LED1_Toggle, "LED1 TOGLE Task", configMINIMAL_STACK_SIZE, NULL, 2, LED1_Toggle_Task );
	//xTaskCreate(vTask7_LED2_Toggle, "LED2 TOGLE Task", configMINIMAL_STACK_SIZE, NULL, 1, LED2_Toggle_Task );
	//xTaskCreate(vTask10_LCD_Write_Count, "LCD Count1", configMINIMAL_STACK_SIZE, NULL, 3, LCD_Count1_Task  );
	//xTaskCreate(vTask11_LCD_Write_Count, "LCD Count2", configMINIMAL_STACK_SIZE, NULL, 3, LCD_Count2_Task  );
	//xTaskCreate(vTask12_BTN0     , "BTN0 Pressed"    , configMINIMAL_STACK_SIZE, NULL, 3, Push_Button0_Task);
	//xTaskCreate(vTask15_BTN0_LED0, "BTN0 LED0 Toggle", configMINIMAL_STACK_SIZE, NULL, 2, Push_Button0_LED0_Task);
	xTaskCreate(vTask12_BTN0              , "BTN0 Pressed"    , configMINIMAL_STACK_SIZE, NULL, 3, Push_Button0_Task    );
	xTaskCreate(vTask13_BTN1              , "BTN1 Pressed"    , configMINIMAL_STACK_SIZE, NULL, 3, Push_Button1_Task    );
	xTaskCreate(vTask18_BTN0_LCD_Increment, "BTN0 Pressed LCD", configMINIMAL_STACK_SIZE, NULL, 3, Push_Button0_LCD_Task);
	xTaskCreate(vTask19_BTN1_LCD_Decrement, "BTN1 Pressed LCD", configMINIMAL_STACK_SIZE, NULL, 3, Push_Button1_LCD_Task);
	vTaskStartScheduler();
}


################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include RTOS/Source/subdir.mk
-include RTOS/API/subdir.mk
-include MCAL/TIMERS/WDT/subdir.mk
-include MCAL/TIMERS/TIMER2/PWM/FAST/subdir.mk
-include MCAL/TIMERS/TIMER2/OVF/subdir.mk
-include MCAL/TIMERS/TIMER2/CTC/subdir.mk
-include MCAL/TIMERS/TIMER1/OVF/subdir.mk
-include MCAL/TIMERS/TIMER1/CTC/subdir.mk
-include MCAL/TIMERS/TIMER0/PWM/FAST/subdir.mk
-include MCAL/TIMERS/TIMER0/OVF/subdir.mk
-include MCAL/TIMERS/TIMER0/CTC/subdir.mk
-include MCAL/Interrupts/subdir.mk
-include MCAL/EEPROM/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/COMMUNICATION/UART/subdir.mk
-include MCAL/COMMUNICATION/TWI/subdir.mk
-include MCAL/COMMUNICATION/SPI/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/MOTORS/STEPPER/subdir.mk
-include HAL/MOTORS/SERVO/subdir.mk
-include HAL/MOTORS/DC/subdir.mk
-include HAL/LED/LED2/subdir.mk
-include HAL/LED/LED1/subdir.mk
-include HAL/LED/LED0/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include HAL/IO/RELAY/subdir.mk
-include HAL/IO/BUZZER/subdir.mk
-include HAL/EEPROM_24C16N/subdir.mk
-include HAL/DISPLAY/SEVENSEGMENT/subdir.mk
-include HAL/DISPLAY/LCD/subdir.mk
-include HAL/BTN/BTN2/subdir.mk
-include HAL/BTN/BTN1/subdir.mk
-include HAL/BTN/BTN0/subdir.mk
-include APP/MAIN/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Interfacing_Reference_Modules.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: Interfacing_Reference_Modules.elf secondary-outputs

# Tool invocations
Interfacing_Reference_Modules.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Interfacing_Reference_Modules.map -mmcu=atmega32 -o "Interfacing_Reference_Modules.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Interfacing_Reference_Modules.lss: Interfacing_Reference_Modules.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Interfacing_Reference_Modules.elf  >"Interfacing_Reference_Modules.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Interfacing_Reference_Modules.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Interfacing_Reference_Modules.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Interfacing_Reference_Modules.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/BTN/BTN0/BTN0_Program.c 

OBJS += \
./HAL/BTN/BTN0/BTN0_Program.o 

C_DEPS += \
./HAL/BTN/BTN0/BTN0_Program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/BTN/BTN0/%.o: ../HAL/BTN/BTN0/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



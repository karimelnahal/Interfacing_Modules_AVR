################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/TIMERS/WDT/WDT_Program.c 

OBJS += \
./MCAL/TIMERS/WDT/WDT_Program.o 

C_DEPS += \
./MCAL/TIMERS/WDT/WDT_Program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/TIMERS/WDT/%.o: ../MCAL/TIMERS/WDT/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



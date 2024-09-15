################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTOS/Source/croutine.c \
../RTOS/Source/event_groups.c \
../RTOS/Source/heap_4.c \
../RTOS/Source/list.c \
../RTOS/Source/port.c \
../RTOS/Source/queue.c \
../RTOS/Source/stream_buffer.c \
../RTOS/Source/tasks.c \
../RTOS/Source/timers.c 

OBJS += \
./RTOS/Source/croutine.o \
./RTOS/Source/event_groups.o \
./RTOS/Source/heap_4.o \
./RTOS/Source/list.o \
./RTOS/Source/port.o \
./RTOS/Source/queue.o \
./RTOS/Source/stream_buffer.o \
./RTOS/Source/tasks.o \
./RTOS/Source/timers.o 

C_DEPS += \
./RTOS/Source/croutine.d \
./RTOS/Source/event_groups.d \
./RTOS/Source/heap_4.d \
./RTOS/Source/list.d \
./RTOS/Source/port.d \
./RTOS/Source/queue.d \
./RTOS/Source/stream_buffer.d \
./RTOS/Source/tasks.d \
./RTOS/Source/timers.d 


# Each subdirectory must supply rules for building sources it contributes
RTOS/Source/%.o: ../RTOS/Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



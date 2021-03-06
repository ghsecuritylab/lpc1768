################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../app/src/ethernet.c \
../app/src/flash.c \
../app/src/main.c \
../app/src/uart.c \
../app/src/wdt.c 

OBJS += \
./app/src/ethernet.o \
./app/src/flash.o \
./app/src/main.o \
./app/src/uart.o \
./app/src/wdt.o 

C_DEPS += \
./app/src/ethernet.d \
./app/src/flash.d \
./app/src/main.d \
./app/src/uart.d \
./app/src/wdt.d 


# Each subdirectory must supply rules for building sources it contributes
app/src/%.o: ../app/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -DNDEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/lpc17xx" -I"../freertos/include" -I"../freertos/port" -I"../app/include" -I"../lwip/include" -I"../lwip/include/arch" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include system/src/newlib/subdir.mk
-include system/src/lpc17xx/subdir.mk
-include system/src/diag/subdir.mk
-include system/src/cortexm/subdir.mk
-include system/src/cmsis/subdir.mk
-include lwip/netif/ppp/polarssl/subdir.mk
-include lwip/netif/ppp/subdir.mk
-include lwip/netif/subdir.mk
-include lwip/core/ipv6/subdir.mk
-include lwip/core/ipv4/subdir.mk
-include lwip/core/subdir.mk
-include lwip/arch/subdir.mk
-include lwip/apps/tftp/subdir.mk
-include lwip/apps/sntp/subdir.mk
-include lwip/apps/snmp/subdir.mk
-include lwip/apps/smtp/subdir.mk
-include lwip/apps/netbiosns/subdir.mk
-include lwip/apps/mqtt/subdir.mk
-include lwip/apps/mdns/subdir.mk
-include lwip/apps/lwiperf/subdir.mk
-include lwip/apps/http/subdir.mk
-include lwip/apps/altcp_tls/subdir.mk
-include lwip/api/subdir.mk
-include freertos/port/subdir.mk
-include freertos/subdir.mk
-include app/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
lpc1768.srec \

SECONDARY_SIZE += \
lpc1768.siz \


# All Target
all: lpc1768.elf secondary-outputs

# Tool invocations
lpc1768.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM Cross C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -T mem.ld -T libs.ld -T sections.ld -nostartfiles -Xlinker --gc-sections -L"../ldscripts" -Wl,-Map,"lpc1768.map" --specs=nano.specs --specs=nosys.specs -o "lpc1768.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

lpc1768.srec: lpc1768.elf
	@echo 'Invoking: GNU ARM Cross Create Flash Image'
	arm-none-eabi-objcopy -O srec "lpc1768.elf"  "lpc1768.srec"
	@echo 'Finished building: $@'
	@echo ' '

lpc1768.siz: lpc1768.elf
	@echo 'Invoking: GNU ARM Cross Print Size'
	arm-none-eabi-size --format=berkeley "lpc1768.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(CPP_DEPS) lpc1768.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets

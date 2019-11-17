################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include xip/subdir.mk
-include video/subdir.mk
-include utilities/utilities/subdir.mk
-include utilities/subdir.mk
-include startup/subdir.mk
-include source/module/subdir.mk
-include source/subdir.mk
-include osa/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include component/uart/subdir.mk
-include component/serial_manager/subdir.mk
-include component/lists/subdir.mk
-include component/i2c/subdir.mk
-include board/subdir.mk
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
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: HITSIC_RT1052_MCUX.axf

# Tool invocations
HITSIC_RT1052_MCUX.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU C++ Linker'
	arm-none-eabi-c++ -nostdlib -L"C:\mcux_dbgTemp\mcux_dir\HITSIC_RT1052_MCUX\libs" -Xlinker -Map="HITSIC_RT1052_MCUX.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -T HITSIC_RT1052_MCUX_Debug.ld -o "HITSIC_RT1052_MCUX.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) HITSIC_RT1052_MCUX.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "HITSIC_RT1052_MCUX.axf"; # arm-none-eabi-objcopy -v -O binary "HITSIC_RT1052_MCUX.axf" "HITSIC_RT1052_MCUX.bin" ; # checksum -p MIMXRT1052xxxxB -d "HITSIC_RT1052_MCUX.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../usb/device/class/usb_device_audio.c \
../usb/device/class/usb_device_ccid.c \
../usb/device/class/usb_device_cdc_acm.c \
../usb/device/class/usb_device_cdc_rndis.c \
../usb/device/class/usb_device_class.c \
../usb/device/class/usb_device_hid.c \
../usb/device/class/usb_device_msc.c \
../usb/device/class/usb_device_msc_ufi.c \
../usb/device/class/usb_device_phdc.c \
../usb/device/class/usb_device_printer.c \
../usb/device/class/usb_device_video.c 

OBJS += \
./usb/device/class/usb_device_audio.o \
./usb/device/class/usb_device_ccid.o \
./usb/device/class/usb_device_cdc_acm.o \
./usb/device/class/usb_device_cdc_rndis.o \
./usb/device/class/usb_device_class.o \
./usb/device/class/usb_device_hid.o \
./usb/device/class/usb_device_msc.o \
./usb/device/class/usb_device_msc_ufi.o \
./usb/device/class/usb_device_phdc.o \
./usb/device/class/usb_device_printer.o \
./usb/device/class/usb_device_video.o 

C_DEPS += \
./usb/device/class/usb_device_audio.d \
./usb/device/class/usb_device_ccid.d \
./usb/device/class/usb_device_cdc_acm.d \
./usb/device/class/usb_device_cdc_rndis.d \
./usb/device/class/usb_device_class.d \
./usb/device/class/usb_device_hid.d \
./usb/device/class/usb_device_msc.d \
./usb/device/class/usb_device_msc_ufi.d \
./usb/device/class/usb_device_phdc.d \
./usb/device/class/usb_device_printer.d \
./usb/device/class/usb_device_video.d 


# Each subdirectory must supply rules for building sources it contributes
usb/device/class/%.o: ../usb/device/class/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-c++ -std=c++17 -DCPU_MIMXRT1052DVL6B -DCPU_MIMXRT1052DVL6B_cm7 -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DXIP_BOOT_HEADER_DCD_ENABLE -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -DBOARD_FLASH_SIZE=0x20000000 -I../board -I../source -I../ -I../amazon-freertos/freertos/portable -I../amazon-freertos/include -I../drivers -I../device -I../CMSIS -I../drivers/freertos -I../xip -I../component/lists -I../component/serial_manager -I../utilities -I../component/uart -I../utilities/utilities -I../cjson/inc -I../libjpeg/inc -I../sdmmc/inc -I../sdmmc/port -I../CMSIS/NN/Include -I../tensorflow-lite/tensorflow/contrib/lite -I../tensorflow-lite/tensorflow/contrib/lite/kernels -I../tensorflow-lite/tensorflow/contrib/lite/profiling -I../tensorflow-lite/tensorflow/contrib/lite/schema -I../tensorflow-lite/third_party/flatbuffers/include/flatbuffers -I../usb/include -I../osa -I../usb/phy -I../usb/device/class -I../usb/device/include -I../usb/device/source -I../usb/device/source/ehci -I../usb/device/source/khci -I../usb/device/source/lpcip3511 -I../source/generated -I../usb/host/class -I../usb/host -I../rtcesl/amclib -I../rtcesl/gdflib -I../rtcesl/gflib -I../rtcesl/gmclib -I../rtcesl/mlib -I../video -I../component/i2c -I../tensorflow-lite -I../tensorflow-lite/third_party/flatbuffers/include -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



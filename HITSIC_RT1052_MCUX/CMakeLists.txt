MESSAGE("***Generaation Path=Debug or Release***")
MESSAGE("***Please set ARMGCC_DIR in envionment variables***")
MESSAGE("***example ARMGCC_DIR=C:\nxp\MCUXpressoIDE_11.0.1_2563\ide\tools ***")
MESSAGE("***cmake -DCMAKE_TOOLCHAIN_FILE="armgcc.cmake" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=debug***") 
MESSAGE("***cmake -DCMAKE_TOOLCHAIN_FILE="armgcc.cmake" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=release***") 
INCLUDE(CMakeForceCompiler)
# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
# THE VERSION NUMBER
SET(Tutorial_VERSION_MAJOR 1)
SET(Tutorial_VERSION_MINOR 0)
# ENABLE ASM
ENABLE_LANGUAGE(ASM)
SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu11")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu11")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DBOARD_FLASH_SIZE=0x20000000")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MIMXRT1052DVL6B")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MIMXRT1052DVL6B_cm7")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK66FX1M0VLQ18")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DHITSIC_K66F_CORE")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=1")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_FLOAT_ENABLE=1")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCANF_ADVANCED_ENABLE=0")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCANF_FLOAT_ENABLE=0")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_DEBUGCONSOLE=0")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSDK_OS_FREE_RTOS")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSKIP_SYSCLK_INIT")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_BOOT_HEADER_DCD_ENABLE")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_BOOT_HEADER_ENABLE=1")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DXIP_EXTERNAL_FLASH=1")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__ARMVFP__")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__MCUXPRESSO")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__NEWLIB__")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D__USE_CMSIS")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu11")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DBOARD_FLASH_SIZE=0x20000000")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MIMXRT1052DVL6B")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MIMXRT1052DVL6B_cm7")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK66FX1M0VLQ18")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DHITSIC_K66F_CORE")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=1")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_FLOAT_ENABLE=1")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCANF_ADVANCED_ENABLE=0")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCANF_FLOAT_ENABLE=0")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSDK_OS_FREE_RTOS")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSKIP_SYSCLK_INIT")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_BOOT_HEADER_DCD_ENABLE")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_BOOT_HEADER_ENABLE=1")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DXIP_EXTERNAL_FLASH=1")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__ARMVFP__")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__MCUXPRESSO")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__NEWLIB__")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -D__USE_CMSIS")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu11")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DBOARD_FLASH_SIZE=0x20000000")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MIMXRT1052DVL6B")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MIMXRT1052DVL6B_cm7")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MK66FX1M0VLQ18")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DHITSIC_K66F_CORE")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=1")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DPRINTF_FLOAT_ENABLE=1")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSCANF_ADVANCED_ENABLE=0")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSCANF_FLOAT_ENABLE=0")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSDK_DEBUGCONSOLE=0")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSDK_OS_FREE_RTOS")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DSKIP_SYSCLK_INIT")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DXIP_BOOT_HEADER_DCD_ENABLE")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DXIP_BOOT_HEADER_ENABLE=1")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DXIP_EXTERNAL_FLASH=1")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D__ARMVFP__")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D__MCUXPRESSO")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D__NEWLIB__")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D__USE_CMSIS")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=gnu++14")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DBOARD_FLASH_SIZE=0x20000000")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MIMXRT1052DVL6B")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MIMXRT1052DVL6B_cm7")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MK66FX1M0VLQ18")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DHITSIC_K66F_CORE")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=1")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DPRINTF_FLOAT_ENABLE=1")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSCANF_ADVANCED_ENABLE=0")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSCANF_FLOAT_ENABLE=0")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSDK_OS_FREE_RTOS")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DSKIP_SYSCLK_INIT")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DXIP_BOOT_HEADER_DCD_ENABLE")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DXIP_BOOT_HEADER_ENABLE=1")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DXIP_EXTERNAL_FLASH=1")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D__ARMVFP__")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D__MCUXPRESSO")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D__NEWLIB__")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D__USE_CMSIS")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=gnu++14")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

#include_directories(${ProjDirPath}/..)
include_directories(${ProjDirPath}/)
include_directories(${ProjDirPath}/CMSIS)
include_directories(${ProjDirPath}/CMSIS/NN/Include)
include_directories(${ProjDirPath}/amazon-freertos/freertos/portable)
include_directories(${ProjDirPath}/amazon-freertos/include)
include_directories(${ProjDirPath}/board)
include_directories(${ProjDirPath}/cjson/inc)
include_directories(${ProjDirPath}/component/i2c)
include_directories(${ProjDirPath}/component/lists)
include_directories(${ProjDirPath}/component/serial_manager)
include_directories(${ProjDirPath}/component/uart)
include_directories(${ProjDirPath}/device)
include_directories(${ProjDirPath}/drivers)
include_directories(${ProjDirPath}/drivers/freertos)
include_directories(${ProjDirPath}/libjpeg/inc)
include_directories(${ProjDirPath}/osa)
include_directories(${ProjDirPath}/rtcesl/amclib)
include_directories(${ProjDirPath}/rtcesl/gdflib)
include_directories(${ProjDirPath}/rtcesl/gflib)
include_directories(${ProjDirPath}/rtcesl/gmclib)
include_directories(${ProjDirPath}/rtcesl/mlib)
include_directories(${ProjDirPath}/sdmmc/inc)
include_directories(${ProjDirPath}/sdmmc/port)
include_directories(${ProjDirPath}/source)
include_directories(${ProjDirPath}/source/generated)
include_directories(${ProjDirPath}/source/module)
include_directories(${ProjDirPath}/tensorflow-lite)
include_directories(${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite)
include_directories(${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/kernels)
include_directories(${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/profiling)
include_directories(${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/schema)
include_directories(${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include)
include_directories(${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers)
include_directories(${ProjDirPath}/usb/device/class)
include_directories(${ProjDirPath}/usb/device/include)
include_directories(${ProjDirPath}/usb/device/source)
include_directories(${ProjDirPath}/usb/device/source/ehci)
include_directories(${ProjDirPath}/usb/device/source/khci)
include_directories(${ProjDirPath}/usb/device/source/lpcip3511)
include_directories(${ProjDirPath}/usb/host)
include_directories(${ProjDirPath}/usb/host/class)
include_directories(${ProjDirPath}/usb/include)
include_directories(${ProjDirPath}/usb/phy)
include_directories(${ProjDirPath}/utilities)
include_directories(${ProjDirPath}/utilities/utilities)
include_directories(${ProjDirPath}/video)
include_directories(${ProjDirPath}/xip)
add_executable(HITSIC_RT1052_MCUX.elf
"${ProjDirPath}/CMSIS/arm_common_tables.h"
"${ProjDirPath}/CMSIS/arm_const_structs.h"
"${ProjDirPath}/CMSIS/arm_math.h"
"${ProjDirPath}/CMSIS/arm_nn_tables.h"
"${ProjDirPath}/CMSIS/arm_nnfunctions.h"
"${ProjDirPath}/CMSIS/arm_nnsupportfunctions.h"
"${ProjDirPath}/CMSIS/cmsis_armcc.h"
"${ProjDirPath}/CMSIS/cmsis_armclang.h"
"${ProjDirPath}/CMSIS/cmsis_armclang_ltm.h"
"${ProjDirPath}/CMSIS/cmsis_compiler.h"
"${ProjDirPath}/CMSIS/cmsis_gcc.h"
"${ProjDirPath}/CMSIS/cmsis_iccarm.h"
"${ProjDirPath}/CMSIS/cmsis_version.h"
"${ProjDirPath}/CMSIS/core_armv81mml.h"
"${ProjDirPath}/CMSIS/core_armv8mbl.h"
"${ProjDirPath}/CMSIS/core_armv8mml.h"
"${ProjDirPath}/CMSIS/core_cm0.h"
"${ProjDirPath}/CMSIS/core_cm0plus.h"
"${ProjDirPath}/CMSIS/core_cm1.h"
"${ProjDirPath}/CMSIS/core_cm23.h"
"${ProjDirPath}/CMSIS/core_cm3.h"
"${ProjDirPath}/CMSIS/core_cm33.h"
"${ProjDirPath}/CMSIS/core_cm35p.h"
"${ProjDirPath}/CMSIS/core_cm4.h"
"${ProjDirPath}/CMSIS/core_cm7.h"
"${ProjDirPath}/CMSIS/core_sc000.h"
"${ProjDirPath}/CMSIS/core_sc300.h"
"${ProjDirPath}/CMSIS/mpu_armv7.h"
"${ProjDirPath}/CMSIS/mpu_armv8.h"
"${ProjDirPath}/CMSIS/tz_context.h"
"${ProjDirPath}/board/board.c"
"${ProjDirPath}/board/board.h"
"${ProjDirPath}/board/clock_config.c"
"${ProjDirPath}/board/clock_config.h"
"${ProjDirPath}/board/dcd.c"
"${ProjDirPath}/board/dcd.h"
"${ProjDirPath}/board/peripherals.c"
"${ProjDirPath}/board/peripherals.h"
"${ProjDirPath}/board/pin_mux.c"
"${ProjDirPath}/board/pin_mux.h"
"${ProjDirPath}/component/i2c/i2c.h"
"${ProjDirPath}/component/i2c/lpi2c_adapter.c"
"${ProjDirPath}/component/lists/generic_list.c"
"${ProjDirPath}/component/lists/generic_list.h"
"${ProjDirPath}/component/serial_manager/serial_manager.c"
"${ProjDirPath}/component/serial_manager/serial_manager.h"
"${ProjDirPath}/component/serial_manager/serial_port_internal.h"
"${ProjDirPath}/component/serial_manager/serial_port_uart.c"
"${ProjDirPath}/component/serial_manager/serial_port_uart.h"
"${ProjDirPath}/component/uart/lpuart_adapter.c"
"${ProjDirPath}/component/uart/uart.h"
"${ProjDirPath}/device/MIMXRT1052.h"
"${ProjDirPath}/device/MIMXRT1052_features.h"
"${ProjDirPath}/device/fsl_device_registers.h"
"${ProjDirPath}/device/system_MIMXRT1052.c"
"${ProjDirPath}/device/system_MIMXRT1052.h"
"${ProjDirPath}/drivers/freertos/fsl_lpi2c_freertos.c"
"${ProjDirPath}/drivers/freertos/fsl_lpi2c_freertos.h"
"${ProjDirPath}/drivers/freertos/fsl_lpspi_freertos.c"
"${ProjDirPath}/drivers/freertos/fsl_lpspi_freertos.h"
"${ProjDirPath}/drivers/freertos/fsl_lpuart_freertos.c"
"${ProjDirPath}/drivers/freertos/fsl_lpuart_freertos.h"
"${ProjDirPath}/drivers/fsl_adc.c"
"${ProjDirPath}/drivers/fsl_adc.h"
"${ProjDirPath}/drivers/fsl_adc_etc.c"
"${ProjDirPath}/drivers/fsl_adc_etc.h"
"${ProjDirPath}/drivers/fsl_aipstz.c"
"${ProjDirPath}/drivers/fsl_aipstz.h"
"${ProjDirPath}/drivers/fsl_aoi.c"
"${ProjDirPath}/drivers/fsl_aoi.h"
"${ProjDirPath}/drivers/fsl_bee.c"
"${ProjDirPath}/drivers/fsl_bee.h"
"${ProjDirPath}/drivers/fsl_cache.c"
"${ProjDirPath}/drivers/fsl_cache.h"
"${ProjDirPath}/drivers/fsl_clock.c"
"${ProjDirPath}/drivers/fsl_clock.h"
"${ProjDirPath}/drivers/fsl_cmp.c"
"${ProjDirPath}/drivers/fsl_cmp.h"
"${ProjDirPath}/drivers/fsl_common.c"
"${ProjDirPath}/drivers/fsl_common.h"
"${ProjDirPath}/drivers/fsl_csi.c"
"${ProjDirPath}/drivers/fsl_csi.h"
"${ProjDirPath}/drivers/fsl_dcdc.c"
"${ProjDirPath}/drivers/fsl_dcdc.h"
"${ProjDirPath}/drivers/fsl_dcp.c"
"${ProjDirPath}/drivers/fsl_dcp.h"
"${ProjDirPath}/drivers/fsl_dmamux.c"
"${ProjDirPath}/drivers/fsl_dmamux.h"
"${ProjDirPath}/drivers/fsl_edma.c"
"${ProjDirPath}/drivers/fsl_edma.h"
"${ProjDirPath}/drivers/fsl_elcdif.c"
"${ProjDirPath}/drivers/fsl_elcdif.h"
"${ProjDirPath}/drivers/fsl_enc.c"
"${ProjDirPath}/drivers/fsl_enc.h"
"${ProjDirPath}/drivers/fsl_enet.c"
"${ProjDirPath}/drivers/fsl_enet.h"
"${ProjDirPath}/drivers/fsl_ewm.c"
"${ProjDirPath}/drivers/fsl_ewm.h"
"${ProjDirPath}/drivers/fsl_flexcan.c"
"${ProjDirPath}/drivers/fsl_flexcan.h"
"${ProjDirPath}/drivers/fsl_flexio.c"
"${ProjDirPath}/drivers/fsl_flexio.h"
"${ProjDirPath}/drivers/fsl_flexio_camera.c"
"${ProjDirPath}/drivers/fsl_flexio_camera.h"
"${ProjDirPath}/drivers/fsl_flexio_camera_edma.c"
"${ProjDirPath}/drivers/fsl_flexio_camera_edma.h"
"${ProjDirPath}/drivers/fsl_flexio_i2c_master.c"
"${ProjDirPath}/drivers/fsl_flexio_i2c_master.h"
"${ProjDirPath}/drivers/fsl_flexio_i2s.c"
"${ProjDirPath}/drivers/fsl_flexio_i2s.h"
"${ProjDirPath}/drivers/fsl_flexio_i2s_edma.c"
"${ProjDirPath}/drivers/fsl_flexio_i2s_edma.h"
"${ProjDirPath}/drivers/fsl_flexio_mculcd.c"
"${ProjDirPath}/drivers/fsl_flexio_mculcd.h"
"${ProjDirPath}/drivers/fsl_flexio_mculcd_edma.c"
"${ProjDirPath}/drivers/fsl_flexio_mculcd_edma.h"
"${ProjDirPath}/drivers/fsl_flexio_spi.c"
"${ProjDirPath}/drivers/fsl_flexio_spi.h"
"${ProjDirPath}/drivers/fsl_flexio_spi_edma.c"
"${ProjDirPath}/drivers/fsl_flexio_spi_edma.h"
"${ProjDirPath}/drivers/fsl_flexio_uart.c"
"${ProjDirPath}/drivers/fsl_flexio_uart.h"
"${ProjDirPath}/drivers/fsl_flexio_uart_edma.c"
"${ProjDirPath}/drivers/fsl_flexio_uart_edma.h"
"${ProjDirPath}/drivers/fsl_flexram.c"
"${ProjDirPath}/drivers/fsl_flexram.h"
"${ProjDirPath}/drivers/fsl_flexspi.c"
"${ProjDirPath}/drivers/fsl_flexspi.h"
"${ProjDirPath}/drivers/fsl_gpc.c"
"${ProjDirPath}/drivers/fsl_gpc.h"
"${ProjDirPath}/drivers/fsl_gpio.c"
"${ProjDirPath}/drivers/fsl_gpio.h"
"${ProjDirPath}/drivers/fsl_gpt.c"
"${ProjDirPath}/drivers/fsl_gpt.h"
"${ProjDirPath}/drivers/fsl_iomuxc.h"
"${ProjDirPath}/drivers/fsl_kpp.c"
"${ProjDirPath}/drivers/fsl_kpp.h"
"${ProjDirPath}/drivers/fsl_lpi2c.c"
"${ProjDirPath}/drivers/fsl_lpi2c.h"
"${ProjDirPath}/drivers/fsl_lpi2c_edma.c"
"${ProjDirPath}/drivers/fsl_lpi2c_edma.h"
"${ProjDirPath}/drivers/fsl_lpspi.c"
"${ProjDirPath}/drivers/fsl_lpspi.h"
"${ProjDirPath}/drivers/fsl_lpspi_edma.c"
"${ProjDirPath}/drivers/fsl_lpspi_edma.h"
"${ProjDirPath}/drivers/fsl_lpuart.c"
"${ProjDirPath}/drivers/fsl_lpuart.h"
"${ProjDirPath}/drivers/fsl_lpuart_edma.c"
"${ProjDirPath}/drivers/fsl_lpuart_edma.h"
"${ProjDirPath}/drivers/fsl_ocotp.c"
"${ProjDirPath}/drivers/fsl_ocotp.h"
"${ProjDirPath}/drivers/fsl_pit.c"
"${ProjDirPath}/drivers/fsl_pit.h"
"${ProjDirPath}/drivers/fsl_pmu.c"
"${ProjDirPath}/drivers/fsl_pmu.h"
"${ProjDirPath}/drivers/fsl_pwm.c"
"${ProjDirPath}/drivers/fsl_pwm.h"
"${ProjDirPath}/drivers/fsl_pxp.c"
"${ProjDirPath}/drivers/fsl_pxp.h"
"${ProjDirPath}/drivers/fsl_qtmr.c"
"${ProjDirPath}/drivers/fsl_qtmr.h"
"${ProjDirPath}/drivers/fsl_rtwdog.c"
"${ProjDirPath}/drivers/fsl_rtwdog.h"
"${ProjDirPath}/drivers/fsl_sai.c"
"${ProjDirPath}/drivers/fsl_sai.h"
"${ProjDirPath}/drivers/fsl_sai_edma.c"
"${ProjDirPath}/drivers/fsl_sai_edma.h"
"${ProjDirPath}/drivers/fsl_semc.c"
"${ProjDirPath}/drivers/fsl_semc.h"
"${ProjDirPath}/drivers/fsl_snvs_hp.c"
"${ProjDirPath}/drivers/fsl_snvs_hp.h"
"${ProjDirPath}/drivers/fsl_snvs_lp.c"
"${ProjDirPath}/drivers/fsl_snvs_lp.h"
"${ProjDirPath}/drivers/fsl_spdif.c"
"${ProjDirPath}/drivers/fsl_spdif.h"
"${ProjDirPath}/drivers/fsl_spdif_edma.c"
"${ProjDirPath}/drivers/fsl_spdif_edma.h"
"${ProjDirPath}/drivers/fsl_src.c"
"${ProjDirPath}/drivers/fsl_src.h"
"${ProjDirPath}/drivers/fsl_tempmon.c"
"${ProjDirPath}/drivers/fsl_tempmon.h"
"${ProjDirPath}/drivers/fsl_trng.c"
"${ProjDirPath}/drivers/fsl_trng.h"
"${ProjDirPath}/drivers/fsl_tsc.c"
"${ProjDirPath}/drivers/fsl_tsc.h"
"${ProjDirPath}/drivers/fsl_usdhc.c"
"${ProjDirPath}/drivers/fsl_usdhc.h"
"${ProjDirPath}/drivers/fsl_wdog.c"
"${ProjDirPath}/drivers/fsl_wdog.h"
"${ProjDirPath}/drivers/fsl_xbara.c"
"${ProjDirPath}/drivers/fsl_xbara.h"
"${ProjDirPath}/drivers/fsl_xbarb.c"
"${ProjDirPath}/drivers/fsl_xbarb.h"
"${ProjDirPath}/osa/usb_osa.h"
"${ProjDirPath}/osa/usb_osa_freertos.c"
"${ProjDirPath}/osa/usb_osa_freertos.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_ACIMCtrlMTPA_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_ACIMRotFluxObsrv_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_ACIMSpeedMRAS_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_AngleTrackObsrv_F32.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_AngleTrackObsrv_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_CtrlFluxWkng_A32.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_CtrlFluxWkng_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_PMSMBemfObsrvAB_A32.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_PMSMBemfObsrvAB_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_PMSMBemfObsrvDQ_A32.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_PMSMBemfObsrvDQ_FLT.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_TrackObsrv_F32.h"
"${ProjDirPath}/rtcesl/amclib/AMCLIB_TrackObsrv_FLT.h"
"${ProjDirPath}/rtcesl/amclib/amclib.h"
"${ProjDirPath}/rtcesl/amclib/amclib_FP.h"
"${ProjDirPath}/rtcesl/amclib/amclib_types.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterExp_F32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterExp_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR1_F32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR1_F32_Asmi.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR1_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR2_F32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR2_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR3_F32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR3_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR4_F32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterIIR4_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterMA_A32.h"
"${ProjDirPath}/rtcesl/gdflib/GDFLIB_FilterMA_FLT.h"
"${ProjDirPath}/rtcesl/gdflib/gdflib.h"
"${ProjDirPath}/rtcesl/gdflib/gdflib_FP.h"
"${ProjDirPath}/rtcesl/gdflib/gdflib_types.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Acos_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Acos_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Asin_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Asin_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_AtanYX_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_AtanYX_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Atan_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Atan_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlBetaIPDp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlBetaIPDp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlBetaIPp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlBetaIPp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlPIDp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlPIDp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlPIp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_CtrlPIp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_DFlexRamp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_DFlexRamp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_DRamp_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_DRamp_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_DRamp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_FlexRamp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_FlexRamp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_FlexSRamp_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_FlexSRamp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Hyst_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Hyst_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Integrator_A32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Integrator_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Limit_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Limit_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Limit_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LowerLimit_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LowerLimit_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LowerLimit_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LutPer_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LutPer_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_LutPer_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Lut_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Lut_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Lut_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Ramp_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Ramp_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Ramp_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_SinCos_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_SinCos_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Sqrt_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Sqrt_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Sqrt_FLT_Asmi.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Tan_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_Tan_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_UpperLimit_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_UpperLimit_F32.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_UpperLimit_FLT.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_VectorLimit_F16.h"
"${ProjDirPath}/rtcesl/gflib/GFLIB_VectorLimit_FLT.h"
"${ProjDirPath}/rtcesl/gflib/gflib.h"
"${ProjDirPath}/rtcesl/gflib/gflib_FP.h"
"${ProjDirPath}/rtcesl/gflib/gflib_types.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Clark_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Clark_FLT.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Decoupling_A32.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Decoupling_FLT.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_ElimDcBusRip_A32_Asmi.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_ElimDcBusRip_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_ElimDcBusRip_FLT.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Park_F16_Asmi.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Park_FLT.h"
"${ProjDirPath}/rtcesl/gmclib/GMCLIB_Svm_F16.h"
"${ProjDirPath}/rtcesl/gmclib/gmclib.h"
"${ProjDirPath}/rtcesl/gmclib/gmclib_FP.h"
"${ProjDirPath}/rtcesl/gmclib/gmclib_types.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Abs_FLT_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add4_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add4_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add4_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Add_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_BiShift_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_BiShift_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Clb_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Clb_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_ConvSc_FLT_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Conv_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Conv_FLT_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div1Q_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div1Q_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div1Q_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Div_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Log2_U16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4Rnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4Rnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4Rnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac4_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MacRnd_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MacRnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MacRnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MacRnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mac_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MnacRnd_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MnacRnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MnacRnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MnacRnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mnac_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mnac_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mnac_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mnac_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mnac_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4Rnd_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4Rnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4Rnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4Rnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu4_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MsuRnd_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MsuRnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MsuRnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MsuRnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Msu_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_A32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_MulRnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_A32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Mul_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Neg_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Neg_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Neg_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Neg_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Neg_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Rcp1Q_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Rcp_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Rnd_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Rnd_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sat_A32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Shift_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Shift_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Shift_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Shift_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sign_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sign_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sign_FLT_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub4_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub4_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub4_FLT.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_A32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_F16.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_F16_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_F32.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_F32_Asmi.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_F64.h"
"${ProjDirPath}/rtcesl/mlib/MLIB_Sub_FLT.h"
"${ProjDirPath}/rtcesl/mlib/RTCESL_cfg.h"
"${ProjDirPath}/rtcesl/mlib/asm_mac.h"
"${ProjDirPath}/rtcesl/mlib/mlib.h"
"${ProjDirPath}/rtcesl/mlib/mlib_FP.h"
"${ProjDirPath}/rtcesl/mlib/mlib_types.h"
"${ProjDirPath}/source/FreeRTOSConfig.h"
"${ProjDirPath}/source/generated/usb_device_composite.c"
"${ProjDirPath}/source/generated/usb_device_composite.h"
"${ProjDirPath}/source/generated/usb_device_config.h"
"${ProjDirPath}/source/generated/usb_device_descriptor.c"
"${ProjDirPath}/source/generated/usb_device_descriptor.h"
"${ProjDirPath}/source/generated/usb_host_config.h"
"${ProjDirPath}/source/inc_fsl.h"
"${ProjDirPath}/source/inc_gnc.h"
"${ProjDirPath}/source/inc_std.h"
"${ProjDirPath}/source/inc_stl.hpp"
"${ProjDirPath}/source/include.hpp"
"${ProjDirPath}/source/isr.cpp"
"${ProjDirPath}/source/jconfig.h"
"${ProjDirPath}/source/main.cpp"
"${ProjDirPath}/source/module/drv_betacat.cpp.txt"
"${ProjDirPath}/source/module/drv_betacat.hpp.txt"
"${ProjDirPath}/source/module/drv_disp_lcd240.cpp"
"${ProjDirPath}/source/module/drv_disp_lcd240.hpp"
"${ProjDirPath}/source/module/drv_extInt.cpp"
"${ProjDirPath}/source/module/drv_extInt.hpp"
"${ProjDirPath}/source/module/drv_keybt.cpp.txt"
"${ProjDirPath}/source/module/drv_keybt.hpp.txt"
"${ProjDirPath}/source/module/drv_motor.cpp"
"${ProjDirPath}/source/module/drv_motor.hpp"
"${ProjDirPath}/source/module/drv_pitmgr.cpp"
"${ProjDirPath}/source/module/drv_pitmgr.hpp"
"${ProjDirPath}/source/module/drv_uartmgr.cpp"
"${ProjDirPath}/source/module/drv_uartmgr.hpp"
"${ProjDirPath}/source/module/lcd.cpp.txt"
"${ProjDirPath}/source/module/lcd.hpp.txt"
"${ProjDirPath}/source/module/rte_analog.cpp.txt"
"${ProjDirPath}/source/module/rte_analog.hpp.txt"
"${ProjDirPath}/source/module/rte_baseio.cpp.txt"
"${ProjDirPath}/source/module/rte_baseio.hpp.txt"
"${ProjDirPath}/source/module/rte_common.cpp"
"${ProjDirPath}/source/module/rte_common.hpp"
"${ProjDirPath}/source/module/rte_senior.cpp.txt"
"${ProjDirPath}/source/module/rte_senior.hpp.txt"
"${ProjDirPath}/source/module/rte_timer.cpp.txt"
"${ProjDirPath}/source/module/rte_timer.hpp.txt"
"${ProjDirPath}/source/retarget_itm.c"
"${ProjDirPath}/source/semihost_hardfault.c"
"${ProjDirPath}/startup/startup_mimxrt1052.cpp"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/_string.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/allocation.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/arena_planner.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/builtin_op_data.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/builtin_ops.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/context.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/context_util.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/error_reporter.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/graph_info.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/interpreter.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/kernels/register.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/memory_planner.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/model.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/nnapi_delegate.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/op_resolver.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/optional_debug_tools.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/profiling/_time.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/profiling/profile_buffer.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/profiling/profile_summarizer.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/profiling/profiler.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/schema/schema_generated.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/simple_memory_arena.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/string_util.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/util.h"
"${ProjDirPath}/tensorflow-lite/tensorflow/contrib/lite/version.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/base.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/code_generators.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/flatbuffers.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/flexbuffers.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/hash.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/idl.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/minireflect.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/reflection.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/reflection_generated.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/registry.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/stl_emulation.h"
"${ProjDirPath}/tensorflow-lite/third_party/flatbuffers/include/flatbuffers/util.h"
"${ProjDirPath}/utilities/fsl_assert.c"
"${ProjDirPath}/utilities/fsl_debug_console.c"
"${ProjDirPath}/utilities/fsl_debug_console.h"
"${ProjDirPath}/utilities/fsl_debug_console_conf.h"
"${ProjDirPath}/utilities/fsl_shell.c"
"${ProjDirPath}/utilities/fsl_shell.h"
"${ProjDirPath}/utilities/fsl_str.c"
"${ProjDirPath}/utilities/fsl_str.h"
"${ProjDirPath}/utilities/utilities/fsl_notifier.c"
"${ProjDirPath}/utilities/utilities/fsl_notifier.h"
"${ProjDirPath}/video/fsl_camera.h"
"${ProjDirPath}/video/fsl_camera_device.h"
"${ProjDirPath}/video/fsl_camera_receiver.h"
"${ProjDirPath}/video/fsl_csi_camera_adapter.c"
"${ProjDirPath}/video/fsl_csi_camera_adapter.h"
"${ProjDirPath}/video/fsl_mt9m114.c"
"${ProjDirPath}/video/fsl_mt9m114.h"
"${ProjDirPath}/video/fsl_ov7725.c"
"${ProjDirPath}/video/fsl_ov7725.h"
"${ProjDirPath}/video/fsl_sccb.c"
"${ProjDirPath}/video/fsl_sccb.h"
"${ProjDirPath}/video/fsl_video_common.c"
"${ProjDirPath}/video/fsl_video_common.h"
"${ProjDirPath}/video/fsl_video_i2c.c"
"${ProjDirPath}/video/fsl_video_i2c.h"
"${ProjDirPath}/xip/fire_imxrt1052_sdram_ini_dcd.c.txt"
"${ProjDirPath}/xip/fire_imxrt1052_sdram_ini_dcd.h.txt"
"${ProjDirPath}/xip/fire_imxrt1052_spiflash_config.c"
"${ProjDirPath}/xip/fire_imxrt1052_spiflash_config.h"
"${ProjDirPath}/xip/fsl_flexspi_nor_boot.c"
"${ProjDirPath}/xip/fsl_flexspi_nor_boot.h"
)

set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/Debug/HITSIC_RT1052_MCUX_Debug.ld -static")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/Release/HITSIC_RT1052_MCUX_Release.ld -static")
TARGET_LINK_LIBRARIES(HITSIC_RT1052_MCUX.elf -Wl,--start-group)
target_link_libraries(HITSIC_RT1052_MCUX.elf debug c)
target_link_libraries(HITSIC_RT1052_MCUX.elf debug gcc)
target_link_libraries(HITSIC_RT1052_MCUX.elf debug m)
target_link_libraries(HITSIC_RT1052_MCUX.elf debug nosys)
target_link_libraries(HITSIC_RT1052_MCUX.elf optimized c)
target_link_libraries(HITSIC_RT1052_MCUX.elf optimized gcc)
target_link_libraries(HITSIC_RT1052_MCUX.elf optimized m)
target_link_libraries(HITSIC_RT1052_MCUX.elf optimized nosys)
TARGET_LINK_LIBRARIES(HITSIC_RT1052_MCUX.elf -Wl,--end-group)
ADD_CUSTOM_COMMAND(
	TARGET HITSIC_RT1052_MCUX.elf
	COMMAND arm-none-eabi-size ${EXECUTABLE_OUTPUT_PATH}/HITSIC_RT1052_MCUX.elf
	COMMAND arm-none-eabi-objcopy -v -O binary ${EXECUTABLE_OUTPUT_PATH}/HITSIC_RT1052_MCUX.elf
	${EXECUTABLE_OUTPUT_PATH}/HITSIC_RT1052_MCUX.bin)

/*
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file    HITSIC_RT1052_MCUX.cpp
 * @brief   Application entry point.
 */
#include "hitsic_common.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */
#include "ff.h"
#include "cm_backtrace.h"
#include "sys_extint.hpp"
#include "sys_pitmgr.hpp"

#include "drv_disp_st7789.hpp"

//#include "rt1052_romapi.h"

uint32_t flash_test_data[0x1000] = {1,2,3,4};


//extern const flexspi_nor_config_t spiflash_config;


//void flash_test()
//{
//    uint32_t instance = 0;
//    flexspi_nor_config_t ram_flash_config;
//    memcpy(&ram_flash_config, &spiflash_config, sizeof(flexspi_nor_config_t));
//
//    PRINTF("Flash Begin!\n");
//
//    if(kStatus_Success != romapi_entry->flexSpiNorDriver->init(instance, &ram_flash_config))
//    {
//        PRINTF("Init Failed!\n");
//    }
//    //BOARD_PrintClockConfig();
//
//    //if(kStatus_Success != romapi_entry->flexSpiNorDriver->erase(instance, &ram_flash_config, 0x40000, 0x1000))
//    {
//        //PRINTF("Erase Failed!\n");
//    }
//
//    if(kStatus_Success != romapi_entry->flexSpiNorDriver->program(instance, &ram_flash_config, 0x40000, flash_test_data))
//    {
//        PRINTF("Program Failed!\n");
//    }
//    romapi_entry->flexSpiNorDriver->clear_cache(instance);
//    uint32_t recv[4] = {9,9,9,9};
//    if(kStatus_Success != romapi_entry->flexSpiNorDriver->read(instance, &ram_flash_config, recv, 0x40000, 16))
//    {
//        PRINTF("Read Failed!\n");
//    }
//    PRINTF("data recv: %d %d %d %d\n", recv[0], recv[1], recv[2], recv[3]);
//}


/* TODO: insert other definitions and declarations here. */

void blink(void)
{
    static bool b = false;
    GPIO_PinWrite(RTEPIN_ALLPIN_LED_USR_GPIO, RTEPIN_ALLPIN_LED_USR_GPIO_PIN, b);
    b = !b;
}

/*
 * @brief   Application entry point.
 */
int main(void)
{
    HAL_EnterCritical();
    /* Init board hardware. */
    RTEPIN_AllPin();
    RTECLK_Run600M();
    RTEPIP_AllPip();
    //BOARD_ConfigMPU();
    DbgConsole_Init(1U, 921600, kSerialPort_Uart, 80000000U);
    cm_backtrace_init("HITSIC-RT1052", "v1.1", "v0.1-beta1");

    extInt_t::init();
    pitMgr_t::init();

    PRINTF("Hello World form HITSIC-RT1052\n");

    BOARD_PrintClockConfig();

    GPIO_PinWrite(RTEPIN_ALLPIN_DISP_BKL_GPIO, RTEPIN_ALLPIN_DISP_BKL_GPIO_PIN, 1);
    GPIO_PinWrite(RTEPIN_ALLPIN_MOTOR_EN_GPIO, RTEPIN_ALLPIN_MOTOR_EN_GPIO_PIN, 0);
    GPIO_PinWrite(RTEPIN_ALLPIN_SERVO_EN_GPIO, RTEPIN_ALLPIN_SERVO_EN_GPIO_PIN, 0);

    pitMgr_t *blinkTask = pitMgr_t::insert(250, 0, blink, pitMgr_t::enable);

    HAL_ExitCritical();

//    st7789_t::getInst().setup();
//    st7789_t::getInst().setBKL(1);
//    st7789_t::getInst().fill(0xffff);

//    flash_test();



    /* Force the counter to be placed into memory. */
    volatile static int i = 0;
    /* Enter an infinite loop, just incrementing a counter. */
    while (1)
    {
        i++;
        /* 'Dummy' NOP to allow source level single stepping of
         tight while() loop */
        __asm volatile ("nop");
    }
    return 0;
}

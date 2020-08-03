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
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MIMXRT1052.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void)
{
    /* Init board hardware. */
    RTEPIN_AllPin();
    RTECLK_Run600M();
    RTEPIP_AllPip();

    PRINTF("Hello World\n");

    GPIO_PinWrite(RTE_DISP_BKL_GPIO, RTE_DISP_BKL_GPIO_PIN, 1);

    printf("Hello World\n");
    printf("CPU:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_CpuClk));
    printf("AHB:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_AhbClk));
    printf("SEMC:            %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SemcClk));
    printf("SYSPLL:          %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SysPllClk));
    printf("SYSPLLPFD0:      %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SysPllPfd0Clk));
    printf("SYSPLLPFD1:      %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SysPllPfd1Clk));
    printf("SYSPLLPFD2:      %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SysPllPfd2Clk));
    printf("SYSPLLPFD3:      %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_SysPllPfd3Clk));
    printf("IPG:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_IpgClk));
    printf("PER:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_PerClk));
    printf("OSC:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_OscClk));
    printf("RTC:             %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_RtcClk));
    printf("ARMPLL:          %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_ArmPllClk));
    printf("USB1PLL:         %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb1PllClk));
    printf("USB1PLLPFD0:     %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb1PllPfd0Clk));
    printf("USB1PLLPFD1:     %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb1PllPfd1Clk));
    printf("USB1PLLPFD2:     %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb1PllPfd2Clk));
    printf("USB1PLLPFD3:     %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb1PllPfd3Clk));
    printf("USB2PLL:         %ld Hz\r\n", CLOCK_GetFreq(kCLOCK_Usb2PllClk));

    //pitMgr_t &blinkTask = pitMgr_t::insert(250, 0, blink, pitMgr_t::enable);

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

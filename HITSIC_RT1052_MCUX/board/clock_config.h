#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ                         24000000U  /*!< Board xtal0 frequency in Hz */

#define BOARD_XTAL32K_CLK_HZ                          32768U  /*!< Board xtal32k frequency in Hz */
/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ************************** Configuration sysclk_run ***************************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for sysclk_run configuration
 ******************************************************************************/
#define SYSCLK_RUN_CORE_CLOCK                     600000000U  /*!< Core clock frequency: 600000000Hz */

/* Clock outputs (values are in Hz): */
#define SYSCLK_RUN_AHB_CLK_ROOT                       600000000UL
#define SYSCLK_RUN_CAN_CLK_ROOT                       60000000UL
#define SYSCLK_RUN_CKIL_SYNC_CLK_ROOT                 32768UL
#define SYSCLK_RUN_CLKO1_CLK                          0UL
#define SYSCLK_RUN_CLKO2_CLK                          0UL
#define SYSCLK_RUN_CLK_1M                             1000000UL
#define SYSCLK_RUN_CLK_24M                            24000000UL
#define SYSCLK_RUN_CSI_CLK_ROOT                       80000000UL
#define SYSCLK_RUN_ENET1_TX_CLK                       0UL
#define SYSCLK_RUN_ENET_125M_CLK                      0UL
#define SYSCLK_RUN_ENET_25M_REF_CLK                   0UL
#define SYSCLK_RUN_FLEXIO1_CLK_ROOT                   120000000UL
#define SYSCLK_RUN_FLEXIO2_CLK_ROOT                   120000000UL
#define SYSCLK_RUN_FLEXSPI_CLK_ROOT                   320000000UL
#define SYSCLK_RUN_GPT1_IPG_CLK_HIGHFREQ              75000000UL
#define SYSCLK_RUN_GPT2_IPG_CLK_HIGHFREQ              75000000UL
#define SYSCLK_RUN_IPG_CLK_ROOT                       150000000UL
#define SYSCLK_RUN_LCDIF_CLK_ROOT                     60000000UL
#define SYSCLK_RUN_LPI2C_CLK_ROOT                     60000000UL
#define SYSCLK_RUN_LPSPI_CLK_ROOT                     120000000UL
#define SYSCLK_RUN_LVDS1_CLK                          1200000000UL
#define SYSCLK_RUN_MQS_MCLK                           0UL
#define SYSCLK_RUN_PERCLK_CLK_ROOT                    75000000UL
#define SYSCLK_RUN_PLL7_MAIN_CLK                      24000000UL
#define SYSCLK_RUN_SAI1_CLK_ROOT                      0UL
#define SYSCLK_RUN_SAI1_MCLK1                         0UL
#define SYSCLK_RUN_SAI1_MCLK2                         0UL
#define SYSCLK_RUN_SAI1_MCLK3                         0UL
#define SYSCLK_RUN_SAI2_CLK_ROOT                      0UL
#define SYSCLK_RUN_SAI2_MCLK1                         0UL
#define SYSCLK_RUN_SAI2_MCLK2                         0UL
#define SYSCLK_RUN_SAI2_MCLK3                         0UL
#define SYSCLK_RUN_SAI3_CLK_ROOT                      0UL
#define SYSCLK_RUN_SAI3_MCLK1                         0UL
#define SYSCLK_RUN_SAI3_MCLK2                         0UL
#define SYSCLK_RUN_SAI3_MCLK3                         0UL
#define SYSCLK_RUN_SEMC_CLK_ROOT                      150000000UL
#define SYSCLK_RUN_SPDIF0_CLK_ROOT                    0UL
#define SYSCLK_RUN_SPDIF0_EXTCLK_OUT                  0UL
#define SYSCLK_RUN_TRACE_CLK_ROOT                     132000000UL
#define SYSCLK_RUN_UART_CLK_ROOT                      80000000UL
#define SYSCLK_RUN_USBPHY1_CLK                        480000000UL
#define SYSCLK_RUN_USBPHY2_CLK                        0UL
#define SYSCLK_RUN_USDHC1_CLK_ROOT                    198000000UL
#define SYSCLK_RUN_USDHC2_CLK_ROOT                    198000000UL

/*! @brief Arm PLL set for sysclk_run configuration.
 */
extern const clock_arm_pll_config_t armPllConfig_sysclk_run;
/*! @brief Usb1 PLL set for sysclk_run configuration.
 */
extern const clock_usb_pll_config_t usb1PllConfig_sysclk_run;
/*! @brief Sys PLL for sysclk_run configuration.
 */
extern const clock_sys_pll_config_t sysPllConfig_sysclk_run;

/*******************************************************************************
 * API for sysclk_run configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void RTECLK_Run600M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */


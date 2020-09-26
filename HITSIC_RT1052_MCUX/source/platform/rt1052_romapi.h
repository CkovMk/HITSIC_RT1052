/*
 * rt1052_bootrom.h
 *
 *  Created on: 2020年8月6日
 *      Author: CkovMk
 */

#ifndef PLATFORM_RT1052_ROMAPI_H_
#define PLATFORM_RT1052_ROMAPI_H_
#include "fsl_flexspi.h"
#include "fire_imxrt1052_spiflash_config.h"

#define romapi_entry (*(bootloader_api_entry_t **)0x0020001c)

typedef struct
{
    uint32_t version;
    status_t (*init)(uint32_t instance, flexspi_nor_config_t *config);
    status_t (*program)(uint32_t instance, flexspi_nor_config_t *config, uint32_t dst_addr, const uint32_t *src);
    status_t (*erase_all)(uint32_t instance, flexspi_nor_config_t *config);
    status_t (*erase)(uint32_t instance, flexspi_nor_config_t *config, uint32_t start, uint32_t lengthInBytes);
    status_t (*read)(uint32_t instance, flexspi_nor_config_t *config, uint32_t *dst, uint32_t addr, uint32_t lengthInBytes);
    void (*clear_cache)(uint32_t instance);
    status_t (*xfer)(uint32_t instance, flexspi_xfer_t *xfer);
    status_t (*update_lut)(uint32_t instance, uint32_t seqIndex, const uint32_t *lutBase, uint32_t seqNumber);
    //status_t (*get_config)(uint32_t instance, flexspi_nor_config_t *config, serial_nor_config_option_t *option);
} flexspi_nor_driver_interface_t;

// unnecessary API definition
typedef int hab_rvt_t;
typedef int flexspi_nand_driver_interface_t;
typedef int nand_ecc_driver_interface_t;
typedef int dcp_aes_driver_interface_t;

typedef struct
{
    void (*runBootloader)(void *arg);
    const uint32_t version;
    const char * copyright;
    const hab_rvt_t* habDriver;

    //!< FlexSPI NOR Flash API
    const flexspi_nor_driver_interface_t* flexSpiNorDriver;

    const flexspi_nand_driver_interface_t* flexSpiNandDriver;
    const nand_ecc_driver_interface_t *nandEccDriver;
    const dcp_aes_driver_interface_t *dcpAesDriver;
}bootloader_api_entry_t;



#endif /* PLATFORM_RT1052_ROMAPI_H_ */

#ifndef BOOTLOADER_UPDATE_H
#define BOOTLOADER_UPDATE_H

#include "stm32h5xx_hal.h"
#include "conf_winc.h"

/**
 * @brief  Toggle CHIP_EN / RESET to enter the WINC1500’s UART ROM-bootloader.
 */
void winc_enter_rom_loader(void);

#endif /* BOOTLOADER_UPDATE_H */

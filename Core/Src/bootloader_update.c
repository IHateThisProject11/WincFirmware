#include "bootloader_update.h"



void winc_enter_rom_loader(void)
{
    /* 1) De-assert CHIP_EN, then RESET */
    HAL_GPIO_WritePin(CONF_WINC_CHIP_EN_PORT, CONF_WINC_CHIP_EN_PIN, GPIO_PIN_RESET);
    HAL_Delay(5);
    HAL_GPIO_WritePin(CONF_WINC_RESET_PORT,    CONF_WINC_RESET_PIN,   GPIO_PIN_RESET);
    HAL_Delay(5);

    /* 2) Re-assert CHIP_EN, then release RESET */
    HAL_GPIO_WritePin(CONF_WINC_CHIP_EN_PORT, CONF_WINC_CHIP_EN_PIN, GPIO_PIN_SET);
    HAL_Delay(2);
    HAL_GPIO_WritePin(CONF_WINC_RESET_PORT,    CONF_WINC_RESET_PIN,   GPIO_PIN_SET);
    HAL_Delay(50);  /* now WINC1500 UART ROM-bootloader is listening */
}

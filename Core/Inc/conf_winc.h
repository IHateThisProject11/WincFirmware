#ifndef CONF_WINC_H
#define CONF_WINC_H

#include "stm32h5xx_hal.h"

/* WINC1500 control pins */
#define CONF_WINC_CHIP_EN_PORT    GPIOB
#define CONF_WINC_CHIP_EN_PIN     GPIO_PIN_1

#define CONF_WINC_RESET_PORT      GPIOB
#define CONF_WINC_RESET_PIN       GPIO_PIN_0

#endif /* CONF_WINC_H */

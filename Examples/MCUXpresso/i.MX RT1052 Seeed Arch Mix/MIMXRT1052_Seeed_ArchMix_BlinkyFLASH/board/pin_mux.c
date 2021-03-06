/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: MIMXRT1052xxxxB
package_id: MIMXRT1052CVL5B
mcu_data: ksdk2_0
processor_version: 6.0.1
pin_labels:
- {pin_num: L6, pin_signal: WAKEUP, label: SW02, identifier: SW02}
- {pin_num: F14, pin_signal: GPIO_AD_B0_09, label: LED_R, identifier: LED_R}
- {pin_num: G13, pin_signal: GPIO_AD_B0_10, label: LED_G, identifier: LED_G}
- {pin_num: G10, pin_signal: GPIO_AD_B0_11, label: LED_B, identifier: LED_B}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: L6, peripheral: GPIO5, signal: 'gpio_io, 00', pin_signal: WAKEUP, direction: INPUT}
  - {pin_num: F14, peripheral: GPIO1, signal: 'gpio_io, 09', pin_signal: GPIO_AD_B0_09, direction: OUTPUT, gpio_init_state: 'true', pull_keeper_enable: Disable}
  - {pin_num: G13, peripheral: GPIO1, signal: 'gpio_io, 10', pin_signal: GPIO_AD_B0_10, direction: OUTPUT, gpio_init_state: 'true', pull_keeper_enable: Disable}
  - {pin_num: G10, peripheral: GPIO1, signal: 'gpio_io, 11', pin_signal: GPIO_AD_B0_11, direction: OUTPUT, gpio_init_state: 'true', pull_keeper_enable: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */
  CLOCK_EnableClock(kCLOCK_IomuxcSnvs);       /* iomuxc_snvs clock (iomuxc_snvs_clk_enable): 0x03U */

  /* GPIO configuration of LED_R on GPIO_AD_B0_09 (pin F14) */
  gpio_pin_config_t LED_R_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 1U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_AD_B0_09 (pin F14) */
  GPIO_PinInit(GPIO1, 9U, &LED_R_config);

  /* GPIO configuration of LED_G on GPIO_AD_B0_10 (pin G13) */
  gpio_pin_config_t LED_G_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 1U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_AD_B0_10 (pin G13) */
  GPIO_PinInit(GPIO1, 10U, &LED_G_config);

  /* GPIO configuration of LED_B on GPIO_AD_B0_11 (pin G10) */
  gpio_pin_config_t LED_B_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 1U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_AD_B0_11 (pin G10) */
  GPIO_PinInit(GPIO1, 11U, &LED_B_config);

  /* GPIO configuration of SW02 on WAKEUP (pin L6) */
  gpio_pin_config_t SW02_config = {
      .direction = kGPIO_DigitalInput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on WAKEUP (pin L6) */
  GPIO_PinInit(GPIO5, 0U, &SW02_config);

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_09_GPIO1_IO09,        /* GPIO_AD_B0_09 is configured as GPIO1_IO09 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_10_GPIO1_IO10,        /* GPIO_AD_B0_10 is configured as GPIO1_IO10 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B0_11_GPIO1_IO11,        /* GPIO_AD_B0_11 is configured as GPIO1_IO11 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_SNVS_WAKEUP_GPIO5_IO00,          /* WAKEUP is configured as GPIO5_IO00 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B0_09_GPIO1_IO09,        /* GPIO_AD_B0_09 PAD functional properties : */
      0x60A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Disabled
                                                 Pull / Keep Select Field: Pull
                                                 Pull Up / Down Config. Field: 47K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B0_10_GPIO1_IO10,        /* GPIO_AD_B0_10 PAD functional properties : */
      0x80B1U);                               /* Slew Rate Field: Fast Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Disabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B0_11_GPIO1_IO11,        /* GPIO_AD_B0_11 PAD functional properties : */
      0x60A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Disabled
                                                 Pull / Keep Select Field: Pull
                                                 Pull Up / Down Config. Field: 47K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

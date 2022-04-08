/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */


// copied over from LED_Blinky pin_mux.h
/*! @name PORTB22 (number 68), D12[1]/LEDRGB_RED
  @{ */

// Symbols for E-INK LED on FRDM board
/* Symbols to be used with GPIO driver */
#define EINK_LED_BLUE_GPIO GPIOB                 /*!<@brief GPIO peripheral base pointer */
#define EINK_LED_BLUE_GPIO_PIN_MASK (1U << 21U)  /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define EINK_LED_BLUE_PORT PORTB                 /*!<@brief PORT peripheral base pointer */
#define EINK_LED_BLUE_PIN  21U                   /*!<@brief PORT pin number */
#define EINK_LED_BLUE_MASK (1U << 21U)           /*!<@brief PORT pin mask */
                                                  /* @} */

// Symbols for E-INK DC pin
/* Symbols to be used with GPIO driver */
#define EINK_DC_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define EINK_DC_GPIO_PIN_MASK (1U << 4U)  /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define EINK_DC_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define EINK_DC_PIN  4U                   /*!<@brief PORT pin number */
#define EINK_DC_PIN_MASK (1U << 4U)       /*!<@brief PORT pin mask */
                                                /* @} */

// Symbols for E-INK CS pin
/* Symbols to be used with GPIO driver */
#define EINK_CS_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define EINK_CS_GPIO_PIN_MASK (1U << 3U)  /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define EINK_CS_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define EINK_CS_PIN 3U                    /*!<@brief PORT pin number */
#define EINK_CS_PIN_MASK (1U << 3U)       /*!<@brief PORT pin mask */
                                                /* @} */


// Symbols for E-INK RST pin
/* Symbols to be used with GPIO driver */
#define EINK_RST_GPIO GPIOC                 /*!<@brief GPIO peripheral base pointer */
#define EINK_RST_GPIO_PIN_MASK (1U << 12U)  /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define EINK_RST_PORT PORTC                 /*!<@brief PORT peripheral base pointer */
#define EINK_RST_PIN 12U                    /*!<@brief PORT pin number */
#define EINK_RST_PIN_MASK (1U << 12U)       /*!<@brief PORT pin mask */
                                                /* @} */

// Symbols for E-INK BUSY pin
/* Symbols to be used with GPIO driver */
#define EINK_BUSY_GPIO GPIOE                 /*!<@brief GPIO peripheral base pointer */
#define EINK_BUSY_GPIO_PIN_MASK (1U << 26U)  /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define EINK_BUSY_PORT PORTE                 /*!<@brief PORT peripheral base pointer */
#define EINK_BUSY_PIN 26U                    /*!<@brief PORT pin number */
#define EINK_BUSY_PIN_MASK (1U << 26U)       /*!<@brief PORT pin mask */
                                                /* @} */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

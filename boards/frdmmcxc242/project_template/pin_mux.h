/* 
 * Copyright 2024 NXP
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

#define SOPT5_LPUART0RXSRC_LPUART_RX 0x00u /*!<@brief LPUART0 Receive Data Source Select: LPUART_RX pin */
#define SOPT5_LPUART0TXSRC_LPUART_TX 0x00u /*!<@brief LPUART0 Transmit Data Source Select: LPUART0_TX pin */

/*! @name PORTA1 (number 23), D0-UART0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*! @name PORTA2 (number 24), D1-UART0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTA0 (number 22), SWCLK
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                                          /* @} */

/*! @name PORTA3 (number 25), SWDIO
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void);

/*! @name PORTA13 (number 29), D4-LED_BLUE/TPM1_CH1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_BLUE_FGPIO FGPIOA              /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_LED_BLUE_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTB18 (number 41), J2[11]/LED_RED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_RED_FGPIO FGPIOB              /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_RED_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_RED_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_LED_RED_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_RED_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_RED_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTB19 (number 42), J2[13]/LED_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED_GREEN_FGPIO FGPIOB              /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_LED_GREEN_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

/*! @name PORTA20 (number 34), RST
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW1_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW1_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW1_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTC1 (number 44), J3[13]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW2_FGPIO FGPIOC             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW2_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW2_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTA4 (number 26), J2[5]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW3_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW3_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSBPins(void);

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
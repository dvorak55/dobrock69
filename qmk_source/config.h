/* Copyright 2020 t-miyajima
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

/* Bootloader */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE
#define STM32_BOOTLOADER_DUAL_BANK TRUE
#define STM32_BOOTLOADER_DUAL_BANK_GPIO B0

/* USB Device descriptor parameter */
#define VENDOR_ID       0x16D0
#define PRODUCT_ID      0x0F96
#define DEVICE_VER      0x0001
#define MANUFACTURER    t-miyajima
#define PRODUCT         Dobrock69

/* usb power settings */
#define USB_MAX_POWER_CONSUMPTION 100

// STM32L082's have 6kB EEPROM
#define STM32_ONBOARD_EEPROM_SIZE (6 * 1024)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE (STM32_ONBOARD_EEPROM_SIZE - DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR)

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { A7, B0, B1, A8, A9 }
#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, C15, C14, B7, B6, B5, B4, A10 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
// #define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO
/* SPI Parameters */
// #define SPI_DRIVER SPID1
// #define SPI_SCK_PIN A5
// #define SPI_MOSI_PIN A7
// #define SPI_MISO_PIN A6
// #define SPI_SCK_PAL_MODE 0
// #define SPI_MOSI_PAL_MODE 0
// #define SPI_MISO_PAL_MODE 0

// #define EXTERNAL_EEPROM_SPI_SLAVE_SELECT_PIN A0
// #define EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR 4
// #define EXTERNAL_EEPROM_BYTE_COUNT 256

/* I2C parameters -> 1MHz I2C @ 32MHz clock */
// #define I2C_DRIVER I2CD1
// #define I2C1_BANK GPIOA
// #define I2C1_SCL 9
// #define I2C1_SDA 10
// #define I2C1_SCL_PAL_MODE 6
// #define I2C1_SDA_PAL_MODE 6
// #define I2C1_TIMINGR_PRESC 0x00U
// #define I2C1_TIMINGR_SCLDEL 0x01U
// #define I2C1_TIMINGR_SDADEL 0x00U
// #define I2C1_TIMINGR_SCLH 0x04U
// #define I2C1_TIMINGR_SCLL 0x13U

/* GPIO pin allocations */
// #define PIN_EN_5V_IO_INV C14
// #define PIN_EN_5V_IO C15

// #define PIN_ROW_LATCH_3V3 B4
// #define PIN_ROW_CLK_3V3 B5
// #define PIN_ROW_DATA_3V3 A3

// #define PIN_COL_LATCH_3V3 A4
// #define PIN_COL_CLK_3V3 B3
// #define PIN_COL_DATA_3V3 A15

// #define PIN_WS2812_3V3 A2

/* WS2812 configuration */
// #ifdef WS2812
// Common
// #    define RGB_DI_PIN PIN_WS2812_3V3
// #    define RGBLED_NUM 15
// Bitbang
// #    define NOP_FUDGE 0.5  // default of 0.4 gives flickering
// PWM
// #    define WS2812_PWM_DRIVER PWMD2               // default: PWMD2
// #    define WS2812_PWM_CHANNEL 3                  // default: 2
// #    define WS2812_PWM_PAL_MODE 2                 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
// #    define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #    define WS2812_DMA_CHANNEL 8                  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #endif                                            // WS2812

/* RGB backlighting configuration */
// #ifdef RGBLIGHT_ENABLE
// #    define RGBLIGHT_ANIMATIONS
// #    define RGBLIGHT_LIMIT_VAL 160
// #endif  // RGBLIGHT_ENABLE

/* RGB matrix configuration */
// #ifdef RGB_MATRIX_ENABLE
// #    define DRIVER_LED_TOTAL RGBLED_NUM
// #    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 160
// #    define RGB_MATRIX_KEYPRESSES
// #    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #endif  // RGB_MATRIX_ENABLE

// #define OLED_DISPLAY_128X64

// #ifdef QWIIC_MICRO_OLED_ENABLE
// #    define LCDWIDTH 128
// #    define LCDHEIGHT 64
// #    define I2C_ADDRESS_SA0_1 0x3C
// #endif  // QWIIC_MICRO_OLED_ENABLE

// #define JOYSTICK_BUTTON_COUNT 16
// #define JOYSTICK_AXES_COUNT 0

// #define IS_COMMAND() (matrix_is_on(6, 0) && matrix_is_on(7, 0) && matrix_is_on(7, 1) && matrix_is_on(7, 2))
// shift+ctrl+win+alt

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

/* ChibiOS hooks to reroute errors to QMK toolbox */
#define chDbgCheck(c)                                                                                   \
    do {                                                                                                \
        if (CH_DBG_ENABLE_CHECKS != FALSE) {                                                            \
            if (!(c)) {                                                                                 \
                extern void chibi_debug_check_hook(const char* func, const char* condition, int value); \
                chibi_debug_check_hook(__func__, (#c), (c));                                            \
                chSysHalt(__func__);                                                                    \
            }                                                                                           \
        }                                                                                               \
    } while (false)

#define chDbgAssert(c, r)                                                                                                    \
    do {                                                                                                                     \
        if (CH_DBG_ENABLE_ASSERTS != FALSE) {                                                                                \
            if (!(c)) {                                                                                                      \
                extern void chibi_debug_assert_hook(const char* func, const char* condition, int value, const char* reason); \
                chibi_debug_assert_hook(__func__, (#c), (c), (r));                                                           \
                chSysHalt(__func__);                                                                                         \
            }                                                                                                                \
        }                                                                                                                    \
    } while (false)

#pragma once
#ifndef CONFIG_H
#define CONFIG_H

#define TAPPING_TERM 200 // 180  // 150 ?

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    40 Percent Club
#define PRODUCT         Gherkin
#define DESCRIPTION     A 30 key ortholinear keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4, D0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B5
#ifdef  BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 15
#endif

//
///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨
//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//
//MINE I had to write this line because compiling, backlight_toggle() wasn't recognized
#define BACKLIGHT_BREATHING
//MINE I had to write this line because compiling, breathing_period wasn't recognized
#ifndef BREATHING_PERIOD
#define BREATHING_PERIOD 15     
#endif
///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨
//

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
/*
#define LOCKING_RESYNC_ENABLE
*/

#endif

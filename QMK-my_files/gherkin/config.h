#ifndef CONFIG_H
#define CONFIG_H

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
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 15
#define BACKLIGHT_LEVEL 0
#endif

///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨
//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE
//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE
//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE
//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE//MINE BECAUSE IT DOESN'T COMPILE
#define BACKLIGHT_BREATHING    //MINE I had to write this line because compiling, backlight_toggle() wasn't recognized
#ifndef BREATHING_PERIOD
#define BREATHING_PERIOD 6     //MINE I had to write this line because compiling, breathing_period wasn't recognized
#endif



/*
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/


/*
#define PERMISSIVE_HOLD        //MINE Let us register 'I' instead of 'ai' when you type fast 'a'+'i'.
*/
///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨///// 🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨🌝✨

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif

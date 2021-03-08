#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* for QMK DFU bootloader */
/* not required if using default ProMicro bootloader */
/* set top left key as bootloader mode escape key */
#define QMK_ESC_OUTPUT B4 // usually COL
#define QMK_ESC_INPUT  F7 // usually ROW
#define QMK_LED        B0

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

//[TAP DANCE PREREQUISITES]
#define TAPPING_TERM 180 //300//180 //150 //300
// COMBO_TERM is the time that QMK is waiting for the second key of the combo after ...
// ... having pressed and held the first key of the combo.  (It doesn't matter the order of the keys)
// #define COMBO_TERM   5000 // 300 // 50 // 100 // 150 // 500 // 5000
// If you’re having issues with taps (un)registering,
//...you can add a delay between the register and unregister events
// #define TAP_CODE_DELAY 100
#define TAPPING_TOGGLE 1
// #define TAPPING_TERM_PER_KEY
//[tap dance prerequisites]

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows with all modifiers and layer triggers
// #define COMPREHENSIVE_30_LAYOUT

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////



// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////


//
// DEFINE LAYOUT
//
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###
// 1:
// QMK_FIRMWARE/USERS/MANOLODEINTERNET/WRAPPERS.H
// You have to uncomment one of these two lines:
// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows with all modifiers and layer triggers
//
// 2:
// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows as simple as we can, but with modifiers...
//
// 3:
// ...and layer triggers are defined on thumb rows !!!
//
/* 1: */
#define COMPREHENSIVE_30_LAYOUT
/* 2: */
         // #define SIMPLE_30_LAYOUT
/* 3: */
         // #define MINI_DACTYL_THUMBS
//
// qmk_firmware/users/manolodeinternet/wrappers.h
//
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###
//
// define layout
//

//
// DEFINE LEDS_TYPE
//
// You have to uncomment the lines you don't need:
//
/* 1: */ 
#define BACKLIT_LEDS
/* 2: */
// #define RGB_LEDS
//
// define apps_triggers
//



/*
ifeq ($(strip $(SIMPLE_30)), yes)
    SRC += manolodeinternet.c \
           simple_30_layout_manolodeinternet.c \
           process_record_keymap.c
endif

ifeq ($(strip $(COMPREHENSIVE_30)), yes)
    SRC += manolodeinternet.c \
           comprehensive_30_layout_manolodeinternet.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
#   SRC += rgblight_mini_dactyl.c  // doesn't work, it needs the whole path:
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c \
           /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_manolodeinternet.c
endif

ifeq ($(strip $(BACKLIGHT_ENABLE)), yes)
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/backlight_manolodeinternet.c
endif
*/


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// For using combos, you need dedicated alphas, if you use LT or MT keys, combo disables them.
// #define COMBO_COUNT 1// number of combos we're using
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



// #define USER_PRINT
/*
 * [FEATURE DISABLE OPTIONS]
 *  These options are also useful to firmware size reduction.
 */
/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER    // it's necessary for tap_dance

// #define NO_ACTION_TAPPING  // it's necessary for mod/tap feature !
//                            // 2492-430= 2062 bytes saved with this '#define NO_...' line of code

// #define NO_ACTION_FUNCTION // it's neccesary for action_functions

// We need ACTION_ONESHOT activated for running OSL(_ACCN).If not, we'd use LT(_ACCN, KC_any_alpha).
#define NO_ACTION_ONESHOT  // 1906-1434 bytes saved
// next define, apparently it's necessary only for macros !!!
#define NO_ACTION_MACRO    // 2196-1906 bytes saved
/*
 * [feature disable options]
 */

#endif

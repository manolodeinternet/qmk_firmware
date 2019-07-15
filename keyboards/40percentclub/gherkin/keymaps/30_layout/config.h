#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"
#endif

/* for QMK DFU bootloader */
/* not required if using default ProMicro bootloader */
/* set top left key as bootloader mode escape key */
#define QMK_ESC_OUTPUT B4 // usually COL
#define QMK_ESC_INPUT F7 // usually ROW
#define QMK_LED B0

#define PREVENT_STUCK_MODIFIERS

//Tap Dance Prerequisite
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD  // MODIFIED, IS IT RIGHT ???  [FIXME, please !!!]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//  is this responsible of getting 'volume minus' (from [SUSR]('W'trigger)) when I type 'word' fast ?
//  ?????????????????????????????????????????????????????????????????????????????????????????????????
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// 
/*  //  P E R M I S S I V E _ H O L D
//  https://docs.qmk.fm/#/feature_advanced_keycodes
//
This makes tap and hold keys (like Mod Tap) work better for fast typist, or for high TAPPING_TERM settings.

If you press a Mod Tap key, 
tap another key (press and release) and then 
release the Mod Tap key, 
all within the tapping term, 
it will output the "tapping" function for both keys.

For Instance:

SHFT_T(KC_A) Down
KC_X Down
KC_X Up
SHFT_T(KC_A) Up

Normally, if you do all this within the TAPPING_TERM (default: 200ms) 
this will be registered as     ax     by the firmware and host system. 
With permissive hold enabled, it would registered as       X (SHIFT+x).
//
*/  //  p e r m i s s i v e _ h o l d
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////

#define IGNORE_MOD_TAP_INTERRUPT
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////
//
/*  //  I G N O R E _ M O D _ T A P _ I N T E R R U P T
//  https://docs.qmk.fm/#/feature_advanced_keycodes
//
//  manolodeinternet:
//  This option feature enabled allows me:  fast typing over home row, who has the modifiers included in the holding tapping.
//  I no longer get 'Ctrl+o' when I want to fast typing 'so', and so on.
//
Similar to Permissive Hold, this alters how the firmware processes input for fast typist. 
If you press a Mod Tap key, press another key, release the Mod Tap key, and then release the normal key, 
it would normally output the "tapping" function for both keys. This may not be desirable for rolling combo keys.

Setting Ignore Mod Tap Interrupt requires holding both keys for the TAPPING_TERM to trigger the hold function (the mod).

For Instance:

SHFT_T(KC_A) Down
KC_X Down
SHFT_T(KC_A) Up
KC_X Up

Normally, this would send X (SHIFT+x). 
With Ignore Mod Tap Interrupt enabled, holding both keys are required for the TAPPING_TERM to register the hold action. 
A quick tap will output ax in this case, while a hold on both will still output X (SHIFT+x).

Note: This only concerns modifiers and not layer switching keys.

NOTE:
If you have Permissive Hold enabled, as well, this will modify how both work. 
The regular key has the modifier added if the first key is released first 
or if both keys are held longer than the TAPPING_TERM.
//
*/ //   i g n o r e _ m o d _ t a p _ i n t e r r u p t
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////



// Enable this in case KC_LCAP were not recognized instead of KC_CAPS
/*
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
*/


// THE REST OF THE FILE IS ABOUT MOUSE CONFIGURATION !!!

//Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY 60
#define MOUSEKEY_INTERVAL 50
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_TIME_TO_MAX 40

// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_DELAY 500
// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_INTERVAL 220
#define MOUSEKEY_WHEEL_MAX_SPEED 2
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200  // max. value: 255

/*
I have modified `/Users/navarro/qmk_firmware/tmk_core/common/mousekey.c`, 
including the next line:

static uint8_t wheel_unit(void)
{
    uint16_t unit;
    if (mousekey_accel & (1<<0)) {
        unit = (MOUSEKEY_WHEEL_DELTA * mk_wheel_max_speed)/4;
    } else if (mousekey_accel & (1<<1)) {
        unit = (MOUSEKEY_WHEEL_DELTA * mk_wheel_max_speed)/2;
    } else if (mousekey_accel & (1<<2)) {
        unit = (MOUSEKEY_WHEEL_DELTA * mk_wheel_max_speed);
    } else if (mousekey_repeat == 0) {
        unit = MOUSEKEY_WHEEL_DELTA;
    } else if (mousekey_repeat >= mk_wheel_time_to_max) {
        unit = MOUSEKEY_WHEEL_DELTA * mk_wheel_max_speed;
    } else {
        unit = (MOUSEKEY_WHEEL_DELTA * mk_wheel_max_speed * mousekey_repeat) / mk_wheel_time_to_max;
    }

// [manolodeinternet@gmail.com]
// NEXT LINE IS MINE !!!
// THIS IS FOR GETTING WHEEL MOUSE TO MOVE SLOWER (10 TIMES SLOWER),

    unit = (unit == 0 ? unit : unit / 100);
    //////////////////////////////////////

    return (unit > MOUSEKEY_WHEEL_MAX ? MOUSEKEY_WHEEL_MAX : (unit == 0 ? 1 : unit));
}

*/

/* confi.h had the following:
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 32
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_DELAY 50
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200
*/

/* keymap.c had the following:
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/



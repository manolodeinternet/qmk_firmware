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



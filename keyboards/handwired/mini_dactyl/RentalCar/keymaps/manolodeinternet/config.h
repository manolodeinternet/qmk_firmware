// MiniDactyl 2019/11/04
// =================================================================
// CONFIG.H

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C
#define EE_HANDS

/* Select hand configuration */
//#define MASTER_LEFT
//#define MASTER_RIGHT

/*
 * `WAKING UP MY COMPUTER`
     Forces the keyboard to wait for a USB connection to be established before it starts up
     It must be flashed on master side, but no on slave side for a right wake up !!!

 * `NO_USB_STARTUP_CHECK`  We don't need this command !!!
     Disables usb suspend check after keyboard startup. Usually the keyboard waits for the host to wake it up before any tasks are performed. This is useful for split keyboards as one half will not get a wakeup call but must send commands to the master.
 */
#define WAIT_FOR_USB         // for wake up computer typing on the keyboard
                                // -$50 bytes (using it, we save 50 bytes)
                                // if we don't use it, we have 50 bytes less.
// #define NO_USB_STARTUP_CHECK // ??? alone or with WAIT_FOR_USB together ???

#define TAPPING_TOGGLE 2

#define PREVENT_STUCK_MODIFIERS

//#define RGBLED_SPLIT { 6, 7 } // 2020/02/17

/*(just added, @drashna)*/
//#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT { 0, 12 }
/*(just added, @drashna)*/

#undef  RGBLED_NUM

#define RGBLIGHT_STARTUP_ANIMATION  // $126 bytes (firmare cost)
//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_MODE_BREATHING   3                         // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.0  // 1.0 ... 2.7  // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_MAX    200  //     ... 255

#define RGBLED_NUM 13

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

//You have to comment one of these two lines:
//#define ALPHAS_OVERCHARGED
#define SINGLE_ALPHAS

//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###
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
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###

#endif
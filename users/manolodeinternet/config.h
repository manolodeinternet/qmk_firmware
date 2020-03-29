#pragma once

// We define TAPPING_TERM in every keyboard/config.h file
// #define TAPPING_TERM 150
//
// Order of compiling all config.h file hierarchy
// 1) keyboards/keyboard_name/                    config.h
// 2) users/user_name/                            config.h
// 3) keyboards/keyboard_name/keymaps/keymap_name/config.h
//

// //////////////////////////////////////////////////////////////////////////////////////////////////////
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
//
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////

// #define PREVENT_STUCK_MODIFIERS

// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////

// Enable this in case KC_LCAP were not recognized instead of KC_CAPS
/*
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
*/

// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////






#define PERMISSIVE_HOLD
/* If PERMISSIVE_HOLD is active:
 * FOR MOD/TAP KEYS

    if you
            press a Mod/Tap key,
            tap a second key (press and release)
            release the Mod/Tap key,

    It will output the second key, already modded.
   (EVEN IF WE TYPE ALL WITHIN THE TAPPING_TERM).


 * FOR LAYER/TAP KEYS
    if you
            press a Layer/Tap key,
            tap a second key (press and release)
            release the Layer/Tap key,

    It will output the second key, but from the layer we have selected with the Layer/Tap key
   (EVEN IF WE TYPE ALL WITHIN THE TAPPING_TERM).

 */
//https://docs.qmk.fm/#/feature_advanced_keycodes?id=permissive-hold

#define IGNORE_MOD_TAP_INTERRUPT
/* If IGNORE_MOD_TAP_INTERRUPT is active:
 * FOR MOD/TAP KEYS
 */

// Because we have the home row plenty of modifiers,
// ... we need this feature activated.
// ... So we can type fast over home row ...
// ... without calling the moded keys unintentionally (i.e.: ⇧M, ⌘A, ⌥E, ⌃C, ⌃k... )
//
/* If IGNORE_MOD_TAP_INTERRUPT is active:

    if you 
            press a Mod/Tap key,
            press a second key,
            release the Mod/Tap key,
            release the second key,

    If this whole process consumes more time than the full TAPPING_TERM,
    it will outputs the second key, already modded

    If you finish typing all keys within the TAPPING_TERM,
    it will returns the two keys, but unmodified

*/
//https://docs.qmk.fm/#/feature_advanced_keycodes?id=ignore-mod-tap-interrupt
/*
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            IF WE HAVE PERMISSIVE_HOLD & IGNORE_MOD_TAP_INTERRUPT DEFINED AT THE SAME TIME,
            AND WE TYPE ALL WITHIN THE TAPPING_TERM:
               IT WILL OUTPUT THE SECOND KEY ALREADY MODDED, WHATEVER THE ORDER IN WICH WE RELEASE THE KEYS
               (PERMISSIVE HOLD covers releasing the second key before mod key and
                IGNORE_MOD_TAP_INTERRUPT covers releasing the mod key before the second key).
////////////////////////////////////////////////////////////////////////////////////////////////////////////////              
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// I comment the following line because it breaks auto repeat !!!
// #define TAPPING_FORCE_HOLD

/*
If TAPPING_FORCE_HOLD is enabled:
     if   ● you press and release a Mod Tap key,
          ● you press the same Mod Tap key (quickly after tap)
          ● you wait more than TAPPING_TERM, keeping it pressed
          ● you release the key,

        ➜ it will NOT output the auto repeat function for the tapped key,

        ➜ it WILL output:
          ● the tapped keycode, in the first press, and
          ● the modifier keycode (waiting for modifying following keys, until it is released) in the second press,

     e.g.: LSFT_T(KC_SPC)
        ➜ the first tap will be an spacebar and
        ➜ the second press (holding more than TAPPING_TERM) will be interpreted as a Shift,
     ...allowing us to use it as a common Shift key instantly after having used it as a spacebar.
 
Nota:  If you miss having spacebar with autorepeat function (as I do), 
       you can have a 'KC_SPC keycode' set in the same place, but in another layer.
       It's very usefull.

https://docs.qmk.fm/#/feature_advanced_keycodes?id=tapping-force-hold
*/
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////


// THE REST OF THE FILE IS ABOUT MOUSE CONFIGURATION !!!

//Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY 60
#define MOUSEKEY_INTERVAL 50
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_TIME_TO_MAX 40


// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_DELAY 500
// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_INTERVAL 220
#define MOUSEKEY_WHEEL_DELAY 100
#define MOUSEKEY_WHEEL_INTERVAL 100

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
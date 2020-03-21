#pragma once
#define USER_PRINT

// We define TAPPING_TERM in every keyboard/config.h file
// #define TAPPING_TERM 150
//
// Order of compiling all config.h file hierarchy
// 1) keyboards/keyboard_name/                    config.h
// 2) users/user_name/                            config.h
// 3) keyboards/keyboard_name/keymaps/keymap_name/config.h
//

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
#define TAPPING_FORCE_HOLD

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
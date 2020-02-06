/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



/* USB Device descriptor parameter */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x3060
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    /u/crystalhand
// #define PRODUCT         Rental Car
// #define DESCRIPTION     A split ergonomic keyboard for the adventerous makers





// #define ONESHOT_TAP_TOGGLE        2
// #define ONESHOT_TIMEOUT           3000









#define USER_PRINT

#define TAPPING_TERM 150

#define PERMISSIVE_HOLD
/*       If PERMISSIVE_HOLD is active:
     if you
            press a Mod Tap key,
            tap another key (press and release)
   and then 
            release the Mod Tap key,

            it will output the modded key
           (EVEN IF WE TYPE ALL WITHIN THE TAPPING_TERM).
*/
//https://docs.qmk.fm/#/feature_advanced_keycodes?id=permissive-hold

#define IGNORE_MOD_TAP_INTERRUPT 
// Because we have the home row plenty of modifiers,
// ... we need this feature activated.
// ... So we can type fast over home row ...
// ... without calling ( ⌘+A (=ja), ⌃+C (=lc), ⌃k (=sk)... )
//
/*       If IGNORE_MOD_TAP_INTERRUPT is active:
     if you 
            press a Mod Tap key,
            press another key,
            release the Mod Tap key,
   and then 
            release the normal key,
           (all holding both keys for the whole TAPPING_TERM),

            it will output the modded key
           (WHATEVER THE ORDER IN WICH WE RELEASE THE KEYS).

     If you finish typing all keys within the TAPPING_TERM,
            it will output the two keys without modifiers, one after the other.
*/
//https://docs.qmk.fm/#/feature_advanced_keycodes?id=ignore-mod-tap-interrupt

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#ifdef SUBPROJECT_rev1
    #include "rev1/config.h"
#endif
#ifdef SUBPROJECT_rev2
    #include "rev2/config.h"
#endif

#endif

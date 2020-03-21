#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"

// #   if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
// #      include "rgblight_mini_dactyl.h"
// #endif

// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"

//#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
// #include "rgblight_mini_dactyl.h"
//#endif


// #include "version.h"
// #include "eeprom.h"
// #include "process_records.h"

/*
#ifdef TAP_DANCE_ENABLE
#    include "tap_dances.h"
#endif  // TAP_DANCE_ENABLE
*/


/* Define layer names
enum userspace_layers {
    _QWERTY  = 0,
    _NUMLOCK = 0,
    _COLEMAK,
    _DVORAK,
    _WORKMAN,
    _NORMAN,
    _MALTRON,
    _EUCALYN,
    _CARPLAX,
    _MODS,    // layer 8
    _GAMEPAD,
    _DIABLO,
    _MACROS,
    _MEDIA,
    _LOWER,
    _RAISE,
    _ADJUST,
}
*/


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void acute_accent_function(void);
void diaeresis_accent_function(void);
void circumflex_accent_function(void);
void grave_accent_function(void);
void tilde_accent_function(void);
//                                                                                      //
// [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
//                    [f(circu)], [f(grave)], [f(diaer)]                                //
//                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
//                                                                                      //
// accents complementary functions                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


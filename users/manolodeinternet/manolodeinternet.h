#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "enum_custom_keycodes.h"
#include "tap_dance_setup.h"

// [INSPIRINGCODE]
// #define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)
//                     |MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)
//                     |MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

// #define ALL_LMODS   (MOD_BIT(KC_LSFT)|MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT)|MOD_BIT(KC_LGUI))
// [inspiringcode]
#define SHFT_MODS     (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define CTRL_MODS     (MOD_BIT(KC_LCTL)  |MOD_BIT(KC_RCTL)  )
#define ALT_MODS      (MOD_BIT(KC_LALT)  |MOD_BIT(KC_RALT)  )
#define GUI_MODS      (MOD_BIT(KC_LGUI)  |MOD_BIT(KC_RGUI)  )

///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING READABILITY CODES                                                                        //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#define _______ KC_TRNS
#define XXXXXXX KC_NO
//                                                                                                   //
// defining readability codes                                                                        //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING ABREVIATED MULTIMEDIA KEYCODES                                                           //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#define KC_FF   KC_MEDIA_FAST_FORWARD // these keycodes skip within the current track when held,
#define KC_RW   KC_MEDIA_REWIND       // but skip the entire track when tapped.
//                                                                                                   //
// defining abreviated multimedia keycodes                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING FN_ACTIONS                                                                               //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#define ACC_A    0
#define ACC_E    1
#define ACC_I    2
#define ACC_O    3
#define ACC_U    4

#define TIL_N    5

#define CAPSL    6
//                                                                                      //
// defining fn_actions                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////




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


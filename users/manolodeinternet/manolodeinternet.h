#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "enum_custom_keycodes.h"
#include "tap_dance_setup.h"



#if defined(RGBLIGHT_ENABLE)
  #include "rgblight.h"
  #include "rgblight_mini_dactyl.h"
  #include "rgblight_manolodeinternet.h"
#elif defined(BACKLIGHT_ENABLE)
  #include "backlight_manolodeinternet.h"
#endif


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
#if defined(SIMPLE_30_LAYOUT)
    #include "simple_30_layout_manolodeinternet.h"
#elif defined(COMPREHENSIVE_30_LAYOUT)
    #include "comprehensive_30_layout_manolodeinternet.h"
#endif
// #if defined(SIMPLE_30_LAYOUT)
//     __attribute__((weak)) uint8_t control_flag;
//     __attribute__((weak)) uint8_t  option_flag;
//     __attribute__((weak)) uint8_t current_flag;
//     __attribute__((weak)) int    state_number;
//     __attribute__((weak)) uint16_t lt12_timer;
//     __attribute__((weak)) bool flip_layer_triggers;
//     __attribute__((weak)) bool         shift_was_activated;
//     __attribute__((weak)) bool numbers_is_active; // #01
//     __attribute__((weak)) bool          symbols_pressed;
//     __attribute__((weak)) bool    multi_apps;
//     __attribute__((weak)) bool    multi_apps_karabiner;  
//     __attribute__((weak)) bool          apps_just_activated;
//     __attribute__((weak)) bool          apps_working;
//     __attribute__((weak)) bool karabiner_apps_working;
//     __attribute__((weak)) bool changing_apps;
//     // __attribute__((weak)) bool triggered_control_mod(void);
//     // __attribute__((weak)) bool triggered_mod(uint8_t mod);
// extern __attribute__((weak)) void flashing_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2);
// // extern __attribute__((weak)) void reset_my_keyboard_function(void);
// #endif
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


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

// __attribute__((weak)) 
// COMMON VARIABLES FOR ALL KEYBOARDS
bool diaeresis_requested;
bool circumflex_requested;
bool grave_requested;

bool disabled_caps_before_accent;
bool capslock_is_active;
  
uint8_t shift_flag;
uint8_t gui_flag;
// common variables for all keyboards  


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
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void capslock_tap(void);
void disable_capslock_before_accents_function(void);
void enable_capslock_after_accents_function(void);
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void acute_accent_function(void);

// void reset_my_keyboard_function(void);



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
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void fvim(char *key);
void dvim(char *key);
void cvim(char *key);
void xvim(char *key);
//
//                                                                                      //
// [functions] [_fvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_fvim]kc_c, [_fvim]kc_x, [_fvim]kc_z   (kc_q & kc_p)  //
//                                                                                      //
// functions for accesing keybindings mapped functions                                  //
//////////////////////////////////////////////////////////////////////////////////////////


extern void reset_my_keyboard_function(void);



#pragma once
// If following line isn't included, it doesn't compile, showing the warnings:...
#include QMK_KEYBOARD_H
//...warnings:

#include "wrappers.h"
#include "enum_custom_keycodes.h"


#if defined(RGBLIGHT_ENABLE)
  #include "rgblight.h"
  #include "rgblight_mini_dactyl.h"
  #include "rgblight_manolodeinternet.h"
#elif defined(BACKLIGHT_ENABLE)
  #include "backlight_manolodeinternet.h"
#endif


#if defined(SIMPLE_30_LAYOUT)
    #include "simple_30_layout_manolodeinternet.h"
#elif defined(COMPREHENSIVE_30_LAYOUT)
    #include "comprehensive_30_layout_manolodeinternet.h"
#endif

#if defined(MINI_DACTYL_THUMBS)
    #include "process_record_keymap.h"
#endif


#include "tapdance_setup.h"

// this previous line doesn't allow compile, because it appears the error: 
/* Compiling: users/manolodeinternet/tapdance_setup.c                                                 In file included from users/manolodeinternet/tapdance_setup.c:2:
users/manolodeinternet/tapdance_setup.h:9:8: error: nested redefinition of 'enum tap_dance_states'
   enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
        ^~~~~~~~~~~~~~~~
users/manolodeinternet/tapdance_setup.h:9:8: error: redeclaration of 'enum tap_dance_states'
In file included from users/manolodeinternet/manolodeinternet.h:23,
                 from users/manolodeinternet/tapdance_setup.h:2,
                 from users/manolodeinternet/tapdance_setup.c:2:
users/manolodeinternet/tapdance_setup.h:9:8: note: originally defined here
   enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
        ^~~~~~~~~~~~~~~~ */

#include "fn_actions.h"

#include "tapdance_setup.h"

// this previous line doesn't allow compile, because it appears the error: 
/* Compiling: users/manolodeinternet/tapdance_setup.c                                                 In file included from users/manolodeinternet/tapdance_setup.c:2:
users/manolodeinternet/tapdance_setup.h:9:8: error: nested redefinition of 'enum tap_dance_states'
   enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
        ^~~~~~~~~~~~~~~~
users/manolodeinternet/tapdance_setup.h:9:8: error: redeclaration of 'enum tap_dance_states'
In file included from users/manolodeinternet/manolodeinternet.h:23,
                 from users/manolodeinternet/tapdance_setup.h:2,
                 from users/manolodeinternet/tapdance_setup.c:2:
users/manolodeinternet/tapdance_setup.h:9:8: note: originally defined here
   enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
        ^~~~~~~~~~~~~~~~ */

#include "fn_actions.h"

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

#define MAX_VOLUME 16
#define MAX_BRIGHT 16

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
#define APPS_DICT_SIZE 30
//////////////////////////////////////////////////////////////////////////////////////////

// __attribute__((weak)) 
// COMMON VARIABLES FOR ALL KEYBOARDS

bool changing_apps;

bool diaeresis_requested;
bool grave_requested;
bool circumflex_requested;

bool disabled_caps_before_accent;
bool capslock_is_active;

bool numbers_is_active;   // flag for _NUMB layer

    uint16_t lt12_timer;  // for using TT_NUMB; my own implementation of TT(layer): Layer Tap/Toggle
    uint16_t lt13_timer;  // for using FVIM_SPC_ENT_ESC

uint8_t ctl_mod;
uint8_t alt_mod;
uint8_t gui_mod;
uint8_t sft_mod;

bool control_apps;
bool shift_apps;
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
#if defined(COMPREHENSIVE_30_LAYOUT)
void callApp(char *appName);
#endif
//
//                                                                                      //
// [functions] [_fvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_fvim]kc_c, [_fvim]kc_x, [_fvim]kc_z   (kc_q & kc_p)  //
//                                                                                      //
// functions for accesing keybindings mapped functions                                  //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void add_mod(uint8_t desired_mod);
void remove_mod(uint8_t activated_mod);
// bool triggered_control_mod(void);
// bool triggered_mod(uint8_t mod);
bool check_mod_and_remove_it(uint8_t mod, bool remove_it);

void write_app_name(uint8_t keycode);
void call_app_with_keycode(uint8_t keycode);


//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_O (VOL_1)                                                     //
//             [_POWR] KC_V (SHUT_S)                                                    //
//                                                                                      //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL x FUNCTION (USED AS A _POWR KEYCODE AND INTO SHUT DOWN AS WELL)  //
// BRIGHT SET TO LEVEL y FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void volumeSetToLevel(uint8_t max_volume);
void brightSetToLevel(uint8_t max_bright);
//
// [functions] [_powr] kc_y (vol_8)                                                     //
//             [_powr] kc_o (vol_1)                                                     //
//             [_powr] kc_v (shut_s)                                                    //
//                                                                                      //
//             [_powr] kc_m (bright_1)                                                  //
//                                                                                      //
// volume set to level x function (used as a _powr keycode and into shut down as well)  //
// bright set to level y function                                                       //
//////////////////////////////////////////////////////////////////////////////////////////



// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// // [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
// //                                                                                      //
// // RESET MY KEYBOARD FUNCTION                                                           //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
//
//
void reset_my_keyboard_function(void);

                                                                                        //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/                                     //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////

//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  m y    f u n c t i o n s                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

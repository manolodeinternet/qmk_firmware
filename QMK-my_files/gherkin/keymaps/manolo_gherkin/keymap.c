//
//
// manolo_gherkin
//  TRASH  keymap.c
//
//
/* Copyright 2017 Brian Fong
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// 🔴 MISSING CODE IN NEW FILE
#include "quantum.h"
// #include "keymap_PVIM.c"


//#ifdef BACKLIGHT_BREATHING
/*
#define BREATHING_NO_HALT  0
#define BREATHING_HALT_OFF 1
#define BREATHING_HALT_ON  2
#define BREATHING_STEPS 128
*/


//#endif  // BACKLIGHT_CUSTOM_DRIVER

#define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
// LAYERS
#define GHKN 0 // BASE GHERKIN LAYER
#define NMBR 1 // numbers layer
#define SYMB 2 // symbols layer

#define FNCT 3 // functions Layer
#define XFNC 4 // extended functions layer

#define XTND 5 // extended default layer
#define APPS 6 // apps layer

#define PVIM 7  // Personal  vim layer
#define DVIM 8  // Delete    vim layer
#define SVIM 9  // Select    vim layer
#define XVIM 10 // eXtra     vim layer
#define ZVIM 11 // Z-extra   vim layer
#define AVIM 12 // Alignment vim layer

#define MOUS 13  // mouse layer

// #define MVIM 15 // move     vim layer
// #define LVIM 16 // scroll   vim layer

#define SUSR 14 // super user productivity layer#define _QW 0
#define BLIT 15 // backlit layer. Other special Quantum keycodes can be added.
//

// #define DIR 18
// define _QW 0
// #define NUM 2
// #define ETC 3
// #define _QW 4
// #define DIR 18
// #define NUM 19
// #define ETC 20
// #define FNCT 21
// #define MINE 22

// Readability keycodes
#define _______ KC_TRNS
#define XXXXXX KC_NO

// Levels of backlight BL_XXXX
#define BL_OFF  0
#define BL_MIN  1
#define BL_MAX 15
#define BL_LOW  1
#define BL_MED  6
#define BL_HGH 12

#define BL_SUSR 15
#define BL_RESE 15
#define BL_CAPS 15
#define BL_EFNC 15
#define             BL_DVIM 15
#define BL_APPS 12
#define BL_SYMB 12
#define BL_FNCT 10
#define             BL_SVIM 10
#define BL_NMBR  8
#define             BL_XVIM  8
#define BL_PVIM  5
#define BL_XTND  4
#define BL_MOUS  3
// End of levels of backlight

// Levels of breathing
#define BR_CAPS 0
#define BR_NMBR 2
#define BR_DFLT 6

#define UC_A_AC         0x0301    //   ́   for using with UC(0x0000)

#define PREV_APP        LSFT(LGUI(KC_TAB))
#define NEXT_APP        LGUI(KC_TAB)
#define PREV_WIN        LSFT(LGUI(KC_GRV))
#define NEXT_WIN        LGUI(KC_GRV)
#define PREV_TAB        LSFT(LCTL(KC_TAB))
#define NEXT_TAB        LCTL(KC_TAB)
#define SPTLGHT_SIRI    LGUI(KC_SPC)


#define DESK            KC_F5
#define APP_WINDOWS     LCTL(KC_DOWN)
#define MISION_CTL      LCTL(KC_UP)
#define SPEAK           LCTL(LALT(LGUI(KC_H)))
#define DASHBOARD       KC_F18
#define ACTIVE_WIN      LCTL(KC_F4)



// SUPPORT FOR DEFINING KEYBINDING FOR LEFT HAND
#define Q_BINDING KC_PRIOR
#define W_BINDING KC_INT2
#define E_BINDING KC_INT3
#define R_BINDING KC_INT4
#define T_BINDING KC_INT5

#define A_BINDING KC_INT6
#define S_BINDING KC_INT7
#define D_BINDING KC_INT8
#define F_BINDING KC_INT9
#define G_BINDING KC_LANG9

#define Z_BINDING KC_LANG1
#define X_BINDING KC_LANG2
#define C_BINDING KC_LANG3
#define V_BINDING KC_LANG4
#define B_BINDING KC_LANG5

// SUPPORT FOR DEFINING KEYBINDING FOR RIGHT HAND
#define Y_BINDING KC_PSCR  // \UF72E
#define U_BINDING KC_PAUS  // \UF730
#define I_BINDING KC_SLCT  // \UF741
#define O_BINDING KC_EXEC  // \UF742
#define P_BINDING KC_FIND  // \UF745

#define H_BINDING KC_STOP  // \UF734
#define J_BINDING KC_F16   // \UF713
#define K_BINDING KC_F17   // \UF714
#define L_BINDING KC_F18   // \UF715
#define SP_BNDING KC_F19   // \UF716

#define N_BINDING KC_F20   // \UF717
#define M_BINDING KC_F21   // \UF718
#define CM_BNDING KC_F22   // \UF719
#define DT_BNDING KC_F23   // \UF71A
#define SL_BNDING KC_F24   // \UF71B

// 🔴 MISSING CODE IN NEW FILE
enum custom_keycodes {
    FUN_MACRO  = 0 // SAFE_RANGE
    ,CUTE_ACC
// };


/////////////// TAP DANCE SECTION START ///////////////
//Tap Dance Declarations (list of my tap dance configurations)
// enum tap_dance_keycodes {
  ,Q_SUSR
  ,W_MOUS
  ,R_APPS  // RESET
  ,U_APPS  // diaeresis accent as well
  ,P_SUSR
  ,A_CAPS
  ,F_CAPS
  ,B_NMBR
  ,N_NMBR
  ,SLNMBR
  ,DONMBR

// accents (acute, grave, diaeresis, circumflex, tilde)
  ,I_CIRC  // circumflex accent
  ,J_ACUT  // acute & grave accent
  ,N_TILD  // tilde accent

// tap dance symbols
  ,BSL_CI
  ,QUOT_D
  ,DO_EUR
  ,EXCLAM
  ,QUESTI

// tap dance for functions
  ,DICTAD
  ,U_PVIM
  ,UPVIM
  ,YPVIM
  ,IPVIM
  ,OPVIM
  ,P_PVIM
  ,PPVIM
  ,K_DVIM
  ,L_DVIM

// keypad symbols
  ,DOUB_0
  ,TRIP_0

//  ,TD_Q_TAB
//  ,TD_Q_ESC
//  ,ENT_TAP_DANCE
//  ,DEL_TAP_DANCE
//  ,ESC_AC
// };

// enum unicode_name {
  ,
   ACUTE_A,
  _EURO_,
  O_EXCL,
  O_QUES,
  BCKLIT

};

uint8_t backlight_level_before_changing_layer;
uint8_t backlight_level_before_caps_look;
uint8_t caps_control_backlight = 0;
uint8_t caps_disabled_before_accent = 0;
uint8_t numbers_layer_backlight = 0;

uint8_t breathing_period = BREATHING_PERIOD;

uint8_t level_of_breathing_before = 0;




const uint32_t PROGMEM unicode_map[] = {
  [ACUTE_A]   = 0x0301  // ´  Acute accent
 ,[_EURO_] = 0x20AC  //  Dollar sign
};








///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION START /////
///// (no need to edit this section) /////
//Enums used to clearly convey the state of the tap dance
  enum tap_dance_states {
   SINGLE_TAP = 1,
   SINGLE_HOLD = 2,
   DOUBLE_TAP = 3,
   DOUBLE_HOLD = 4,
   DOUBLE_SINGLE_TAP = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
   TRIPLE_TAP = 6,
   TRIPLE_HOLD = 7,
   TRIPLE_SINGLE_TAP = 8,
   QUADRUPLE_TAP = 9,
   QUADRUPLE_HOLD = 10,
   QUADRUPLE_SINGLE_TAP = 11,
   QUINTUPLE_TAP = 12,
   QUINTUPLE_HOLD = 13,
   QUINTUPLE_SINGLE_TAP = 14
   // Add more enums here if you want for triple, quadruple, etc.
 };

typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    //If count = 1, and it has been interrupted - it doesn't matter if it is pressed or not: Send SINGLE_TAP
    if (state->interrupted || !state->pressed) return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  //If count = 2, and it has been interrupted - assume that user is trying to type the letter associated
  //with single tap.
  else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
  else if (state->count == 3) {
    if (state->interrupted) return TRIPLE_SINGLE_TAP;
    else if (state->pressed) return TRIPLE_HOLD;
    else return TRIPLE_TAP;
  }
  else if (state->count == 4) {
    if (state->interrupted) return QUADRUPLE_SINGLE_TAP;
    else if (state->pressed) return QUADRUPLE_HOLD;
    else return QUADRUPLE_TAP;
  }
  else if (state->count == 5) {
    if (state->interrupted) return QUINTUPLE_SINGLE_TAP;
    else if (state->pressed) return QUINTUPLE_HOLD;
    else return QUINTUPLE_TAP;
  }
  else return 15; //magic number. At some point this method will expand to work for more presses
}
///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION END /////






///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q _ S U S R 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.
static tap Q_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void Q_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_SUSRtap_state.state = cur_dance(state);
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_Q); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_SUSR);  // high backlight
                      layer_on(SUSR);
                      break;
    case DOUBLE_TAP:  register_code(KC_TAB); break;

    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_TAB); break;
  }
}

void Q_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_Q); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      layer_off(SUSR);
                      break;
    case DOUBLE_TAP:  unregister_code(KC_TAB); break;

    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_TAB); break;
  }
  Q_SUSRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  Q _ S U S R  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   W _ M O U S   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'W_MOUS' tap dance.
static tap W_MOUStap_state = {
  .is_press_action = true,
  .state = 0
};

void W_MOUS_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_MOUStap_state.state = cur_dance(state);
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:  register_code(KC_W); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_MOUS);  // medium backlight
                      layer_on(MOUS);
                      break;

    case DOUBLE_TAP:        register_code(KC_W); unregister_code(KC_W); register_code(KC_W); break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_W); unregister_code(KC_W); register_code(KC_W); break;
    case TRIPLE_TAP:        register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W); break;
  }
}

void W_MOUS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_W); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      layer_off(MOUS);
                      break;

    case DOUBLE_TAP:        unregister_code(KC_W); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_W); break;
    case TRIPLE_TAP:        unregister_code(KC_W); break;
  }
  W_MOUStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   W _ M O U S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』   R _ A P P S     -   R E S E T   -   R _ A P P S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'R_APPS' tap dance.
static tap R_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void R_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  R_APPStap_state.state = cur_dance(state);
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_R); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_APPS);  // zero backlight
                      layer_on(APPS);
                      register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_F16); break;

    case DOUBLE_TAP:  register_code(KC_R); unregister_code(KC_R); register_code(KC_R); break;
    case DOUBLE_HOLD: layer_on(APPS);
                      register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_F17); break;

    case DOUBLE_SINGLE_TAP: register_code(KC_R); unregister_code(KC_R); register_code(KC_R); break;
    case TRIPLE_TAP:        register_code(KC_NO); break;


///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎    _delay_ms(milliseconds)     💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

//    case DOUBLE_SINGLE_TAP: _delay_ms(1000); register_code(KC_R); break;

///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎



// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀

    case TRIPLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      // starts backlight triple blink
                      backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      // ends backlight triple blink
                      reset_keyboard();
                      backlight_level(backlight_level_before_changing_layer);
                      break;

// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
  }
}

void R_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_R); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      /*layer_off(APPS);*/
                      unregister_code(KC_F16); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      layer_off(APPS); break;

    case DOUBLE_TAP:        unregister_code(KC_R);  break;
    case DOUBLE_HOLD:       unregister_code(KC_F17); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                            unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                            layer_off(APPS); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_R);  break;
    case TRIPLE_TAP:        unregister_code(KC_NO); break;
    case TRIPLE_HOLD:       break;
  }
  R_APPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   R _ A P P S     -   R E S E T   -   R _ A P P S  【🔴】【🔴】【🔴】

// [BOOKMARK] translating code to 'gherkin_from_scratch_keymap.c' file


// 『🔵』『🔵』『🔵』   U _ A P P S    -    D I A E R E S I S    A C C E N T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'U_APPS' tap dance.
static tap U_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void U_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  U_APPStap_state.state = cur_dance(state);
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_U); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_APPS);  // zero backlight
                      /*layer_on(APPS);*/
                      register_code(KC_RCTL);
                      break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_U); break;

    case DOUBLE_HOLD:       register_code(KC_LALT); register_code(KC_U); break;  // diaeresis accent

    case DOUBLE_SINGLE_TAP: register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); break;

    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_U);
                            unregister_code(KC_U);  unregister_code(KC_LALT);
                            register_code(KC_U); break;

  }
}

void U_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_U); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      /*layer_off(APPS);*/
                      unregister_code(KC_RCTL);
                      break;

    case DOUBLE_TAP:        unregister_code(KC_U); unregister_code(KC_LALT); break;

    case DOUBLE_HOLD:       unregister_code(KC_U); unregister_code(KC_LALT); break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_U); break;

    case TRIPLE_TAP:        unregister_code(KC_U); break;


  }
  U_APPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   U _ A P P S    -    D I A E R E S I S    A C C E N T   【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      P _ S U S R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'P_SUSR' tap dance.
static tap P_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void P_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_SUSRtap_state.state = cur_dance(state);
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_P); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_SUSR);  // high backlight
                      layer_on(SUSR);
                      break;
    case DOUBLE_TAP:        register_code(KC_P); unregister_code(KC_P); register_code(KC_P); break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P); register_code(KC_P); break;
  }
}

void P_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_P); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      layer_off(SUSR);
                      break;
    case DOUBLE_TAP:        unregister_code(KC_P); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_P); break;
  }
  P_SUSRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      P _ S U S R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      B _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'B_NMBR' tap dance.
static tap B_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void B_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_NMBRtap_state.state = cur_dance(state);
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_B); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:        register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;

    case DOUBLE_HOLD:       // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;
                              breathing_period_set(BR_CAPS);
                              breathing_enable();
                              if (!caps_control_backlight)
                              {
                                breathing_period_set(BR_DFLT);
                                breathing_disable();
                              };
                            }; break;

    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
}

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_B); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:        unregister_code(KC_B); break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;
  }
  B_NMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      B _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      N _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'N_NMBR' tap dance.
static tap N_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBRtap_state.state = cur_dance(state);
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_N); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_N); break;

    case DOUBLE_HOLD:       // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;

                              breathing_period_set(BR_DFLT);
                              breathing_disable();

                              if (caps_control_backlight)
                              {
                                breathing_period_set(BR_CAPS);
                                breathing_enable();
                              };
                            }; break;

    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;
  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_N); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_N); break;
  }
  N_NMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      N _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      S L A S H _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'SLNMBR' tap dance.
static tap SLNMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void SLNMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNMBRtap_state.state = cur_dance(state);
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_PSLS); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:        register_code(KC_PSLS); unregister_code(KC_PSLS); register_code(KC_PSLS); break;

    case DOUBLE_HOLD:       // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;
                              breathing_period_set(BR_CAPS);
                              breathing_enable();
                              if (!caps_control_backlight)
                              {
                                breathing_period_set(BR_DFLT);
                                breathing_disable();
                              };
                            }; break;

    case DOUBLE_SINGLE_TAP: register_code(KC_PSLS); unregister_code(KC_PSLS); register_code(KC_PSLS); break;
  }
}

void SLNMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_PSLS); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:        unregister_code(KC_PSLS); break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_PSLS); break;
  }
  SLNMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      S L A S H _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      C O M M A _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DONMBR' tap dance.
static tap DONMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void DONMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DONMBRtap_state.state = cur_dance(state);
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_PDOT); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:

    case DOUBLE_HOLD:

    case DOUBLE_SINGLE_TAP: // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;
                              breathing_period_set(BR_CAPS);
                              breathing_enable();
                              if (!caps_control_backlight)
                              {
                                breathing_period_set(BR_DFLT);
                                breathing_disable();
                              };
                            }; break;
  }
}

void DONMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_PDOT); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:
    case DOUBLE_HOLD:
    case DOUBLE_SINGLE_TAP: break;
  }
  DONMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      C O M M A _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


















































































// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_A  -  C A P S L O C K  -  KC_A  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.

void capslock_finished_function(void) { // MY CAPSLOCK FINISHED FUNCTION
  if (caps_control_backlight == 0)
  {
/*
      register_code(KC_CAPS);
      //SEND_STRING("\n1) ccb==0->subir brillo y ccb=1");
      SEND_STRING("\n1");
      SEND_STRING(") c");


      SEND_STRING(SS_TAP(X_HOME));
      send_string_keycodes()
*/

      //unregister_code(KC_LCAP);
      SEND_STRING(SS_DOWN(X_CAPSLOCK));
      register_code(KC_LCAP);



      caps_control_backlight  = 1;
      breathing_period_set(BR_CAPS);
      breathing_enable();

      /*
      backlight_level_before_caps_look = get_backlight_level();
      backlight_level(BL_CAPS);
      */
  }
  else
  {
       //if (caps_control_backlight == 1)
       //{
/*
         register_code(KC_CAPS);
         //SEND_STRING("\n2) CCB==1->BAJAR BRILLO AL ANTERIOR Y CCB=0");
         SEND_STRING("\n2");
         SEND_STRING(") c");

        SEND_STRING(SS_TAP(X_HOME));

*/


        //unregister_code(KC_LCAP);
        SEND_STRING(SS_DOWN(X_CAPSLOCK));
        register_code(KC_LCAP);



         caps_control_backlight  = 0;
         breathing_period_set(BR_DFLT);
         breathing_disable();

         /*
         backlight_level(backlight_level_before_caps_look);
         */
       //}
  }
} // MY CAPSLOCK FINISHED FUNCTION

void capslock_reset_function(void) {  // MY CAPSLOCK RESET FUNCTION
  unregister_code(KC_CAPS); SEND_STRING(SS_UP(X_CAPSLOCK));
}  // MY CAPSLOCK RESET FUNCTION











void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (caps_control_backlight == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      caps_disabled_before_accent = 1;
    }
} // MY DISABLE_CAPSLOCK_BEFORE_ACCENTS_FUNCTION

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (caps_disabled_before_accent == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      caps_disabled_before_accent = 0;
  }
} // MY ENABLE_CAPSLOCK_AFTER_ACCENTS_FUNCTION















static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  A_CAPStap_state.state = cur_dance(state);
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_A); break;
    case SINGLE_HOLD: register_code(KC_LSFT);
                      //breathing_toggle();

                      break;

    case DOUBLE_TAP:        capslock_finished_function();  // MY CAPSLOCK FINISHED FUNCTION (the function defined just above)
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;

    case TRIPLE_TAP:        register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;

  }
}

void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_A); break;
    case SINGLE_HOLD:       unregister_code(KC_LSFT); break;

    case DOUBLE_TAP:        capslock_reset_function();  // MY CAPSLOCK RESET FUNCTION (the function defined just above)
                            break;

    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_A); break;
  }
  A_CAPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_A  -  C A P S L O C K  -  KC_A  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  KC_J   -   A C U T E    &   G R A V E    A C C E N T    -   KC_J  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'J_ACUT' tap dance.

void acute_finished_function(void) {
  register_code(KC_LALT); register_code(KC_E);
}
void acute_reset_function(void) {
  unregister_code(KC_E); unregister_code(KC_LALT);
}

static tap J_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void J_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ACUTtap_state.state = cur_dance(state);
  switch (J_ACUTtap_state.state) {
    case SINGLE_TAP:        register_code(KC_J); break;
    case SINGLE_HOLD:       register_code(KC_RGUI); break;

    case DOUBLE_TAP:        disable_capslock_before_accents_function(); // caps_lock doesn't affect accent
                            acute_finished_function(); 
                            break;  // acute accent

    case DOUBLE_HOLD:       backlight_level_before_changing_layer = get_backlight_level();
                            backlight_level(BL_HGH);
                            layer_on(BLIT);
                            break;

    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock doesn't affect accent
                            acute_finished_function();
                            break;  // acute accent


    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_GRAVE); break;  // grave accent
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_J); unregister_code(KC_J);
                            register_code(KC_J); unregister_code(KC_J);
                            register_code(KC_J); break;
  }
}

void J_ACUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (J_ACUTtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_J); break;
    case SINGLE_HOLD:       unregister_code(KC_RGUI); break;

    case DOUBLE_TAP:        acute_reset_function();
                            enable_capslock_after_accents_function();
                            break;

    case DOUBLE_HOLD:       backlight_level(backlight_level_before_changing_layer);
                            layer_off(BLIT);
                            break;

    case DOUBLE_SINGLE_TAP: acute_reset_function(); 
                            enable_capslock_after_accents_function();
                            break;

    case TRIPLE_TAP:        unregister_code(KC_GRAVE); unregister_code(KC_LALT); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_J); break;
  }
  J_ACUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  KC_J   -   A C U T E    &   G R A V E    A C C E N T    -   KC_J  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  T I L D E    A C C E N T  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'N_TILD' tap dance.
static tap N_TILDtap_state = {
  .is_press_action = true,
  .state = 0
};

void N_TILD_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_TILDtap_state.state = cur_dance(state);
  switch (N_TILDtap_state.state) {
    case SINGLE_TAP:  register_code(KC_N); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_HGH);
                      layer_on(NMBR);
                      break;
    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_N); break;  // tile accent
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_N); break;
  }
}

void N_TILD_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_TILDtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_N); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      layer_off(NMBR);
                      break;
    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_N); unregister_code(KC_LALT); break;
  }
  N_TILDtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T I L D E    A C C E N T  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  KC_F  -  C A P S L O C K  -  KC_F 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'F_CAPS' tap dance.
static tap F_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void F_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_CAPStap_state.state = cur_dance(state);
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_F); break;
    case SINGLE_HOLD: register_code(KC_LGUI); break;

    case DOUBLE_TAP:        capslock_finished_function(); break;  // MY CAPSLOCK FINISHED FUNCTION
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F); register_code(KC_F); break;


    case TRIPLE_TAP:        register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
  }
}

void F_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F); break;
    case SINGLE_HOLD: unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        capslock_reset_function(); break;  // MY CAPSLOCK RESET FUNCTION
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;

    case TRIPLE_TAP:        unregister_code(KC_F); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_F); break;

  }
  F_CAPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  KC_F  -  C A P S L O C K  -  KC_F  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  C I R C U M F L E X    A C C E N T  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'I_CIRC' tap dance.
static tap I_CIRCtap_state = {
  .is_press_action = true,
  .state = 0
};

void I_CIRC_finished (qk_tap_dance_state_t *state, void *user_data) {
  I_CIRCtap_state.state = cur_dance(state);
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:  register_code(KC_I); break;
    case SINGLE_HOLD: register_code(KC_NO); break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_I); break;  // circumflex accent
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_I); break;
  }
}

void I_CIRC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_I); break;
    case SINGLE_HOLD: unregister_code(KC_NO); break;

    case DOUBLE_TAP:        unregister_code(KC_I); unregister_code(KC_LALT); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_I); unregister_code(KC_LALT); break;
  }
  I_CIRCtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  C I R C U M F L E X    A C C E N T  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』  B A C K S L A S H  『🔵』  - ( S Y M B O L ) -  『🔵』  C I R C U M F L E X  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'BSL_CI' tap dance.
static tap BSL_CItap_state = {
  .is_press_action = true,
  .state = 0
};

void BSL_CI_finished (qk_tap_dance_state_t *state, void *user_data) {
  BSL_CItap_state.state = cur_dance(state);
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:  register_code(KC_BSLS); break;
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_6); break;
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_6); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_BSLS); unregister_code(KC_BSLS); register_code(KC_BSLS); break;
  }
}

void BSL_CI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_BSLS); break;
    case SINGLE_HOLD:       unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_BSLS); break;
  }
  BSL_CItap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  B A C K S L A S H  【🔴】  - ( S Y M B O L ) -  【🔴】  C I R C U M F L E X  【🔴】【🔴】【🔴】


// 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥 BOOKMARK - MARCAPAGINAS // 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U O T E    『🔵』  - ( S Y M B O L ) -  『🔵』    D O U B L E    Q U O T E S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUOT_D' tap dance.
static tap QUOT_Dtap_state = {
  .is_press_action = true,
  .state = 0
};

void QUOT_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUOT_Dtap_state.state = cur_dance(state);
  switch (QUOT_Dtap_state.state) {
    case SINGLE_TAP:  register_code(KC_QUOT); break;  // single quote
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
    case DOUBLE_SINGLE_TAP: register_code(KC_QUOT); break;  // single quote
  }
}

void QUOT_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUOT_Dtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_QUOT); break;
    case SINGLE_HOLD: unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_QUOT); break;
  }
  QUOT_Dtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  Q U O T E    【🔴】  - ( S Y M B O L ) -  【🔴】    D O U B L E    Q U O T E S  【🔴】【🔴】【🔴】






// 『🔵』『🔵』『🔵』  D O L L A R    『🔵』  - ( S Y M B O L ) -  『🔵』    E U R O  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
static tap DO_EURtap_state = {
  .is_press_action = true,
  .state = 0
};

void DO_EUR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DO_EURtap_state.state = cur_dance(state);
  switch (DO_EURtap_state.state) {
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_4); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;
  }
}

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EURtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_4); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  DO_EURtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  D O L L A R    【🔴】  - ( S Y M B O L ) -  【🔴】    E U R O  【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  E X C L A M A T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'EXCLAM' tap dance.
static tap EXCLAMtap_state = {
  .is_press_action = true,
  .state = 0
};

void EXCLAM_finished (qk_tap_dance_state_t *state, void *user_data) {
  EXCLAMtap_state.state = cur_dance(state);
  switch (EXCLAMtap_state.state) {
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_1); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LALT); register_code(KC_1); break;
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_1); break;
  }
}

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_1); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_1); unregister_code(KC_LALT); break;
    case SINGLE_HOLD: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  E X C L A M A T I O N    M A R K _ S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U E S T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUESTI' tap dance.
static tap QUESTItap_state = {
  .is_press_action = true,
  .state = 0
};

void QUESTI_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUESTItap_state.state = cur_dance(state);
  switch (QUESTItap_state.state) {
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_SLSH); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;
  }
}

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTItap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTItap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  Q U E S T I O N    M A R K _ S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    D O U B L E    Z E R O    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DOUB_0' tap dance.
static tap DOUB_0tap_state = {
  .is_press_action = true,
  .state = 0
};

void DOUB_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  DOUB_0tap_state.state = cur_dance(state);
  switch (DOUB_0tap_state.state) {
    case SINGLE_TAP:        register_code(KC_DEL); break;
    case SINGLE_HOLD:       register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
    case DOUBLE_TAP:        register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void DOUB_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DOUB_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_DEL); break;
    case SINGLE_HOLD:       unregister_code(KC_0); break;
    case DOUBLE_TAP:        unregister_code(KC_0); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0); break;
  }
  DOUB_0tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    D O U B L E    Z E R O    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    T R I P L E    Z E R O    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'TRIP_0' tap dance.
static tap TRIP_0tap_state = {
  .is_press_action = true,
  .state = 0
};

void TRIP_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  TRIP_0tap_state.state = cur_dance(state);
  switch (TRIP_0tap_state.state) {
    case SINGLE_TAP:        register_code(KC_SPC); break;
    case SINGLE_HOLD:       register_code(KC_0); unregister_code(KC_0); register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
    case DOUBLE_TAP:        register_code(KC_0); unregister_code(KC_0); register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void TRIP_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TRIP_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_SPC); break;
    case SINGLE_HOLD:       unregister_code(KC_0); break;
    case DOUBLE_TAP:        unregister_code(KC_0); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0); break;
  }
  TRIP_0tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    T R I P L E    Z E R O    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』    BCKLIT     -    💡💡💡    -   B A C K L I G H T    -   💡💡💡   -    BCKLIT    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'BCKLIT' tap dance.
static tap BCKLITtap_state = {
  .is_press_action = true,
  .state = 0
};

/*
void BL_finished (qk_tap_dance_state_t *state, void *user_data) {
  BLtap_state.state = cur_dance(state);
  switch (BLtap_state.state) {
    case SINGLE_TAP: backlight_decrease(); register_code(KC_MINS); break;
    case DOUBLE_TAP: backlight_increase(); register_code(KC_LSFT); register_code(KC_EQL); break;
    case TRIPLE_TAP: backlight_init(); register_code(KC_I); break;
  }
}

void BL_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BLtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_EQL); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP: unregister_code(KC_MINS); break;
    case TRIPLE_TAP: unregister_code(KC_I); break;
  }
  BLtap_state.state = 0;
}
*/


void BCKLIT_finished (qk_tap_dance_state_t *state, void *user_data) {
  BCKLITtap_state.state = cur_dance(state);
  switch (BCKLITtap_state.state) {
    case SINGLE_TAP:  backlight_level(BL_LOW); break; // low backlight
    case SINGLE_HOLD: backlight_toggle(); break;
    case DOUBLE_TAP:  backlight_level(BL_MED); break; // medium backlight
/*
 * FIXME: it doesn't recognize breathing functions !!!
 * case DOUBLE_HOLD: breathing_toggle(); break;
 */
    case DOUBLE_HOLD: register_code(KC_NO); break; // breathing_toggle(); break;
    case TRIPLE_TAP:  backlight_level(BL_HGH); break;  // high backlight
  }
}

void BCKLIT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BCKLITtap_state.state) {
    case SINGLE_TAP:  break;
    case SINGLE_HOLD: break;
    case DOUBLE_TAP:  break;
    case DOUBLE_HOLD: unregister_code(KC_NO); break;
    case TRIPLE_TAP:  break;
  }
  BCKLITtap_state.state = 0;
}


/*


Keycodes  -  Key	Description
=============================
BL_TOGG	  -  Turn the backlight on or off
BL_STEP	  -  Cycle through backlight levels
BL_ON	    -  Set the backlight to max brightness
BL_OFF	  -  Turn the backlight off
BL_INC	  -  Increase the backlight level
BL_DEC	  -  Decrease the backlight level
BL_BRTG	  -  Toggle backlight breathing




Backlight Functions  -  Function	Description
=============================================
backlight_toggle()	 -  Turn the backlight on or off
backlight_step()	   -  Cycle through backlight levels
backlight_increase() -  Increase the backlight level
backlight_decrease() -  Decrease the backlight level
backlight_level(x)	 -  Sets the backlight level to specified level
get_backlight_level()-  Toggle backlight breathing



Backlight Breathing Functions  -  Function	Description
=======================================================
breathing_toggle()	           -  Turn the backlight breathing on or off
breathing_enable()	           -  Turns on backlight breathing
breathing_disable()	           -  Turns off backlight breathing

*/
// 【🔴】【🔴】【🔴】    BCKLIT    -    💡💡💡    -   B A C K L I G H T    -   💡💡💡   -    BCKLIT    【🔴】【🔴】【🔴】








// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  D I C T A D O  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DICTAD' tap dance.
static tap DICTADtap_state = {
  .is_press_action = true,
  .state = 0
};

void DICTAD_finished (qk_tap_dance_state_t *state, void *user_data) {
  DICTADtap_state.state = cur_dance(state);
  switch (DICTADtap_state.state) {
    case SINGLE_TAP:// ⚪️[XTND_SHORTCUT] (RGUI, RGUI)
                       register_code(KC_RGUI); unregister_code(KC_RGUI); register_code(KC_RGUI); unregister_code(KC_RGUI);
  }
}

void DICTAD_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DICTADtap_state.state) {
    case SINGLE_TAP:  break;
  }
  DICTADtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  D I C T A D O  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  D E L E T E     L I N E    D O W N  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'K_DVIM' tap dance.
static tap K_DVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void K_DVIM_delete_line_down (qk_tap_dance_state_t *state, void *user_data) {
  K_DVIMtap_state.state = cur_dance(state);
  switch (K_DVIMtap_state.state) {
    case SINGLE_TAP:// 🔴 DVIM Delete line down

                       register_code(KC_RGHT); unregister_code(KC_RGHT);

                       register_code(KC_LGUI); register_code(KC_LEFT);
                       unregister_code(KC_LEFT); unregister_code(KC_LGUI);

                       register_code(KC_LSFT); register_code(KC_LGUI); register_code(KC_RGHT);
                       unregister_code(KC_RGHT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);

                       register_code(KC_BSPC);  unregister_code(KC_BSPC);
                       register_code(KC_BSPC);  unregister_code(KC_BSPC);

                       register_code(KC_RGHT); unregister_code(KC_RGHT);

                       break;
  }
}

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  D E L E T E     L I N E    D O W N  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  D E L E T E     L I N E    U P  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'L_DVIM' tap dance.
static tap L_DVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void L_DVIM_delete_line_up (qk_tap_dance_state_t *state, void *user_data) {
  L_DVIMtap_state.state = cur_dance(state);
  switch (L_DVIMtap_state.state) {
    case SINGLE_TAP:// 🔴 DVIM Delete line down

                       register_code(KC_RGHT); unregister_code(KC_RGHT);

                       register_code(KC_LGUI); register_code(KC_LEFT);
                       unregister_code(KC_LEFT); unregister_code(KC_LGUI);

                       register_code(KC_LSFT); register_code(KC_LGUI); register_code(KC_RGHT);
                       unregister_code(KC_RGHT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);

                       register_code(KC_BSPC);  unregister_code(KC_BSPC);
                       register_code(KC_BSPC);  unregister_code(KC_BSPC);

                       //register_code(KC_LEFT); unregister_code(KC_LEFT);

                       break;
  }
}

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  D E L E T E     L I N E    U P  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'U_PVIM' tap dance.
static tap U_PVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void U_PVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  U_PVIMtap_state.state = cur_dance(state);
  switch (U_PVIMtap_state.state) {
    case SINGLE_TAP: // [PVIM_SHORTCUT] (GUI+LEFT) Move to START OF LINE
                        register_code(KC_LEFT); unregister_code(KC_LEFT); register_code(KC_LGUI); register_code(KC_LEFT); break;
    case SINGLE_HOLD:   register_code(KC_NO); break;
    case DOUBLE_TAP: // [PVIM_SHORTCUT] (ALT + UP) Move to START OF PARAGRAPH
                        register_code(KC_LEFT); unregister_code(KC_LEFT); register_code(KC_LALT); register_code(KC_UP); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_NO); break;
  }
}

void U_PVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_PVIMtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;
    case SINGLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_TAP:        unregister_code(KC_UP); unregister_code(KC_LALT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_NO); break;
  }
  U_PVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'P_PVIM' tap dance.
static tap P_PVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void P_PVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_PVIMtap_state.state = cur_dance(state);
  switch (P_PVIMtap_state.state) {
    case SINGLE_TAP: // [PVIM_SHORTCUT] (GUI+RIGHT) Move to END OF LINE
                       register_code(KC_RGHT); unregister_code(KC_RGHT); register_code(KC_LGUI); register_code(KC_RGHT); break;
    case SINGLE_HOLD:  register_code(KC_NO); break;
    case DOUBLE_TAP: // [PVIM_SHORTCUT] (ALT + DOWN) Move to END OF PARAGRAPH
                       register_code(KC_RGHT); unregister_code(KC_RGHT); register_code(KC_LALT); register_code(KC_DOWN); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_NO); break;
  }
}

void P_PVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_PVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;
    case SINGLE_HOLD: unregister_code(KC_NO); break;
    case DOUBLE_TAP:  unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_NO); break;
  }
  P_PVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】













// [BOOKMARK] 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//
// [BOOKMARK] 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     P A R A G R A P H       U P   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'YPVIM' tap dance.
static tap YPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void YPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  YPVIMtap_state.state = cur_dance(state);
  switch (YPVIMtap_state.state) {
    case SINGLE_TAP: // [YPVIM_SHORTCUT] Move paragraph up       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_Y
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_Y); break;
  }
}

void YPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (YPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_Y); break;
  }
  YPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     P A R A G R A P H       U P   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'UPVIM' tap dance.
static tap UPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void UPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  UPVIMtap_state.state = cur_dance(state);
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP: // [uPVIM_SHORTCUT] (GUI+LEFT) Move to beginning of line      LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_U
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_U); break;
    case DOUBLE_TAP: // [UPVIM_SHORTCUT] (ALT + UP) Move to beginning of paragraph  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_U)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_U); break;
  }
}

void UPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_U); break;
    case DOUBLE_TAP:  unregister_code(KC_U); unregister_code(KC_LSFT); break;
  }
  UPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    B E G I N N I N I N G     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'IPVIM' tap dance.
static tap IPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void IPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  IPVIMtap_state.state = cur_dance(state);
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP: // [IPVIM_SHORTCUT] (ALT+LEFT) Move to BEGINNING OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_I
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_I); break;
    case DOUBLE_TAP: // [IPVIM_SHORTCUT] (CTL+ALT+LEFT) Move to BEGINNING OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_I)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_I); break;
  }
}

void IPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_I); break;
    case DOUBLE_TAP:  unregister_code(KC_I); unregister_code(KC_LSFT); break;
  }
  IPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    B E G I N N I N I N G     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    E N D     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'OPVIM' tap dance.
static tap OPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void OPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  OPVIMtap_state.state = cur_dance(state);
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP: // [OPVIM_SHORTCUT] (ALT+RIGHT) Move to END OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_O
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_O); break;
    case DOUBLE_TAP: // [OPVIM_SHORTCUT] (CTL+ALT+RIGHT) Move to END OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_O)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_O); break;
  }
}

void OPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_O); break;
    case DOUBLE_TAP:  unregister_code(KC_O); unregister_code(KC_LSFT); break;
  }
  OPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    E N D     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'PPVIM' tap dance.
static tap PPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void PPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  PPVIMtap_state.state = cur_dance(state);
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP: // [PVIM_SHORTCUT] (GUI+RIGHT) Move to END OF LINE               LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_P
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_P); break;
    case DOUBLE_TAP: // [PVIM_SHORTCUT] (ALT + DOWN) Move to END OF PARAGRAPH         LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_P)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_P); break;
  }
}

void PPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_P); break;
    case DOUBLE_TAP:  unregister_code(KC_P); unregister_code(KC_LSFT); break;
  }
  PPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥












// [BOOKMARK][TAPDANCE]

// END - my own tap_dance harvest

///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them
//
// LAYERS
  [Q_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_SUSR_finished, Q_SUSR_reset)
 ,[W_MOUS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_MOUS_finished, W_MOUS_reset)
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)
 ,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)
 ,[R_APPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_APPS_finished, R_APPS_reset, 300)
 ,[U_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_APPS_finished, U_APPS_reset)
 ,[P_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_SUSR_finished, P_SUSR_reset)
 ,[B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
 ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)
 ,[SLNMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNMBR_finished, SLNMBR_reset)
 ,[DONMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DONMBR_finished, DONMBR_reset)
// layers
//

//
// ACCENTS
 ,[I_CIRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, I_CIRC_finished, I_CIRC_reset)
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)
 ,[N_TILD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_TILD_finished, N_TILD_reset)
//accents
//

//
// SYMBOLS
 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,[DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)
// symbols

// functions
 ,[DICTAD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DICTAD_finished, DICTAD_reset)
 ,[K_DVIM] = ACTION_TAP_DANCE_FN(K_DVIM_delete_line_down)
 ,[L_DVIM] = ACTION_TAP_DANCE_FN(L_DVIM_delete_line_up)
// ,[L_DVIM] = ACTION_TAP_DANCE_FN(delete_line_up)

// PVIM
 ,[U_PVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_PVIM_finished, U_PVIM_reset)
 ,[UPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, UPVIM_finished, UPVIM_reset)
 ,[YPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, YPVIM_finished, YPVIM_reset)
 ,[IPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, IPVIM_finished, IPVIM_reset)
 ,[OPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, OPVIM_finished, OPVIM_reset)
 ,[P_PVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_PVIM_finished, P_PVIM_reset)
 ,[PPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, PPVIM_finished, PPVIM_reset)

//
// NUMPAD
 ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
// numpad
//

 //,[BL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BL_finished, BL_reset)
 ,[BCKLIT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BCKLIT_finished, BCKLIT_reset)

// ,[TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
// ,[Q__TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_TAB)
// ,[ENT_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ENT_finished, ENT_reset)
// ,[DEL_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DEL_finished, DEL_reset)
};

//In Layer declaration, add tap dance item in place of a key code
//TD(A_CAPS)

///////////// TAP DANCE SECTION END ///////////////

























void matrix_init_user(void) {



  /*caps_control_backlight = 0;*/

/*
  register_code(KC_CAPS);
  unregister_code(KC_CAPS);
*/

  /*breathing_enable();*/

  breathing_disable();

  backlight_level_before_caps_look = get_backlight_level();

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
}



/*



const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}
*/




/*
void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
       case CUTE_ACC:
      {
        // SEND_STRING("");
        // register_code(UC(UC_A_AC));  unregister_code(UC(UC_A_AC));
        // SEND_STRING("DETECTADO MACRO: CUTE_ACC"); // send_unicode_hex_string("0301");
        return false;
      }
    }
  }
  return true;
}
*/










/*
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(0),  // Calls action_function()
  [1] = ACTION_FUNCTION(1)   // Calls action_function()
};
*/

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//  static uint8_t mods_pressed;

  switch (id) {
    case 0:
      /* Handle the combined Grave/Esc key
       */
/*      mods_pressed = get_mods()&GRAVE_MODS; // Check to see what mods are pressed

      if (record->event.pressed) {
*/
        /* The key is being pressed.
         */
/*        if (mods_pressed) {
          add_key(KC_O);
          send_keyboard_report();
        } else {
          add_key(KC_E);
          send_keyboard_report();
        }
      } else {
*/
        /* The key is being released.
         */
/*        if (mods_pressed) {
          del_key(KC_O);
          send_keyboard_report();
        } else {
          del_key(KC_E);
          send_keyboard_report();
        }
      }
*/
      break;
    case 1:
/*
      if (record->event.pressed) {
*/
        /* The key is being pressed.

        add_key(KC_LSFT); send_keyboard_report();
        add_key(KC_LCTL); send_keyboard_report();
        add_key(KC_LALT); send_keyboard_report();
        add_key(KC_LGUI); send_keyboard_report();
        add_key(KC_V);    send_keyboard_report();
        del_key(KC_V);    send_keyboard_report();
        del_key(KC_LGUI); send_keyboard_report();
        del_key(KC_LCTL); send_keyboard_report();
        del_key(KC_LALT); send_keyboard_report();
        del_key(KC_LSFT); send_keyboard_report();
        add_key(KC_P);    send_keyboard_report();
        del_key(KC_P);    send_keyboard_report();
        add_key(KC_Y);    send_keyboard_report();

        */
/* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
//        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
//        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
/* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
//        register_code(KC_P); unregister_code(KC_P);
//        register_code(KC_Y);
/*
SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
SEND_STRING("p");
SEND_STRING(SS_DOWN(X_END));



      } else {
*/
        /* The key is being released.
         */
/*
         SEND_STRING(SS_UP(X_END));
      }
*/
      break;
  }
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵
 /* Keymap GHKN 0: gherkin default layer

 * |      |      |      |      |      ||      |      |      |      |      |



  * ,----------------------------------.,----------------------------------.
  * |BL_HGH|BL_MED|      |BL_OFF|      ||      |BL_OFF|      |      |BL_HGH|
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
  * |▪︎▪︎ Tab|      |      | APPS |      ||      |U_DIAE|I_CIRC|      |      |
  * | SUSR | MOUS |      | RESET|      ||      | APPS |      |      | SUSR |
  * |------+------+------+------+------||------+------+------+------+------|
  * |BL_HGH|      |      |      |BL_MED||BL_MED|      |      |      |      |
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|
  * |▪︎▪︎ Cap|      |      |F_CAPS|      ||      |J_ACUT|      |      |      |
  * | LSft | LCtl | LAlt | LGui | SYMB || SYMB | RGui | RAlt | RCtl | RSft |
  * |------+------+------+------+------||------+------+------+------+------|
  * |BL_MED|BL_HGH|BL_OFF|BL_MED|BL_HGH||BL_HGH|BL_MED|BL_OFF|      |BL_MED|
  * |      |      |      |      |      ||      |      |      |      |      |
  * |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|
  * |      |      |      |      |      ||N_TILD|      |▪︎▪︎Acut|  ❌  |      |
  * | XTND | PVIM | FNCT | EFNC | NMBR || NMBR | EFNC | FNCT |      | XTND |
  * '----------------------------------''----------------------------------'
  *                     ,-------------.  ,-------------.
  *                     | Speak| Menu |  | Desk | SpotL|
  *                     | Siri | Dock |  |W_Apps|Launch|
  *                     |Dictat|Status|  |MisCtl|Dashbd|
  *              ,------|      |FloatW|  |TGNMBR|      |------.
  *              |      | SYMB | NMBR |  | NMBR | SYMB |      |
  *              |BackSp|------|------|  |------|------| Space|
  *              |      |Delete|      |  |      | Enter|      |
  *              |      |      |Escape|  |  Tab |      |      |
  *              | PVIM | MOUS | FNCT |  | EFNC | MOUS | PVIM |
  *              `--------------------'  `--------------------'
  */
  [GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.
          TD(Q_SUSR),     TD(W_MOUS),           KC_E,     TD(R_APPS),           KC_T,             KC_Y,     TD(U_APPS),       TD(I_CIRC),         KC_O,       TD(P_SUSR),
  //|---------------|---------------|---------------+---------------+----------------||---------------+---------------|-----------------|-------------+-----------------|
        /*LSFT_T(KC_A)*/TD(A_CAPS),   LCTL_T(KC_S),   LALT_T(KC_D),     TD(F_CAPS), LT(SYMB, KC_G),   LT(SYMB, KC_H),     TD(J_ACUT),     LALT_T(KC_K), LCTL_T(KC_L),   RSFT_T(KC_SPC),
  //|---------------|---------------|---------------+---------------+----------------||---------------+---------------|-----------------|-------------+-----------------|
      LT(XTND, KC_Z), LT(PVIM, KC_X), LT(FNCT, KC_C), LT(XFNC, KC_V),     TD(B_NMBR),       TD(N_NMBR), LT(XFNC, KC_M), LT(FNCT, KC_ESC),      KC_BSPC, LT(XTND, KC_ENT)
  //|---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.

/*
                                                                                            left thumb
                                                                ,------------------+------------------.
                                                                         TD(L_SYMB),        TD(L_NMBR),
                                                                |------------------+------------------.
                                                                                                  _______,
                                             ,------------------+------------------+------------------.
                                               LT(PVIM, KC_BSPC),  LT(MOUS, KC_DEL),  LT(FNCT, KC_ESC),
                                             `------------------+------------------+------------------.
     right thumb
      ,------------------+------------------.
               TD(R_NMBR),        TD(R_SYMB),
      |------------------+------------------.
                     _______,
      ,------------------+------------------+------------------.
         LT(EFUN, KC_TAB),  LT(MOUS, KC_ENT),  LT(PVIM, KC_SPC)
      `------------------+------------------+------------------.
*/
  ), // END OF GHKN 0
// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap NMBR 1: numbers layer
*
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------'`----------------------------------'
*
*                    ,-------------.    ,-------------.
*             ,------|      |      |    |      |      |------.
*             |      |------|      |    |      |------|      |
*             |      |      |------|    |------|      |      |
*             |      |      |      |    |      |      |      |
*             |      |      |      |    |      |      |      |
*             `--------------------'    `--------------------'
*
*/

/* gherkin_Keymap ________: __________________________________________
*
* ,----------------------------------------------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------++------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------++------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------------------------------------------'
*
*/


/*
*
*
*                                      ,-------------.  ,-------------.
*                                      | Speak| Menu |  | Desk | SpotL|
*                                      | Siri | Dock |  |W_Apps|Launch|
*                                      |Dictat|Status|  |MisCtl|Dashbd|
*                               ,------|      |FloatW|  |TGNUMB|      |------.
*                               |      | SYMB | NUMB |  | NUMB | SYMB |      |
*                               |BackSp|------|------|  |------|------| Space|
*                               |      |Delete|      |  |      | Enter|      |
*                               |      |      |Escape|  |  Tab |      |      |
*                               | PVIM | MOUS | FUNC |  | EFUN | MOUS | PVIM |
*                               `--------------------'  `--------------------'
*/









// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴


/* Keymap NMBR 1: numbers layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |  000 |  00  |   0  |   =  | $//€ ||   -  |   4  |   5  |   6  |   +  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |   %  | ENTER|  TAB |   .  |   ,  ||   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------'`----------------------------------'
*/

[NMBR] = LAYOUT_ortho_3x10(  // layer 1 : numbers layer

  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
            KC_P1,          KC_P2,          KC_P3,          KC_P4,            KC_P5,            KC_P6,          KC_P7,        KC_P8,        KC_P9,          KC_P0,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
       TD(TRIP_0),     TD(DOUB_0),          KC_P0,        KC_PEQL,       TD(DO_EUR),          KC_PMNS,          KC_P4,        KC_P5,        KC_P6,        KC_PPLS,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
          KC_PENT,        KC_BSPC,         KC_TAB,        KC_COMM,       TD(DONMBR),       TD(SLNMBR),          KC_P1,        KC_P2,        KC_P3,        KC_PAST
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
), // END OF NMBR 1


// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴




/* Keymap SYMB 2: symbols Layer
*
* ,-----------------------------------------.                    ,-----------------------------------------.
* |      |      |      |      |      |      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |   `  |   ~  |   =  |   _  |   %  |                    |  \/^ |   (  |   )  |   *  |   /  |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |  '/" |   @  |   +  |   -  |  $/€ |                    |   |  |   {  |   }  |   :  |   ;  |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |  !¡  |  ?¿  |   <  |   >  |   #  |                    |   &  |   [  |   ]  |   ,  |   .  |      |
* |------+------+------+------+------+------'                    `------+------+------+------+------+------|
* |      |      |      |      |      |                                  |      |      |      |      |      |
* `----------------------------------'                                  `----------------------------------'
*                                      ,-------------.  ,-------------.
*                                      |      |      |  |      |      |
*                               ,------|------|------|  |------+------+------.
*                               |      |      |      |  |      |      |      |
*                               |      |      |------|  |------|      |      |
*                               |      |      |      |  |      |      |      |
*                               `--------------------'  `--------------------'
*/



// SYMBOLS
[SYMB] = LAYOUT_ortho_3x10(  // layer 2: symbols layer
/// 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
// IMPLEMENTAR LOS 3 TAPDANCE PARA TILDE, EQUAL & BACKSLASH PARA INCLUIR A AT, HASH, CIRCUNFLEX !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
         KC_GRV,        KC_TILD,         KC_EQL,        KC_UNDS,          KC_PERC,       TD(BSL_CI),        KC_LPRN,      KC_RPRN,      KC_ASTR,        KC_SLSH,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(QUOT_D),          KC_AT,        KC_PLUS,        KC_MINS,       TD(DO_EUR),          KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,        KC_SCLN,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(EXCLAM),     TD(QUESTI),        KC_LABK,        KC_RABK,          KC_HASH,          KC_AMPR,        KC_LBRC,      KC_RBRC,      KC_COMM,         KC_DOT
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
// EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
), // END OF SYMB 2



// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴


/* Keymap FNCT 3: functions layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  F1  |  F2  |  F3  |  F4  |  F5  ||  F6  |  F7  |  F8  |  F9  |  F10 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  F11 |  F12 |  F13 |  F14 |  F15 ||  F16 |  F17 |  F18 |  F19 |  F20 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |BACKLI|BACKLI|BACKLI|BACKLI|
 * |  F21 |  F22 |  F23 |  F24 |   A  ||   B  | BL_ON|BL_OFF|BL_INC|BLTOGG|
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
 */

[FNCT] = LAYOUT_ortho_3x10(  // layer 3 : functions layer

  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
            KC_F1,          KC_F2,          KC_F3,          KC_F4,            KC_F5,            KC_F6,          KC_F7,        KC_F8,        KC_F9,         KC_F10,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
           KC_F11,         KC_F12,         KC_F13,         KC_F14,           KC_F15,           KC_F16,         KC_F17,       KC_F18,       KC_F19,         KC_F20,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
           KC_F21,         KC_F22,         KC_F23,         KC_F24,         TO(GHKN),       TD(BCKLIT),          BL_ON,       BL_DEC,       BL_INC,        BL_TOGG
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
), // END OF FNCT 3


// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴


/* Keymap XFNC 4: extended functions layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  eF1 |  eF2 |  eF3 |  eF4 |  eF5 ||  eF6 |  eF7 |  eF8 |  eF9 | eF10 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | eF11 | eF12 | eF13 | eF14 | eF15 || eF16 | eF17 | eF18 | eF19 | eF20 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |


 * |   !  |   @  |   #  |   $  |   %  ||   ^  |   &  |   *  |   (  |   )  |


 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
 */

[XFNC] = LAYOUT_ortho_3x10(  // layer 4 : extended functions layer

  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
            KC_F1,          KC_F2,          KC_F3,          KC_F4,            KC_F5,            KC_F6,          KC_F7,        KC_F8,        KC_F9,         KC_F10,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
           KC_F11,         KC_F12,         KC_F13,         KC_F14,           KC_F15,           KC_F16,         KC_F17,       KC_F18,       KC_F19,         KC_F20,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
           KC_F21,         KC_F22,         KC_F23,         KC_F24,           XXXXXX,           XXXXXX,         XXXXXX,       XXXXXX,       XXXXXX,         XXXXXX
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
), // END OF XFNC 4















/* Keymap XTND 5: extended gherkin layer
 * ,-----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      | •Spot|
 * |  Tab | Desk |Windws|Mision|      || Close| Prev | Next |Launch| Light|
 * |      |      | Apps |Contrl|      ||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | Caps |Dictat| EMPTY| Speak|Float.|| Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |Window||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |APP   |APP   |APP   |APP   |      ||      |      |      |  ❌  |      |
 * | OMNI |      |EVER  |      |Reopen|| Close| Prev | Next |DELETE| ENTER|
 * | FOCUS| MAIL | NOTE | NVALT|  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

//

// FLOATING WINDOW IS ^F6


[XTND] = LAYOUT_ortho_3x10(  // layer 5: extended gherkin layer
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
            KC_TAB,           DESK,    APP_WINDOWS,     MISION_CTL,        _______,    _______,           PREV_APP,     NEXT_APP,     _______,   SPTLGHT_SIRI,
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
           KC_CAPS,     TD(DICTAD),        _______,          SPEAK,    LCTL(KC_F6),   TO(SYMB),           PREV_WIN,     NEXT_WIN,   DASHBOARD,         KC_SPC,
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
           _______,        _______,        _______,        _______,       TO(NMBR),   TO(NMBR),           PREV_TAB,     NEXT_TAB,      KC_DEL,         KC_ENT
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|

/*
// right hand
//,-----------------------------------------------------------------------------------------------------.
//|---------------|-------------------|---------------+---------------+-----------------+---------------|
             _______, LSFT(LGUI(KC_TAB)),   LGUI(KC_TAB),           _______,             _______,           _______,
//|---------------|-------------------|---------------+---------------+-----------------+---------------|
       TD(R_SYMB)____, LSFT(LGUI(KC_GRV)),   LGUI(KC_GRV),           _______,           KC_SPC,           _______,
//|---------------|-------------------|---------------+---------------+-----------------+---------------|
       TD(R_NUMB)____, LSFT(LCTL(KC_TAB)),   LCTL(KC_TAB),         KC_DEL,           KC_ENT,           _______,
//`---------------|-------------------|---------------+---------------+-----------------+---------------|
//                `------------------------------------------------------------------------------------.
*/
), // END OF XTND 5

/* Keymap APPS 6: APPS layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |   Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |   A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | SCLN |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | COMM |  DOT | SLSH |
* |      |      |      |      |      ||      |      |      |      |      |
* '----------------------------------''----------------------------------'
*/

[APPS] = LAYOUT_ortho_3x10(  // layer 6: APPS layer !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
              KC_Q,           KC_W,          KC_E,            KC_R,            KC_T,      KC_Y,               KC_U,          KC_I,          KC_O,          KC_P,
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
              KC_A,           KC_S,          KC_D,            KC_F,            KC_G,      KC_H,               KC_J,          KC_K,          KC_L,       KC_SCLN,
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
              KC_Z,           KC_X,          KC_C,            KC_V,            KC_B,      KC_N,               KC_M,       KC_COMM,        KC_DOT,       KC_SLSH
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF APPS 6



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

/* Keymap PVIM 7: personal VIM editor layer
 * ,-----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |BginOf| Begin|  End |End of|
 * |      |      |      |      |      ||      |▪︎Line |  of  |  of  |▪︎Line |
 * |      |      |      |      |      ||      |▪︎▪︎Prgh| Word | Word |▪︎▪︎Prgh|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      | DVIM |      |      ||      | LEFT | DOWN |  UP  | RIGHT|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      | MOVE | MOVE | MOVE | MOVE |
 * | XVIM |      | ZVIM | SVIM |      ||      | HOME | PAGE | PAGE |  END |
 * |      |      |      |      |      ||      |      | DOWN |  UP  |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

//

/*
[PVIM] = LAYOUT_ortho_3x10(  // layer 7: PVIM layer
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,     XXXXXX,         TD(U_PVIM), LALT(KC_LEFT), LALT(KC_RGHT),    TD(P_PVIM),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,     XXXXXX,            KC_LEFT,       KC_DOWN,         KC_UP,       KC_RGHT,
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),         XXXXXX,       MO(ZVIM),       MO(SVIM),         XXXXXX,     XXXXXX,      LALT(KC_HOME), LALT(KC_PGDN), LALT(KC_PGUP),   LALT(KC_END)
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF PVIM 7
*/


[PVIM] = LAYOUT_ortho_3x10(  // layer 7: PVIM layer - Personal VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         F(0),           F(1),  TD(YPVIM),          TD(UPVIM),          TD(IPVIM),          TD(OPVIM),          TD(PPVIM),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,           F(0),  LCTL(LALT(KC_STOP)), LCTL(LALT(KC_F16)), LCTL(LALT(KC_F17)), LCTL(LALT(KC_F18)), LCTL(LALT(KC_F19)),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),       MO(PVIM),       MO(ZVIM),       MO(SVIM),       MO(AVIM),   LCTL(LALT(KC_F20)), LCTL(LALT(KC_F21)), LCTL(LALT(KC_F22)), LCTL(LALT(KC_F23)),  LCTL(LALT(KC_F24))
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF PVIM 7

[DVIM] = LAYOUT_ortho_3x10(  // layer 8: DVIM layer - Delete VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,  LCTL(LGUI(KC_PSCR)),LCTL(LGUI(KC_PAUS)),LCTL(LGUI(KC_SLCT)),LCTL(LGUI(KC_EXEC)), LCTL(LGUI(KC_FIND)),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,  LCTL(LGUI(KC_STOP)), LCTL(LGUI(KC_F16)), LCTL(LGUI(KC_F17)), LCTL(LGUI(KC_F18)), LCTL(LGUI(KC_F19)),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),       MO(PVIM),       MO(ZVIM),       MO(SVIM),       MO(AVIM),   LCTL(LGUI(KC_F20)), LCTL(LGUI(KC_F21)), LCTL(LGUI(KC_F22)), LCTL(LGUI(KC_F23)), LCTL(LGUI(KC_F24))
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF DVIM 8

[SVIM] = LAYOUT_ortho_3x10(  // layer 9: SVIM layer - Select VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,  LALT(LGUI(KC_PSCR)), LALT(LGUI(KC_PAUS)), LALT(LGUI(KC_SLCT)), LALT(LGUI(KC_EXEC)), LALT(LGUI(KC_FIND)),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,  LALT(LGUI(KC_STOP)), LALT(LGUI(KC_F16)), LALT(LGUI(KC_F17)), LALT(LGUI(KC_F18)), LALT(LGUI(KC_F19)),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),       MO(PVIM),       MO(ZVIM),       MO(SVIM),       MO(AVIM),  LALT(LGUI(KC_F20)), LALT(LGUI(KC_F21)), LALT(LGUI(KC_F22)), LALT(LGUI(KC_F23)), LALT(LGUI(KC_F24))
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF SVIM 9

[XVIM] = LAYOUT_ortho_3x10(  // layer 10: XVIM layer - eXtra VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,  LCTL(KC_PSCR), LCTL(KC_PAUS), LCTL(KC_SLCT), LCTL(KC_EXEC), LCTL(KC_FIND),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,  LCTL(KC_STOP), LCTL(KC_F16), LCTL(KC_F17), LCTL(KC_F18), LCTL(KC_F19),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),       MO(PVIM),       MO(ZVIM),       MO(SVIM),       MO(AVIM),  LCTL(KC_F20), LCTL(KC_F21), LCTL(KC_F22), LCTL(KC_F23), LCTL(KC_F24)
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF XVIM 10

[ZVIM] = LAYOUT_ortho_3x10(  // layer 11: ZVIM layer - 2nd eXtra VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,  LALT(KC_PSCR), LALT(KC_PAUS), LALT(KC_SLCT), LALT(KC_EXEC), LALT(KC_FIND),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,  LALT(KC_STOP), LALT(KC_F16), LALT(KC_F17), LALT(KC_F18), LALT(KC_F19),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),       MO(PVIM),       MO(ZVIM),       MO(SVIM),       MO(AVIM),  LALT(KC_F20), LALT(KC_F21), LALT(KC_F22), LALT(KC_F23), LALT(KC_F24)
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF ZVIM 11

[AVIM] = LAYOUT_ortho_3x10(  // layer 12: AVIM layer - Alignment VIM layer   ⎯⎯⎯⎯⎯⎯⎯    FUNCTION KEYS FOR KEYBINDING COMBINATIONS !!!
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------.
            XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,         XXXXXX,  LGUI(KC_PSCR), LGUI(KC_PAUS), LGUI(KC_SLCT), LGUI(KC_EXEC), LGUI(KC_FIND),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
            XXXXXX,         XXXXXX,       MO(DVIM),         XXXXXX,         XXXXXX,  LGUI(KC_STOP), LGUI(KC_F16), LGUI(KC_F17), LGUI(KC_F18), LGUI(KC_F19),
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------|
          MO(XVIM),         XXXXXX,       MO(ZVIM),       MO(SVIM),       MO(AVIM),   LGUI(KC_F20), LGUI(KC_F21), LGUI(KC_F22), LGUI(KC_F23), LGUI(KC_F24)
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|--------------|--------------+--------------'
), // END OF AVIM 12
















/*
 *  ETC
 * .-----------------------------------------------------------------------------------------.
 * |  `     | mUP    |        |        | RESET  | SHIFT  | mUp    | mDown  |        |  \     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | mLeft  | mDown  | mRight |        | SHIFT  | mBtn3  | mBtn1  | mBtn2  |  ;     |  '     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Sft//Cp|        |        |        |        | C-A-D  |        |        | ALT    |  DEL   |
 * '-----------------------------------------------------------------------------------------'
 */

/*
[MOUS] = LAYOUT_ortho_3x10(  // layer 13: mouse layer
  _______,  KC_MS_U, _______, _______, _______,   KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, _______,
  KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_BTN3, KC_BTN1, KC_BTN2, _______, _______,
  KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______
),
*/

/* ✅ Keymap MOUS 13: Mouse layer
* ,-----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |Accel0|      |Accel1|Accel2|      ||      | wLeft| wDown|  wUp |wRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      | mBtn1|      ||      | mLeft| mDown|  mUp |mRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      | mBtn2|| mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |      |      |      ||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/
[MOUS] = LAYOUT_ortho_3x10(  // layer 13: mouse layer
  KC_ACL0, _______, KC_ACL1, KC_ACL2, _______,   _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
  _______, _______, _______, KC_BTN1, _______,   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
  _______, _______, _______, _______, KC_BTN2,   KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5
),
/* ✅ END OF MOUS 12*/





                               ^F2  menu bar  
                         $^KC_EJCT  SLEEP                                                KC_SLEP

                               ^F3  dock bar
                          ~@KC_ESC  force quit menu

                               ^F5  tools bar
                         $~@KC_ESC  kill current application

                               ^F8  status bar
16xKC__VOLDOWN, KC__VOLUP, ^~@KC_EJCT  shut down              16xKC__VOLDOWN, KC__VOLUP, KC_POWER

                         ^@KC_EJCT  restart




/* Keymap SUSR 14: superuser layer
* ,-----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      | sleep: LSHFT(LCTRL(KC_EJCT))
* |      |      |      |      |onHold||      |      |      |      |      |
* |      |      |      |      | RESET||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* | Menu | Dock | Tool |Status|      ||      |      |      |      |      |
* | _bar | _bar | _bar | _bar |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |onHold|onHold|onHold|onHold|onHold||      |      |      |      |      |
* | SLEEP|K_MENU|KILL_A|SHUT_D|RSTART||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* | UNDO |  CUT | COPY | PASTE|StPast||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/ //KC_UNDO,KC_CUT,KC_COPYKC_PASTE

// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
[SUSR] = LAYOUT_ortho_3x10(  // layer 14: superuser gherkin layer
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
             _______,          _______,          _______,          RESET,           _______,    _______,           _______,     _______,     _______,   _______,
// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
           _______,     _______,     _______,          _______,       _______,   _______,           _______,     _______,   _______,         _______,
// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
           _______,        _______,        _______,        _______,       _______,   _______,           _______,     _______,      _______,         _______
// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
//|---------------|---------------|---------------+---------------+----------------||---------|-------------------|-------------|------------+---------------|
), // END OF SUSR 14
// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

/*
   *  FAKE FNCT
   * .-----------------------------------------------------------------------------------------.
   * |        |        |        |        |        |        |        |        |        | q    |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * |    `   |    ´   |    ¨   |   ~    |   ^    |        |        |        |        |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | Sft//Cp|        |        |        |        |        |        |        |        |        |
   * '-----------------------------------------------------------------------------------------'
*/

/*
  [FNCT] = LAYOUT_ortho_3x10( // MINE
    // X(ACUTE_A)
       TD(TD_Q_ESC), TD(TD_W_TAB),   CUTE_ACC,  UC(UC_A_AC),    _______, _______, _______, _______, _______, _______,
       LALT(KC_GRV), LALT(KC_E), LALT(KC_U), LALT(KC_N), LALT(KC_I), _______, _______, _______, _______, _______,
    TD(A_CAPS),    TD(ENT_TAP_DANCE),    TD(DEL_TAP_DANCE),    TD(ESC_AC),    _______, _______, _______, _______, _______, _______
  ),
*/

/*
 *  MINE
 * .-----------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |    `   |    ´   |    ¨   |   ~    |   ^    |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Sft//Cp|        |        |        |        |        |        |        |        |        |
 * '-----------------------------------------------------------------------------------------'
*/
/*
  [MINE] = LAYOUT_ortho_3x10( // MINE
  // X(ACUTE_A)
     TD(TD_Q_ESC), TD(TD_W_TAB),   CUTE_ACC,  UC(UC_A_AC),    _______, _______, _______, _______, _______, _______,
     LALT(KC_GRV), LALT(KC_E), LALT(KC_U), LALT(KC_N), LALT(KC_I), _______, _______, _______, _______, _______,
  TD(A_CAPS),    TD(ENT_TAP_DANCE),    TD(DEL_TAP_DANCE),    TD(ESC_AC),    _______, _______, _______, _______, _______, _______
),
*/

/*
*  Keymap BLIT 15: backlit layer (backlight layer)
* .-----------------------------------------------------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |        |        |BREATH_H|BREATH_M|BREATH_L|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |        |        |  BL_ON | BL_INC | BL_DEC |
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |BL_TOGGL|BREATH_T|        |        |        |
* '-----------------------------------------------------------------------------------------'
*/

/////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥/////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
///// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅//// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅//// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅
/////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥/////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥////🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
///// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅//// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅//// ✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅✅

// [FIXME !!!] // Write action codes for BLIT layout

[BLIT] = LAYOUT_ortho_3x10( // layer 15: BLIT layer
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,   BL_ON,  BL_INC,  BL_DEC,
  _______, _______, _______, _______, _______, BL_TOGG, BL_BRTG,  BL_OFF, _______, _______
), // END OF BLIT 15


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
};


void led_set_user(uint8_t usb_led) {

  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    DDRD |= (1 << 5); PORTD &= ~(1 << 5);
  } else {
    DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
  }

  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    DDRB |= (1 << 0); PORTB &= ~(1 << 0);
  } else {
    DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
  }

  if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_COMPOSE)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_KANA)) {

  } else {

  }

};

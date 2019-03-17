//
//
// keymap.c
// ADVANCED_MINE
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
// #include "tap_dance.h"
// #include "users/zer09/tap_dance.h"
#include "process_tap_dance.h"
#include "action_layer.h"
#include "process_unicode.h"
#include "process_unicode_common.h"
#include "process_unicodemap.h"
#include "send_string_keycodes.h"

#include "quantum.h"
#include "action.h"



// #include "rgblight.h"

//trash //#include send_string_keycodes.h

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define GHKN 0
#define DIR 1
#define NUM 2
#define ETC 3
#define _QW 4
#define XTND 5 // extended default layer
#define SYMB 6 // symbols layer
#define NMBR 7 // numbers layer
#define MOUS 8  // mouse layer
#define APPS 9 // apps layer

#define FNCT 10 // functions Layer
#define EFNC 11 // exended functions layer
#define PVIM 12 // personal vim layer
#define DVIM 13 // delete   vim layer
#define SVIM 14 // select   vim layer
#define MVIM 15 // move     vim layer
#define LVIM 16 // scroll   vim layer
#define SUSR 17 // super user productivity layer


// Readability keycodes
#define ______ KC_TRNS
#define EMPTY_ KC_NO
// ´ combining acute accent, spacing acute(alone acute)=0x00B4, (modifier letter acute accent (?)= 0x2CA)
#define ACUTE   0x0301
#define EURO    0x20AC


/////////////// TAP DANCE SECTION START ///////////////
//Tap Dance Declarations (list of my tap dance configurations)
enum tap_dance_keycodes {
  TD_SFT_CAPS = SAFE_RANGE     // 0              // wanleg
  ,TD_Q_ESC                    // wanleg
  ,TD_E_RESET                  // mine
  ,ENT_TAP_DANCE               // wanleg
  ,DEL_TAP_DANCE               // wanleg
  ,TD_T_KC_Q_H_XTND_TT_KTAB    // mine...
  ,TEST_T_little_face
  ,TD_T_KC_A_H_LSFT_TT_CAPS
  ,TD_T_ESCP_H_FNCT_TT_ACUT
  ,TD_T_SLSH_H_SUSR_TT_ACUT





  ,TD_T_SPEA_H_SYMB_TT_SIRI_TTT_DICT
  ,TD_T_SPOT_H_SYMB_TT_LNCH_TTT_DASH
  ,TD_T_MENU_H_NMBR_TT_DOCK_TTT_STAT_TTTT_FLOA
  ,TD_T_DESK_H_NMBR_TT_WAPP_TTT_MISS_TTTT_TOGG_NMBR
  ,TD_T_EXCL_H_IEXC
  ,TD_T_QUES_H_IQUE





  ,TD_T_QUOT_TT_DQUO
  ,TD_T_DOLR_H_EURO
  ,TD_T_BSLS_H_CIRC
  ,LITTLE_FACE
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

// defining tap_dance aliases for shorting and simplifying long names
#define Q__TAB     TD_T_KC_Q_H_XTND_TT_KTAB
#define TEST_T     TEST_T_little_face
#define A_CAPS     TD_T_KC_A_H_LSFT_TT_CAPS
#define ESC_AC     TD_T_ESCP_H_FNCT_TT_ACUT
#define FUL_AC     TD_T_SLSH_H_SUSR_TT_ACUT
#define L_SYMB     TD_T_SPEA_H_SYMB_TT_SIRI_TTT_DICT
#define L_NMBR     TD_T_MENU_H_NMBR_TT_DOCK_TTT_STAT_TTTT_FLOA
#define R_NMBR     TD_T_DESK_H_NMBR_TT_WAPP_TTT_MISS_TTTT_TOGG_NMBR
#define R_SYMB     TD_T_SPOT_H_SYMB_TT_LNCH_TTT_DASH
#define EXCLAM     TD_T_EXCL_H_IEXC
#define QUESTI     TD_T_QUES_H_IQUE
#define QUOTES     TD_T_QUOT_TT_DQUO
#define DO_EUR     TD_T_DOLR_H_EURO
#define BSL_CI     TD_T_BSLS_H_CIRC


// defining shortcuts aliases for combo keycodes
#define MENU_B     LCTL(KC_F2)    // menu bar
#define DOCK_B     LCTL(KC_F3)    // dock bar
#define TOOL_B     LCTL(KC_F5)    // tools bar
#define STATUS     LCTL(KC_F8)    // status menu bar
#define FLOATW     LCTL(KC_F6)    // move to the floating windows
#define MISION     LCTL(KC_UP)    // show mission control (all open apps)
#define W_APPS     LCTL(KC_DOWN)  // show windows app (all open windows of current app)
#define DESK__     KC_F5          // show whole desk
#define DICTAT     KC_F5          // WRONG, DUPLICATE.  FIX THIS #define bug 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
#define SIRI__     LGUI(KC_SPC)   // HOLD THIS COMBO DOWN for calling to Siri
#define SPEAK_     LCTL(LALT(LGUI(KC_H)))   // speak selected text




void matrix_init_user(void) {
  set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case LITTLE_FACE:
                //send_unicode_hex_string("0028 30CE 0CA0 75CA 0CA0 0029 30CE 5F61 253B 2501 253B");
                SEND_STRING("little_face");
                return false;
      }
  }
  return true;
}


typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    //If count = 1, and it has been interrupted - it doesn't matter if it is pressed or not: Send SINGLE_TAP
    if (state->interrupted || !state->pressed) return SINGLE_TAP;
    if (state->interrupted) return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  //If count = 2, and it has been interrupted - assume that user is trying to type the letter associated
  //with single tap.
  else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
  else return 6; //magic number. At some point this method will expand to work for more presses
}

///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION END /////
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
//instantialize an instance of 'tap' for the 'ENT' tap dance.
static tap ENTtap_state = {
  .is_press_action = true,
  .state = 0
};

void ENT_finished (qk_tap_dance_state_t *state, void *user_data) {
  ENTtap_state.state = cur_dance(state);
  switch (ENTtap_state.state) {
    case SINGLE_TAP: register_code(KC_SPC); break;
    case SINGLE_HOLD: register_code(KC_LSFT); break;
    case DOUBLE_TAP: register_code(KC_ENT); break;
    case DOUBLE_HOLD: register_code(KC_NO); break; // setting double hold to do nothing (change this if you want)
    case DOUBLE_SINGLE_TAP: register_code(KC_SPC); unregister_code(KC_SPC); register_code(KC_SPC);
    //Last case is for fast typing. Assuming your key is `f`:
    //For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
    //In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
  }
}

void ENT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (ENTtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_SPC); break;
    case SINGLE_HOLD: unregister_code(KC_LSFT); break;
    case DOUBLE_TAP: unregister_code(KC_ENT); break;
    case DOUBLE_HOLD: unregister_code(KC_NO);
    case DOUBLE_SINGLE_TAP: unregister_code(KC_SPC);
  }
  ENTtap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'DEL' tap dance.
static tap DELtap_state = {
  .is_press_action = true,
  .state = 0
};

void DEL_finished (qk_tap_dance_state_t *state, void *user_data) {
  DELtap_state.state = cur_dance(state);
  switch (DELtap_state.state) {
    case SINGLE_TAP: register_code(KC_BSPC); break;
    case SINGLE_HOLD: register_code(KC_LCTL); break;
    case DOUBLE_TAP: register_code(KC_DEL); break;
    case DOUBLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_BSPC); unregister_code(KC_BSPC); register_code(KC_BSPC);
  }
}

void DEL_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DELtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_BSPC); break;
    case SINGLE_HOLD: unregister_code(KC_LCTL); break;
    case DOUBLE_TAP: unregister_code(KC_DEL); break;
    case DOUBLE_HOLD: unregister_code(KC_NO);
    case DOUBLE_SINGLE_TAP: unregister_code(KC_BSPC);
  }
  DELtap_state.state = 0;
}

// START - my own tap_dance harvest 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀 😀😀😀
//instanalize an instance of 'tap' for the 'Q__TAB' tap dance.
static tap Q__TABtap_state = {
  .is_press_action = true,
  .state = 0
};

void Q__TAB_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q__TABtap_state.state = cur_dance(state);
  switch (Q__TABtap_state.state) {
    case SINGLE_TAP: register_code(KC_Q); break;
    case SINGLE_HOLD: layer_on(XTND); break;
    case DOUBLE_TAP: register_code(KC_TAB); break;
    case DOUBLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_Q); unregister_code(KC_Q); register_code(KC_Q);
  }
}

void Q__TAB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q__TABtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_Q); break;
    case SINGLE_HOLD: layer_off(XTND); break;
    case DOUBLE_TAP: unregister_code(KC_TAB); break;
    case DOUBLE_HOLD: unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_Q);
  }
  Q__TABtap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'TEST_T_little_face' tap dance.
static tap TEST_Ttap_state = {
  .is_press_action = true,
  .state = 0
};

void TEST_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  TEST_Ttap_state.state = cur_dance(state);
  switch (TEST_Ttap_state.state) {
    case SINGLE_TAP: register_code(KC_T); break;
    case SINGLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_TAP: SEND_STRING("little_face"); break; //send_unicode_hex_string("0028 30CE 0CA0 75CA 0CA0 0029 30CE 5F61 253B 2501 253B"); break;
    case DOUBLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_T); unregister_code(KC_T); register_code(KC_T);
  }
}

void TEST_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TEST_Ttap_state.state) {
    case SINGLE_TAP: unregister_code(KC_T); break;
    case SINGLE_HOLD: unregister_code(KC_NO);; break;
    case DOUBLE_TAP:  break;
    case DOUBLE_HOLD: unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_T);
  }
  TEST_Ttap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'A_CAPS' tap dance.
static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  A_CAPStap_state.state = cur_dance(state);
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP: register_code(KC_A); break;
    case SINGLE_HOLD: register_code(KC_LSFT); break;
    case DOUBLE_TAP: register_code(KC_A); unregister_code(KC_A); register_code(KC_A); break;
    case DOUBLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A); register_code(KC_A); break;
    case TRIPLE_TAP: register_code(KC_CAPS); break;
    case TRIPLE_HOLD: register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);register_code(KC_A); unregister_code(KC_A); register_code(KC_A);

  }
}

void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP: unregister_code(KC_A); break;
    case SINGLE_HOLD: unregister_code(KC_LSFT); break;
    case DOUBLE_TAP: unregister_code(KC_A); break;
    case DOUBLE_HOLD: unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_A); break;
    case TRIPLE_TAP: unregister_code(KC_CAPS); break;
    case TRIPLE_HOLD: unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_A);
  }
  A_CAPStap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'ESC_AC' tap dance.
static tap ESC_ACtap_state = {
  .is_press_action = true,
  .state = 0
};

void ESC_AC_finished (qk_tap_dance_state_t *state, void *user_data) {
  ESC_ACtap_state.state = cur_dance(state);
  switch (ESC_ACtap_state.state) {
    case SINGLE_TAP: register_code(KC_ESC); break;         // escape
    case SINGLE_HOLD: layer_on(FNCT); break;               // FUNC
    case DOUBLE_TAP:  SEND_STRING("little_face"); break; // send_unicode_hex_string("0301");       // UC(ACUTE); break;         // acute accent  #define ACUTE   0x0301
    case DOUBLE_HOLD: register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: SEND_STRING("little_face"); break; // send_unicode_hex_string("0301"); // UC(ACUTE); break;         // acute accent  #define ACUTE   0x0301
  }
}

//void ESC_AC_finished (qk_tap_dance_state_t *state, void *user_data) {
//  ESC_ACtap_state.state = cur_dance(state);
//  switch (ESC_ACtap_state.state) {
//    case SINGLE_TAP: register_code(KC_ESC); break;            // escape
//    case SINGLE_HOLD: layer_on(FNCT); break;                  // FUNC
//    case DOUBLE_TAP: register_code(UC(ACUTE)); break;        // acute accent
//    case DOUBLE_HOLD: register_code(KC_NO); break;
//    case DOUBLE_SINGLE_TAP: register_code(UC(ACUTE));        // acute accent
//  }
//}

void ESC_AC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (ESC_ACtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_ESC); break;
    case SINGLE_HOLD: layer_off(FNCT); break;
    case DOUBLE_TAP: SEND_STRING("little_face"); break; // UC(ACUTE); break;
    case DOUBLE_HOLD: unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: SEND_STRING("little_face"); break; // UC(ACUTE); break;
  }
  ESC_ACtap_state.state = 0;
}
// END - my own tap_dance harvest

///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
 ,[TD_Q_ESC]   = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
 ,[TD_E_RESET] = ACTION_TAP_DANCE_DOUBLE(KC_E, RESET)
 ,[Q__TAB]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q__TAB_finished, Q__TAB_reset)
 ,[TEST_T]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TEST_T_finished, TEST_T_reset)
 ,[A_CAPS]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)
 ,[ESC_AC]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ESC_AC_finished, ESC_AC_reset)
 ,[ENT_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ENT_finished, ENT_reset)
 ,[DEL_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DEL_finished, DEL_reset)
};

// In Layer declaration, add tap dance item in place of a key code
// TD(TD_SFT_CAPS)

// TAP DANCE SECTION END

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



  /* Keymap GHKN 0: gherkin default layer
  *
  * ,-----------------------------------------.,-----------------------------------------.
  * |      | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |      |
  * |      |▪︎▪︎ Tab|      |      |      |      ||      |      |      |      |      |      |
  * |      | XTND | MOUS | RESET| APPS |TEST_T||LITT_F| APPS |      |      | XTND |      |
  * |------+------+------+------+------+------||------+------+------+------+------+------|
  * |      |  ▪︎ A |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|      |
  * |      |▪︎▪︎▪︎Cap|      |      |      |      ||      |      |      |      |      |      |
  * |      | LSft | LCtl | LAlt | LGui | SYMB || SYMB | RGui | RAlt | RCtl | RSft |      |
  * |------+------+------+------+------+------||------+------+------+------+------+------|
  * |      |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|      |
  * |      |      |      |      |      |      ||      |      |▪︎▪︎Acut|  ❌  |      |
  * |      | SUSR | PVIM | FNCT | EFNC | NMBR || NMBR | EFNC | FNCT |      | SUSR |      |
  * |------+------+------+------+------+------'`------+------+------+------+------+------|
  *                                      ,-------------.  ,-------------.
  *                                      | Speak| Menu |  | Desk | SpotL|
  *                                      | Siri | Dock |  |W_Apps|Launch|
  *                                      |Dictat|Status|  |MisCtl|Dashbd|
  *                               ,------|      |FloatW|  |TGNMBR|      |------.
  *                               |      | SYMB | NMBR |  | NMBR | SYMB |      |
  *                               |BackSp|------|------|  |------|------| Space|
  *                               |      |Delete|      |  |      | Enter|      |
  *                               |      |      |Escape|  |  Tab |      |      |
  *                               | PVIM | MOUS | FNCT |  | EFNC | MOUS | PVIM |
  *                               `--------------------'  `--------------------'
  */
  [GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default    /* temp layer 4 */
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,---------------+---------------+---------------+---------------+----------------++---------------+----------------+-------------+-------------+----------------.
          TD(Q__TAB), LT(MOUS, KC_W), TD(TD_E_RESET), LT(APPS, KC_R),      TD(TEST_T),     LITTLE_FACE,  LT(APPS, KC_U),         KC_I,         KC_O,  LT(XTND, KC_P),
  //|---------------|---------------|---------------+---------------+----------------||---------------+----------------|-------------|-------------+----------------|
          TD(A_CAPS),   LCTL_T(KC_S),   LALT_T(KC_D),   LGUI_T(KC_F), LT(SYMB, KC_G),   LT(SYMB, KC_H),    RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L),  RSFT_T(KC_SPC),
  //|---------------|---------------|---------------+---------------+----------------||---------------+----------------|-------------|-------------+----------------|
     LT(NMBR/*SUSR*/, KC_Z), LT(/*PVIM*/APPS, KC_X), LT(/*FNCT*/APPS, KC_C), LT(/*EFNC*/APPS, KC_V), LT(NMBR, KC_B),   LT(NMBR, KC_N),  LT(/*EFNC*/APPS, KC_M),   TD(ESC_AC),      KC_BSPC, LT(/*SUSR*/NMBR, KC_ENT)
  //|---------------+---------------+---------------+---------------+----------------++---------------+----------------+-------------+-------------+-----------------.

  /*


    //                                                          ,------------------+------------------.
    TD(L_SYMB),        TD(L_NMBR),
    //                                                          |------------------+------------------.
    ____,
    //                                       ,------------------+------------------+------------------.
    LT(PVIM, KC_BSPC),  LT(MOUS, KC_DEL),  LT(FUNC, KC_ESC),
    //                                       `------------------+------------------+------------------.


    // right hand
    //,-------------------------------------------------------------------------------------------------.
    ____,          ____,             ____,          ____,              ____,           ____,
    //|---------------|---------------|---------------+---------------+-----------------+---------------|
    KC_Y, LT(APPS, KC_U),           KC_I,           KC_O,   LT(XTND, KC_P),           ____,
    //|---------------|---------------|---------------+---------------+-----------------+---------------|
    LT(SYMB, KC_H),   RGUI_T(KC_J),   RALT_T(KC_K),   RCTL_T(KC_L),  RSFT_T(KC_SPC)),           ____,
    //|---------------|---------------|---------------+---------------+-----------------+---------------|
    LT(NMBR, KC_N), LT(EFUN, KC_M),     TD(ESC_AC),        KC_BSPC, LT(SUSR, KC_ENT),           ____,
    //`---------------|---------------|---------------+---------------+-----------------+---------------|
    ____,             ____,          ____,            ____,            ____,
    //                `---------------------------------------------------------------------------------.

    //,------------------+------------------.
    TD(R_NMBR),        TD(R_SYMB),
    //|------------------+------------------.
    ____,
    //,------------------+------------------+------------------.
    LT(EFUN, KC_TAB),  LT(MOUS, KC_ENT),  LT(PVIM, KC_SPC)
    //`------------------+------------------+------------------.
  ), // END OF MINI 0

  */

  ), // END OF GHKN 0  /* temp layer 4 */



  /* Qwerty
   * .-----------------------------------------------------------------------------------------.
   * | Q//ESC | W      | E      | R      | T      | Y      | U      | I      | O      | P      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | A      | S      | D      | F      | G      | H      | J      | K      | L      | SPACE  |
   * |        |  GHKN |        |        |        |        |        |        |  GHKN  |SFThold |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | Z      | X      | C      | V/NUM  | B/ETC  | N/GHKN | M/DIR  | ,/GUI  | ./ALT  | BKSC   |
   * | SFThold|        |        |        |        |        |        |        |        |CTRLhold|
   * '-----------------------------------------------------------------------------------------'
   */
  [_QW] = LAYOUT_ortho_3x10( /* Qwerty*/
    TD(TD_Q_ESC),   KC_W,    KC_E,          KC_R,          KC_T,           KC_Y,          KC_U,           KC_I,           KC_O,          KC_P,
    KC_A, LT(GHKN, KC_S),    KC_D,          KC_F,          KC_G,           KC_H,          KC_J,           KC_K, LT(GHKN, KC_L), SFT_T(KC_SPC),
    SFT_T(KC_Z),    KC_X,    KC_C, LT(NUM, KC_V), LT(ETC, KC_B), LT(GHKN, KC_N), LT(DIR, KC_M), GUI_T(KC_COMM),  ALT_T(KC_DOT), CTL_T(KC_BSPC)
  ),

  /*
   *  Directional Modifiers
   * .-----------------------------------------------------------------------------------------.
   * | TAB    |   up   |        | INS    |  CTRL  | SHIFT  | PgUp   | HOME   |  -     |  =     |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | left   |  down  | right  | PrScr  | SHIFT  |  CTRL  | PgDn   | END    |  [     |  ]     |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | P-Brk  |        |        |        |        |        |        | RGUI   | ALT    |  /     |
   * '-----------------------------------------------------------------------------------------'
   */
  [DIR] = LAYOUT_ortho_3x10( /* Directional Modifiers */
    KC_TAB,  KC_UP,   ______, KC_INS,  KC_LCTL, KC_RSFT, KC_PGUP, KC_HOME, KC_MINS, KC_EQL,
    KC_LEFT, KC_DOWN, KC_RGHT, KC_PSCR, KC_LSFT, KC_RCTL, KC_PGDN, KC_END,  KC_LBRC, KC_RBRC,
    KC_PAUS, ______, ______, ______, ______, ______, ______, KC_RGUI, KC_LALT, KC_SLSH
  ),

  /*
   *  Numbers
   * .-----------------------------------------------------------------------------------------.
   * | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
   * | F11    | F12    |        |        |        | ENTER  | SHIFT  | GUI    | ./ALT  | BKSC   |
   * |        |        |        |        |        |        |        |        |        |CTRLhold|
   * '-----------------------------------------------------------------------------------------'
   */
  [NUM] = LAYOUT_ortho_3x10 ( /* Numbers */
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_F11,  KC_F12,  ______, ______, ______, KC_ENT,  KC_RSFT, KC_RGUI, ALT_T(KC_DOT), CTL_T(KC_BSPC)
  ),

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
  [ETC] = LAYOUT_ortho_3x10( /* ETC */
    KC_GRV,  KC_MS_U, ______, ______, RESET,   KC_RSFT, KC_WH_U, KC_WH_D, ______, KC_BSLS,
    KC_MS_L, KC_MS_D, KC_MS_R, ______, KC_LSFT, KC_BTN3, KC_BTN1, KC_BTN2, KC_SCLN, KC_QUOT,
    TD(TD_SFT_CAPS), ______, ______, ______, ______, LALT(LCTL(KC_DEL)), ______, ______, KC_LALT, KC_DEL
  ),

















































};

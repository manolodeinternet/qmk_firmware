/*
 * G I T
 *
 * git version controlled 
 * GHERKIN
 * fromn scratch -  KEYMAP.C
 */

/*
 * Copyright 2019 manolodeinternet
 */

// gherkin_from_scratch_keymap.c


// [IMPROVEME] look for the original GNU text and change this
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
// [improveme]

// MY_OWN_PREPROCESSING_CODE_KEYWORDS for editing my code:

// [info] some information about any reference relative to our code or application analytics

// [BOOKMARK] for looking for the last point of the code I'm editing,
//            for put a bookmark into the code.
// [LAST]     for marking the point whre I'm working.

// [UNDERSTANDING] for giving explanations about our code.

// [IMPROVEME]
// [improveme] for making an especific change, but later, for avoiding mismatched names for variables, etc.

// [DELETEME]
// [deleteme]  for delete later.  Because maybe we can need it later and we don't like to look for it again.

// [FIXME]
// [fixme]     there's something we have to fix for a clean and right code.

////////////////////////////////////
// COMMENTS SYNTAX FOR LEGIBILITY //
////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  áÁ  -  LSHIFT  -  C A P S L O C K                                     */
/*                                                                                      */
/*                                                                                      */

/* BODY                                                                                 */

/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////
// comments syntax for legibility //
////////////////////////////////////


// my_own_preprocessing_code_keywords

#include <print.h>
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "keycode.h"
#include "action_util.h"
#include "action_code.h"

#define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
#define LSHIFT_MODS (MOD_BIT(KC_LSHIFT))
#define A_VOWEL 0
#define E_VOWEL 1
#define I_VOWEL 2
#define O_VOWEL 3
#define U_VOWEL 4
#define N_TILDE 5
#define A_AC_ON 6
#define A_AC_OF 7















// DEFINING LAYERS
#define GHKN   0  // gherkin DEFAULT         layer
#define ACUT   1  // ACUTE       transparent layer
#define NMBR   2  // numbers                 layer
#define SYMB   3  // symbols                 layer

#define FNCT   4  // functions & extended f. layer
#define L_XTND 5  // LEFT  extended default  layer
#define R_XTND 6  // RIGHT extended default  layer
#define APPS   7  // apps                    layer

#define SUSR   8  // SUPER USER productivity layer

#define PVIM   9  // Personal            VIM layer
#define DVIM  10  // Delete              VIM layer
#define SVIM  11  // Select              VIM layer
#define XVIM  12  // eXtra               VIM layer
#define ZVIM  13  // Z extra             VIM layer
#define AVIM  14  // Alignment           VIM layer

#define MOUS  15  // mouse                   layer

#define BLIT  16  // backlight               layer
// defining layers

// DEFINING READABILITY CODES
#define _______ KC_TRNS
#define NO_KEY  KC_NO
#define XXXXXXX KC_NO

// DEFINING LAYER LEVELS OF BACKLIGHTNING
#define BL_OFF  0
#define BL_MIN  1
#define BL_LOW  3
#define BL_MED  7
#define BL_HGH 12
#define BL_MAX 15

#define BL_GHKN  0
#define BL_NMBR 15
#define BL_SYMB 15
#define BL_FNCT  5
#define BL_XTND  5
#define BL_APPS 10

#define BL_PVIM  8
#define BL_DVIM 15
#define BL_SVIM 10
#define BL_VIM   6

#define BL_MOUS  8
#define BL_SUSR 15
// defining layer levels of backlightning

// DEFINING BACKLIGHTNING SITUATIONS
#define BL_CAPS 10
#define BL_RESE 15

// DEFINING BACKLIGHT BREATHING LELVELS
#define BR_CAPS  1
#define BR_SYMB  1
#define BR_NMBR  2
#define BR_DFLT  6

// DEFINING XTND COMMANDS
#define PREV_APP       LSFT(LGUI(KC_TAB))  // previous app
#define NEXT_APP             LGUI(KC_TAB)  //     next app
#define PREV_WIN     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_WIN           LGUI(KC_GRAVE)  //     next window
#define PREV_TAB       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_TAB             LCTL(KC_TAB)  //     next tab

#define SPT_SIRI             LGUI(KC_SPC)  // spotlight & siri

#define     DESK                    KC_F5
#define APP_WIND            LCTL(KC_DOWN)  // applications windows
#define MISS_CTL              LCTL(KC_UP)  // mission control
#define    SPEAK   LCTL(LALT(LGUI(KC_H)))
#define  LNCHPAD                   KC_F17  // F17 (set at 'System Preferences/Keyboard/Shortcuts/Launchpad&Doc')
#define  DASHBRD                   KC_F18
#define ACTV_WIN              LCTL(KC_F4)  //   active window
#define FLOA_WIN              LCTL(KC_F6)  // floating window

#define REOPEN_L         LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define  CLOSE_A               LGUI(KC_Q)  // close application
#define  CLOSE_W               LGUI(KC_W)  // close window
#define  CLOSE_T               LGUI(KC_W)  // close tab

#define XT_UNDO                LGUI(KC_Z)   //UNDO
#define XT_REDO          LSFT(LGUI(KC_Z))   //REDO
#define XT_CUT                 LGUI(KC_X)   //CUT
#define XT_COPY                LGUI(KC_C)   //COPY
#define XT_PAST                LGUI(KC_V)   //PASTE
#define XT_MTCH    LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
#define P_ST_HY          LALT(LGUI(KC_V))   //(SUBLIME TEXT) PASTE FROM HISTORY
// defining xtnd commands

// DEFINING SUSR COMMANDS
#define LCK_SCR          LCTL(LGUI(KC_Q))   //LOCK SCREEN (ask for pasword screen)

  enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
   SINGLE_TAP           = 1,
   SINGLE_HOLD          = 2,
   DOUBLE_TAP           = 3,
   DOUBLE_HOLD          = 4,
   DOUBLE_SINGLE_TAP    = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
   TRIPLE_TAP           = 6,
   TRIPLE_HOLD          = 7,
   TRIPLE_SINGLE_TAP    = 8,
   QUADRUPLE_TAP        = 9,
   QUADRUPLE_HOLD       = 10,
   QUADRUPLE_SINGLE_TAP = 11,
   QUINTUPLE_TAP        = 12,
   QUINTUPLE_HOLD       = 13,
   QUINTUPLE_SINGLE_TAP = 14
   // Add more enums here if you want for triple, quadruple, etc.
 };

// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)
enum tap_dance_keycodes { // IT BEGINS BY 0...

// TAP DANCE KEYCODES ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
	 Q_SUSR = 0  //        super user layer  // ... **TAB
    ,W_MOUS  //             mouse layer
    ,R_APPS  // apps & multi apps layer  // ... ***RESET
    ,U_APPS  // apps & multi apps layer  // ... ***diaeresis accent
    ,P_SUSR  //        super user layer  
    ,A_CAPS  //                          // ... **caps lock
    ,TDA_AC  //  A tap_dance over ACUT layer for allowing shifted acuted A vowels
    ,F_CAPS  //        ***backlit layer  // ... **caps lock
    ,B_NMBR  //           numbers layer
    ,N_NMBR  //           numbers layer  // ... **tilde for building a ñ/Ñ
    ,V_ACUT  //           acute trigger
    ,M_ACUT
    ,SP_SHF  //           space / lshift

// TAP DANCE KEYCODES ACCESSIBLE FROM *NMBR (NUMBERS LAYER)
    ,DOUB_0  //                          // ... **00
    ,TRIP_0  //                          // ... **000
    ,DONMBR  //   return to *GHKN layer (gherkin default layer)  // ... dot
    ,SLNMBR  //   return to *GHKN layer (gherkin default layer)  // ... slash

// TAP DANCE KEYCODES ACCESSIBLE FROM *SYMB (SYMBOLS LAYER)
    ,BSL_CI  // backslash & circumflex accent
    ,QUOT_D  //     quote & double quote
    ,DO_EUR  //     dolar & euro
    ,EXCLAM  // american exclamation mark & inverted exclamation mark
    ,QUESTI  // american    question mark & inverted    question mark

// TAP DANCE KEYCODES FOR ACCENTS, ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
    ,I_CIRC  //    circumflex accent        'â'
  //,U_APPS  //     diaeresis accent        'ä'  // it's already defined above
    ,J_ACUT  // acute / grave accent  'á' / 'à'
    ,N_TILD  //         tilde accent        'ñ'

// TAP DANCE KEYCODES FOR *SUSR (SUPER USER LAYER)
    ,LOGOUT   // logout user session
    ,HRESET   // on hold RESET keyboard
    ,SLEP_M   //   menu bar / (on hold) SLEEP
    ,KILM_D   //   dock bar / (on hold) KILL MENU
    ,KILA_T   //  tools bar / (on hold) KILL CURRENT APP
    ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART

// TAP DANCE BACKLIGHT
    ,BCKLIT   // accessing *BCKLIT layer from tap dance in *GHKN layer instead of *SUSR layer

// TAP DANCE FOR UNFOLDING KEYS INTO TWO FUNCTIONS IN *?VIM LAYERS
// (i.e. KC_U: *'begin of line'/**'begin of paragraph')

// TAP DANCE FOR FUNCIONS

// tap dance for apps layer (for accessing layers -single or multi apps-)
//    NOTES_APP = SAFE_RANGE  // Notes app

};

enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

// MACROS for process_record_user()
     BLIT_OFF = SAFE_RANGE
    ,BLIT_01 ,BLIT_02 ,BLIT_03 ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07 ,BLIT_08 ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12 ,BLIT_13 ,BLIT_14 ,BLIT_15

    ,BRTH_01 ,BRTH_02 ,BRTH_03 ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07 ,BRTH_08 ,BRTH_09 ,BRTH_10
             ,BRTH_12                   ,BRTH_15

    ,DICTAD

    ,LAYER_IS

    ,E_ACUT_fn
//[DELETEME]
// THIS IS GOING TO BE IMPLEMENTED IN TAP DANCE FOR *APPS LAYER
    ,NOTES
//[deleteme]

}; // enum custom keycodes


// GLOBAL VARIABLES

  static uint8_t shift_flag;
//  static uint8_t shift_flag_tmp;

   bool shift_pressed        = false;
   bool acute_requested      = false;

// [DELETEME] 
/*
   void enable_capslock_after_accents_function(void) {};  // MY CAPSLOCK RESET FUNCTION
   void disable_capslock_before_accents_function(void) {}; // MY CAPSLOCK FINISHED FUNCTION
   void acute_finished_function(void) {};
   void acute_reset_function(void) {};
*/
// [deleteme]
// [FIXME]  CHANGE TO BOOLEAN VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   uint8_t backlight_caps = 0;  // [FIXME]
   uint8_t disabled_caps_before_accent = 0;
   uint8_t caps_control_backlight = 0;
// global variables


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                                                                                      */
/* TAP DANCE GENERAL SETUP SECTION START                                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
	bool is_press_action;
	int  state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
  {
   if (state->interrupted || !state->pressed) 
   // IF the key has been pressed only once 
   // AND  (the key has been interrupted by pressing another key after it
   //       OR   the key is not pressed at present)
     return SINGLE_TAP;
     else 
     // IF  the key has been pressed only once
     // AND the key has not been interrupted
     // AND the key is still pressed  
       return SINGLE_HOLD;
    }
    else 
    { 
      if (state->count == 2)
        { 
          if (state->interrupted)
          // IF   the key has been pressed twice
          // AND  the key has been interrupted by pressing another key after it
          return DOUBLE_SINGLE_TAP;
          else
            if (state->pressed) 
            // IF  the key has been pressed twice
            // AND the key has not been interrupted by pressing another key
            // AND the key is still pressed
              return DOUBLE_HOLD;
            else
            // IF  the key has been pressed twice
            // AND the key has not being interrupted by pressing another key
            // AND the key is not pressed at present
              return DOUBLE_TAP;
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
}
/*                                                                                      */
/* TAP DANCE GENERAL SETUP SECTION END                                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] ACUTE & CAPSLOCK COMPLEMENTARY FUNCTIONS                                  */
/*            KC_A, KC_E, KC_I, KC_O, KC_U,                                             */
/*            KC_N                                                                      */
/*            KC_J                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
void press_capslock(void) { // MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

  if (backlight_caps == 0)
  {
    backlight_caps  = 1;
    breathing_period_set(BR_CAPS);
    breathing_enable();
  }
  else
  {
    backlight_caps  = 0;
    breathing_period_set(BR_DFLT);
    breathing_disable();
  }
} //  my capslock finished function

void release_capslock(void) {  // MY CAPSLOCK RESET FUNCTION
  unregister_code(KC_CAPS); SEND_STRING(SS_UP(X_CAPSLOCK));
}  // MY CAPSLOCK RESET FUNCTION

void capslock_tap(void) {
  //CAPS_LOCK tap
  SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
  register_code(KC_LCAP);            // press

  unregister_code(KC_CAPS);          // release
  SEND_STRING(SS_UP(X_CAPSLOCK));    // release
}

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == 1)
    {
      capslock_tap();
      disabled_caps_before_accent = 0;
  }
} // MY ENABLE_CAPSLOCK_AFTER_ACCENTS_FUNCTION

void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (backlight_caps == 1)
    {
      capslock_tap();
      disabled_caps_before_accent = 1;
    }
} // MY DISABLE_CAPSLOCK_BEFORE_ACCENTS_FUNCTION

void acute_finished_function(void) {
  register_code(KC_LALT); register_code(KC_E);
}

void acute_reset_function(void) {
  unregister_code(KC_E); unregister_code(KC_LALT);
}
/*                                                                                      */
/*            KC_J                                                                      */
/*            KC_N                                                                      */
/*            KC_A, KC_E, KC_I, KC_O, KC_U,                                             */
/* [TAPDANCE] ACUTE & CAPSLOCK COMPLEMENTARY FUNCTIONS                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_Q  -  Q _ S U S R  -  SUPER USER LAYER  -  TAB                         */
/*                                                                                      */
/*  KC_Q:  qQ  -  [SUSR]  -  TAB  -  [BLIT]                                             */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   Q _ S U S R   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.
static tap Q_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void Q_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_SUSRtap_state.state = cur_dance(state);
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_Q); break;
    case SINGLE_HOLD:       layer_on(SUSR); break;

    case DOUBLE_TAP:        register_code(KC_TAB); break;
    case DOUBLE_HOLD:       layer_on(BLIT); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q); break;

    case TRIPLE_TAP:        register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q); break;
  }
}

void Q_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_Q); break;
    case SINGLE_HOLD:       layer_off(SUSR); break;
    case DOUBLE_TAP:        unregister_code(KC_TAB); break;
    case DOUBLE_HOLD:       layer_off(BLIT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_Q); break;
    case TRIPLE_TAP:        unregister_code(KC_Q); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_Q); break;

  }
  Q_SUSRtap_state.state = 0;
}
/*                                                                                      */
/* [TAPDANCE] KC_Q  -  Q _ S U S R  -  SUPER USER LAYER  -  TAB                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_W  -   W _ M O U S  -  MOUSE LAYER                                     */
/*                                                                                      */
/*  KC_W:  wW  -  [MOUS]                                                                */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'W_MOUS' tap dance.
static tap W_MOUStap_state = {
  .is_press_action = true,
  .state = 0
};

void W_MOUS_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_MOUStap_state.state = cur_dance(state);
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:        register_code(KC_W);
                            break;
    case SINGLE_HOLD:       layer_on(MOUS);
                            break;
    case DOUBLE_TAP:        register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO);
                            break;
    case DOUBLE_SINGLE_TAP: register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
    case TRIPLE_TAP:        register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
    case TRIPLE_SINGLE_TAP: register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
  }
}

void W_MOUS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_W); break;
    case SINGLE_HOLD:       layer_off(MOUS); break;
    case DOUBLE_TAP:        unregister_code(KC_W); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_W); break;
    case TRIPLE_TAP:        unregister_code(KC_W); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_W); break;

  }
  W_MOUStap_state.state = 0;
}
/*                                                                                      */
/* [TAPDANCE] KC_W  -   W _ M O U S  -  MOUSE LAYER                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                                                                                      */
/* QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_R  -  PREAMBLE                                                         */
/*                                                                                      */
/*  R: FUNCTIONS USED BY R_APPS - RESET - R_APPS                                        */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
// RESET MY KEYBOARD FUNCTION
void reset_my_keyboard_function(void) {  // MY CAPSLOCK RESET FUNCTION

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

}  // reset my keyboard function
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] R _ A P P S     -   R E S E T   -   R _ A P P S                           */
/*                                                                                      */
/*  KC_R:  rR  -  [APPS]  -  [MAPP]  -  R E S E T                                       */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'R_APPS' tap dance.
static tap R_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void R_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  R_APPStap_state.state = cur_dance(state);
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:         register_code(KC_R); break;
    case SINGLE_HOLD:        layer_on(APPS);      break;

    case DOUBLE_TAP:         register_code(KC_R); unregister_code(KC_R);
                             register_code(KC_R);
                             break;
    case DOUBLE_HOLD:        // layer_on(M_AP);
                             break;
    case DOUBLE_SINGLE_TAP:  register_code(KC_R); unregister_code(KC_R);
                             register_code(KC_R);
                             break;

    case TRIPLE_TAP:        register_code(KC_R); unregister_code(KC_R);
                            register_code(KC_R); unregister_code(KC_R);
                            register_code(KC_R); break;

    case TRIPLE_SINGLE_TAP: register_code(KC_R); unregister_code(KC_R);
                            register_code(KC_R); unregister_code(KC_R);
                            register_code(KC_R); break;

///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎    _delay_ms(milliseconds)     💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

//    case DOUBLE_SINGLE_TAP: _delay_ms(1000); register_code(KC_R); break;

///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀

    case TRIPLE_HOLD: // starts backlight triple blink
                      reset_my_keyboard_function();
                      break;

// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
  }
}

void R_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:         unregister_code(KC_R); break;
    case SINGLE_HOLD:        layer_off(APPS);       break;
    case DOUBLE_TAP:         unregister_code(KC_R); break;
    case DOUBLE_HOLD:        // layer_off(M_AP);
                             break;
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_R); break;
    case TRIPLE_TAP:         unregister_code(KC_R); break;
    case TRIPLE_SINGLE_TAP:  unregister_code(KC_R); break;
  }
  R_APPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] r _ a p p s     -   r e s e t   -   r _ a p p s                           */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] U _ A P P S    -    D I A E R E S I S    A C C E N T                      */
/*                                                                                      */
/*  KC_U:  uU  -  úÚ  -  [APPS]  -  [MAPP]  -  ¨  -  üÜ  -                              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'U_APPS' tap dance.
static tap U_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void U_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  U_APPStap_state.state = cur_dance(state);
  switch (U_APPStap_state.state) {

    case SINGLE_TAP:        if (!acute_requested) {
                                register_code(KC_U); 
                            } else 
                            {
                            	disable_capslock_before_accents_function();
                            	acute_finished_function();
                            	register_code(KC_U);
                            }
                            break;

// [DELETEME]
//    case SINGLE_HOLD:       layer_state_set(0x00000002);
//                            break;
// [deleteme]
    case SINGLE_HOLD:       layer_on(APPS);         break;

    case DOUBLE_TAP:        register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); break;

    case DOUBLE_HOLD:       layer_on(APPS);
                            break;

                         // diaeresis accent
    case TRIPLE_TAP:        disable_capslock_before_accents_function();
                            register_code(KC_LALT); register_code(KC_U);
                            break;

                         // u with diaeresis 'ü'     
    case TRIPLE_HOLD:       
    case QUADRUPLE_TAP:     disable_capslock_before_accents_function();
                            register_code(KC_LALT); register_code(KC_U);
                            unregister_code(KC_U);  unregister_code(KC_LALT);
                            enable_capslock_after_accents_function();
                            register_code(KC_U);
                            break;
  }
}

void U_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_APPStap_state.state) {

    case SINGLE_TAP:        if (!acute_requested) {
    	                        unregister_code(KC_U);
                            } else 
                            {
                            	unregister_code(KC_U);
                            	acute_reset_function();
                            	enable_capslock_after_accents_function();
                            }
                            break;

// [DELETEME]
//    case SINGLE_HOLD:       layer_state_set(0x00000000);
//                            break;        
// [deleteme]

    case SINGLE_HOLD:       layer_off(APPS);       break;

    case DOUBLE_TAP:        unregister_code(KC_U); break;

    case DOUBLE_HOLD:       layer_off(APPS);
                            register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_H);
                            unregister_code(KC_H); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                            break;

    case TRIPLE_TAP:        unregister_code(KC_U); unregister_code(KC_LALT);
                            enable_capslock_after_accents_function();
                            break;

    case TRIPLE_HOLD:       
// [FIXME] disconnect caps_lock before diaeresis and connect it later, and the same for ~ on ñ as well
    case QUADRUPLE_TAP:     unregister_code(KC_U); break;

  }
  U_APPStap_state.state = 0;
}
/*                                                                                      */
/* [TAPDANCE] U _ A P P S    -    D I A E R E S I S    A C C E N T                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  C I R C U M F L E X    A C C E N T  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'I_CIRC' tap dance.
static tap I_CIRCtap_state = {
  .is_press_action = true,
  .state = 0
};

void I_CIRC_finished (qk_tap_dance_state_t *state, void *user_data) {
  I_CIRCtap_state.state = cur_dance(state);
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:        register_code(KC_I); break;
    case SINGLE_HOLD:       register_code(KC_NO); break;

    case DOUBLE_TAP:        register_code(KC_I); unregister_code(KC_I);
                            register_code(KC_I); break;  // circumflex accent
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_I); unregister_code(KC_I);
                            register_code(KC_I); break;

    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_I); break;  // circumflex accent

// [FIXME] PUT THIS THE SAME WAY AS DIAERESIS, WITH QUADRUPLE TAP AND BLA, BLA, BLA ...

    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_I); break;
  }
}

void I_CIRC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_I);  break;
    case SINGLE_HOLD:       unregister_code(KC_NO); break;

    case DOUBLE_TAP:        unregister_code(KC_I);  break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_I);  break;

    case TRIPLE_TAP:        unregister_code(KC_I); unregister_code(KC_LALT); break;  // circumflex accent
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_I); unregister_code(KC_LALT); break;
 }
  I_CIRCtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  C I R C U M F L E X    A C C E N T  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      P _ S U S R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'P_SUSR' tap dance.
static tap P_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void P_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_SUSRtap_state.state = cur_dance(state);
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_P);  break;
    case SINGLE_HOLD:       layer_on(SUSR);       break;
    case DOUBLE_TAP:        register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P);
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P);
                            break;

    case TRIPLE_TAP:        register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P); break;
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P); break;

  }
}

void P_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_P);  break;
    case SINGLE_HOLD:       layer_off(SUSR);        break;

    case DOUBLE_TAP:        unregister_code(KC_P);  break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_P);  break;

    case TRIPLE_TAP:        unregister_code(KC_P); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_P); break;

  }
  P_SUSRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      P _ S U S R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】






//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  áÁ  -  LSHIFT  -  C A P S L O C K                                     */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.
static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {    
    A_CAPStap_state.state = cur_dance(state);
    shift_flag = get_mods()&LSHIFT_MODS;

  switch (A_CAPStap_state.state) {
    case SINGLE_TAP: 
                        if (acute_requested)
                        {
                            if (shift_flag) 
                            {
                            //  release LSHIFT
                                del_mods(shift_flag);
                                send_keyboard_report();
                            };
                        //  tap acute accent
                            disable_capslock_before_accents_function();         
                            acute_finished_function();              
                            acute_reset_function();
                            enable_capslock_after_accents_function();
                            if (shift_flag)
                            {
                                register_code(KC_LSHIFT);
                            //  press LSHIFT
 //                               add_mods(shift_flag);
 //                               send_keyboard_report();
                            };
                        };
                        register_code(KC_A);
                        break;

    case SINGLE_HOLD:       register_code(KC_LSFT); 
                            break;
    case DOUBLE_TAP:                                
    case DOUBLE_HOLD:       press_capslock();  // MY CAPSLOCK FINISHED FUNCTION (the function defined just above)
                            break;
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;
    case TRIPLE_TAP:        register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;
    case TRIPLE_HOLD:       register_code(KC_NO);
                            break;
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;
  }
}

void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        
                            unregister_code(KC_A); break;    

    case SINGLE_HOLD:       unregister_code(KC_LSFT); break;

    case DOUBLE_TAP:        
    case DOUBLE_HOLD:       release_capslock();  // MY CAPSLOCK RESET FUNCTION (the function defined just above)
                            break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_A);  break;

    case TRIPLE_TAP:        unregister_code(KC_A);  break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_A);  break;

  }
  A_CAPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_a  -  c a p s l o c k  -                                               */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_F  -  C A P S L O C K  -  KC_F                                         */
/*                                                                                      */
/*  KC_A:  fF  -  LGUI  -  C A P S L O C K                                              */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'F_CAPS' tap dance.
static tap F_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void F_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_CAPStap_state.state = cur_dance(state);
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:        register_code(KC_F); break;
    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_HOLD:       press_capslock(); break;  // MY CAPSLOCK FINISHED FUNCTION

    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;

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
    case SINGLE_TAP:        unregister_code(KC_F); break;
    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_HOLD:       release_capslock(); break;  // MY CAPSLOCK RESET FUNCTION
    
    case DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;

    case TRIPLE_TAP:        unregister_code(KC_F); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_F); break;
  }
  F_CAPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_f  -  c a p s l o c k  -  kc_f                                         */
/*                                                                                      */
// ************************************************************************************ //










//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_J  -  A C U T E    &   G R A V E    A C C E N T  -  KC_J               */
/*                                                                                      */
/*  KC_A:  jJ  -  LGUI  -  ACUTE ACCENT  -  GRAVE ACCENT                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'J_ACUT' tap dance.
static tap J_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void J_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ACUTtap_state.state = cur_dance(state);
  switch (J_ACUTtap_state.state) {
    case SINGLE_TAP:        register_code(KC_J); break;
    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:        disable_capslock_before_accents_function(); // caps_lock will not affect accent
                            acute_finished_function(); 
                            break;  // acute accent

    case DOUBLE_HOLD:       layer_on(BLIT);
                            break;

    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock will not affect accent
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
    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        acute_reset_function();
                            enable_capslock_after_accents_function();
                            break;

    case DOUBLE_HOLD:       layer_off(BLIT);
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
/*                                                                                      */
/* [tapdance] kc_j  -  a c u t e    &   g r a v e    a c c e n t  -  kc_j               */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_O  -  A C U T E    T R I G G E R   -  KC_O                             */
/*                                                                                      */
/*  KC_O:  oO  -  ´ acute trigger                                                       */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'O_ACUT' tap dance.
static tap O_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void O_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  O_ACUTtap_state.state = cur_dance(state);
  switch (O_ACUTtap_state.state) {
    case SINGLE_TAP:        register_code(KC_O); 
                            break;

    case SINGLE_HOLD:       acute_requested = true;
                            break;
  }
}

void O_ACUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (O_ACUTtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_O); 
                            break;

    case SINGLE_HOLD:       acute_requested = false; 
                            break;
  }
  O_ACUTtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_v  -  acute trigger                                                    */
/*                                                                                      */
// ************************************************************************************ //

//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_SP  -  S P A C E  -  L S H I F T                                       */
/*                                                                                      */
/*  KC_SP:  SPACE  -  LEFT SHIFT                                                        */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'SP_SHF' tap dance.
static tap SP_SHFtap_state = {
  .is_press_action = true,
  .state = 0
};

void SP_SHF_finished (qk_tap_dance_state_t *state, void *user_data) {
  SP_SHFtap_state.state = cur_dance(state);

  //shift_flag = get_mods()&LSHIFT_MODS;

  switch (SP_SHFtap_state.state) {
    case SINGLE_TAP:        register_code(KC_SPC);  
                            break;

    case SINGLE_HOLD:       //if (shift_flag) 
                            {
                            //  if shift_flag was OFF, I set it ON
                            //  press LSHIFT
                                shift_pressed = true;
                                register_code(KC_LSHIFT);


// SHIFT with add_mods LSHIFT_MODS and send_keyboard_report

//                                add_mods(LSHIFT_MODS/*shift_flag*/);
//                                send_keyboard_report();
//

                            }
                            break;
  }
}

void SP_SHF_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SP_SHFtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_SPC);  
                            break;

    case SINGLE_HOLD:       //if (shift_flag)
                            {
                        //  if shift_flag was OFF, I set it ON on SP_SHF_finished,
                        //  and now, I set it OFF again.
                            //  release LSHIFT
                                shift_pressed = false;
                                unregister_code(KC_LSHIFT);
//                                del_mods(LSHIFT_MODS/*shift_flag*/);
//                                send_keyboard_report();
                            };
                            break;                 
  }
  SP_SHFtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_sp  -  l e f t    s h i f t  -                                         */
/*                                                                                      */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_B  -  B _ N M B R  -  KC_B                                             */
/*                                                                                      */
/*  KC_B:  bB  -  [NMBR] toggle layer -  [NMBR] fix layer                               */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'B_NMBR' tap dance.
static tap B_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void B_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_NMBRtap_state.state = cur_dance(state);
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_B); break;

    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
                        layer_clear();
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_TAP:    register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;

    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
}

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:    unregister_code(KC_B); break;

    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!caps_control_backlight)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;

    case DOUBLE_TAP:        unregister_code(KC_B); break;

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBBR] ON' works properly
                            break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;
  }
  B_NMBRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_b  -  b _ n m b r  -  kc_b                                             */
/*                                                                                      */
// ************************************************************************************ //

//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_N  -  N _ N M B R  -  KC_N                                             */
/*                                                                                      */
/*  KC_N:  nN  -  [NMBR] toggle layer -  ñÑ  -  [NMBR] fix layer                        */
/*                                                                                      */
/*                                                                                      */
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      N _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'N_NMBR' tap dance.
static tap N_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBRtap_state.state = cur_dance(state);
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:    register_code(KC_N); break;

    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
                        layer_clear();
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

                     // ~ for making a ñ
    case DOUBLE_TAP:    register_code(KC_LALT); register_code(KC_N); break;

    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;

                         // ñ
    case TRIPLE_HOLD:       register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;
                         // ñ
    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;


  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:    unregister_code(KC_N); break;

    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();

                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;

    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBBR] ON' works properly
                            break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_N); break;


    case TRIPLE_HOLD:       unregister_code(KC_N); break;
// [FIXME] REPAIR QUADRUPLE_HOLD & TRIPLE HOLD FOR GETTING A DIAERESIDED LETTER Ü
// and disconnect caps_lock before diaeresis and connect it later, and the same for ~ on ñ as well
    case TRIPLE_TAP:        unregister_code(KC_N); 
                            register_code(KC_NO); unregister_code(KC_NO); break;

  }
  N_NMBRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_n  -  n _ n m b r  -  kc_n                                             */
/*                                                                                      */
// ************************************************************************************ //
// 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥 BOOKMARK - MARCAPAGINAS // 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

 
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  T A P   D A N C E    F O R  - ( S Y M B O L S     L A Y E R ) -  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』


// 『🔵』『🔵』『🔵』  B A C K S L A S H  『🔵』  - ( S Y M B O L ) -  『🔵』  C I R C U M F L E X  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'BSL_CI' tap dance.
static tap BSL_CItap_state = {
  .is_press_action = true,
  .state = 0
};

void BSL_CI_finished (qk_tap_dance_state_t *state, void *user_data) {
  BSL_CItap_state.state = cur_dance(state);
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:        register_code(KC_BSLS); break;
    case SINGLE_HOLD:       register_code(KC_LSFT); register_code(KC_6); break;
    case DOUBLE_TAP:        register_code(KC_LSFT); register_code(KC_6); break;
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



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U O T E    『🔵』  - ( S Y M B O L ) -  『🔵』    D O U B L E    Q U O T E S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUOT_D' tap dance.
static tap QUOT_Dtap_state = {
  .is_press_action = true,
  .state = 0
};

void QUOT_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUOT_Dtap_state.state = cur_dance(state); 
  switch (QUOT_Dtap_state.state) {

    case SINGLE_TAP:        register_code(KC_QUOT);                         break; // single quote

    case SINGLE_HOLD:       register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
    case DOUBLE_TAP:        register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
  }
}

void QUOT_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUOT_Dtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_QUOT); break;

    case SINGLE_HOLD:       unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
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
    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_4);                         break;  // dollar

    case SINGLE_HOLD:       register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;  // euro
    case DOUBLE_TAP:        register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;  // euro
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;  // euro
  }
}

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EURtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_4); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
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

    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_1); break;  //  exclamation mark

    case SINGLE_HOLD:       register_code(KC_LALT); register_code(KC_1); break;  //  inverted exclamation mark
    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_1); break;  //  inverted exclamation mark
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_1); break;  //  inverted exclamation mark
  }
}

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_1); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       unregister_code(KC_1); unregister_code(KC_LALT); break;
    case DOUBLE_TAP:        unregister_code(KC_1); unregister_code(KC_LALT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_1); unregister_code(KC_LALT); break;
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

    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_SLSH);                         break;  //  question mark

    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;  // inverted question mark
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;  // inverted question mark
  }
}

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTItap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LSFT);                           break;

    case DOUBLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTItap_state.state = 0;
}

/*                                                                                     */
/*  X: ?, ¿                                                                            */
/*                                                                                     */
/*  [TAPDANCE]   QUESTI   //  Q U E S T I O N    M A R K                               */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   S Y M B O L S    L A Y E R                         */
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   N U M B E R S    L A Y E R                         */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*  [TAPDANCE]   TRIP_0   //  T R I P L E    Z E R O                                   */
/*                                                                                     */
/*  A: KC_SPC, 000                                                                     */
/*                                                                                     */

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
    case SINGLE_HOLD:       unregister_code(KC_0);   break;
    case DOUBLE_TAP:        unregister_code(KC_0);   break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0);   break;
  }
  TRIP_0tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】 A:   T R I P L E    Z E R O    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』 S:   D O U B L E    Z E R O    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  S:  D O U B L E    Z E R O    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*                [TAPDANCE] KC_B (DONMBR): KC_PDOT, [NMBR]OFF                         */
/*                                                                                     */
/* instantalize an instance of 'tap' for the 'DONMBR' tap dance.                       */
static tap DONMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void DONMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DONMBRtap_state.state = cur_dance(state);
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_PDOT); break;

    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;

    case DOUBLE_HOLD:    // SET [NMBR] OFF
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!caps_control_backlight)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break;

    case DOUBLE_SINGLE_TAP: break;

  }
}

void DONMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PDOT); break;
    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;
    case DOUBLE_HOLD:       break;

    case DOUBLE_SINGLE_TAP: break;
  }
  DONMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_B      C O M M A _ N M B R      KC_B   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_N      S L A S H _ N M B R      KC_N   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'D' tap dance.
static tap SLNMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNMBRtap_state.state = cur_dance(state);
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_PSLS); break;

    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;

    case DOUBLE_HOLD:    // SET [NMBR] OFF
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!caps_control_backlight)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break;

    case DOUBLE_SINGLE_TAP: break;

  }
}

void SLNMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PSLS); break;
    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: break;
  }
  SLNMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_N      S L A S H _ N M B R      KC_N   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_A_over_ACUTe_layer      A   |   LSHIFT       KC_A_over_ACUTe_layer   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'TDA_AC' tap dance.
static tap TDA_ACtap_state = {
  .is_press_action = true,
  .state = 0
};
void TDA_AC_finished(qk_tap_dance_state_t* state, void* user_data) {
  TDA_ACtap_state.state = cur_dance(state);
  switch (TDA_ACtap_state.state) {
    case SINGLE_TAP:   action_function(NULL, A_AC_ON, A_AC_ON); break;

    case SINGLE_HOLD:  register_code(KC_LSHIFT); break; 
 
  }
}

void TDA_AC_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (TDA_ACtap_state.state) {
        case SINGLE_TAP:    /*  
                              action_function(NULL, A_AC_OF, A_AC_OF);
                            */  
                              break;

        case SINGLE_HOLD:     unregister_code(KC_LSHIFT); break;
    }
    TDA_ACtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_A_over_ACUTe_layer      A   |   LSHIFT       KC_A_over_ACUTe_layer   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_V      V     ACUTE LAYER      KC_V   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'V_ACUT' tap dance.
static tap V_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};
void V_ACUT_finished(qk_tap_dance_state_t* state, void* user_data) {
  V_ACUTtap_state.state = cur_dance(state);
  switch (V_ACUTtap_state.state) {
    case SINGLE_TAP:   register_code(KC_V); break;

    case SINGLE_HOLD:  layer_on(ACUT); break; 
 
  }
}

void V_ACUT_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (V_ACUTtap_state.state) {
        case SINGLE_TAP:    unregister_code(KC_V); break;

        case SINGLE_HOLD:   layer_off(ACUT); break;
    }
    V_ACUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_V      V     ACUTE LAYER      KC_V   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_M      M     ACUTE LAYER      KC_M   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'M_ACUT' tap dance.
static tap M_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};
void M_ACUT_finished(qk_tap_dance_state_t* state, void* user_data) {
  M_ACUTtap_state.state = cur_dance(state);
  switch (M_ACUTtap_state.state) {
    case SINGLE_TAP:   register_code(KC_M); break;

    case SINGLE_HOLD:  layer_on(ACUT); break; 
 
  }
}

void M_ACUT_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (M_ACUTtap_state.state) {
        case SINGLE_TAP:    unregister_code(KC_M); break;

        case SINGLE_HOLD:   layer_off(ACUT); break;
    }
    M_ACUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_M      M     ACUTE LAYER      KC_M   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

























// END - my own tap_dance harvest
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them

//
//LAYERS
  [Q_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_SUSR_finished, Q_SUSR_reset)
 ,[W_MOUS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_MOUS_finished, W_MOUS_reset)
 ,[P_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_SUSR_finished, P_SUSR_reset)

//ACCESSING NUMBERS
 ,[B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
 ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)
//accessing numbers

//ACCENTS & CAPSLOCK
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)
 ,[TDA_AC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TDA_AC_finished, TDA_AC_reset)
 ,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)
 ,[I_CIRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, I_CIRC_finished, I_CIRC_reset)
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)  // it includes J->command tap dance funcionality

 //ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, or moves to layer. (this functions like the TO layer keycode).
 ,[V_ACUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, V_ACUT_finished, V_ACUT_reset)
 ,[M_ACUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, M_ACUT_finished, M_ACUT_reset)
 ,[SP_SHF] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SP_SHF_finished, SP_SHF_reset, 150)
//accents & capslock

//RUNNING APPS
 ,[R_APPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_APPS_finished, R_APPS_reset, 300)
 ,[U_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_APPS_finished, U_APPS_reset)
// ,[NOTES_APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, NOTES_APP_finished, NOTES_APP_reset)
//running apps

//ACUTE ACCENTS
/* [DELETEME]
 ,[E_ACUT] = ACTION_TAP_DANCE_FN(E_ACUT_fn)
*/
//acute accents

//SYMBOLS
 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,[DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)
//symbols

// NUMPAD
 ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
 ,[SLNMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNMBR_finished, SLNMBR_reset)
 ,[DONMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DONMBR_finished, DONMBR_reset)
//numpad

};



// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵





void matrix_init_user(void) {

  breathing_disable();

  //backlight_level(BL_GHKN);

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
}






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap GHKN 0: gherkin default layer
  * ,----------------------------------.,----------------------------------.
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
  * |▪︎▪︎ Tab|      |      | APPS |      ||      |U_DIAE|I_CIRC|      |      |
  * | SUSR | MOUS |      | RESET| BLIT || BLIT | APPS |      |      | SUSR |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|
  * |▪︎▪︎ Cap|      |      |F_CAPS|      ||      |J_ACUT|      |      |      |
  * | LSft | LCtl | LAlt | LGui | SYMB || SYMB | LGui | LAlt | LCtl | LSft |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|
  * |      |      |      |      |      ||N_TILD|      |▪︎▪︎Acut|  ❌  |      |
  * |L_XTND| PVIM | FNCT |      | NMBR || NMBR |      | FNCT | PVIM |R_XTND|
  * '----------------------------------''----------------------------------'
  */

[GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+---------------+---------------+-----------+----------------++---------------+-----------+-----------------+------------------+-------------------.
          TD(Q_SUSR),     TD(W_MOUS),      KC_E,      TD(R_APPS), LT(BLIT, KC_T),            RESET, TD(U_APPS),       TD(I_CIRC),              KC_O,         TD(P_SUSR), \
//|-----------------|---------------|---------------+-----------+----------------||---------------|-----------+-----------------+------------------+-------------------|
          TD(A_CAPS)/*TD(A_CAPS)*/,   LCTL_T(KC_S),   LALT_T(KC_D), TD(F_CAPS), LT(SYMB, KC_G),   LT(SYMB, KC_H), TD(J_ACUT),     LALT_T(KC_K),      LCTL_T(KC_L),         TD(SP_SHF), \
//|-----------------|---------------|---------------+-----------+----------------||---------------|-----------+-----------------+------------------+-------------------|
    LT(L_XTND, KC_Z), LT(PVIM, KC_X), LT(FNCT, KC_C), TD(V_ACUT), TD(B_NMBR),     TD(N_NMBR),       TD(M_ACUT), LT(FNCT, KC_ESC), LT(PVIM, KC_BSPC), LT(R_XTND, KC_ENT) ),
//|-----------------+---------------+---------------+-----------+----------------++---------------+-----------+-----------------+------------------+-------------------.
// END OF GHKN 0

// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap ACUT 1: ACUTe transparent layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   `  |   ~  |   =  |   _  |   %  || \  ^ |   (  |   )  |   *  |   /  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | '  " |   @  |   +  |   -  | $   €||   |  |   {  |   }  |   :  |   ;  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   #  ||   &  |   [  |   ]  |   ,  |   .  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// ACUTe transparent layer

[ACUT] = LAYOUT_ortho_3x10(  // layer 1 : ACUTe layer
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
         _______, _______, F(E_VOWEL), _______, _______,      _______, F(U_VOWEL), F(I_VOWEL), F(O_VOWEL), _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
      TD(TDA_AC), _______,    _______, _______, _______,      _______,    _______,    _______,    _______, _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
         _______, _______,    _______, _______, _______,   F(N_TILDE),    _______,    _______,    _______, _______ ),
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
  // END OF NMBR 2


// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap NMBR 2: numbers layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |  ❌  |      |      |      ||      |      |      |      |      |
* | SPACE|DELETE|      |   =  | $ / €||   -  |   4  |   5  |   6  |   +  |
* |  000 |  00  |   0  |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | ENTER|  ❌  |  TAB |   ,  |   .  ||   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------'`----------------------------------'
*/
[NMBR] = LAYOUT_ortho_3x10(  // layer 2 : numbers layer
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
            KC_P1,          KC_P2,          KC_P3,          KC_P4,            KC_P5,         LAYER_IS,          KC_P7,        KC_P8,        KC_P9,          KC_P0,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
       TD(TRIP_0),     TD(DOUB_0),          KC_P0,        KC_PEQL,       TD(DO_EUR),          KC_PMNS,          KC_P4,        KC_P5,        KC_P6,        KC_PPLS,
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
          KC_PENT,        KC_BSPC,         KC_TAB,        KC_COMM,       TD(DONMBR),       TD(SLNMBR),          KC_P1,        KC_P2,        KC_P3,        KC_PAST ),
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
  // END OF NMBR 2

// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap SYMB 3: symbols Layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   `  |   ~  |   =  |   _  |   %  || \  ^ |   (  |   )  |   *  |   /  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | '  " |   @  |   +  |   -  | $   €||   |  |   {  |   }  |   :  |   ;  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   #  ||   &  |   [  |   ]  |   ,  |   .  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// SYMBOLS

[SYMB] = LAYOUT_ortho_3x10(  // layer 3: symbols layer
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
         KC_GRV,        KC_TILD,         KC_EQL,        KC_UNDS,          KC_PERC,       TD(BSL_CI),        KC_LPRN,      KC_RPRN,      KC_ASTR,        KC_SLSH,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(QUOT_D),          KC_AT,        KC_PLUS,        KC_MINS,       TD(DO_EUR),          KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,        KC_SCLN,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(EXCLAM),     TD(QUESTI),        KC_LABK,        KC_RABK,          KC_HASH,          KC_AMPR,        KC_LBRC,      KC_RBRC,      KC_COMM,         KC_DOT ),
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF SYMB 3

/*  
*  Keymap BLIT 16: BACKLIT - BackLIghT layer
* .-----------------------------------------------------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |BREATH_1|BREATH_2|BREATH_3|BREATH_4|BREATH_T|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |BREATH_5|BREATH_6|BREATH_7|BREATH12|  BL_ON |
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |BL_TOGGL| BL_ON | BL_INC | BL_DEC | BL_OFF |
* '-----------------------------------------------------------------------------------------'
*/

[BLIT] = LAYOUT_ortho_3x10( // layer 16: BLIT layer
  BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05, BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG,
  BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10, BRTH_05, BRTH_06, BRTH_07, BRTH_12,    BL_ON,
  BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15, BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF )// BL_OFF
// QMK standard keycode BL_OFF doesn't work ❗️❗️❗️  
// I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ❗️❗️❗️
// END OF BLIT 15
};
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// testing reasons function.  It's called from process_record_user
void what_layer_is_this_mine(void) {
	//fprintf("right now fprintf layer is %ld\n\n", layer_state);
	println("right now println layer is WITHOUT arguments\n\n");
	 printf("right now printf  layer is %ld\n\n", layer_state);
	//uprintf("right now uprintf layer is %ld\n\n", layer_state);
	switch (layer_state) {
		case 0:    register_code(KC_0); unregister_code(KC_0);
		           break;
		case 1:    register_code(KC_1); unregister_code(KC_1);
		           break;
		case 2:    register_code(KC_2); unregister_code(KC_2);
		           break;
		case 3:    register_code(KC_3); unregister_code(KC_3);
		           break;
		case 4:    register_code(KC_4); unregister_code(KC_4);
		           break;
		case 5:    register_code(KC_5); unregister_code(KC_5);
		           break;
		case 6:    register_code(KC_6); unregister_code(KC_6);
		           break;
		case 7:    register_code(KC_7); unregister_code(KC_7);
		           break;
		case 8:    register_code(KC_8); unregister_code(KC_8);
		           break;
		case 9:    register_code(KC_9); unregister_code(KC_9);
		           break;
   		default:   register_code(KC_X); unregister_code(KC_X);
				   break;
	}
}


//instantalize an instance of 'tap' for the 'KC_A_' tap dance.
/*
static tap KC_A_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KC_A_action_function_tap_dance(keyrecord_t *record, uint8_t id, uint8_t opt) {
//      qk_tap_dance_state_t *state;
      //void *user_data; 
//      static uint8_t a_shift_flag; 
      
      a_shift_flag = get_mods()&LSHIFT_MODS;

//      KC_A_tap_state.state = cur_dance(state);
      

  switch (KC_A_tap_state.state) {
    case SINGLE_TAP:
        if (record->event.pressed)
        // the key is being pressed
        {
            if (acute_requested)
            //  acute accent has been pressed
            {
                if (a_shift_flag) 
                {
                //  release LSHIFT
                    del_mods(a_shift_flag);
                    send_keyboard_report();
                };

            //  tap acute accent
                disable_capslock_before_accents_function();         
                acute_finished_function();              
                acute_reset_function();
                enable_capslock_after_accents_function();

                if (a_shift_flag)
            //  press LSHIFT
                {
                    add_mods(a_shift_flag);
                    send_keyboard_report();
                };
            };
            register_code(KC_A);
        }
        else
        {
          unregister_code(KC_A);
        };
        break;

    case SINGLE_HOLD:
        if (record->event.pressed)
        {
           register_code(KC_LSFT); 
        }
        else
        {
            unregister_code(KC_LSFT);
        };
        break;
  };
}
*/

const uint16_t PROGMEM fn_actions[] = {
  [A_VOWEL] = ACTION_FUNCTION(A_VOWEL),  // Calls action_function()
  [E_VOWEL] = ACTION_FUNCTION(E_VOWEL),
  [I_VOWEL] = ACTION_FUNCTION(I_VOWEL),
  [O_VOWEL] = ACTION_FUNCTION(O_VOWEL),
  [U_VOWEL] = ACTION_FUNCTION(U_VOWEL),
  [N_TILDE] = ACTION_FUNCTION(N_TILDE),
  [A_AC_ON] = ACTION_FUNCTION(A_AC_ON),
  [A_AC_OF] = ACTION_FUNCTION(A_AC_OF)

};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//  static uint8_t mods_pressed;
//MODS
//  static uint8_t shift_flag;
  shift_flag = get_mods()&LSHIFT_MODS;
//mods // mods_pressed = get_mods()&GRAVE_MODS; // Check to see what mods are pressed
  switch (id) {

    case A_VOWEL:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_A);
      }
      else
      {
        unregister_code(KC_A);
      };
      break;

    case E_VOWEL:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_E);
      }
      else
      {
        unregister_code(KC_E);
      };
      break;

    case I_VOWEL:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_I);
      }
      else
      {
        unregister_code(KC_I);
      };
      break;

    case O_VOWEL:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_O);
      }
      else
      {
        unregister_code(KC_O);
      };
      break;

    case U_VOWEL:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_U);
      }
      else
      {
        unregister_code(KC_U);
      };
      break;

    case N_TILDE:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        register_code(KC_LALT);
        register_code(KC_N);
        unregister_code(KC_N);
        unregister_code(KC_LALT);
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_N);
      }
      else
      {
        unregister_code(KC_N);
      };
      break;

    case A_AC_ON:
      if (record->event.pressed) 
      {
     /* The key is being pressed.*/
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_A);
        unregister_code(KC_A);
      }
/*
      else
      {
        unregister_code(KC_A);
      };
*/
      break;

    case A_AC_OF:
/*      
      if (record->event.pressed) 
      {
      }
     // The key is being pressed.//
        if (shift_flag) 
        {
        //  release LSHIFT
            del_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap acute accent
        disable_capslock_before_accents_function();         
        acute_finished_function();              
        acute_reset_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            send_keyboard_report();
        };
        register_code(KC_A);
//      }
      else
      {
        unregister_code(KC_A);
      };
*/    
      break;
 }
}


// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
// [UNDERSTANDING]
// We implement MACROS when we need using QMK functions, or more than one keystroke in a specific layer
// and we don't have the need to use tap dance cases
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
 /*     
      case E_ACUT_fn:
        if (record->event.pressed) 
        //press KC_E
        {


register_code(KC_SLSH); unregister_code(KC_SLSH);      
unregister_code(KC_LSHIFT);
unregister_code(KC_LSHIFT);
unregister_code(KC_LSHIFT);
unregister_code(KC_LSHIFT);
unregister_code(KC_LSHIFT);
register_code(KC_SLSH); unregister_code(KC_SLSH);
            if (acute_requested)
            {
                SEND_STRING("\na=t");
                //release KC_LSFT
                if (lshift_pressed)
                {
                    register_code(KC_NO); unregister_code(KC_NO);
                    unregister_code(KC_LSFT);
                    register_code(KC_NO); unregister_code(KC_NO);
                    deactivated_lshift = true;
                    SEND_STRING("l=t");
 //                   register_code(KC_9);
 //                   SEND_STRING("unregister_code&KC_LSHIFT%= unregister_code&KC_LSHIFT%= deactivated_lshift = true= register_code&KC_9%=");
        		}
                else
                {
                    SEND_STRING("l=f");
                };

        	 // print acute accent
        		disable_capslock_before_accents_function();        	
        		acute_finished_function();        		
        		acute_reset_function();
        		enable_capslock_after_accents_function();

                //press KC_LSFT
                if (deactivated_lshift) 
                {
                    SEND_STRING("d=t");
                	register_code(KC_LSFT);
                	deactivated_lshift = false;
                }
                else
                {
                    SEND_STRING("d=f");                    
                };
        	}
            else
            {
                SEND_STRING("a=f");
            };
         // press e or E over acute accent or no
    	    register_code     (KC_O);
        } 
        else 
        //release KC_E
        {
    	    unregister_code   (KC_O);
        };
        return false;
        break;
*/
      case DICTAD:
        if (record->event.pressed) {
          register_code(KC_RGUI); unregister_code(KC_RGUI);
          register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false;
        };
        break;

      case LAYER_IS:                       // for testing reasons
        if (record->event.pressed) {
          what_layer_is_this_mine();
        return false;
        };
        break;

      case BLIT_OFF:
        if (record->event.pressed) {
          backlight_level(0);
          return false;
        };
        break;
      case BLIT_01: if (record->event.pressed)       { backlight_level(1); return false; }; break;
      case BLIT_02: if (record->event.pressed)       { backlight_level(2); return false; }; break;
      case BLIT_03: if (record->event.pressed)       { backlight_level(3); return false; }; break;
      case BLIT_04: if (record->event.pressed)       { backlight_level(4); return false; }; break;
      case BLIT_05: if (record->event.pressed)       { backlight_level(5); return false; }; break;
      case BLIT_06: if (record->event.pressed)       { backlight_level(6); return false; }; break;
      case BLIT_07: if (record->event.pressed)       { backlight_level(7); return false; }; break;
      case BLIT_08: if (record->event.pressed)       { backlight_level(8); return false; }; break;
      case BLIT_09: if (record->event.pressed)       { backlight_level(9); return false; }; break;

      case BLIT_10: if (record->event.pressed)      { backlight_level(10); return false; }; break;
      case BLIT_11: if (record->event.pressed)      { backlight_level(11); return false; }; break;
      case BLIT_12: if (record->event.pressed)      { backlight_level(12); return false; }; break;
      case BLIT_13: if (record->event.pressed)      { backlight_level(13); return false; }; break;
      case BLIT_14: if (record->event.pressed)      { backlight_level(14); return false; }; break;
      case BLIT_15: if (record->event.pressed)      { backlight_level(15); return false; }; break;

      case BRTH_01: if (record->event.pressed)  { breathing_period_set(1); return false; }; break;
      case BRTH_02: if (record->event.pressed)  { breathing_period_set(2); return false; }; break;
      case BRTH_03: if (record->event.pressed)  { breathing_period_set(3); return false; }; break;
      case BRTH_04: if (record->event.pressed)  { breathing_period_set(4); return false; }; break;
      case BRTH_05: if (record->event.pressed)  { breathing_period_set(5); return false; }; break;
      case BRTH_06: if (record->event.pressed)  { breathing_period_set(6); return false; }; break;
      case BRTH_07: if (record->event.pressed)  { breathing_period_set(7); return false; }; break;

      case BRTH_12: if (record->event.pressed) { breathing_period_set(12); return false; }; break;
      case BRTH_15: if (record->event.pressed) { breathing_period_set(15); return false; }; break;

      default:
        if (record->event.pressed) 
        { 
          return true; 
        } 
        else
        {
          return true;
        };  // I wrote the 'default' case with 'return true' instead of this code line.
        break;
	};

	return true;
}
// END OF NEW MACROS WAY



uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {

    case GHKN: //  0
        backlight_level(BL_GHKN);
        breathing_disable();
        break; 

    case NMBR:   //  1
        backlight_level(BL_NMBR);
        breathing_period_set(BR_NMBR);
        breathing_enable();
        break;
    case SYMB:   //  2
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
        breathing_enable();
        break;

/*
    case FNCT:   //  3
        backlight_level(BL_FNCT);
        break;
    case L_XTND: //  4
        backlight_level(BL_XTND);
        break;
    case R_XTND: //  5
        backlight_level(BL_XTND);
        break;

    case APPS:   //  6
        backlight_level(BL_APPS);
        break;
    case SUSR:   //  7
        backlight_level(BL_SUSR);
        break;
    case PVIM:   //  8
        backlight_level(BL_PVIM);
        break;
    case DVIM:   //  9
        backlight_level(BL_DVIM);
        break;
    case SVIM:   // 10
        backlight_level(BL_SVIM);
        break;

    case XVIM:   // 11
        backlight_level(BL_VIM);  //V
        break;
    case ZVIM:   // 12
        backlight_level(BL_VIM);  //V
        break;
    case AVIM:   // 13
        backlight_level(BL_VIM);  //V
        break;
    case MOUS:   // 14
        backlight_level(BL_MOUS);
        break;
*/

    case BLIT:   // 15
        backlight_level(BL_MIN);
        break;
    default: //  for any other layers, or the default layer
        backlight_level(BL_LOW);
        break;
    }
  return state;
}; // END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
////////////////////////////
//#### T H E    E N D ####//
////////////////////////////


/*
uint32_t layer_state_se//####t_user(uint32_t state) {
    switch (biton32(state)) {

//    case GHKN: //  0
//        backlight_level(BL_GHKN);
//        break; 

    case NMBR:   //  1
        backlight_level(BL_NMBR);
        break;
    case SYMB:   //  2
        backlight_level(BL_SYMB);
        break;
    case FNCT:   //  3
        backlight_level(BL_FNCT);
        break;
    case L_XTND: //  4
        backlight_level(BL_XTND);
        break;
    case R_XTND: //  5
        backlight_level(BL_XTND);
        break;

    case APPS:   //  6
        backlight_level(BL_APPS);
        break;
    case SUSR:   //  7
        backlight_level(BL_SUSR);
        break;
    case PVIM:   //  8
        backlight_level(BL_PVIM);
        break;
    case DVIM:   //  9
        backlight_level(BL_DVIM);
        break;
    case SVIM:   // 10
        backlight_level(BL_SVIM);
        break;

    case XVIM:   // 11
        backlight_level(BL_VIM);  //V
        break;
    case ZVIM:   // 12
        backlight_level(BL_VIM);  //V
        break;
    case AVIM:   // 13
        backlight_level(BL_VIM);  //V
        break;
    case MOUS:   // 14
        backlight_level(BL_MOUS);
        break;

//    case BLIT:   // 15
//        backlight_level(BL_1);
//        break;
//    default: //  for any other layers, or the default layer
//        backlight_level(BL_MIN);
//        break;
    }
  return state;
};

*/

















































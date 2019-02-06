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

// my_own_preprocessing_code_keywords

#include QMK_KEYBOARD_H

// DEFINING LAYERS
#define GHKN   0  // gherkin DEFAULT         layer  
#define NMBR   1  // numbers                 layer
#define SYMB   2  // symbols                 layer

#define FNCT   3  // functions & extended f. layer
#define L_XTND 4  // LEFT  extended default  layer
#define R_XTND 5  // RIGHT extended default  layer
#define APPS   6  // apps                    layer

#define SUSR   7  // SUPER USER productivity layer

#define PVIM   8  // Personal            VIM layer
#define DVIM   9  // Delete              VIM layer
#define SVIM  10  // Select              VIM layer
#define XVIM  11  // eXtra               VIM layer
#define ZVIM  12  // Z extra             VIM layer
#define AVIM  13  // Alignment           VIM layer

#define MOUS  14  // mouse                   layer

#define BLIT  15  // backlight               layer
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
#define BL_NMBR  8
#define BL_SYMB  8
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
#define BL_CAPS 15
#define BL_RESE 15

// DEFINING BACKLIGHT BREATHING LELVELS
#define BR_CAPS  1
#define BR_NMBR  3
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
// [DELETEME] Already implemented as tap dance
#define LOGOUT     LSFT(LALT(LGUI(KC_Q)))   //logout withow menu popup

// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)
enum custom_keycodes {
// SAFE_RANGE
	FUN_MACRO = 0

// TAP DANCE KEYCODES ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
	,Q_SUSR  //        super user layer  // ... **TAB
    ,W_MOUS  //             mouse layer
    ,R_APPS  // apps & multi apps layer  // ... ***RESET
    ,U_APPS  // apps & multi apps layer  // ... ***diaeresis accent
    ,P_SUSR  //        super user layer  
    ,A_CAPS  //                          // ... **caps lock
    ,F_CAPS  //        ***backlit layer  // ... **caps lock
    ,B_NMBR  //           numbers layer
    ,N_NMBR  //           numbers layer  // ... **tilde for building a ñ/Ñ

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
    ,NOTES_APP  // Notes app








// MACROS
    ,BLIT_OFF
    ,BLIT_01 ,BLIT_02 ,BLIT_03 ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07 ,BLIT_08 ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12 ,BLIT_13 ,BLIT_14 ,BLIT_15

    ,BRTH_01 ,BRTH_02 ,BRTH_03 ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07 ,BRTH_08 ,BRTH_09 ,BRTH_10
             ,BRTH_12                   ,BRTH_15

    ,DICTAD

//[DELETEME]
// THIS IS GOING TO BE IMPLEMENTED IN TAP DANCE FOR *APPS LAYER
    ,NOTES
//[deleteme]



}; // enum custom keycodes

// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
// [UNDERSTANDING]
// We implement MACROS when we need using QMK functions, or more than one keystroke in a specific layer
// and we don't have the need to use tap dance cases
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) 
  {
    case BLIT_OFF:
      if (record->event.pressed) {
        backlight_level(BL_OFF/* = 0 */);
      }
      return false;
      break;
    case BLIT_01: if (record->event.pressed) { backlight_level(BL_MIN/* = 1 */); } return false; break;
    case BLIT_02: if (record->event.pressed) { backlight_level(2); } return false; break;
    case BLIT_03: if (record->event.pressed) { backlight_level(3); } return false; break;
    case BLIT_04: if (record->event.pressed) { backlight_level(4); } return false; break;
    case BLIT_05: if (record->event.pressed) { backlight_level(5); } return false; break;
    case BLIT_06: if (record->event.pressed) { backlight_level(6); } return false; break;
    case BLIT_07: if (record->event.pressed) { backlight_level(7); } return false; break;
    case BLIT_08: if (record->event.pressed) { backlight_level(8); } return false; break;
    case BLIT_09: if (record->event.pressed) { backlight_level(9); } return false; break;
    case BLIT_10: if (record->event.pressed) { backlight_level(10); } return false; break;
    case BLIT_11: if (record->event.pressed) { backlight_level(11); } return false; break;
    case BLIT_12: if (record->event.pressed) { backlight_level(12); } return false; break;
    case BLIT_13: if (record->event.pressed) { backlight_level(13); } return false; break;
    case BLIT_14: if (record->event.pressed) { backlight_level(14); } return false; break;
    case BLIT_15: if (record->event.pressed) { backlight_level(BL_MAX/* = 15 */); } return false; break;
    case BRTH_01: if (record->event.pressed) { breathing_period_set(1); } return false; break;
    case BRTH_02: if (record->event.pressed) { breathing_period_set(2); } return false; break;
    case BRTH_03: if (record->event.pressed) { breathing_period_set(3); } return false; break;
    case BRTH_04: if (record->event.pressed) { breathing_period_set(4); } return false; break;
    case BRTH_05: if (record->event.pressed) { breathing_period_set(5); } return false; break;
    case BRTH_06: if (record->event.pressed) { breathing_period_set(6); } return false; break;
    case BRTH_07: if (record->event.pressed) { breathing_period_set(7); } return false; break;
    case BRTH_12: if (record->event.pressed) { breathing_period_set(12); } return false; break;
    case BRTH_15: if (record->event.pressed) { breathing_period_set(15); } return false; break;

    case DICTAD:
      if (record->event.pressed) {
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
      }
      return false;
      break;

  }

  return true;
}
// END OF NEW MACROS WAY


// global variables

// [FIXME]  CHANGE TO BOOLEAN VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   uint8_t backlight_caps = 0;  // [FIXME]
   uint8_t disabled_caps_before_accent = 0;
   uint8_t caps_control_backlight = 0;




  enum tap_dance_states {
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


// TAP DANCE GENERAL SETUP SECTION START //
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
// TAP DANCE GENERAL SETUP SECTION END //

///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'Q_SUSR' tap dance.


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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   Q _ S U S R   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   W _ M O U S   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   W _ M O U S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

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



// 『🔵』『🔵』『🔵』   R _ A P P S     -   R E S E T   -   R _ A P P S  『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】   R _ A P P S     -   R E S E T   -   R _ A P P S  【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   U _ A P P S    -    D I A E R E S I S    A C C E N T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'U_APPS' tap dance.
static tap U_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void U_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  U_APPStap_state.state = cur_dance(state);
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:        register_code(KC_U);    break;
    case SINGLE_HOLD:       layer_on(APPS);         break;

    case DOUBLE_TAP:        register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); break;
    case DOUBLE_HOLD:       // layer_on(M_AP);
                            break;

    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_U); break;  // diaeresis accent
    // u with diaeresis 'ü' // u with diaeresis 'ü'     
    case TRIPLE_HOLD:       register_code(KC_LALT); register_code(KC_U);
                            unregister_code(KC_U);  unregister_code(KC_LALT);
                            register_code(KC_U);    break;
    case QUADRUPLE_TAP:     register_code(KC_LALT); register_code(KC_U);
                            unregister_code(KC_U);  unregister_code(KC_LALT);
                            register_code(KC_U);    break;
    // u with diaeresis 'ü' // u with diaeresis 'ü'
  }
}

void U_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_U); break;
    case SINGLE_HOLD:       layer_off(APPS);       break;

    case DOUBLE_TAP:        unregister_code(KC_U); break;
    case DOUBLE_HOLD:       // layer_off(M_AP);
                            break;

    case TRIPLE_TAP:        unregister_code(KC_U); unregister_code(KC_LALT); break;

    case TRIPLE_HOLD:       unregister_code(KC_U); break;
// [FIXME] REPAIR QUADRUPLE_HOLD & TRIPLE HOLD FOR GETTING A DIAERESIDED LETTER Ü
// and disconnect caps_lock before diaeresis and connect it later, and the same for ~ on ñ as well
    case QUADRUPLE_TAP:    unregister_code(KC_U); 
                           register_code(KC_NO); unregister_code(KC_NO); break;
  }
  U_APPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   U _ A P P S    -    D I A E R E S I S    A C C E N T   【🔴】【🔴】【🔴】




//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// 2019-01-24 [BOOKMARK]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


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






void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (backlight_caps == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      disabled_caps_before_accent = 1;
    }
} // MY DISABLE_CAPSLOCK_BEFORE_ACCENTS_FUNCTION

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      disabled_caps_before_accent = 0;
  }
} // MY ENABLE_CAPSLOCK_AFTER_ACCENTS_FUNCTION



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_A  -  C A P S L O C K  -  KC_A  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』

void capslock_finished_function(void) { // MY CAPSLOCK FINISHED FUNCTION
  if (backlight_caps == 0)
  {
      SEND_STRING(SS_DOWN(X_CAPSLOCK));
      register_code(KC_LCAP);

      backlight_caps  = 1;
      breathing_period_set(BR_CAPS);
      breathing_enable();
  }
  else
  {
        SEND_STRING(SS_DOWN(X_CAPSLOCK));
        register_code(KC_LCAP);

        backlight_caps  = 0;
        breathing_period_set(BR_DFLT);
        breathing_disable();
  }
} //  my capslock finished function


void capslock_reset_function(void) {  // MY CAPSLOCK RESET FUNCTION
  unregister_code(KC_CAPS); SEND_STRING(SS_UP(X_CAPSLOCK));
}  // MY CAPSLOCK RESET FUNCTION

//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.
static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  A_CAPStap_state.state = cur_dance(state);
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        register_code(KC_A);
                            break;
    case SINGLE_HOLD:       register_code(KC_LSFT);
                            break;
    case DOUBLE_TAP:        capslock_finished_function();  // MY CAPSLOCK FINISHED FUNCTION (the function defined just above)
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO);
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
    case SINGLE_TAP:        unregister_code(KC_A); break;
    case SINGLE_HOLD:       unregister_code(KC_LSFT); break;

    case DOUBLE_TAP:        capslock_reset_function();  // MY CAPSLOCK RESET FUNCTION (the function defined just above)
                            break;

    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_A);  break;

    case TRIPLE_TAP:        unregister_code(KC_A);  break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_A);  break;

  }
  A_CAPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_A  -  C A P S L O C K  -  KC_A  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  KC_F  -  C A P S L O C K  -  KC_F 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
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

    case DOUBLE_TAP:        capslock_finished_function(); break;  // MY CAPSLOCK FINISHED FUNCTION
    case DOUBLE_HOLD:       register_code(KC_NO); break;
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
    case SINGLE_HOLD:       unregister_code(KC_RGUI); break;

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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  KC_J   -   A C U T E    &   G R A V E    A C C E N T    -   KC_J  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      B _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      B _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


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
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_TAP:    register_code(KC_LALT); register_code(KC_N); break;

    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;


    case TRIPLE_HOLD:       register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      N _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

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
/* [TAPDANCE]-DONMBR- B: KC_PDOT, [NMBR]OFF                                            */
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


// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*  T A P   D A N C E    F O R :   S U S R    L A Y E R                                */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] OHRST  // R E S E T                                                      */
/*  R: (single_hold)RESET                                                              */
/*                                                                                     */

//instantalize an instance of 'tap' for the 'OHRST' tap dance.
static tap OHRSTtap_state = {
  .is_press_action = true,
  .state = 0
};

void OHRST_finished (qk_tap_dance_state_t *state, void *user_data) {
  OHRSTtap_state.state = cur_dance(state);
  switch (OHRSTtap_state.state) {

///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
    case SINGLE_HOLD: // starts backlight triple blink and then reset the keyboard for about 7 seconds
                      reset_my_keyboard_function();
                      break;
  }
}

void OHRST_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (OHRSTtap_state.state) {
    case SINGLE_HOLD:        break;
  }
  OHRSTtap_state.state = 0;
}

/*                                                                                     */
/*  R: (single_hold)RESET                                                              */
/*                                                                                     */
/* [TAPDANCE] OHRST  // R E S E T                                                      */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////

/*

case RESTARTING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(500); unregister_code(KC_POWER);
        SEND_STRING("r");
      }
      return false;
      break;

    case SHUT_DOWNING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
        register_code(KC_ENT); unregister_code(KC_ENT);
      }
      return false;
      break;


*/

/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] LOGOUT  // L O G O U T                                                      */
/*                                                                                     */
/*  W: (single_hold)LOGOUT                                                              */
/*                                                                                     */

// 『🔵』『🔵』『🔵』   L O G O U T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
static tap LOGOUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  LOGOUTtap_state.state = cur_dance(state);
  switch (LOGOUTtap_state.state) {
                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_Q);
                      unregister_code(KC_Q); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      break;
  }
}

void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (LOGOUTtap_state.state) {
                    
    case SINGLE_HOLD: break;
  }
  LOGOUTtap_state.state = 0;
}
/*                                                                                     */
/*  W: (single_hold)LOGOUT                                                              */
/*                                                                                     */
/* [TAPDANCE] LOGOUT  // L O G O U T                                                      */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] SLEEP_M  //  M E N U   B A R   /   S L E E P                             */
/*                                                                                     */
/*  A: Menu Bar / (single_hold)SLEEP                                                   */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'SLEEP_M' tap dance.
static tap SLEEP_Mtap_state = {
  .is_press_action = true,
  .state = 0
};

void SLEEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLEEP_Mtap_state.state = cur_dance(state);
  switch (SLEEP_Mtap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
                      unregister_code(KC_F2); unregister_code(KC_LCTL);
                      break;

                            
                  //  keystrokes for sleeping:  (guessed by try and fail method)
    case SINGLE_HOLD: register_code(KC_LSFT);

                      register_code(KC_POWER); _delay_ms(200); unregister_code(KC_POWER);

                      unregister_code(KC_LSFT);   

                      break;

                   // Another way for sleeping, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(500); unregister_code(KC_POWER);
                   // SEND_STRING("s");

                   /* The KC_EJCT keycode doesn't work */
                      /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

/* 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵 */
/*                                                                                                */
/*  KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down) */
/*                                                                                                */
/*                          register_code(KC_POWER);                                              */
/*                                                                                                */
/* 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴 */

  }
}

void SLEEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLEEP_Mtap_state.state) {
    case SINGLE_TAP:  // unregister_code(KC_F2); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: break;
                      /*unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);*/
                            
  }
  SLEEP_Mtap_state.state = 0;
}
/*                                                                                     */
/*  A: Menu Bar / (single_hold)SLEEP                                                   */
/*                                                                                     */
/* [TAPDANCE] SLEEP_M  //  M E N U   B A R   /   S L E E P                             */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] KILL_D  //  D O C K   B A R   /   K I L L   M E N U                      */
/*                                                                                     */
/*  S: Dock Bar / (single_hold)KILL MENU                                               */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'KILM_D' tap dance.
static tap KILM_Dtap_state = {
  .is_press_action = true,
  .state = 0
};

void KILM_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILM_Dtap_state.state = cur_dance(state);
  switch (KILM_Dtap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F3);
                      break;
                            
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
  }
}

void KILM_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILM_Dtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F3); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
    break;
                            
  }
  KILM_Dtap_state.state = 0;
}
/*                                                                                     */
/*  S: Dock Bar / (single_hold)KILL MENU                                               */
/*                                                                                     */
/* [TAPDANCE] KILL_D  //  D O C K   B A R   /   K I L L   M E N U                      */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] KILA_T  // T O O L S   B A R   /   FORCE TO   K I L L   CURRENT   A P P  */
/*                                                                                     */
/*  D: Tools Bar / (single_hold)KILL CURRENT APP                                       */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'KILA_T' tap dance.
static tap KILA_Ttap_state = {
  .is_press_action = true,
  .state = 0
};

void KILA_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILA_Ttap_state.state = cur_dance(state);
  switch (KILA_Ttap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */


  }
}

void KILA_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILA_Ttap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT); 
                      break;
          
  }
  KILA_Ttap_state.state = 0;
}
/*                                                                                     */
/*  D: Tools Bar / (single_hold)KILL CURRENT APP                                       */
/*                                                                                     */
/* [TAPDANCE] KILA_T  // T O O L S   B A R   /   FORCE TO   K I L L   CURRENT   A P P  */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] SHUT_S  // S T A T U S   B A R    /    S H U T   D O W N                 */
/*                                                                                     */
/*  F: Status Bar / (single_hold)SHUT DOWN                                             */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
static tap SHUT_Stap_state = {
  .is_press_action = true,
  .state = 0
};

void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
  SHUT_Stap_state.state = cur_dance(state);
  switch (SHUT_Stap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);
                      break;
    case SINGLE_HOLD:                        
    case DOUBLE_TAP:  register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLUP); unregister_code(KC__VOLUP);

                  //  keystrokes for shutting down:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);

                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

                      break;

                   // Another way for shutting down, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_ENT); unregister_code(KC_ENT);

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      */
  }
}

void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SHUT_Stap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  SHUT_Stap_state.state = 0;
}
/*                                                                                     */
/*  F: Status Bar / (single_hold)SHUT DOWN                                             */
/*                                                                                     */
/* [TAPDANCE] SHUT_S  // S T A T U S   B A R    /    S H U T   D O W N                 */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/* [TAPDANCE] RSTT_F  // F L O A T I N G   W I N D O W   /   R E S T A R T             */
/*                                                                                     */
/*  G: Floating window / (single_hold)RESTART                                          */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
static tap RSTT_Ftap_state = {
  .is_press_action = true,
  .state = 0
};

void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
  RSTT_Ftap_state.state = cur_dance(state);
  switch (RSTT_Ftap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  
                  //  keystrokes for restarting:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);
                      
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);

                      break;

                   // Another way for restarting, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_R); unregister_code(KC_R);

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */

  }
}

void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RSTT_Ftap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F6); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  RSTT_Ftap_state.state = 0;
}
/*                                                                                     */
/*  G: Floating window / (single_hold)RESTART                                          */
/*                                                                                     */
/* [TAPDANCE] RSTT_F  // F L O A T I N G   W I N D O W   /   R E S T A R T             */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥   🔵     A  P  P  S      🔵   🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


// 『🔵』『🔵』『🔵』   N O T E S _ A P P   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'NOTES_APP' tap dance.
static tap NOTES_APPtap_state = {
  .is_press_action = true,
  .state = 0
};

void NOTES_APP_finished (qk_tap_dance_state_t *state, void *user_data) {
  NOTES_APPtap_state.state = cur_dance(state);
  switch (NOTES_APPtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI); register_code(KC_SPC); unregister_code(KC_SPC); unregister_code(KC_LGUI);
                            SEND_STRING("Notes.app");
                            register_code(KC_ENT); unregister_code(KC_ENT);
                            break;

    case SINGLE_HOLD:       register_code(KC_LGUI); register_code(KC_SPC); unregister_code(KC_SPC); unregister_code(KC_LGUI);
                            SEND_STRING("Notes.app");
                            register_code(KC_ENT); unregister_code(KC_ENT);

                            _delay_ms(1000);

                            register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_H);
                            unregister_code(KC_H); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                            break;
  }
}

void NOTES_APP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (NOTES_APPtap_state.state) {
    case SINGLE_TAP:        break;
    case SINGLE_HOLD:       break;
  }
  NOTES_APPtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   N O T E S _ A P P   【🔴】【🔴】【🔴】

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥   🔴     A  P  P  S      🔴   🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


































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

,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)
,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)

,[R_APPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_APPS_finished, R_APPS_reset, 300)
,[U_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_APPS_finished, U_APPS_reset)
,[NOTES_APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, NOTES_APP_finished, NOTES_APP_reset)

//ACCENTS
,[I_CIRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, I_CIRC_finished, I_CIRC_reset)
,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)  // it includes J->command tap dance funcionality
//accents

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

//SUSR
 ,[LOGOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LOGOUT_finished, LOGOUT_reset)
 ,[OHRST]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, OHRST_finished, OHRST_reset, 1000)
 ,[SLEEP_M] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEEP_M_finished, SLEEP_M_reset)
 ,[SHUT_S]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)

};









































































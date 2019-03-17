/* GHERKIN fromn scratch -  KEYMAP.C */

// gherkin_from_scratch_keymap.c

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

// MY_OWN_PREPROCESSING_CODE_KEYWORDS for editing my code are:
// [BOOKMARK] for looking for the last point of the code I'm editing,
//            for put a bookmark into the code.
// [LAST]     for marking the point whre I'm working.
// [CHANGE]   for making an especific change, but later, for avoiding mismatched names for variables, etc.
// [DELETE]   for delete later.  Because maybe we can need it later and we don't like to look for it again.
// [FIXTHIS]  there's something we have to fix for a clean and right code.
// my_own_preprocessing_code_keywords

#include QMK_KEYBOARD_H

// [DELETE]
/*
#include "quantum.h"
*/


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// repair all [FIX_ME] through the code ❗️❗️❗️

// defining layers
#define GHKN   0  // gherkin BASE            layer
#define NMBR   1  // numbers                 layer
#define SYMB   2  // symbols                 layer


//
// [FIXME] Merge FNCT & XFNC into one single layer with …
// … tap_dance ( single_tap / (single_hold | double_tap ) …
// … for accessing FNCT or XFNC functions
#define FNCT   3  // functions               layer
#define XFNC   4  // eXtended Functions      layer
// [fixme]
//


#define L_XTND 5  // LEFT   eXtended default layer
#define R_XTND 6  // RIGHT  eXtended default layer
#define APPS   7  // apps                    layer

#define SUSR   8  // Super USeR productivity layer
// #define M_AP   8  // multiple apps           layer

#define PVIM   9  // Personal            VIM layer
#define DVIM  10  // Delete              VIM layer
#define SVIM  11  // Select              VIM layer
#define XVIM  12  // eXtra               VIM layer
#define ZVIM  13  // Z_extra             VIM layer
#define AVIM  14  // Alignment           VIM layer

#define MOUS  15  // mouse                   layer

#define BLIT  16  // BackLIghT               layer
#define FAKE  17  // FAKE LAYER (FOR FILLING REASON 
//AND GETTING MORE THAN 16 LAYERS AND TESTING ACCESSIBILITY LAYERS UPON 16)


// defining readibility codes
#define _______	KC_TRNS
#define NO_KEY  KC_NO
#define XXXXXXX KC_NO

// defining levels of backlighting
#define BL_OFF  0
#define BL_MIN  1
#define BL_LOW  3
#define BL_MED  7
#define BL_HGH 12
#define BL_MAX 15

#define BL_GHKN  0
#define BL_NMBR  5
#define BL_SYMB  7
#define BL_FNCT  7
#define BL_XFNC  9
#define BL_XTND 10
#define BL_APPS  6
#define BL_M_AP 15

#define BL_PVIM  5
#define BL_DVIM 15
#define BL_SVIM 9
#define BL_VIM  7

#define BL_MOUS  3
#define BL_SUSR 15

// defining backlightning situations
#define BL_CAPS 15
#define BL_RESE 15

// defining backlight breathing levels
#define BR_CAPS  1
#define BR_NMBR  3
#define BR_DFLT  6

// defining XTND commands
#define PREV_APP       LSFT(LGUI(KC_TAB))   //PREVIOUS APP
#define NEXT_APP             LGUI(KC_TAB)   //NEXT     APP
#define PREV_WIN     LSFT(LGUI(KC_GRAVE))   //PREVIOUS WINDOW
#define NEXT_WIN           LGUI(KC_GRAVE)   //NEXT     WINDOW
#define PREV_TAB       LSFT(LCTL(KC_TAB))   //PREVIOUS TAB
#define NEXT_TAB             LCTL(KC_TAB)   //NEXT     TAB

#define SPT_SIRI             LGUI(KC_SPC)   //SPOTLIGHT SIRI

#define DESK                        KC_F5
#define APP_WIND            LCTL(KC_DOWN)   //APPLICATIONS WINDOWS
#define MISS_CTL              LCTL(KC_UP)   //MISSION CONTROL
#define SPEAK      LCTL(LALT(LGUI(KC_H)))   //SPEAK
#define LNCHPAD                    KC_F17   //F17 (Set at 'System_Preferences/Keyboard/Shortcuts/Launchpad&Dock')
#define DASHBRD                    KC_F18   //DASHBOARD
#define ACTV_WIN              LCTL(KC_F4)   //ACTIVE   WINDOW
#define FLOA_WIN              LCTL(KC_F6)   //FLOATING WINDOW

#define REOPEN_L         LSFT(LGUI(KC_T))   //REOPEN LAST CLOSED WINDOW/TAB
#define CLOSE_A                LGUI(KC_Q)   //CLOSE APPLICATION
#define CLOSE_W                LGUI(KC_W)   //CLOSE WINDOW
#define CLOSE_T                LGUI(KC_W)   //CLOSE TAB

// defining SUSR commands
#define PW_UNDO                LGUI(KC_Z)   //UNDO
#define PW_REDO          LSFT(LGUI(KC_Z))   //REDO
#define PW_CUT                 LGUI(KC_X)   //CUT
#define PW_COPY                LGUI(KC_C)   //COPY
#define PW_PAST                LGUI(KC_V)   //PASTE
#define PW_MTCH    LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
#define LCK_SCR          LCTL(LGUI(KC_Q))   //LOCK SCREEN (ask for pasword screen)
// [DELETEME] Already implemented as tap dance #define LOGOUT_2   LSFT(LALT(LGUI(KC_Q)))   //logout withow menu popup

/////////////// TAP DANCE SECTION START ///////////////
//Tap Dance Declarations (list of my tap dance configurations)
// enum tap_dance_keycodes {
enum custom_keycodes {
// SAFE_RANGE
	FUN_MACRO = 0


// tap dance for layers accesible from: ● GKHN 〖 gherkin base layer 〗                 〖 〗 〖 〗  〖 〗  
   ,Q_SUSR
   ,W_MOUS
   ,R_APPS  // triple_hold for RESET_keyboard functionaa
   ,U_APPS
   ,NOTES_APP  // diaeresis management included
   ,P_SUSR
   ,A_CAPS
   ,F_CAPS
   ,B_NMBR
   ,N_NMBR
   ,DONMBR  // into NMBR layer, it's necessary to have NMBR layer key for disconnect this layer when fixed, having "dot key" and ...
   ,SLNMBR  // ... and "slash key" at the same position

// tap dance split symbols keys ● SYMB 〖 symbols layer 〗
   ,BSL_CI  // backslash & circumflex accent
   ,QUOT_D  // quote     & double quote
   ,DO_EUR  // dolar     & euro
   ,EXCLAM  // american exclamation mark & inverted exclamation mark
   ,QUESTI  // american question    mark & inverted question    mark

// tap dance for accents ● GKHN 〖 gherkin base layer 〗 - (acute, grave, diaeresis, circumflex, tilde)
   ,I_CIRC  // circumflex accent      'â'
   ,J_ACUT  // acute / grave accent   'á' / 'à'
   ,N_TILD  // tilde accent           'ñ'
  //U_APPS  // diaeresis accent       'ä'       // U_APPS is defined above

// tap dance for keypad zeros
  ,DOUB_0
  ,TRIP_0

// tap dance for superuser layer
  ,LOGOUT   // logout user session
  ,OHRST    // on hold RESET keyboard
  ,SLEEP_M  // menu bar   / (on hold) SLEEP
  ,KILM_D   // dock bar   / (on hold) KILL MENU
  ,KILA_T   // tools bar  / (on hold) KILL APP
  ,SHUT_S   // status bar / (on hold) SHUT DOWN COMPUTER
  ,RSTT_F   // floating w / (on hold) RESTART   COMPUTER


// tap dance for unfolding keys into two functions in PVIM layers (i.e. KC_U: ●'begin of line'/●●'begin of paragraph')


// tap dance for functions


// tap dance backlight
  ,BCKLIT

// MACROS
  ,BLIT_OFF
  ,BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05
  ,BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10
  ,BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15
  ,BRTH_01, BRTH_02, BRTH_03, BRTH_04, BRTH_05
  ,BRTH_06, BRTH_07, BRTH_08, BRTH_09, BRTH_10
           ,BRTH_12,                   BRTH_15
  ,DICTAD
  ,NOTES


}; // enum custom_keycodes


// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
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

// [FIX_ME]
//  💀💀💀   Delete this macro, because calling an application is programmed as tap_dance
    case NOTES:
      if (record->event.pressed) {
        register_code(KC_LGUI); register_code(KC_SPC); unregister_code(KC_SPC); unregister_code(KC_LGUI);
        SEND_STRING("Notes.app"); register_code(KC_ENT); unregister_code(KC_ENT);
      }
      return false;
      break;
//  💀💀💀   Delete this macro, because calling an application is programmed as tap_dance
// [fix_me]

/*
    case YOUR_NEW_MACRO_2:  //z
      if (record->event.pressed) {
        register_code(KC_Z); unregister_code(KC_Z);
        register_code(KC_NO); unregister_code(KC_NO);
        // INSERT CODE HERE for your macro. See https://docs.qmk.fm/macros.html
      }
      return false;
      break;
    case YOUR_NEW_MACRO_3:  //PVIM_U
      if (record->event.pressed) {
        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
        register_code(KC_V); unregister_code(KC_V);
        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
        register_code(KC_P); unregister_code(KC_P);
        register_code(KC_U); unregister_code(KC_U);
      }
      return false;
      break;
    case YOUR_MODERN_MACRO_3:  //PVIM_U
      if (record->event.pressed) {
        //SEND_STRING(SS_LSFT(SS_LCTRL("a")));
        SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
        SEND_STRING("pu");
      }
      return false;
      break;
    case YOUR_MODERN_MACRO_4:  //Select to the beginning of line.
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("e")"- - -");
        SEND_STRING(SS_LSFT(SS_LCTRL("a")));
      }
      return false;
      break;
      */

  }

  return true;
}
// END OF NEW MACROS WAY













// global variables

// [FIX_ME]  CHANGE TO BOOLEAN VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   uint8_t backlight_caps = 0;  // [FIX_ME]
   uint8_t disabled_caps_before_accent = 0;  // [CHANGE] `caps_disable_before_accent` for `disabled_caps_before_accent`
   uint8_t caps_control_backlight = 0;

   uint8_t breathing_period = BREATHING_PERIOD;


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
    case DOUBLE_HOLD:        // layer_off(M_AP);       break;
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_R); break;
    case TRIPLE_TAP:         unregister_code(KC_R); break;
    case TRIPLE_HOLD:        break;
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
// [FIX_ME] REPAIR QUADRUPLE_HOLD & TRIPLE HOLD FOR GETTING A DIAERESIDED LETTER Ü
// and disconnect caps_lock before diaeresis and connect it later, and the same for ~ on ñ as well
    case QUADRUPLE_HOLD:    unregister_code(KC_U); 
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

// [FIX_ME] PUT THIS THE SAME WAY AS DIAERESIS, WITH QUADRUPLE TAP AND BLA, BLA, BLA ...

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

    case TRIPLE_TAP:        register_code(KC_I); unregister_code(KC_LALT); break;  // circumflex accent
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_I); unregister_code(KC_LALT); break;
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

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBRtap_state.state = cur_dance(state);
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_N); break;

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
  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_N); break;

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
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_N); break;
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

    case SINGLE_TAP:  unregister_code(KC_1); unregister_code(KC_LSFT); break;

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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  Q U E S T I O N    M A R K _ S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( S Y M B O L S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』

// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      S L A S H _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      S L A S H _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      C O M M A _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DONMBR' tap dance.
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
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      C O M M A _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



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
    case SINGLE_HOLD:       unregister_code(KC_0);   break;
    case DOUBLE_TAP:        unregister_code(KC_0);   break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0);   break;
  }
  TRIP_0tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    T R I P L E    Z E R O    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// 『🔵』『🔵』『🔵』   reset(SUSR)     -   R E S E T (OHRST) -   reset(SUSR)  『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】   reset(SUSR)     -   R E S E T (OHRST) -   reset(SUSR)  【🔴】【🔴】【🔴】

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


// 『🔵』『🔵』『🔵』   L O G O U T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
static tap LOGOUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  LOGOUTtap_state.state = cur_dance(state);
  switch (LOGOUTtap_state.state) {
    case SINGLE_TAP:  
                      break;

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
    case SINGLE_TAP:  
                     
    case SINGLE_HOLD: break;
  }
  LOGOUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   L O G O U T   【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   M E N U   B A R   /   S L E E P   『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】   M E N U   B A R   /   S L E E P   【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』    D O C K   B A R   /   K I L L   M E N U    『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】    D O C K   B A R   /   K I L L   M E N U    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   S T A T U S   B A R    /    S H U T   D O W N    『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】   S T A T U S   B A R    /    S H U T   D O W N    【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』    F L O A T I N G   W I N D O W   /   R E S T A R T    『🔵』『🔵』『🔵』
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
// 【🔴】【🔴】【🔴】    F L O A T I N G   W I N D O W   /   R E S T A R T    【🔴】【🔴】【🔴】



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


 //susr 
 /*
//
// FUNCTIONS
 ,[DICTAD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DICTAD_finished, DICTAD_reset)
// functions

//layers
//

//
//,[N_TILD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_TILD_finished, N_TILD_reset) // it's integrated into [N_NMBR] tap dance definition
//accents
//

//

//
//

 ,[K_DVIM] = ACTION_TAP_DANCE_FN(K_DVIM_delete_line_down)
 ,[L_DVIM] = ACTION_TAP_DANCE_FN(L_DVIM_delete_line_up)

//
// PVIM
 ,[YPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, YPVIM_finished, YPVIM_reset)
 ,[UPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, UPVIM_finished, UPVIM_reset)
 ,[IPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, IPVIM_finished, IPVIM_reset)
 ,[OPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, OPVIM_finished, OPVIM_reset)
 ,[PPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, PPVIM_finished, PPVIM_reset)
 // pvim
 //

//
//

 ,[BCKLIT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BCKLIT_finished, BCKLIT_reset)
 
// ,[Q__TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_TAB)
//In Layer declaration, add tap dance item in place of a key code
//i.e.: TD(A_CAPS)
*/

};
///////////// TAP DANCE SECTION END ///////////////







const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵
 /* Keymap GHKN 0: gherkin default layer

  * |      |      |      |      |      ||      |      |      |      |      |



  * ,----------------------------------.,----------------------------------.
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
  * |▪︎▪︎ Tab|      |      | APPS |      ||      |U_DIAE|I_CIRC|      |      |
  * | SUSR | MOUS |      | RESET|      ||      | APPS |      |      | SUSR |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|
  * |▪︎▪︎ Cap|      |      |F_CAPS|      ||      |J_ACUT|      |      |      |
  * | LSft | LCtl | LAlt | LGui | SYMB || SYMB | RGui | RAlt | RCtl | RSft |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|
  * |      |      |      |      |      ||N_TILD|      |▪︎▪︎Acut|  ❌  |      |
  * |L_XTND| PVIM | FNCT | EFNC | NMBR || NMBR | EFNC | FNCT |      |R_XTND|
  * '----------------------------------''----------------------------------'
  */

[GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-------------------.
          TD(Q_SUSR),     TD(W_MOUS), LT(FNCT, KC_E),     TD(R_APPS),           KC_T,             KC_Y,     TD(U_APPS),       TD(I_CIRC),         KC_O,         TD(P_SUSR),
//|-----------------|---------------|---------------+---------------+----------------||---------------|---------------+-----------------+-------------+-------------------|
          TD(A_CAPS),   LCTL_T(KC_S),   LALT_T(KC_D),     TD(F_CAPS), LT(SYMB, KC_G),   LT(SYMB, KC_H),     TD(J_ACUT),     LALT_T(KC_K), LCTL_T(KC_L),     RSFT_T(KC_SPC),
//|-----------------|---------------|---------------+---------------+----------------||---------------|---------------+-----------------+-------------+-------------------|
    LT(L_XTND, KC_Z), LT(PVIM, KC_X), LT(FNCT, KC_C), LT(XFNC, KC_V),     TD(B_NMBR),       TD(N_NMBR), LT(XFNC, KC_M), LT(FNCT, KC_ESC), LT(PVIM, KC_BSPACE), LT(R_XTND, KC_ENT)
//|-----------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-------------------.
), // END OF GHKN 0
// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

// PENDING TO DOs:
// IMPLEMENT [MOUS]
// IMPLEMENT FNCT, XFNC


// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴




/* Keymap SYMB 2: symbols Layer
*
* ,-----------------------------------------.                    ,-----------------------------------------.
* |      |      |      |      |      |      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |   `  |   ~  |   =  |   _  |   %  |                    | \  ^ |   (  |   )  |   *  |   /  |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      | '  " |   @  |   +  |   -  | $  € |                    |   |  |   {  |   }  |   :  |   ;  |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      | !  ¡ | ?  ¿ |   <  |   >  |   #  |                    |   &  |   [  |   ]  |   ,  |   .  |      |
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


//[FIXME]
/*

⁉️  ~ ⁉️  _  %     \  (  )  *  /
'  @  +  ⁉️  $     |  {  }  :  ⁉️
!  ?  <  >   #     &  ⁉️ ⁉️  ,  .

*/
// SYMBOLS
[SYMB] = LAYOUT_ortho_3x10(  // layer 2: symbols layer
/// 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
// IMPLEMENTAR LOS 3 TAPDANCE PARA TILDE, EQUAL & BACKSLASH PARA INCLUIR A AT, HASH, CIRCUNFLEX !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
       LT(FAKE, KC_GRAVE),        KC_TILD,         LT(FAKE, KC_EQL),        KC_UNDS,          KC_PERC,       TD(BSL_CI),        KC_LPRN,      KC_RPRN,      KC_ASTR,        KC_SLSH,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(QUOT_D),          KC_AT,        KC_PLUS,        LT(FAKE, KC_MINS),       TD(DO_EUR),          KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,        LT(FAKE, KC_SCLN),
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(EXCLAM),     TD(QUESTI),        KC_LABK,        KC_RABK,          KC_HASH,          KC_AMPR,       LT(FAKE, KC_LBRC),     LT(FAKE, KC_RBRC),      KC_COMM,         KC_DOT
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
// EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
), // END OF SYMB 2


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


/* Keymap XTND 5 & 6: BOTH LEFT & RIGHT extended gherkin layers // BOTH LEFT & RIGHT 5 & 6

 * ,-----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      | •Spot|
 * |  Tab | Desk |Windws|Mision|Float.|| Close| Prev | Next |Launch| Light|
 * |      |      | Apps |Contrl|Window||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | Caps |Dictat| EMPTY| Speak|Active|| Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |Window||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |APP   |APP   |APP   |APP   |      ||      |      |      |  ❌  |      |
 * | OMNI |      |EVER  |      |Reopen|| Close| Prev | Next |DELETE| ENTER|
 * | FOCUS| MAIL | NOTE | NVALT|  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

/* Keymap L_XTND 5: LEFT eXtended default layer
 * ,-----------------------------------.,----------------------------------.
 * |      |      | Vol. | Vol. |      ||      |      |      |      | •Spot|
 * |      | Mute |      |      |      || Close| Prev | Next |Launch| Light|
 * |      |      | Down |  Up  |      ||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      |  UP  |      | Play || Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |      ||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |  ❌  |      |
 * |      | LEFT | DOWN | RIGHT|      || Close| Prev | Next |DELETE| ENTER|
 * |      |      |      |      |      ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

//


[L_XTND] = LAYOUT_ortho_3x10(  // layer 5: LEFT eXtended default layer
//|--------|--------|-------------+----------+---------||--------|---------|---------|--------+---------|
    _______, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_MRWD,   CLOSE_A, PREV_APP, NEXT_APP, LNCHPAD, SPT_SIRI,
//|--------|--------|-------------+----------+---------||--------|---------|---------|--------+---------|
    _______, _______,        KC_UP,   _______, KC_MPLY,   CLOSE_W, PREV_WIN, NEXT_WIN, DASHBRD,   KC_SPC,
//|--------|--------|-------------+----------+---------||--------|---------|---------|--------+---------|
    _______, KC_LEFT,      KC_DOWN,   KC_RGHT, KC_MFFD,   CLOSE_T, PREV_TAB, NEXT_TAB,  KC_DEL,   KC_ENT
//|--------|--------|-------------+----------+---------||--------|---------|---------|--------+---------|
), // END OF L_XTND 5


/* Keymap R_XTND 6: RIGHT eXtended default layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      | Vol. | Vol. |      |      |
 * |  Tab | Desk |Windws|Mision|Float.||      |      |      | Mute |      |
 * |      |      | Apps |Contrl|Window||      |  Up  | Down |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | Caps |Dictat| EMPTY| Speak|Active||      |      |  UP  |      |      |
 * |      |      |      |      |Window||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |APP   |APP   |APP   |APP   |      ||      |      |      |      |      |
 * | OMNI |      |EVER  |      |Reopen||      | LEFT | DOWN | RIGHT|      |
 * | FOCUS| MAIL | NOTE | NVALT|  tab ||      |      |      |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

[R_XTND] = LAYOUT_ortho_3x10(  // layer 6: RIGHT eXtended default layer
//|--------|-----------|------------+---------+----------||--------|----------|------------|---------+--------|
     KC_TAB,       DESK,    APP_WIND, MISS_CTL, FLOA_WIN,   _______, KC__VOLUP, KC__VOLDOWN, KC__MUTE, _______,
//|--------|-----------|------------+---------+----------||--------|----------|------------|---------+--------|
    KC_CAPS,     DICTAD,       NOTES,    SPEAK, ACTV_WIN,   _______,   _______,       KC_UP,  _______, _______,
//|--------|-----------|------------+---------+----------||--------|----------|------------|---------+--------|
    _______,    _______,     _______,  _______, REOPEN_L,   _______,   KC_LEFT,     KC_DOWN,  KC_RGHT, _______
//|--------|-----------|------------+---------+----------||--------|----------|------------|---------+--------|
), // END OF R_XTND 6


[APPS] = LAYOUT_ortho_3x10(  // layer 7 : apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.
        RCTL(KC_Q),        RCTL(KC_W),        RCTL(KC_E),        RCTL(KC_R),           RCTL(KC_T),         RCTL(KC_Y),        RCTL(KC_U),       RCTL(KC_I),    RCTL(KC_O),   RCTL(KC_P),
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+--------------+--------------+---------------|
        RCTL(KC_A),        RCTL(KC_S),        RCTL(KC_D),        RCTL(KC_F),           RCTL(KC_G),         RCTL(KC_H),        RCTL(KC_J),       RCTL(KC_K),    RCTL(KC_L), RCTL(KC_SPC),
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+--------------+--------------+---------------|
        RCTL(KC_Z),        RCTL(KC_X),        RCTL(KC_C),        RCTL(KC_V),           RCTL(KC_B),      TD(NOTES_APP),        RCTL(KC_M),     RCTL(KC_ESC), RCTL(KC_BSPC), RCTL(KC_ENT)
//|---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.
), // END OF APPS 7


[FNCT] = LAYOUT_ortho_3x10(  // layer 7 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-------+-------+-------+-------+--------++----------------+-----------------+-------------------+--------------------+-------------------.
     KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,
//|-------|-------|-------+-------+--------||----------------|-----------------+-------------------+--------------------+-------------------|
    KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20,
//|-------|-------|-------+-------+------------------||----------------|-----------------+-------------------+--------------------+-------------------|
    KC_F21, KC_F22, KC_F23, KC_F24, BL_BRTG, BL_TOGG, BL_ON,  BL_INC,  BL_DEC, BLIT_OFF
//|-------+-------+-------+-------+------------------++----------------+-----------------+-------------------+--------------------+-------------------.
), // END OF FNCT 7


/*
//[DELETE_ME]
[M_AP] = LAYOUT_ortho_3x10(  // layer 7 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+-----------------+-----------------+-----------------+------------------++----------------+-----------------+-------------------+--------------------+-------------------.
    RCTL(RALT(KC_Q)), RCTL(RALT(KC_W)), RCTL(RALT(KC_E)), RCTL(RALT(KC_R)), RCTL(RALT(KC_T)),  RCTL(RALT(KC_Y)), RCTL(RALT(KC_U)),   RCTL(RALT(KC_I)),    RCTL(RALT(KC_O)),   RCTL(RALT(KC_P)),
//|-----------------|-----------------|-----------------+-----------------+------------------||----------------|-----------------+-------------------+--------------------+-------------------|
    RCTL(RALT(KC_A)), RCTL(RALT(KC_S)), RCTL(RALT(KC_D)), RCTL(RALT(KC_F)), RCTL(RALT(KC_G)),  RCTL(RALT(KC_H)), RCTL(RALT(KC_J)),   RCTL(RALT(KC_K)),    RCTL(RALT(KC_L)), RCTL(RALT(KC_SPC)),
//|-----------------|-----------------|-----------------+-----------------+------------------||----------------|-----------------+-------------------+--------------------+-------------------|
    RCTL(RALT(KC_Z)), RCTL(RALT(KC_X)), RCTL(RALT(KC_C)), RCTL(RALT(KC_V)), RCTL(RALT(KC_B)),  RCTL(RALT(KC_N)), RCTL(RALT(KC_M)), RCTL(RALT(KC_ESC)), RCTL(RALT(KC_BSPC)), RCTL(RALT(KC_ENT))
//|-----------------+-----------------+-----------------+-----------------+------------------++----------------+-----------------+-------------------+--------------------+-------------------.
), // END OF M_AP 7
//[delete_me]
*/

/* ✅ Keymap MOUS 15: Mouse layer
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
* |      |      |      | mBtn2| mBtn1|| mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |      |      |      ||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/
[MOUS] = LAYOUT_ortho_3x10(  // layer 15: mouse layer
  KC_ACL0, _______, KC_ACL1, KC_ACL2, _______,   _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
  _______, _______, _______, KC_BTN1, _______,   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
  _______, _______, _______, KC_BTN2, KC_BTN1,   KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5
),
/* ✅ END OF MOUS 15*/




/* Keymap SUSR 16: Super USeR productivity layer
* ,-----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      | sleep: LSHFT(LCTRL(KC_EJCT))
* |      |      |      |onHold|      ||      |      |      |      |      |
* |      |      |      | RESET|      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* | Menu | Dock | Tool |Status|Float.||      |      |      |      |      |
* | _bar | _bar | _bar | _bar |Window||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |onHold|onHold|onHold|onHold|onHold||      |      |      |      |      |
* | SLEEP|K_MENU|KILL_A|SHUT_D|RSTART||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* | UNDO |  CUT | COPY | PASTE|StPast||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/ //KC_UNDO,KC_CUT,KC_COPY,KC_PASTE

// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
[SUSR] = LAYOUT_ortho_3x10(  // layer 16: Super USeR productivity layer
//|------------|-----------|-----------+-----------+------------||--------|--------|--------|--------+--------.
       MO(BLIT), TD(LOGOUT),    LCK_SCR,  TD(OHRST),    PW_REDO,   _______, _______, _______, _______, _______,
//|------------|-----------|-----------+-----------+------------||--------|--------|--------|--------+--------|
    TD(SLEEP_M), TD(KILM_D), TD(KILA_T), TD(SHUT_S), TD(RSTT_F),   _______, _______, _______, _______, _______,
//               ALT+CMD+ESC SFT+ALT+CMD+ESC
//|------------|-----------|-----------+-----------+------------||--------|--------|--------|--------+--------|
        PW_UNDO,     PW_CUT,    PW_COPY,    PW_PAST,    PW_MTCH,   _______, _______, _______, _______, _______
//|------------|-----------|-----------+-----------+------------||--------|--------|--------|--------+--------'
), // END OF SUSR 16
// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

/*  
*  Keymap BLIT 17: BACKLIT - BackLIghT layer
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


[BLIT] = LAYOUT_ortho_3x10( // layer 17: BLIT layer
  BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05, BLIT_01, BRTH_01, BRTH_02, BRTH_03,  BRTH_04,
  BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10, BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BL_BRTG,
  BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15, BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF
// QMK standard keycode BL_OFF doesn't work ❗️❗️❗️  
// I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ❗️❗️❗️
   ), // END OF BLIT 17








};











// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
/*
    case GHKN: //  0
        backlight_level(BL_GHKN);
        break; 
*/
    case NMBR: //  1
        backlight_level(BL_NMBR);
        break;
    case SYMB: //  2
        backlight_level(BL_SYMB);
        break;
    case FNCT: //  3
        backlight_level(BL_FNCT);
        break;
    case XFNC: //  4
        backlight_level(BL_XFNC);
        break;
    case L_XTND: //  5
        backlight_level(BL_XTND);
        break;
    case R_XTND: //  6
        backlight_level(BL_XTND);
        break;
    case APPS: //  7
        backlight_level(BL_APPS);
        break;
//    case M_AP: //  8
//        backlight_level(BL_M_AP);
//        break;
    case SUSR: //  8
        backlight_level(BL_M_AP);
        break;

//       

    case PVIM: //  9
        backlight_level(BL_PVIM);
        break;
    case DVIM: //  10
        backlight_level(BL_DVIM);
        break;
    case SVIM: // 11
        backlight_level(BL_SVIM);
        break;
    case XVIM: // 12
        backlight_level(BL_VIM);  //V
        break;
    case ZVIM: // 13
        backlight_level(BL_VIM);  //V
        break;
    case AVIM: // 14
        backlight_level(BL_VIM);  //V
        break;
    case MOUS: // 15
        backlight_level(BL_MOUS);
        break;
//    case SUSR: // 16
//        backlight_level(BL_SUSR);
//        break;

//         FAKE     17

//    case BLIT: // 18
//        backlight_level(BL_1);
//        break;
//    default: //  for any other layers, or the default layer
//        backlight_level(BL_MIN);
//        break;
    }
  return state;
};








void matrix_init_user(void) {


  breathing_disable();

  backlight_level(GHKN);

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
};














































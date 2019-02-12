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

#include <print.h>
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "keycode.h"


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

    ,LAYER_IS


//[DELETEME]
// THIS IS GOING TO BE IMPLEMENTED IN TAP DANCE FOR *APPS LAYER
    ,NOTES
//[deleteme]



}; // enum custom keycodes


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
};






/*
    uint8_t layer;
    if (record->event.pressed) {
        layer = layer_switch_get_layer(record->event.key);
        update_source_layers_cache(record->event.key, layer);
    } else {
        layer = read_source_layers_cache(record->event.key);
    }
//    keycode = keymap_key_to_keycode(layer, record->event.key);
//    } else
// #endif
//    keycode = keymap_key_to_keycode(layer_switch_get_layer(key), key);
//};



  layer_state_set_user(layer);
*/
	
/*
    case BLIT_OFF:
      if (record->event.pressed) {
        backlight_level(0);
        return false;
      };
      break;
    case BLIT_01: if (record->event.pressed) { backlight_level( 1); return false; }; break;
    case BLIT_02: if (record->event.pressed) { backlight_level( 2); return false; }; break;
    case BLIT_03: if (record->event.pressed) { backlight_level( 3); return false; }; break;
    case BLIT_04: if (record->event.pressed) { backlight_level( 4); return false; }; break;
    case BLIT_05: if (record->event.pressed) { backlight_level( 5); return false; }; break;
    case BLIT_06: if (record->event.pressed) { backlight_level( 6); return false; }; break;
    case BLIT_07: if (record->event.pressed) { backlight_level( 7); return false; }; break;
    case BLIT_08: if (record->event.pressed) { backlight_level( 8); return false; }; break;
    case BLIT_09: if (record->event.pressed) { backlight_level( 9); return false; }; break;
    case BLIT_10: if (record->event.pressed) { backlight_level(10); return false; }; break;
    case BLIT_11: if (record->event.pressed) { backlight_level(11); return false; }; break;
    case BLIT_12: if (record->event.pressed) { backlight_level(12); return false; }; break;
    case BLIT_13: if (record->event.pressed) { backlight_level(13); return false; }; break;
    case BLIT_14: if (record->event.pressed) { backlight_level(14); return false; }; break;
    case BLIT_15: if (record->event.pressed) { backlight_level( BL_MAX); return false; }; break;
    case BRTH_01: if (record->event.pressed) { breathing_period_set( 1); return false; }; break;
    case BRTH_02: if (record->event.pressed) { breathing_period_set( 2); return false; }; break;
    case BRTH_03: if (record->event.pressed) { breathing_period_set( 3); return false; }; break;
    case BRTH_04: if (record->event.pressed) { breathing_period_set( 4); return false; }; break;
    case BRTH_05: if (record->event.pressed) { breathing_period_set( 5); return false; }; break;
    case BRTH_06: if (record->event.pressed) { breathing_period_set( 6); return false; }; break;
    case BRTH_07: if (record->event.pressed) { breathing_period_set( 7); return false; }; break;
    case BRTH_12: if (record->event.pressed) { breathing_period_set(12); return false; }; break;
    case BRTH_15: if (record->event.pressed) { breathing_period_set(15); return false; }; break;
*/
// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
// [UNDERSTANDING]
// We implement MACROS when we need using QMK functions, or more than one keystroke in a specific layer
// and we don't have the need to use tap dance cases

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) 
  {
    case DICTAD:
      if (record->event.pressed) {
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false;
      };
      break;

    case LAYER_IS:
      if (record->event.pressed) {
        what_layer_is_this_mine();
        return false;
      };
      break;



	default:
      if (record->event.pressed) {
	    return true;
      };    
	  break;

  };

  return true;  // I wrote the 'default' case with 'return true' instead of this code line.
};
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
};
// TAP DANCE GENERAL SETUP SECTION END //

///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'Q_SUSR' tap dance.









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

};  // reset my keyboard function



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
};

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
};
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

    case SINGLE_TAP:        register_code(KC_U);
                            break;
    case SINGLE_HOLD:       layer_state_set(0x00000002);
                            break;

/*
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
*/
  }
};

void U_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_APPStap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_U);
                            break;
    case SINGLE_HOLD:       layer_state_set(0x00000000);
                            break;        
/*
                            unregister_code(KC_U); break;
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
*/
  }
  U_APPStap_state.state = 0;
};
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
};

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
};
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  C I R C U M F L E X    A C C E N T  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



















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
                        layer_clear();
                        layer_on(NMBR);
                        //breathing_period_set(BR_NMBR);
                        //breathing_enable();
                        break;

    case DOUBLE_TAP:    register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;

    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;

    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
};

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:    unregister_code(KC_B); break;

    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        //breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        //breathing_enable();

                        //if (!caps_control_backlight)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        //{
                        //  breathing_period_set(BR_DFLT);
                        //  breathing_disable();
                        //};
                        break;

    case DOUBLE_TAP:        unregister_code(KC_B); break;

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBBR] ON' works properly
                            break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;
  }
  B_NMBRtap_state.state = 0;
};
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
                        layer_clear();
                        layer_on(NMBR);
                        //breathing_period_set(BR_NMBR);
                        //breathing_enable();
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
};

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:    unregister_code(KC_N); break;

    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        //breathing_period_set(BR_CAPS);
                        //breathing_enable();

                        //if (!caps_control_backlight)
                        //{
                        //  breathing_period_set(BR_DFLT);
                        //  breathing_disable();
                        //};
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
};
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
};

void BSL_CI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_BSLS); break;
    case SINGLE_HOLD:       unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_BSLS); break;
  }
  BSL_CItap_state.state = 0;
};
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
};

void QUOT_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUOT_Dtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_QUOT); break;

    case SINGLE_HOLD:       unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
  }
  QUOT_Dtap_state.state = 0;
};
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
};

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EURtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_4); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:        unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  DO_EURtap_state.state = 0;
};
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
};

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_1); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       unregister_code(KC_1); unregister_code(KC_LALT); break;
    case DOUBLE_TAP:        unregister_code(KC_1); unregister_code(KC_LALT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAMtap_state.state = 0;
};
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
};

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTItap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LSFT);                           break;

    case DOUBLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTItap_state.state = 0;
};

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
};

void TRIP_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TRIP_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_SPC); break;
    case SINGLE_HOLD:       unregister_code(KC_0);   break;
    case DOUBLE_TAP:        unregister_code(KC_0);   break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0);   break;
  }
  TRIP_0tap_state.state = 0;
};
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
};

void DOUB_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DOUB_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_DEL); break;
    case SINGLE_HOLD:       unregister_code(KC_0); break;
    case DOUBLE_TAP:        unregister_code(KC_0); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0); break;
  }
  DOUB_0tap_state.state = 0;
};
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
};

void DONMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PDOT); break;
    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;
    case DOUBLE_HOLD:       break;

    case DOUBLE_SINGLE_TAP: break;
  }
  DONMBRtap_state.state = 0;
};
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
};

void SLNMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PSLS); break;
    case SINGLE_HOLD:       break;

    case DOUBLE_TAP:        break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: break;
  }
  SLNMBRtap_state.state = 0;
};
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_N      S L A S H _ N M B R      KC_N   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


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

//ACCESSING NUMBERS
  [B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
 ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)
//accessing numbers

,[U_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_APPS_finished, U_APPS_reset)



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

  debug_enable=true;

  breathing_disable();

  //backlight_level(BL_GHKN);

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
};






 /* Keymap GHKN 0: gherkin default layer
  * ,----------------------------------.,----------------------------------.
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
  * |▪︎▪︎ Tab|      |      | APPS |      ||      |U_DIAE|I_CIRC|      |      |
  * | SUSR | MOUS |      | RESET|      ||      | APPS |      |      | SUSR |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|
  * |▪︎▪︎ Cap|      |      |F_CAPS|      ||      |J_ACUT|      |      |      |
  * | LSft | LCtl | LAlt | LGui | SYMB || SYMB | LGui | LAlt | LCtl | LSft |
  * |------+------+------+------+------||------+------+------+------+------|
  * |      |      |      |      |      ||      |      |      |      |      |
  * |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|
  * |      |      |      |      |      ||N_TILD|      |▪︎▪︎Acut|  ❌  |      |
  * |L_XTND| PVIM | FNCT |      | NMBR || NMBR |      | FNCT |      |R_XTND|
  * '----------------------------------''----------------------------------'
  */

/*
[GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+---------------+---------------+-----------+----------------++---------------+-----------+-----------------+------------------+-------------------.
          TD(Q_SUSR),     TD(W_MOUS), LT(FNCT, KC_E), TD(R_APPS), BL_TOGG, KC_Y, TD(U_APPS),       TD(I_CIRC),              KC_O,         TD(P_SUSR), \
//|-----------------|---------------|---------------+-----------+----------------||---------------|-----------+-----------------+------------------+-------------------|
          TD(A_CAPS),   LCTL_T(KC_S),   LALT_T(KC_D), TD(F_CAPS), LT(SYMB, KC_G),   LT(SYMB, KC_H), TD(J_ACUT),     LALT_T(KC_K),      LCTL_T(KC_L),     LSFT_T(KC_SPC), \
//|-----------------|---------------|---------------+-----------+----------------||---------------|-----------+-----------------+------------------+-------------------|
    LT(L_XTND, KC_Z), LT(PVIM, KC_X), LT(FNCT, KC_C),       KC_V,     TD(B_NMBR),       TD(N_NMBR),       KC_M, LT(FNCT, KC_ESC), LT(PVIM, KC_BSPC), LT(R_XTND, KC_ENT) ),
//|-----------------+---------------+---------------+-----------+----------------++---------------+-----------+-----------------+------------------+-------------------.
// END OF GHKN 0
*/
// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap NMBR 1: numbers layer
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






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_3x10( \
      KC_Q,    KC_W,    KC_E,   RESET,         BL_TOGG,  LAYER_IS, TD(U_APPS),    KC_I,     KC_O,            KC_P, \
      KC_A,    KC_S,    KC_D,    KC_F,  LT(SYMB, KC_G),      KC_H,       KC_J,    KC_K,     KC_L,          KC_SPC, \
      KC_Z,    KC_X,    KC_C,    KC_V,  LT(NMBR, KC_B),      KC_N,       KC_M,  KC_ESC,  KC_BSPC,          KC_ENT  \
  ),
[NMBR] = LAYOUT_ortho_3x10(  // layer 1 : numbers layer
            KC_P1,          KC_P2,          KC_P3,          KC_P4,            KC_P5,         LAYER_IS,          KC_P7,        KC_P8,        KC_P9,          KC_P0, \
       TD(TRIP_0),     TD(DOUB_0),          KC_P0,        KC_PEQL,       TD(DO_EUR),          KC_PMNS,          KC_P4,        KC_P5,        KC_P6,        KC_PPLS, \
          KC_PENT,        KC_BSPC,         KC_TAB,        KC_COMM,       TD(DONMBR),       TD(SLNMBR),          KC_P1,        KC_P2,        KC_P3,        KC_PAST ),



[SYMB] = LAYOUT_ortho_3x10(  // layer 02: symbols layer!
  KC_GRAVE,  KC_TILD, KC_EQUAL,  KC_UNDS, KC_PERC,                                         LAYER_IS,     KC_LPRN,     KC_RPRN, KC_ASTR,     KC_SLSH, 
TD(QUOT_D),    KC_AT,  KC_PLUS, KC_MINUS,  KC_DLR,                                          KC_PIPE,     KC_LCBR,     KC_RCBR, KC_COLN,   KC_SCOLON, 
   KC_EXLM,  KC_QUES,  KC_LABK,  KC_RABK, KC_HASH,                                          KC_AMPR, KC_LBRACKET, KC_RBRACKET, KC_COMM,      KC_DOT )

};






































  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
  //|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
  //,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
  // END OF NMBR 1

// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴

/* Keymap SYMB 2: symbols Layer
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
//[FIXME]
/*
⁉️  ~ ⁉️  _  %     \  (  )  *  /
'  @  +  ⁉️  $     |  {  }  :  ⁉️
!  ?  <  >   #     &  ⁉️ ⁉️  ,  .
*/
// SYMBOLS

/*
[SYMB] = LAYOUT_ortho_3x10(  // layer 2: symbols layer
/// 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
// IMPLEMENTAR LOS 3 TAPDANCE PARA TILDE, EQUAL & BACKSLASH PARA INCLUIR A AT, HASH, CIRCUNFLEX !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
         KC_GRV,        KC_TILD,         KC_EQL,        KC_UNDS,          KC_PERC,         LAYER_IS,        KC_LPRN,      KC_RPRN,      KC_ASTR,        KC_SLSH, \
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(QUOT_D),          KC_AT,        KC_PLUS,        KC_MINS,       TD(DO_EUR),          KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,        KC_SCLN, \
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(EXCLAM),     TD(QUESTI),        KC_LABK,        KC_RABK,          KC_HASH,          KC_AMPR,        KC_LBRC,      KC_RBRC,      KC_COMM,         KC_DOT ),
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
// EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF SYMB 2
*/






/*

};

*/












// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

/*
uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {

    case GHKN: //  0
        backlight_level(0);
        break; 

    case NMBR:   //  1
        backlight_level(1);
        break;
    case SYMB:   //  2
        backlight_level(15);
        break;
*/
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
/*
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

/*

uint32_t layer_state_set_user(uint32_t state) {
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

















































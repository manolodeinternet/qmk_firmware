/*                              // keymap lleno de send_string para monitorear action_function A_VOWEL.c
 * PROJECT NAME: '30_layout'
 *
 * VERSION NAME: 'cleaning the code'
 * 
 * COPYRIGHT:     2019 manolodeinternet <manolodeinternet@gmail.com>
 *                my code is write over the one from:
 * Copyright      2017 Brian Fong

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
 *
 */

/*
 * git version controlled firmware for
 * 30 keys keyboards, as GHERKIN.
 * made fromn scratch -  keymap.c
 * also made for this project:  rules.mk, config.h, etc.
 *
// [IMPROVEME] 
    look for the original GNU text and improve the copyright
// [improveme]
 */



// MY_OWN_PREPROCESSING_KEYWORDS for editing my code:
//
// [BOOKMARK] for looking for an important point of the code I'm editing,
//            for putting a bookmark into the code.
//
// [DANGER]
// [danger]   for indicate that we have touch the code, without checking if the change is reliable
//
// [DELETEME]
// [deleteme]  for delete later
//
// [EXAMPLE]
// [example]
//
// [FIXME]
// [fixme]     there's something I HAVE TO FIX for a right working
//
// [IMPROVEME]
// [improveme] there is something we could change for a better working or getting a code more elegant
//
// [INFO]
// [info] some information about any reference relative to our code or application analytics
//
// [INSPIRINGCODE]
// [inspiringcode]
//
// [LAST]     for marking the point where I'm working.
//
// [OLDWAY]
// [oldway] the ugly way I did this before that we aren't going to need any more. It works, but smell...
//
// [TRANSLATION]
// [translation]
//
// [UNDERSTANDING] 
// [understanding] for giving explanations about our code
//
// my_own_preprocessing_keywords



////////////////////////////////////
// COMMENTS SYNTAX FOR LEGIBILITY //
////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  accented aA  -  LSHIFT  -  C A P S L O C K                            */
/*                                                                                      */
/*                                                                                      */
/*                                                                                      */
/* BODY                                                                                 */
/*                                                                                      */
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////
// comments syntax for legibility //
////////////////////////////////////


// #include <print.h>
#include QMK_KEYBOARD_H
/*
#include "quantum.h"
#include "keycode.h"
#include "action_util.h"
#include "action_code.h"
*/

// [INSPIRINGCODE]
// #define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
// #define ALL_MODS    (MOD_BIT(KC_LSFT)|MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT)|MOD_BIT(KC_LGUI))
// [inspiringcode]
#define LSHIFT_MODS (MOD_BIT(KC_LSHIFT))

#define A_VOWEL 0
#define E_VOWEL 1
#define I_VOWEL 2
#define O_VOWEL 3
#define U_VOWEL 4
#define N_TILDE 5
#define RXTND_CAPS 6





// DEFINING LAYERS
//
// [UNDERSTANDING]
// FOR ACCESING LAYERS FROM KEYMAP 'LT(LAYER, KC)', NUMBER LAYER MUST BE BETWEEN 0 AND 15
#define GHKN   0  // 0 gherkin DEFAULT          layer // must be       layer number  0
#define SYMB   2  // 1 symbols                  layer // must be under layer number 16
#define L_XTND 4  // 2 LEFT  extended   default layer // must be under layer number 16
#define R_XTND 5  // 3 RIGHT extended   default layer // must be under layer number 16
#define PVIM   8  // 4 Personal             VIM layer // must be under layer number 16
#define DVIM   9  // 5 Delete               VIM layer // must be under layer number 16

// BUT YOU IN ADDITION TO USING LAYERS AMONG 0...15, YOU CAN USE LAYERS AMONG 16...31 IF... 
// ...YOU AREN'T GOING TO ACCESS THEM FROM KEYMAP, BUT CODE, USING 'layer_on(LAYER)', 'layer_off(LAYER)'
#define NMBR   1  // 16 numbers                 layer // I can change it to 15...31 layer's interval
#define FNCT   3  // 17 functions & extended f. layer // I can change it to 15...31 layer's interval
#define APPS   6  // 18 apps                    layer // I can change it to 15...31 layer's interval
#define SUSR   7  // 19 SUPER USER productivity layer // I can change it to 15...31 layer's interval
#define SVIM  10  // 20 Select              VIM layer // I can change it to 15...31 layer's interval
#define XVIM  11  // 21 eXtra               VIM layer // I can change it to 15...31 layer's interval
#define ZVIM  12  // 22 Z extra             VIM layer // I can change it to 15...31 layer's interval
#define AVIM  13  // 23 Alignment           VIM layer // I can change it to 15...31 layer's interval
#define MOUS  14  // 24 mouse                   layer // I can change it to 15...31 layer's interval
#define BLIT  15  // 25 backlight               layer // I can change it to 15...31 layer's interval
#define TEST  31  // 31 LAYER FOR TRYING AND TESTING  // must be over layer number 15
// [understanding]
//
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
#define BL_XTND  5
#define BL_FNCT  5
#define BL_VIM   6
#define BL_PVIM  8
#define BL_APPS 10
#define BL_SVIM 10
#define BL_MOUS 10
#define BL_SYMB 11
#define BL_DVIM 15
#define BL_SUSR 15
#define BL_NMBR 15
// defining layer levels of backlightning

// DEFINING BACKLIGHTNING SITUATIONS
#define BL_CAPS 10
#define BL_RESE 15

// DEFINING BACKLIGHT BREATHING LELVELS
#define BR_CAPS  1
#define BR_SYMB  2
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
// defining xtnd commands

// DEFINING SUSR COMMANDS
#define LCK_SCR          LCTL(LGUI(KC_Q))   //LOCK SCREEN (ask for pasword screen)
// defining susr commands

// SUBLIME COMMANDS
#define P_ST_HY          LALT(LGUI(KC_V))   //(SUBLIME TEXT) PASTE FROM HISTORY
// sublime commands

// APPS COMMANDS
#define HIDEOTH          SEND_STRING(SS_LALT(SS_LGUI("h")))  //LALT(LGUI(KC_H))   //HIDE OTHER APPS
// apps commands



/*
#define PERVIM     (SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p"))
#define K_PERV(kc) (PERVIM; send_string(kc))
*/
/*
quantum/quantum_keycodes.h:484:18: error: large integer implicitly truncated to unsigned type [-Werror=overflow]
 #define HYPR(kc) (QK_LCTL | QK_LSFT | QK_LALT | QK_LGUI | (kc))
                  ^
quantum/quantum_keycodes.h:681:17: note: in expansion of macro 'HYPR'
 #define KC_HYPR HYPR(KC_NO)
                 ^~~~
*/


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
   QUINTUPLE_SINGLE_TAP = 14,
   SEXTUPLE_TAP         = 15,
   SEXTUPLE_HOLD        = 16,
   SEXTUPLE_SINGLE_TAP  = 17
   // Add more enums here if you want for sevenfold, eightfold], etc.
 };
 // [TRANSLATION]
 //
 // web link:https://www.practicaespanol.com/los-multiplos-en-espanol-doble-triple-cuadruple/
 // spanish: doble, triple, cuádruple, quíntuple, séxtuple,
 //          séptuple, óctuple, nónuplo, décuplo,
 //          undécuplo, duodécuplo, terciodécuplo, cuartodécuplo, quintodécuplo, sextodécuplo,
 //          septodécuplo, octodécuplo, novodécuplo, ... céntuple, ...
 //
 // web link:https://www.collinsdictionary.com/dictionary/english/quintuple
 // english: double, triple/trifold, quadruple/fourfold, quintuple/fivefold, sextuple/sixfold,
 //          septuple/sevenfold, octuple/eightfold, nonuple/ninefold, decuple/tenfold,
 //          eleventhfold, twelfthfold, thirdfold, fourthfold, fifthfold, sixthfold,
 //          seventhfold, eighthfold, ninethfold, ... hundredfold, ...
 //
 // [translation]

// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)
enum tap_dance_keycodes { // IT BEGINS BY 0...

// TAP DANCE KEYCODES ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
	 Q_SUSR = 0  //    super user layer  // ... **TAB
    ,P_SUSR  //        super user layer  

    ,W_APPS  // apps & multi apps layer  // ...                                    // R_APPS -> W_APPS
    ,O_APPS  // apps & multi apps layer  // ...                                    // U_APPS -> O_APPS

    ,R_AC_RE // left  accents trigger    // ... ***RESET                           // V_ACCE -> R_AC_RE
    ,U_ACCE  // right accents trigger                                              // M_ACCE -> U_ACCE

    ,A_CAPS  //                          // ... **caps lock
    ,F_CAPS  //                          // ... **caps lock

    ,SP_SHF  //           space / lshift

    ,MOU_FN  //  mouse / function layer
    ,ESC_FN  //        *functions layer  /  **functions layer

    ,G_SYMB  //           symbols layer
    ,H_SYMB  //           symbols layer

    ,B_NMBR  //           numbers layer
    ,N_NMBR  //           numbers layer  // ... **tilde for building a 'tilded n'

// TAP DANCE KEYCODES ACCESSIBLE FROM *NMBR (NUMBERS LAYER)
    ,TRIP_0  //                          // ...  *  space / **          000
    ,DOUB_0  //                          // ...  * delete / **           00
//  ,SING_0  //                          // ...  *      0 / ** percentaje %
    ,DONMBR  //   return to *GHKN layer (gherkin default layer)  // ... dot
    ,SLNMBR  //   return to *GHKN layer (gherkin default layer)  // ... slash

// TAP DANCE KEYCODES ACCESSIBLE FROM *SYMB (SYMBOLS LAYER)
    ,BSL_CI  // backslash & circumflex accent
    ,QUOT_D  //     quote & double quote
    ,DO_EUR  //     dolar & euro
    ,EXCLAM  // american exclamation mark & inverted exclamation mark
    ,QUESTI  // american    question mark & inverted    question mark

// TAP DANCE KEYCODES FOR ACCENTS, ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
    ,J_ACUT  // acute / grave accent  'á' / 'à'

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
    ,SX_VIM                                                                 // NEW
    ,DA_VIM                                                                 // NEW
    ,MOU_ZV  //      SVIM or ZVIM layer                                     // NEW: SZ_VIM -> MOU_ZV  

// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,PVIM_uU ,PVIM_pP

    ,DVIM_uU ,DVIM_pP

    ,SVIM_uU ,SVIM_pP

// TAP DANCE FOR FUNCIONS

};

enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

     BLIT_OFF = SAFE_RANGE


// MACROS for APPS layer
    ,APP_Q_QQQQQ ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_RRRRR ,APP_T_TERMI ,APP_Y_TYPIN ,APP_U_UUUUU ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF 
    ,APP_A_AAAAA ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KVIEW ,APP_L_CLNDR ,APP_SP_SPSP 
    ,APP_Z_STUDI ,APP_X_XXXXX ,APP_C_CALCU ,APP_V_VVVVV ,APP_B_SNOTE ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_ESES ,APP_BS_BSBS ,APP_EN_ENEN   
// macros for apps layer
////////////////////////////////////////////////////////////////////////////////////////////////////////



// MACROS for process_record_user()

// MACROS for BLIT 
    ,BLIT_01 ,BLIT_02 ,BLIT_03 ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07 ,BLIT_08 ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12 ,BLIT_13 ,BLIT_14 ,BLIT_15

                                        ,BRTH_00
    ,BRTH_01 ,BRTH_02 ,BRTH_03 ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07 ,BRTH_08 ,BRTH_09 ,BRTH_10
             ,BRTH_12                   ,BRTH_15
// macros for blit
////////////////////////////////////////////////////////////////////////////////////////////////////////



    ,DICTAD

//[DELETE]
//    ,LAYER_IS
//[delete]

    ,PVIM_H

                    ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN

    ,SVIM_Y                                    // it's used tap_dance for U,P
    ,SVIM_N

    ,XVIM_Y ,XVIM_U ,XVIM_I           ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN

    ,ZVIM_Y ,ZVIM_U                   ,ZVIM_P
    ,ZVIM_H ,ZVIM_J ,ZVIM_K  ,ZVIM_L  ,ZVIM_SP
    ,ZVIM_N

    ,AVIM_Y ,AVIM_U ,AVIM_I  ,AVIM_O  ,AVIM_P
    ,AVIM_H ,AVIM_J                   ,AVIM_SP
    ,AVIM_N ,AVIM_M ,AVIM_ES

}; // enum custom keycodes


// GLOBAL VARIABLES

  static uint8_t shift_flag;
//  static uint8_t shift_flag_tmp;

   bool  left_shift_pressed  = false;
   bool right_shift_pressed  = false;
   bool accent_pressed       = false;
   bool acute_requested      = false;
   bool diaeresis_requested  = false;
   bool circumflex_requested = false;
   bool grave_requested      = false;

//   uint8_t actual_mods       = 0;

// [DELETEME] 
/*
   void enable_capslock_after_accents_function(void) {};  // MY CAPSLOCK RESET FUNCTION
   void disable_capslock_before_accents_function(void) {}; // MY CAPSLOCK FINISHED FUNCTION
   void acute_finished_function(void) {};
   void acute_reset_function(void) {};
*/
// [deleteme]
// [FIXME]  CHANGE TO BOOLEAN VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   uint8_t disabled_caps_before_accent = 0;
   uint8_t backlight_caps = 0;
   static uint8_t gherkinBacklightLevel = 0;
   static uint8_t gherkinBacklightLevelBeforeCapsLock = 0;   

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
      else if (state->count == 6) {
        if (state->interrupted) return SEXTUPLE_SINGLE_TAP;
        else if (state->pressed) return SEXTUPLE_HOLD;
        else return SEXTUPLE_TAP;
      }
      else return 18; //magic number. At some point this method will expand to work for more presses
    }
}
/*                                                                                      */
/* TAP DANCE GENERAL SETUP SECTION END                                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                                                                                      */
/* QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
void pvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");
    send_string(key);
}

void dvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"d");
    send_string(key);
}

void svim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"s");
    send_string(key);
}

void xvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"x");
    send_string(key);
}

void zvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"z");
    send_string(key);
}

void avim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"a");
    send_string(key);
}

void callApp(char *appName)
{
    register_code(KC_LGUI);   register_code (KC_SPC);
  unregister_code (KC_SPC); unregister_code(KC_LGUI);
    send_string  (appName); 
    // next delay is for avoiding that SpotLight remains on screen without calling our app
    _delay_ms(30); 
    register_code (KC_ENT); unregister_code (KC_ENT);
}  

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
    gherkinBacklightLevelBeforeCapsLock = gherkinBacklightLevel;
    gherkinBacklightLevel = BL_CAPS;
  }
  else
  {
    backlight_caps  = 0;
    breathing_period_set(BR_DFLT);
    breathing_disable();
    gherkinBacklightLevel = gherkinBacklightLevelBeforeCapsLock;
  }
  layer_clear();
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
void acute_accent_function(void) {
  register_code(KC_LALT); register_code(KC_E);
  unregister_code(KC_E); unregister_code(KC_LALT);
}
void diaeresis_accent_function(void) {
    register_code(KC_LALT); register_code(KC_U);
    unregister_code(KC_U);  unregister_code(KC_LALT);
}
void circumflex_accent_function(void) {
    register_code(KC_LALT); register_code(KC_I);
    unregister_code(KC_I);  unregister_code(KC_LALT);
}
void grave_accent_function(void) {
    register_code(KC_LALT); register_code(KC_GRAVE);
    unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
}
void tilde_accent_function(void) {
    register_code(KC_LALT); register_code(KC_N);
    unregister_code(KC_N);  unregister_code(KC_LALT);
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
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.
static tap Q_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void Q_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_SUSRtap_state.state = cur_dance(state);
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_Q);     break;
    case SINGLE_HOLD:       layer_on(SUSR);          break;

    case DOUBLE_TAP:        register_code(KC_TAB);   break;

    case DOUBLE_HOLD:       layer_on(BLIT);          break;

    case DOUBLE_SINGLE_TAP: register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q);     break;
  }
}

void Q_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_Q);   break;

    case SINGLE_HOLD:       layer_off(SUSR);         break;
    case DOUBLE_TAP:        unregister_code(KC_TAB); break;
    case DOUBLE_HOLD:       layer_off(BLIT);         break;
  }
  Q_SUSRtap_state.state = 0;
}
/*                                                                                      */
/* [TAPDANCE] KC_Q  -  Q _ S U S R  -  SUPER USER LAYER  -  TAB                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE]  W _ A P P S                                                              */
/*                                                                                      */
/*  KC_W:  wW  -  [APPS]  -  [MAPS]                                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'W_APPS' tap dance.
static tap W_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void W_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_APPStap_state.state = cur_dance(state);
  switch (W_APPStap_state.state) {
    case SINGLE_TAP:         register_code(KC_W); break;

    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  register_code(KC_W); unregister_code(KC_W);
                             register_code(KC_W); break;

    case SINGLE_HOLD:        
    case DOUBLE_HOLD:        layer_on(APPS);      break;
  }
}

void W_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_APPStap_state.state) {
    case SINGLE_TAP:         
    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_W); break;

    case DOUBLE_HOLD:        HIDEOTH;
    case SINGLE_HOLD:        layer_off(APPS);       break;
  }
  W_APPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance]     w _ a p p s                                                           */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_R:   R,  LEFT ACCENTS TRIGGER,  RESET                */
/*                                                                                      */
/*  KC_R:  rR  -  rr  RR  -  MANAGEMENT OF ALL KIND OF ACCENTS  -  RESET                */
/*                                                                                      */
/*                          (ACUTE, GRAVE, DIAERESIS, CIRCUMFLEX & TILDE) ACCENTS       */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_R  -  PREAMBLE                                                         */
/*                                                                                      */
/*  R: FUNCTIONS USED BY R_AC_RE  ( R_ACCENTS_RESET )                                   */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
// RESET MY KEYBOARD FUNCTION
//
// [EXAMPLE] 
//     Using a delay between keystrokes with the following function: '_delay_ms(milliseconds)'
//       case DOUBLE_SINGLE_TAP: _delay_ms(1000); register_code(KC_R); break;
//     Using the function: 'reset_keyboard()'' into my function 'reset_my_keyboard_function()'
// [example]
//
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

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

//instantalize an instance of 'tap' for the 'R_AC_RE' tap dance.
static tap R_AC_REtap_state = {
  .is_press_action = true,
  .state = 0
};
void R_AC_RE_finished(qk_tap_dance_state_t* state, void* user_data) {
    R_AC_REtap_state.state = cur_dance(state);
    shift_flag = get_mods()&LSHIFT_MODS;

  switch (R_AC_REtap_state.state) {

    case SINGLE_TAP:        register_code(KC_R);           break;

    case DOUBLE_TAP: 
    case DOUBLE_SINGLE_TAP: register_code(KC_R);
                            unregister_code(KC_R);
                            register_code(KC_R);           break;

    case SINGLE_HOLD:       acute_requested      = true;   break;

    case DOUBLE_HOLD:       diaeresis_requested  = true;   break;

    case TRIPLE_HOLD:       grave_requested      = true;   break;

    case QUADRUPLE_HOLD:    circumflex_requested = true;   break;

    case QUINTUPLE_HOLD:  // starts backlight triple blink RESET function
                            reset_my_keyboard_function();  break;
  }
}

void R_AC_RE_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (R_AC_REtap_state.state) {

        case SINGLE_TAP:            
        case DOUBLE_TAP:            
        case DOUBLE_SINGLE_TAP:     unregister_code(KC_R); break;        

        case SINGLE_HOLD:         acute_requested = false; break;

        case DOUBLE_HOLD:     diaeresis_requested = false; break;

        case TRIPLE_HOLD:         grave_requested = false; break;

        case QUADRUPLE_HOLD: circumflex_requested = false; break;
    }
    R_AC_REtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_r  -  r _ a c c e n t s _ r e s e t  -  kc_r                           */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_U:   U, RIGHT ACCENTS TRIGGER                        */
/*                                                                                      */
/*  KC_U:  uU  -  uu   UU  -  MANAGEMENT OF ALL KIND OF ACCENTS                         */
/*                                                                                      */
/*                          (ACUTE, GRAVE, DIAERESIS, CIRCUMFLEX & TILDE) ACCENTS       */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'U_ACCE' tap dance.
static tap U_ACCEtap_state = {
  .is_press_action = true,
  .state = 0
};
void U_ACCE_finished(qk_tap_dance_state_t* state, void* user_data) {
    U_ACCEtap_state.state = cur_dance(state);
    shift_flag = get_mods()&LSHIFT_MODS;

  switch (U_ACCEtap_state.state) {

    case SINGLE_TAP:        action_function(NULL, U_VOWEL, U_VOWEL); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_U);
                            unregister_code(KC_U);
                            register_code(KC_U);           break;

    case SINGLE_HOLD:       acute_requested      = true;   break;

    case DOUBLE_HOLD:       diaeresis_requested  = true;   break;

    case TRIPLE_HOLD:       grave_requested      = true;   break;

    case QUADRUPLE_HOLD:    circumflex_requested = true;   break;
  }
}

void U_ACCE_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (U_ACCEtap_state.state) {

        case DOUBLE_TAP:            
        case DOUBLE_SINGLE_TAP:     unregister_code(KC_U); break;

        case SINGLE_HOLD:         acute_requested = false; break;

        case DOUBLE_HOLD:     diaeresis_requested = false; break;

        case TRIPLE_HOLD:         grave_requested = false; break;

        case QUADRUPLE_HOLD: circumflex_requested = false; break;
    }
    U_ACCEtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  -  u _ a c c e n t s  -  kc_u                                       */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] O _ A P P S    -    M U L T I A P P S                                     */
/*                                                                                      */
/*  KC_O:  oO  -  accented oO  -  [APPS]  -  [MAPS]                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'O_APPS' tap dance.
static tap O_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void O_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  O_APPStap_state.state = cur_dance(state);
  switch (O_APPStap_state.state) {

    case SINGLE_TAP:        action_function(NULL, O_VOWEL, O_VOWEL); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_O); 
                            unregister_code(KC_O);
                            register_code(KC_O);                     break;

    case SINGLE_HOLD:       
    case DOUBLE_HOLD:       layer_on(APPS);                          break;
// [INFO]
//    case SINGLE_HOLD:     layer_state_set(0x00000002);             break;
// [info]
//
  }
}

void O_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (O_APPStap_state.state) {
    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_O); break;

    case DOUBLE_HOLD:        HIDEOTH;
    case SINGLE_HOLD:        layer_off(APPS);       break;
  }
  O_APPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] o _ a p p s    -    m u l t i a p p s                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] P _ S U S R           S U P E R U S E R                                   */
/*                                                                                      */
/*  KC_P:  pP  -  pp  -  PP  -  [SUSR]                                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'P_SUSR' tap dance.
static tap P_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
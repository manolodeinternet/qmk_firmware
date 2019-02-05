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

#define UNDO                   LGUI(KC_Z)   //UNDO
#define REDO             LSFT(LGUI(KC_Z))   //REDO
#define CUT                    LGUI(KC_X)   //CUT
#define COPY                   LGUI(KC_C)   //COPY
#define PASTE                  LGUI(KC_V)   //PASTE
#define P_MATCH    LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
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
    ,BCKLIT  // 








// tap dance for apps layer (for accessing layers -single or multi apps-)
    ,NOTES_APP  // Notes app
}












































































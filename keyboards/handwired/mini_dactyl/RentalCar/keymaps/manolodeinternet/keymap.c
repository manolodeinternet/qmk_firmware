/*
MiniDactyl 2019/11/04

Custom Tapping Term

By default, the tapping term is defined globally, and is not configurable by key. For most users, this is perfectly fine. But in come cases, dual function keys would be greatly improved by different timeouts than LT keys, or because some keys may be easier to hold than others. Instead of using custom key codes for each, this allows for per key configurable TAPPING_TERM.

To enable this functionality, you need to add #define TAPPING_TERM_PER_KEY to your config.h, first.

Example get_tapping_term Implementation
To change the TAPPING TERM based on the keycode, you'd want to add something like the following to your keymap.c file:

uint16_t get_tapping_term(uint16_t keycode) {
  switch (keycode) {
    case SFT_T(KC_SPC):
      return TAPPING_TERM + 1250;
    case LT(1, KC_GRV):
      return 130;
    default:
      return TAPPING_TERM;
  }
}
*/

/*  
  PROJECT NAME: 30_layout
  VERSION NAME: cleaning the code
*/

/*
  Copyright 2019 manolodeinternet <manolodeinternet@gmail.com>
  Copyright 2015 Jack Humbert
  
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License 
  along with this program (located in 'qmk_firmware' folder).
  If not, see <http://www.gnu.org/licenses/>.
*/

/////////////////////////////////////////////////////////////////////////////////////// LINE TOO LONG !!!

//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###

/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING   ( 105  CHARACTERS)   MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/

// [MY_OWN_PREPROCESSING_KEYWORDS] for editing my code:
//
// [ADVICE]
// [advice]        maybe you can use this advice later, for covering a possible need
// 
// [BEAUTIFUL & CLEAN CODE]    you can do a task, just coding or...
//                             you can do the same thing making an artwork,
// [beautiful & clean code]    instead of a bunch of lines of code
//
// [BOOKMARK] 
//                 1) for looking for an important point of the code I'm editing,
// [bookmark]      2) for putting a bookmark into the code.
//
// [BUG?]
// [bug?]          can this code cause a bug ?        
//
// [DANGER]
// [danger]        for indicate that we have touch the code, without checking if the change is reliable
//
// [DATA]
// [data]          some information about any reference relative to our application data
//
// [DELETEME]      this bunch of code is no longer useful
// [deleteme]      we must delete it later
//
// [EXAMPLE]
// [example]
//
// [FIXME]
// [fixme]         there's something I HAVE TO FIX for a right working
//
// [IMPROVEME]
// [improveme]     there is something we could change for a better working or getting a code more elegant
//
// [INFO]
// [info]          some information about any reference relative to our code or application analytics
//
// [INSPIRINGCODE]
// [inspiringcode] cool, clean, powerfull, funny snippet
//
// [LAST]
// [last]          for marking the point where I'm working
//
// [OLDWAY]        it works, but smells ...
//                 the ugly way I did this before that we aren't going to need any more.
// [oldway]        it still remains in the code as an example of how it don't have to do things again
//
// [OPTIONS]
// [options]       different ways of embracing or facing an algorith or any other issue
//
// [REFLEXION]
// [reflexion]     maybe things can be coded (thinked) different !!!
//
// [SAVING_SPACE]
// [saving_space]   ways of saving space for fitting the whole firmware into the microcontroller
//
// [SYSTEM PREFERENCES]
// [system preferences] sortcut defined in 'System Preferences'
//
// [TRANSLATION]
// [translation]
//
// [UNDERSTANDING] 
// [understanding] for giving explanations about what our code does
//
// [WHYWEDOTHIS]
// [whywedothis] explanation about why we do this thing
//
// [my_own_preprocessing_keywords]



//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
////                                                                                  ////
////  COMMENTS SYNTAX FOR IMPROVING LEGIBILITY OF THE DIFFERENT SECTIONS OF THE CODE  ////
////                                                                                  ////
////                        STANDARDIZED HEADERS & FOOTERS                            ////
////                                                                                  ////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

// HEADER
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_layer_NAME] kc_KEYCODE (tapdance_NAME)                                  //
//                                                                                      //
//  K E Y C O D E   /   L A Y E R _ X   /   F U N C T I O N   /   . . .                 //
//                                                                                      //
//  KC_KEYCODE:  *  KEYCODE_1,                                                          //
//              **  KEYCODE_2,                                                          //
//               @ [_LAYER_X],                                                          //
//              @@ [_LAYER_Y] OFF,                                                      //
//             @@@ [_LAYER_Z],                                                          //
//               ?  ETCETERA...                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// FOOTER
//                                                                                      //
// [tapdance] [_layer_name] kc_keycode (tapdance_name)                                  //
//                                                                                      //
//  k e y c o d e   /   l a y e r _ x   /   f u n c t i o n   /   . . .                 //
//////////////////////////////////////////////////////////////////////////////////////////

// i.e.:
// HEADER
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_N (SLNUMB)                                                     //
//                                                                                      //
//  S L A S H  -  N U M B E R S   L A Y E R   O F F                                     //
//                                                                                      //
//  KC_N:  * KC_KP_SLASH = KC_PSLS,                                                     //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// FOOTER
//                                                                                      //
// [tapdance] [_numb] kc_n (slnumb)                                                     //
//                                                                                      //
//  s l a s h  -  n u m b e r s   l a y e r   o f f                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //

//    comments syntax for improving legibility of the different sections of the code    //
//                                                                                      //
//                          standardized headers & footers                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// #pragma once
// #include QMK_KEYBOARD_H
// Following 2 files don't need full path bc folder 'users/manolodeinternet' is automatically included
#include "manolodeinternet.h"
// #include "wrappers.h"
#include "rgblight_mini_dactyl.h"

// It's included from 'manolodeinternet.h'
// #include "wrappers.h"

// It's not necessary, I think it's included from 'quantum' in 'QMK_KEYBOARD_H'
// #include "rgblight.h"


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

// [MINE]
extern rgblight_config_t rgblight_config;      // without this line, it doesn't recognize rgblight_config
extern LED_TYPE led[RGBLED_NUM];
// [mine]

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
#define _DFLT   0  //  gherkin ALPHAS DEFAULT    layer 
#define _ACCN   1  //  gherkin ACCENTS           layer 
#define _NUMB   2  //  gherkin numbers           layer 
#define _FVIM   3  //  Fake                  VIM layer
/*
#define _AVIM  X12X  //  select              VIM layer
We don't use _AVIM because we use instead: 'SHIFT' for getting the same result, but easier and clearer !
*/
#define _CVIM   4  //  power edition         VIM layer
// #define _XVIM   5  //  movement              VIM layer
#define _DVIM   5  //  Delete                VIM layer
#define _MOUS   6  //  mouse                     layer
#define _DALY   7  //  gherkin DAiLY commands    layer 
#define _FUNC   8  //  gherkin functions         layer 
#define _SYMB   9  //  gherkin symbols           layer 
#define _APPS  10  //  APPlicationS              layer
#define _RGBL  11  //  backlight                 layer
#define _LGHT  _RGBL
#define _POWR  12  //  POWER        productivity layer
//
// defining layers
//
// [UNDERSTANDING]
// FOR ACCESING LAYERS FROM KEYMAP 'LT(LAYER, KC)', NUMBER LAYER MUST BE BETWEEN 0 AND 15
// I can implement the call to _DVIM,_CVIM & _XVIM from TAP_DANCE functions...
//...renumbering this layers above 16 or even above 32, ...
//...this wayl we'll have THREE FREE LAYERS more for using directly from any keymap (0..15)
     // ... but it works even above 31 & 32 & 33 ...
     // ... consuming an exaggerated amount of memory, ...
     // ... the higher the number of the layer, ...
     // ... the more memory consumed.  
// IMPORTANT: IN ADDITION TO USING LAYERS AMONG 0...15, YOU CAN USE LAYERS AMONG 16...31, IF... 
// ...IF YOU AREN'T GOING TO ACCESS THEM FROM KEYMAP, BUT FROM CODE, USING 'layer_on / layer_off(LAYER)'
// [understanding]
//                                                                                      //
// defining layers                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING COLOR LAYERS                      C O L O R     L A Y E R S                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//

#define COLOR_CAPS HSV_MY_DARK_CORAL // capslock color

// #define COLOR_DFLT HSV_MY_EMPTY  // layer 00      // (   0,    0,    0)  // 00

#define COLOR_ACCN HSV_MY_WHITE     // layer 01  // HSV_MY_GOLDENROD      // (0xD9, 0xA5, 0x21)  // 02
#define COLOR_NUMB HSV_MY_BLUE      // layer 02

#define COLOR_FVIM HSV_MY_MAGENTA   // layer 03      // (0x00, 0x80, 0x80)  // 09
//#define COLOR_CVIM HSV_MY_PINK    // layer 04      // ( 320,  255,  255)  // 11
#define COLOR_VIM_ HSV_MY_PINK
#define COLOR_DVIM HSV_MY_RED       // layer 05      // (0xFF, 0x00, 0x00)  // 10


#define COLOR_MOUS HSV_MY_CYAN      // layer 06      // (0x00, 0xFF, 0x00)  // 14
#define COLOR_DALY HSV_MY_PURPLE    // layer 07      // (0x7A, 0x00, 0xFF)  // 06
#define COLOR_FUNC HSV_MY_TURQUOISE // layer 08      // (0x99, 0xF5, 0xFF)  // 05

#define COLOR_SYMB HSV_MY_GREEN     // layer 09      // (0x00, 0xFF, 0x00)  // 04
#define COLOR_APPS HSV_MY_ORANGE    // layer 10      // (0xFF, 0x80, 0xBF)  // 07
// #define COLOR_RGBL HSV_MY_EMPTY  // layer 11      // (   0,    0,    0)  // 15


#define COLOR_POWR HSV_MY_YELLOW    // layer 12      // (0xFF, 0xFF, 0x00)  // 08
//
//                                                                                      //
// defining color layers                      c o l o r     l a y e r s                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING READABILITY CODES                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define KC_FF   KC_MEDIA_FAST_FORWARD // these keycodes skip within the current track when held,
#define KC_RW   KC_MEDIA_REWIND       // but skip the entire track when tapped.
//                                                                                      //
// defining readability codes                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING FN_ACTIONS                                                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
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


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFININING RGB CONSTANTS                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// RGHT HAND
#define OUTER_RGHT  0
#define INNER_RGHT 6 //6

// LEFT HAND
#define INNER_LEFT 7 //7
#define OUTER_LEFT 12 //12

// THUMB LEDs
#define THUMB_LEDS  2
//
//////////////////////////////////////////////////////////////////////////////////////////
// definining rgb constants                                                             //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING ?VIM SHORTCUTS 9, 10, 11, 12, 13                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define OUTDNT             LGUI(KC_LBRC)  // OUTDNT a paragraph
// [UNUSED]
#define INDENT              LGUI(KC_RBRC)  // indent  a paragraph
// [UNUSED]
/*
HYPR(keycode) does work directly into a keymap only !!!
HYPR(keycode) doesn't work into a function: register_code(HYPR(KC_V));
HYPR(keycode) doesn't work into a #define,
quantum/quantum_keycodes.h:484:18: error: 
large integer implicitly truncated to unsigned type [-Werror=overflow]
 #define HYPR(kc) (QK_LCTL | QK_LSFT | QK_LALT | QK_LGUI | (kc))
                  ^
quantum/quantum_keycodes.h:681:17: note: in expansion of macro 'HYPR'
 #define KC_HYPR HYPR(KC_NO)
                 ^~~~
*/
// We have to define HYPR(KC_V) as follows ...
#define HYPR_V     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))))
//                                                                                      //
// defining ?vim shortcuts 9, 10, 11, 12, 13                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING AUTOMATOR MAC SERVICES SHORTCUTS                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define   BEEP_1               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("r")))))    // 1 beep
// #define   BEEP_2               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("g")))))    // 2 beeps
// #define   BEEP_3               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("b")))))    // 3 beeps
//                                                                                      //
// defining system preferences shortcuts                                                //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING MY SYSTEM PREFERENCES SHORTCUTS                                             //
//                                                                                      //
// macOS High Sierra                                                                    //
// Version 10.13.6 (17G7024)                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*
                                                 MODIFIERS (KEY)
                                                      Shift
                                                       Control
                                                        Alt
                                                         Gui
                                                      S
                                                       C
                                                        A
                                                         G

 *  KEYBOARD -> SHORTCUTS -> DISPLAY
      Decrease display brightness                           F14
      Increase display brightness                           F15

 *  KEYBOARD -> SHORTCUTS -> LAUNCHPAD & DOCK
      Turn Dock Hiding On/Off                           AG (D)
      Show Launchpad                                        F17

 *  KEYBOARD -> SHORTCUTS -> MISSION CONTROL
      Mission Control                                  C   (up)
      Show Notification Center                          AG (F15)
      Turn Do Not Disturb On/Off                      SC   (F15)
      Applications windows                             C   (down)
      Show Desktop                                          F6 
      Show Dashboard                                        F18
      Mission Control / Move left a space              C   (left)
      Mission Control / Move right a space             C   (right)
      Mission Control / Switch to Desktop 1            C   (1)

 *  KEYBOARD -> SHORTCUTS -> KEYBOARD
      Change the way Tab moves focus                   C   (F7)
      Turn keyboard access on or off                   C   (F1)
      Move focus to the menu bar                       C   (F2)
      Move focus to the Dock                           C   (F3)
      Move focus to active or next window              C   (F4)
      Move focus to the window toolbar                 C   (F5)
      Move focus to the floating window                C   (F6)
      Move focus to next window                          G (grave)
      Move focus to the window drawer                   AG (grave)
      Move focus to status menus                       C   (F8)

 *  KEYBOARD -> SHORTCUTS -> INPUT SOURCES
      Select the previous input source                  AG (T)
      Select next source in Input menu                 CAG (T)

 *  KEYBOARD -> SHORTCUTS -> SCREEN SHOTS
      Save picture of screen as a file                S  G (3)
      Copy picture of screen to the clipboard         SC G (3)
      Save picture of selected area as a file         S  G (4)
      Copy picture of selected area to the clipboard  SC G (4)

 *  KEYBOARD -> SHORTCUTS -> SERVICES
    PICTURES:
      Capture Full Screen
      Capture Screen using Timer
      Capture Selection from Screen
      Take Screenshot
      Import Image
      Make New File in Filed Documents
      New Day One Entry With Selection
      Open with Pixelmator
      Open with Pixelmator Pro
      Set Desktop Picture

    MESSAGING:
      New Email To Address
      New Email With Selection

    DEVELOPMENT:
      Activity Monitor
      Allocation & Leaks
      File Activity
      System Trace
      Compare files                                   SCAG (C)
      Compare To Master
      Create Service
      Create Workflow
      Get result of AppleScript                          G (asterisk)
      Make New AppleScript
      Run as AppleScript
      Time Profile Active Application
      Time Profile App Under Mouse
      Time Profile Entire System
      Toggle Instruments Recording

    FILES AND FOLDERS:
      Open Selected File in TextEdit
      New Terminal at Folder
      New Terminal Tab at Folder
      Encode Selected Audio Files
      Encode Selected Video Files
      Folder Actions Setup...
      Open as Twitter Username
      Tweet
      Open in Sourcetree
      Run SuperDuper! Settings
      Send File To Bluetooth Device                   S  G (B)

    SEARCHING:
      Look Up in Dictionary
      Search With Google                              S  G (L)
      Spotlight                                       S  G (F)

    TEXT:
      Add Contact
      Call
      Send Message
      Send SMS
      Add to Evernote
      Add to iTunes as a Spoken Track
      Convert Text to Full Width
      Convert Text to Half Width
      Convert Text to Simplified Chinese              SACG (C)
      Convert Text to Traditional Chinese             S CG (C)
      Create Collection From Text
      Create Font Library From Text
      Display Font Information
      Create TextExpander 3 Snippet
      Find in Xcode
      Open Quickly in Xcode
      Make New Sticky Note                            S  G (Y)
      New Email With Selection
      New TextEdit Wi...tainig Selection
      nvALT: New Note from Selection                  S  G (V)
      OmniFocus 2: Send to Inbox
      OmniFocus 3: Send to Inbox
      Open
      Show in Finder
      Show Info in Finder
      Open man Page in Terminal                       S  G (M)
      Search man Page Index in Terminal               S  G (A)
      Open URL in RealPlayer
      Send to LaunchBar
      Show Map
      Summarize
      Translate                                          G (dot)

    INTERNET:
      Add to Reading List
      Open URL

    GENERAL:
    (from Automator/NewFileForServices):
      Aut_Beep_1                                      SCAG (R)
      Aut_Beep_2                                      SCAG (G)
      Aut_Beep_3                                      SCAG (B)
      Launch T-Terminal                               SCAG (T)

 *  KEYBOARD -> SHORTCUTS -> SPOTLIGHT
      Show Spotlight search                              G (Space)
      Show Finder search window                        CAG (Space)

 *  KEYBOARD -> SHORTCUTS -> ACCESSIBILITY
    ZOOM:
      Turn zoom on or off                              CAG (semicolon)
      Turn image smoothing on or off                   CAG (backslash)
      Zoom out                                         CAG (minus)
      Zoom in                                          CAG (equal)
      Turn focus following on or off                   CAG (slash)

    CONTRAST:
      Increase contrast                                CAG (dot)
      Decrease contrast                                CAG (comma)

      Invert colors                                   SC G (8)
      Turn VoiceOver on or off                           G (F5)
      Show Accessibility controls                       AG (F5)

 *  KEYBOARD -> SHORTCUTS -> APP SHORTCUTS
    ALL APPLICATIONS:
      Show Help menu                                  S  G (slash)
      Send to LaunchBar                               S  G (F1)
      Window                                          SCAG (W)

    FINDER.APP:
      Archivo -> Nueva ventana del Finder                G (N)

    CALCULATOR.APP:
      Visualizacion -> De programacion                SCAG (P)
      Visualizacion -> Cientifica                     SCAG (C)

    ATOM.APP:
      Edit -> Lines -> Auto Indent                       G (open square bracket)

    TEXTEDIT.APP:
      Format -> Allow Hyphenation                      CA  (H)
      Format -> Do not allow Hyphenation              SCA  (H)

   XCODE.APP:
     Debug/Step Over Instruction                       C   (F6)
     Debug/Step Into Instruction                       C   (F7)
*/
//                                                                                      //
// defining my system preferences shortcuts                                             //
//                                                                                      //
// macos high sierra                                                                    //
// version 10.13.6 (17g7024)                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING SYMBOLS 4 ( FOR USING INTO 'ACTION_TAP_DANCE_DOUBLE(SYMBOL1, SYMBOL2)' )    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define EURO         LSFT(LALT(KC_2))  // euro symbol
#define INV_QU      LSFT(LALT(KC_SLSH))  // inverted question mark
#define INV_EX               LALT(KC_1)  // inverted exclamation mark
//                                                                                      //
// defining symbols 4 ( for using into 'action_tap_dance_double(symbol1, symbol2)' )    //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING _DALY COMMANDS 6                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define CAPSCR          LSFT(LGUI(KC_3))  // Capture whole screen
#define CAPSLC          LSFT(LGUI(KC_4))  // Capture portion of screen (a slice)
// [UNUSED]
//      KC_CPYW          LCTL   (CAPSCR)  // Copy whole screen       // LCTL (LSFT(LGUI(KC_3)))
//      KC_CPYP          LCTL   (CAPSLC)  // Copy portion of screen  // LCTL (LSFT(LGUI(KC_4)))
// [unused]

// #define PREV_APPL      LSFT(LGUI(KC_TAB))  // previous app
// #define NEXT_APPL            LGUI(KC_TAB)  //     next app
#define PREV_W     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_W           LGUI(KC_GRAVE)  //     next window
#define PREV_T       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_T             LCTL(KC_TAB)  //     next tab

#define SPOTLT             LGUI(KC_SPC)  // spotlight & siri


#define APPS_W            LCTL(KC_DOWN)  // applications windows
#define MISCTL              LCTL(KC_UP)  // mission control
#define  SPEAK               LCAG(KC_H)  // start/stop to speak selected text 
                                                //or all the text if any is selected
                                                // LCTL = Hold Left Control, Alt and GUI and press kc
// [SYSTEM PREFERENCES]
#define   DESK                    KC_F6  // show desktop
#define LNCHPD                   KC_F17  // F17 (set at 'Sys.Pref./Keyboard/Shortcuts/Launchpad & Doc')
#define DSHBRD                   KC_F18  // F18 (set at 'Sys.Pref./Keyboard/Shortcuts/Mission Control')
#define ACTV_W              LCTL(KC_F4)  // active window
#define FLOA_W              LCTL(KC_F6)  // floating window
// [system preferences]

#define REOPEN           LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define CLOS_A               LGUI(KC_Q)  // close application
#define CLOS_W               LGUI(KC_W)  // close window
#define CLOS_T               LGUI(KC_W)  // close tab

// [UNUSED]
#define AUTFIL                    KC_F5  // autocompletion
#define P_MTCH   LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE

// 3ERD PARTY APPLICATIONS
// SUBLIME COMMANDS
#define P_HYST          LALT(LGUI(KC_V))   //PASTE (SUBLIME TEXT) FROM HISTORY
// sublime commands
// 3erd party applications
// [unused]
//                                                                                      //
// defining _daly commands 6                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING _POWR COMMANDS 8                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*
#define SL_MEN           TD(SLEP_M)
#define KM_TOL           TD(KILM_T)
#define KA_DCK           TD(KILA_D)
#define SH_STA           TD(SHUT_S)
#define RT_FLO           TD(RSTT_F)
*/
#define LCKSCR      LCTL(LGUI(KC_Q))
#define LOGOUT LSFT(LALT(LGUI(KC_Q)))

// [SYSTEM PREFERENCES]
#define ZOM_FOL      LCAG(KC_SLSH)      //QMK: Hold Left Control, Alt and GUI and press kc
#define ZOM_TOG      LCAG(KC_SCLN)
#define ZOM_IN          LCAG(KC_EQL)
#define ZOM_OUT         LCAG(KC_MINS)
#define ZOMSMTH      LCAG(KC_BSLS)
#define CNTR_UP       LCAG(KC_DOT)              //Hold Left Control, Alt and GUI and press kc
#define CNTR_DN      LCAG(KC_COMM)
//
// [UNUSED]
#define INV_CLR      LSFT(LCTL(LGUI(KC_8)))  
// [INFO]
// it can't be used into an 'ACTION_TAP_DANCE_DOUBLE()'
// it can't be used into a statement of tap_dance: 'case SINGLE_TAP: INV_CLR;'  We would get only '8'
// it can't be used into a 'RSFT_T(INV_CLR)' neither
// [info]
// [unused]
//
// [system preferences]
//                                                                                      //
// defining _powr commands 8                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// _APPS COMMANDS 7                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define HIDEOTH          SEND_STRING(SS_LALT(SS_LGUI("h"))) //LALT(LGUI(KC_H)) //HIDE OTHER _APPS
//                                                                                      //
// _apps commands 7                                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE STATES DECLARATIONS                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
  enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
    SINGLE_TAP           = 1
   ,SINGLE_HOLD          = 2
   ,DOUBLE_TAP           = 3
   ,DOUBLE_HOLD          = 4
   ,DOUBLE_SINGLE_TAP    = 5 //send SINGLE_TAP twice - NOT DOUBLE_TAP
/*
   ,GUI_plus_HOLD        = 6
   ,ALT_plus_HOLD        = 7
   ,GUI_plus_DOUBLE_HOLD = 8
*/
/* ,TRIPLE_TAP           = 6
   ,TRIPLE_HOLD          = 7
   ,TRIPLE_SINGLE_TAP    = 8
   ,QUADRUPLE_TAP        = 9
   ,QUADRUPLE_HOLD       = 10
   ,QUADRUPLE_SINGLE_TAP = 11
   ,QUINTUPLE_TAP        = 12
   ,QUINTUPLE_HOLD       = 13
   ,QUINTUPLE_SINGLE_TAP = 14
   ,SEXTUPLE_TAP         = 15
   ,SEXTUPLE_HOLD        = 16
   ,SEXTUPLE_SINGLE_TAP  = 17
 * Add more enums here if you want for sevenfold, eightfold], etc.
 */
 };
//                                                                                      //
// tap dance states declarations                                                        //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum tap_dance_keycodes {

// TAP DANCE KEYCODES ACCESSIBLE FROM DEFAULT LAYER (ALPH LAYER) 1
//     FN_PVI  // _FUNC layer when holded or _FVIM layer when double holded on alpha layer
//    ,PVI_CL  // CapsLock    when tapped or _FVIM layer when holded        on alpha layer
//    ,APPS_MODE
     DVIM_Del  // Delete when tapping, _DVIM when holding 
//    ,NUMB_Del
//    ,SYMB_Ent
//    ,APPS_Esc
//    ,MOUS_Tab

// TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB (NUMBERS LAYER) 3
    ,SETNMB  // set numbers layer up / switch numbers layer off
// [GHERKIN]
//    ,SLNUMB  // return to *GHKN layer (gherkin default layer)  // ... slash
// [gherkin]

// TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB (SYMBOLS LAYER) 4
/*
    ,Y_AMCI  // ampersand & circumflex accent
    ,G_DOEU  // dolar & euro
    ,Z_EXCL
    ,X_QUES
*/

// TAP DANCE KEYCODES FOR _POWR (POWER LAYER) 8
    // ,TG_IND   // toggle keyboard as whole indicator for capslock ON/OFF
    // ,LCKLOG   // logout user session / lock user screen
    // ,SLEP_M   //   menu bar / (on hold) SLEEP
    // ,KILM_T   //   dock bar / (on hold) KILL MENU
    // ,KILA_D   //  tools bar / (on hold) KILL CURRENT APP
    // ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    // ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART
/*
    ,RC_RWND // right control / rewind       // KC_F7
    ,RA_PLAY // right alt     / play/pause   // KC_SPC
    ,RG_FRWD // right gui     / forward      // KC_F9
*/

// [ADVICE]
// [DEPRECATED]
//  ,BCKLIT   // accessing _RGBL layer from tap dance into _POWR layer
              // ...this way we don't waste a layer from being accesible from Default layer,
              // ...remember that you only can access 16 layer through LT(layer, key) and LM(layer, mod).
// [deprecated]
// [advice]    
// tap dance keycodes for _powr (power layer) 8

// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,FVIM_uU ,FVIM_pP

    ,DVIM_uU ,DVIM_pP
};
//                                                                                      //
// tap dance declarations (list of my tap dance configurations)                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// MACROS FOR PROCESS_RECORD_USER()                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

// MACROS FOR _ACCN LAYER 1
     CIRCU = SAFE_RANGE
    ,GRAVE
    ,DIAER 
// macros for _accn layer 1
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR DEFAULT LAYER 0
    ,MY_CLEAR
    ,MY_RESET

    ,O_COMMENT
    ,C_COMMENT
    ,PREV_APP
    ,NEXT_APP

    ,CHANGE_SYMB_TO_NUMB
    ,TH_L3_KAR_APPS
    ,TH_L4_FUNC_RGBL

    ,TH_R1_DALY_MOUS
    ,TH_R2_SYMB_FVIM
    ,TH_R3_APPS_NUMB
    ,TH_R4_POWR_RGBL

// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
//  ,MY_STEP_INDICAT  // it increments step indicator for RGB LEDs
// this function is not going to be used with 23 leds per hand

    ,TOG_ID  // it toggles keyboard as whole indicator for capslock ON/OFF
// macros for default layer 0
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _POWR LAYER 8
    ,VOL_1
    ,VOL_8
    ,BRIGHT_1
    ,SL_MEN
    ,KM_TOL
    ,KA_DCK
    ,SH_STA
    ,RT_FLO
// macros for _powr layer 8
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _APPS LAYER 7
    ,APP_Q_SNOTE ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_APSTO,APP_T_TERMI
                                         ,APP_Y_TYPIN ,APP_U_UROOM ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF
    ,APP_A_SCRPT ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME
                                         ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KRBNR ,APP_L_CLNDR ,APPSP_EMPTY
    ,APP_Z_STUDI ,APP_X_XCODE ,APP_C_CALCU ,APP_V_KVIEW ,APP_B_BOOKS
                                         ,APP_N_NOTES ,APP_M_MAIL  ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB
// macros for _apps layer 7
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/////////////////////////////////////////////////////////////////////////////////////////////////////###
// MACROS FOR _DALY LAYR 6
    ,DICTAD
    ,SIRI
// macros for _daly layer 6
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _?VIM 9, 10, 11, 12, 13

// _FVIM LAYER
// this layer is all implemented without using '/Users/myUser/Library/KeyBindings/DefaultKeyBinding.dict'
// except for the 'H' key:
    ,FVIM_H
/*
    ,FVIM_M
    ,FVIM_ES
    ,FVIM_BS
    ,FVIM_EN
*/
// _fvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// _DVIM LAYER
    ,DVIM_Y         ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN
// _dvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###


// OMNIFOCUS.APP
// _AVIM LAYER
//    ,AVIM_Y                     // _AVIM is for select VIM layr
//    ,AVIM_N                     // it's used SHIFT+key for the rest of the right side of the keyboard
// _avim layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###

// _CVIM LAYER
    ,CVIM_Y ,CVIM_U ,CVIM_I  ,CVIM_O  ,CVIM_P
            ,CVIM_J ,CVIM_K  ,CVIM_L  ,CVIM_SP
    ,CVIM_N ,CVIM_M ,CVIM_ES ,CVIM_BS ,CVIM_EN
// _cvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###

// _XVIM LAYER
    ,XVIM_Y ,XVIM_U ,XVIM_I  ,XVIM_O  ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN
// _xvim layer       
/////////////////////////////////////////////////////////////////////////////////////////////////////###
//
/////////////////////////////////////////////////////////////////////////////////////////////////////###
// macros for _?vim 9, 10, 11, 12, 13
/////////////////////////////////////////////////////////////////////////////////////////////////////###

/////////////////////////////////////////////////////////////////////////////////////////////////////###
// MACROS FOR _RGBL 15
// RED
    ,CH_RED  ,CH_CORL  ,CH_ORNG  ,CH_GOLR ,CH_GOLD          ,CH_YLLW          ,SAV_COL
// GREEN
    ,CH_CHRT ,CH_GREN  ,CH_SPRG  ,CH_TRQS ,CH_TEAL          ,CH_WHIT          ,GET_HSV
// BLUE
    ,CH_CYAN ,CH_AZUR  ,CH_BLUE  ,CH_PRPL ,CH_MGNT          ,CH_PINK          ,CH_EMPT

// macros for _blit 15
/////////////////////////////////////////////////////////////////////////////////////////////////////###

}; // enum custom keycodes
//                                                                                      //
// macros for process_record_user()                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;

// default_hsv = default_hue, default_sat, default_val;

  LED_TYPE tmp_led;
  int    state_number;
//  int    active_layer;

  static uint8_t   shift_flag;
  static uint8_t control_flag;
  static uint8_t  option_flag;
  static uint8_t     gui_flag;
  static uint8_t current_flag;

  bool             shift_was_activated     = false;

  static bool    multi_apps                = false;
  static bool    multi_apps_karabiner      = false;  
  static bool          apps_just_activated = false;
  static bool          apps_working        = false;
  static bool karabiner_apps_working       = false;
  static bool changing_apps                = false;           

  static bool          symbols_pressed     = false;
// [REFLEXION]
// Is it necessary that the 5 following vars were static ? Maybe I can remove 'static'
  static bool diaeresis_requested  = false;
  static bool circumflex_requested = false;
  static bool grave_requested      = false;

  static bool disabled_caps_before_accent = false;
  static bool capslock_is_active = false;
  static bool whole_keyboard_as_indicator = true;

// THIS VARIABLES ARE NOT GOING TO BE USED WITH 23 LEDS PER HAND
  // static int  diff = 2;
  // static int  prev_diff = 2;
// this variables are not going to be used with 23 leds per hand

  static bool numbers_is_active = false; // #01
  static bool numbers_is_set = false;  

  static uint16_t default_hue;
  static uint8_t  default_sat;
  static uint8_t  default_val;

// [reflexion]
//                                                                                      //
// global variables                                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
// TAP DANCE GENERAL SETUP SECTION START                                                //
//                                                                                      //
//  * SINGLE_TAP                                                                        //
// ** DOUBLE_TAP                                                                        //
//  @ SINGLE_HOLD                                                                       //
// @@ DOUBLE_HOLD                                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
    bool is_press_action;
    int  state;
} tap;
/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
        if (state->interrupted || !state->pressed) 
        // IF the key has been pressed only once 
        // AND  (the key has been interrupted by pressing another key after it
        //       OR   the key is not pressed at present)
          return SINGLE_TAP;
        else    
          //key has not been interrupted, but they key is still held. Means you want to send a 'HOLD'.
          // [MINE]
          // IF  the key has been pressed only once
          // AND the key has not been interrupted
          // AND the key is still pressed  (the key is still held)
          // [mine]
        // {    option_flag = get_mods()&ALT_MODS;
        //      gui_flag = get_mods()&GUI_MODS;

        //      if (option_flag)
        //        return ALT_plus_HOLD;
        //      else
        //        if (gui_flag)
        //          return GUI_plus_HOLD;          
        //        else
                 return SINGLE_HOLD;
         // }
//if (state->count == 1) 
  else
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
        // {
        //   gui_flag = get_mods()&GUI_MODS;
        //   if (gui_flag)
        //     return GUI_plus_DOUBLE_HOLD;          
        //   else
            return DOUBLE_HOLD;
        // }
        else
        // IF  the key has been pressed twice
        // AND the key has not being interrupted by pressing another key
        // AND the key is not pressed at present
          return DOUBLE_TAP;
    } //    if (state->count == 2)
    else
      return 6/*9*/;
}
//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////
    /*
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
    */


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
void fvim(char *key)
{
//  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
    HYPR_V;
    SEND_STRING("f");
    send_string(key);
}
/* select
void avim(char *key)
{
    HYPR_V;
    SEND_STRING("a");
    send_string(key);
}
*/ 
void dvim(char *key)
{
    HYPR_V;
    SEND_STRING("d");
    send_string(key);
}

void cvim(char *key)
{
    HYPR_V;
    SEND_STRING("c");
    send_string(key);
}

void xvim(char *key)
{
    HYPR_V;
    SEND_STRING("x");
    send_string(key);
}

void set_default_hsv(void)
{
  default_hue = rgblight_get_hue();
  default_sat = rgblight_get_sat();
  default_val = rgblight_get_val();   
}

//[FIXME]  // MAKE THIS FUNCTION SMALLER, PLEASE !!!
void get_hsv(void)
{
  uint16_t int_1 = 0;
  uint8_t  int_2 = 0, int_3 = 0;

  char str_1[4];
  char str_2[4];
  char str_3[4];

  int_1 = rgblight_get_hue();
  int_2 = rgblight_get_sat();
  int_3 = rgblight_get_val();

  itoa(int_1, str_1, 10);
  itoa(int_2, str_2, 10);
  itoa(int_3, str_3, 10);

  SEND_STRING("rgblight_get_hue(): ");
  send_string   (str_1);
  SEND_STRING(", sat: ");
  send_string   (str_2);
  SEND_STRING(", val: ");
  send_string   (str_3);
  BEEP_1;
}
//[fixme]  // make this function smaller, please !!!

void add_desired_mod(uint8_t desired_mod)
{
  add_mods     (desired_mod);
  add_weak_mods(desired_mod);
  send_keyboard_report();
}

void remove_activated_mod(uint8_t activated_mod)
{
  del_mods     (activated_mod);
  del_weak_mods(activated_mod);
  send_keyboard_report();
}
//
// [SAVING_SPACE]
// this function saves from 158 to 216 (58 bytes)
// ... instead of repeating this bunch or code into 'process_record_user' for ...
// ... SL_MEN, KA_DCK, KM_TOL, SH_STA, RT_FLO, ...
// ... we call this function into every function !!!
bool remove_control_mod(void)
{
  control_flag = get_mods()&CTRL_MODS;
  if (control_flag)
  {
    remove_activated_mod(control_flag);
    // del_mods     (control_flag);
    // del_weak_mods(control_flag);
    // send_keyboard_report();
    return true;
  }
  return false;
}
//
// [SAVING_SPACE]
// as this function is used only once, for triggering slack app,
// ... it saves from 66 to 86 (20 bytes) using it directly instead of calling a function
// void remove_shift_mod(void)
// {
//   shift_flag = get_mods()&SHFT_MODS;
//   if (shift_flag)
//   {
//     del_mods     (shift_flag);
//     del_weak_mods(shift_flag);
//     send_keyboard_report();
//   }
// }



// void my_delay(void)
// {
//   wait_ms(50);
// }

// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     remove_activated_mod(gui_flag);
//     return true;
//   }
//   return false;
// }


// old who worked fine
// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     del_mods     (gui_flag);
//     del_weak_mods(gui_flag);
//     send_keyboard_report();
//     return true;
//   }
//   return false;
// }

void callApp(char *app_initial)
{
// open Spotlight search:
      register_code (KC_LGUI);
           tap_code (KC_SPC);
    unregister_code (KC_LGUI);

// type Typinator Abbreviation for Typinator Expansion (/a/?):
    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    send_string(app_initial);

// inside Typinator Expansion it is a 0.01 seconds delay
// wait_ms(10);
// wait_ms(100);
}

// [CURIOSITY]
/*
// calling from process_record_user: callApp('a');  callApp('b'); ... instead of callApp("a"); ...

void callApp(char ascii_code)
{
  uint8_t keycode;

    tap_code(KC_CLEAR);
    wait_ms(5);
      register_code(KC_LGUI);
            tap_code(KC_SPC);
    unregister_code(KC_LGUI);
    wait_ms(5);

    keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);

    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    tap_code(keycode);
 
    register_code  (KC_ENT);
    wait_ms(20);   
    unregister_code(KC_ENT);

    // next delay is for avoiding that SpotLight remains on screen without calling our app
//  wait_ms(30);
//    register_code (KC_ENT);
//    unregister_code (KC_ENT);
}
*/

/*
void send_char(char ascii_code) {
  uint8_t keycode;
  keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);
  if (pgm_read_byte(&ascii_to_shift_lut[(uint8_t)ascii_code])) {
      register_code(KC_LSFT);
      register_code(keycode);
      unregister_code(keycode);
      unregister_code(KC_LSFT);
  } else {
      register_code(keycode);
      unregister_code(keycode);
  }
}
*/
// [curiosity]
//                                                                                      //
// [functions] [_fvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_fvim]kc_c, [_fvim]kc_x, [_fvim]kc_z   (kc_q & kc_p)  //
//                                                                                      //
// functions for accesing keybindings mapped functions                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

  capslock_is_active = !capslock_is_active;

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 

  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function


void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (capslock_is_active)
    {
      capslock_tap();
      disabled_caps_before_accent = true;
    }
} // my disable_capslock_before_accents_function

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == true)
    {
      capslock_tap();
      disabled_caps_before_accent = false;
  }
} // my enable_capslock_after_accents_function


void show_RGB_LEDs(void)  // MY SWITCH CAPSCLOCK INDICATORS ON FUNCTION
{
  uint8_t caps_rght_sta = 0;
  uint8_t caps_rght_end = 0;
  uint8_t caps_left_sta = 0;
  uint8_t caps_left_end = 0;

  uint8_t numb_rght_sta = 0;
  uint8_t numb_rght_end = 0;
  uint8_t numb_left_sta = 0;
  uint8_t numb_left_end = 0;

  uint8_t dflt_rght_sta = 0;
  uint8_t dflt_rght_end = 0;
  uint8_t dflt_left_sta = 0;
  uint8_t dflt_left_end = 0;

  if (!rgblight_config.enable) { return; }

  if (capslock_is_active)
  {
    if (whole_keyboard_as_indicator)
    {
      // RGHT = red
      caps_rght_sta = OUTER_RGHT;
      caps_rght_end = INNER_RGHT + 1;

      if (numbers_is_active) // #01
      {
        // LEFT = blue

        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

      }
      else // rgb_num = false 
      {
        // LEFT = red
        caps_left_sta = INNER_LEFT;
        caps_left_end = OUTER_LEFT + 1;
      }
    }
    else // whole_keyboard_as_indicator = false
    {
    //   // rght = red
    //   caps_rght_sta = INNER_RGHT - diff - 1;
    //   caps_rght_end = INNER_RGHT + 1;

    //   if (numbers_is_active) // #01
    //   {
    //     // left = blue
    //     numb_left_sta = INNER_LEFT;
    //     numb_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   else // rgb_num = false 
    //   {
    //     // left = red
    //     caps_left_sta = INNER_LEFT;
    //     caps_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   // rght = default color
    //   dflt_rght_sta = OUTER_RGHT;
    //   dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
    //   // left = default color
    //   dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
    //   dflt_left_end = OUTER_LEFT        + 1;
    // }

    // right_thumbs = red
       caps_rght_sta = INNER_RGHT - THUMB_LEDS - 1;
       caps_rght_end = INNER_RGHT              + 1;

       if (numbers_is_active)
       {
         // left = blue
         numb_left_sta = INNER_LEFT;
         numb_left_end = INNER_LEFT + THUMB_LEDS + 1;
       }               
       else // rgb_num = false
       {
         // left = red
         caps_left_sta = INNER_LEFT;
         caps_left_end = INNER_LEFT + THUMB_LEDS + 1;
       }
       // rght = default color
       dflt_rght_sta = OUTER_RGHT;
       dflt_rght_end = INNER_RGHT - THUMB_LEDS - 1;
       // left = default color
       dflt_left_sta = INNER_LEFT + THUMB_LEDS + 1;
       dflt_left_end = OUTER_LEFT              + 1;
    }

  }
  else // capslock_is_active = false  
  {
    if (numbers_is_active) // #01
    {
      if (whole_keyboard_as_indicator)
      {
        // RGHT = blue
        numb_rght_sta = OUTER_RGHT;
        numb_rght_end = INNER_RGHT + 1;
        // LEFT = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

/*
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT + 1;

        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;  
*/ /* 1 LED more separated from CapsLock indicator          */ /* - 2; */

/*
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;  */ /* 1 LED more separated from CapsLock or _NUMB indicator */ /* + 2;
        dflt_left_end = OUTER_LEFT        + 1;
*/
      }
      else // whole_keyboard_as_indicator = false
      {
        // // rght = blue
        // numb_rght_sta = INNER_RGHT - diff - 1;
        // numb_rght_end = INNER_RGHT + 1;
        // // left = blue
        // numb_left_sta = INNER_LEFT;
        // numb_left_end = INNER_LEFT + diff + 1; // 1;

        // // rght = default color
        // dflt_rght_sta = OUTER_RGHT;
        // dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
        // // left = default color
        // dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
        // dflt_left_end = OUTER_LEFT        + 1;

        // rght = blue
        numb_rght_sta = INNER_RGHT - THUMB_LEDS - 1;
        numb_rght_end = INNER_RGHT              + 1;
        // left = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = INNER_LEFT + THUMB_LEDS + 1;
        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - THUMB_LEDS - 1;
        // left = default color
        dflt_left_sta = INNER_LEFT + THUMB_LEDS + 1;
        dflt_left_end = OUTER_LEFT              + 1;
      }

    }
    else // numbers_is_active = false & capslock_is_active = false as well !!!
    {
      // LEFT = default color
      dflt_rght_sta = OUTER_RGHT;
      dflt_rght_end = INNER_RGHT + 1;

      
      // RGHT = default color
      dflt_left_sta = INNER_LEFT;
      dflt_left_end = OUTER_LEFT + 1;
    }
  }
      LED_TYPE tmp_led_range;
      sethsv(COLOR_CAPS, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_rght_sta, caps_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_left_sta, caps_left_end);

      sethsv(COLOR_NUMB, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_rght_sta, numb_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_left_sta, numb_left_end);

      sethsv(default_hue, default_sat, default_val, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_rght_sta, dflt_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_left_sta, dflt_left_end);

  rgblight_set();

} // my switch capslock indicators on function
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//                                                                                      //
// capslock complementary functions                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
// //                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
// //                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
// //                                                                                      //
// // ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// void acute_accent_function(void) {
//   register_code(KC_LALT); register_code(KC_E);
//   unregister_code(KC_E); unregister_code(KC_LALT);
// }
// void diaeresis_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_U);
//     unregister_code(KC_U);  unregister_code(KC_LALT);
// }
// void circumflex_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_I);
//     unregister_code(KC_I);  unregister_code(KC_LALT);
// }
// void grave_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_GRAVE);
//     unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
// }
// void tilde_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_N);
//     unregister_code(KC_N);  unregister_code(KC_LALT);
// }
// //                                                                                      //
// // [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
// //                    [f(circu)], [f(grave)], [f(diaer)]                                //
// //                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
// //                                                                                      //
// // accents complementary functions                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT], [_NUMB]                                                         //
//             [_DFLT]KC_L_THUMB3,  [_DFLT]KC_L_THUMB5, [_NUMB]KC_S                     //
//                                                                                      //
// FUNCTIONS FOR ACTIVATING RGB RED LIGHTS ...                                          //
// ... WHEN BACKSPACE OR DELETE IS PRESSED IN A COMBO ( LT(), CTL_T() )                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [DELETE]
/*
void rgb_bspc_or_del_pressed(void)
{
  rgblight_sethsv_noeeprom(HSV_MY_RED);
  set_default_hsv();
}
//
void rgb_bspc_or_del_released(void)
{
  show_RGB_LEDs();
}
*/
// [delete]
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [functions] [_dflt], [_numb]                                                         //
//             [_dflt]kc_l_thumb3,  [_dflt]kc_l_thumb5, [_numb]kc_s                     //
//                                                                                      //
// functions for activating rgb red lights ...                                          //
// ... when backspace or delete is pressed in a combo ( lt(), ctl_t() )                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] KC_R (TH_R4_POWR_RGBL)process_record_user                        //
// [FUNCTIONS] [_RGBL] KC_O (SAV_COL)process_record_user                                //
// [FUNCTIONS] [_RGBL] KC_L (GET_HSV)process_record_user                                //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void flashing_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2)
//RGB_MY_WHITE
//RGB_MY_RED
{
  for (uint8_t i = 0; i < times; i++)
  {
    rgblight_setrgb(r1, g1, b1);
    // _delay_ms (50);
    wait_ms(50);

    rgblight_setrgb(r2, g2, b2);
    wait_ms(100);
  }
}
//                                                                                      //
// [functions] [_powr] kc_r   (my_reset)process_record_user                             //
// [functions] [_dflt] l_th_4 (th_r4_powr_rgbl)process_record_user                   //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] KC_R (TH_R4_POWR_RGBL)process_record_user                     //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

  BEEP_1;
  // _delay_ms (1);
  wait_ms(1);
  rgblight_enable_noeeprom();
  wait_ms(1);

  flashing_LEDs(5, RGB_MY_WHITE, RGB_MY_RED);
  reset_keyboard();
}
//                                                                                      //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 (th_r4_powr_rgbl)                                      //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_V (SHUT_S)                                                    //
//             [_POWR] KC_U (VOL_1)                                                     //
//                                                                                      //
//             [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL 1 FUNCTION (USED ALONE AND INTO SHUT DOWN AS WELL)               //
// VOLUME SET TO LEVEL 8 FUNCTION                                                       //
// BRIGHT SET TO LEVEL 1 FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void volumeSetToLevel(uint8_t max_volume) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC__VOLDOWN);
    }
  for (uint8_t i = 0; i < max_volume; i++)
    {
      tap_code(KC__VOLUP);
    }
}

void brightSetToLevel(uint8_t max_bright) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC_SLCK);
    }
  for (uint8_t i = 0; i < max_bright; i++)
    {
      tap_code(KC_PAUS);
    }
}
// [functions] [_powr] kc_v (shut_s)                                                    //
//             [_powr] kc_u (vol_1)                                                     //
//                                                                                      //
//             [_powr] kc_y (vol_8)                                                     //
//             [_powr] kc_m (bright_1)                                                  //
//                                                                                      //
// volume set to level 1 function (used alone and into shut down as well)               //
// volume set to level 8 function                                                       //
// bright set to level 1 function                                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  m y    f u n c t i o n s                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
// DOUBLE FUNCTION TAP DANCE PERSONALIZATION SECTION START                              //
//                                                                                      //
//                                                                                      //
// MY OWN TAP_DANCE HARVEST                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ A L P H ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] THUMB_L1 (DVIM_Del)                                               //
//                                                                                      //
//  D V I M    L A Y E R    /    D E L E T E                                            //
//                                                                                      //
//  THUMB_L1:  @ [_DVIM] LAYER                                                          //
//             *  DELETE,                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'DVIM_Del' tap dance.
static tap DVIM_Del_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_Del_f_always(qk_tap_dance_state_t *state, void *user_data) {
  rgblight_sethsv_noeeprom(COLOR_DVIM);
}

void DVIM_Del_finished (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_Del_tap_state.state = cur_dance(state);
  switch (DVIM_Del_tap_state.state) {

    case   SINGLE_TAP:  register_code(KC_DEL); break;

    case   SINGLE_HOLD: layer_on(_DVIM);
/*
    case ALT_plus_HOLD: if (triggered_gui())
                          multi_apps = true;
                        layer_on(_APPS);          break;
    case GUI_plus_HOLD:
*/
  }
}

void DVIM_Del_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DVIM_Del_tap_state.state) {

    case   SINGLE_TAP:  unregister_code(KC_DEL); break;

    case   SINGLE_HOLD: layer_off(_DVIM);
/*
    case ALT_plus_HOLD: layer_off(_APPS);         break;
    case GUI_plus_HOLD:
*/
  }
  show_RGB_LEDs();
  DVIM_Del_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_dflt] thumb_l1 (dvim_del)                                               //
//                                                                                      //
//  d v i m    l a y e r    /    b a c k s p a c e                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//




//////////////////////////////////////////////////////////////////////////////////////////


//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ N U M B ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*
// [GHERKIN]
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_N (SLNUMB)                                                     //
//                                                                                      //
//  S L A S H  -  N U M B E R S   L A Y E R   O F F                                     //
//                                                                                      //
//  KC_N:  * KC_KP_SLASH = KC_PSLS,                                                     //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'B' key under [_NUMB] layer, ('B' is the [_NUMB] trigger)...
// ... if we hold down 'N' key and then release 'B' key first ...
// ... when we release 'N' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... double holding 'B' or 'N' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SLNUMB' tap dance.
static tap SLNUMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNUMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNUMB_tap_state.state = cur_dance(state);
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    register_code(KC_PSLS); break;

    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;

    case DOUBLE_HOLD:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      
  }
}

void SLNUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_PSLS); break;

    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
                        layer_on(_NUMB);
                        break;

    case DOUBLE_HOLD:   break;
  }
  SLNUMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] kc_n (slnumb)                                                     //
//                                                                                      //
//  s l a s h  -  n u m b e r s   l a y e r   o f f                                     //
//////////////////////////////////////////////////////////////////////////////////////////
[gherkin]
*/
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] TH_R3 (SETNMB)                                                    //
//                                                                                      //
//  S E T   N U M B E R S   L A Y E R   U P    -    N U M B E R S   L A Y E R   O F F   //
//                                                                                      //
//  TH_R1: * NUMBERS LAYER OFF,                                                         //
//         @ SET NUMBERS LAYER UP                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'TH_R3' key under [_NUMB] layer, ('TH_L3' is the [_NUMB] trigger)...
// ... if we hold down 'TH_R3' key and then release 'TH_L3' key first ...
// ... when we release 'TH_R3' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... simple tapping 'TH_R3' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SETNMB' tap dance.
static tap SETNMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SETNMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SETNMB_tap_state.state = cur_dance(state);
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;
  }
}

void SETNMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:    break;

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
                        layer_on(_NUMB);
                        break;
  }
  SETNMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] th_r3 (setnmb)                                                    //
//                                                                                      //
//  s e t   n u m b e r s   l a y e r   u p    -    n u m b e r s   l a y e r   o f f   //
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ n u m b ]  l a y e r                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////















//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_U (FVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_uU' tap dance.
static tap FVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_uU_tap_state.state = cur_dance(state);
  switch (FVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
                          unregister_code(KC_UP);   unregister_code(KC_LALT); break;
  }
  FVIM_uU_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_u (fvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_P (FVIM_pP)                                                  //
//                                                                                      //
//  E N D   O F   L I N E  /  P A R A G R A P H                                         //
//                                                                                      //
//  KC_P:  * END OF LINE                                                                //
//        ** END OF PARAGRAPH                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_pP' tap dance.
static tap FVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_pP_tap_state.state = cur_dance(state);
  switch (FVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
  }
  FVIM_pP_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_p (fvim_pp)                                                  //
//                                                                                      //
//  e n d   o f   l i n e  /  p a r a g r a p h                                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_U (DVIM_uU)                                                  //
//                                                                                      //
//  D E L E T E   T O   B E G I N N I N G   O F   L I N E   /   P A R A G R A P H       //
//                                                                                      //
//  KC_U:  * DELETE TO BEGINNING OF LINE                                                //
//        ** DELETE TO BEGINNING OF PARAGRAPH                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_uU' tap dance.
static tap DVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_uU_tap_state.state = cur_dance(state);
  switch (DVIM_uU_tap_state.state) {
    case SINGLE_TAP:        dvim("u"); break;
    case DOUBLE_TAP:        dvim("U"); break;
  }
  DVIM_uU_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _dvim ] kc_u (dvim_uu)                                                  //
//                                                                                      //
//  d e l e t e   t o   b e g i n n i n g   o f   l i n e   /   p a r a g r a p h       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_P (DVIM_pP)                                                  //
//                                                                                      //
//  D E L E T E   T O   E N D   O F   L I N E   /   E N D   O F   P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * DELETE TO END OF LINE                                                      //
//        ** DELETE TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_pP' tap dance.
static tap DVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_pP_tap_state.state = cur_dance(state);
  switch (DVIM_pP_tap_state.state) {
    case SINGLE_TAP:        dvim("p"); break;
    case DOUBLE_TAP:        dvim("P"); break;
  }
  DVIM_pP_tap_state.state = 0;
};
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_U (AVIM_uU)                                                  //
//                                                                                      //
//  S E L E C T   T O   B E G I N N I N G   O F   L I N E    /    P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * SELECT TO BEGINING OF LINE                                                 //
//        ** SELECT TO BEGINING OF PARAGRAPH                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_uU' tap dance.
/*
static tap AVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_uU_tap_state.state = cur_dance(state);
  switch (AVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_LEFT);
                          
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI);
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_UP);
                         
                         unregister_code(KC_UP); unregister_code(KC_LALT);
                         unregister_code(KC_LSFT);
                            break;
  }
  AVIM_uU_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_u (avim_uu)                                                  //
//                                                                                      //
//  s e l e c t   t o   b e g i n n i n g   o f   l i n e    /    p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_P (AVIM_pP)                                                  //
//                                                                                      //
//  S E L E C T   T O   E N D   O F   L I N E    /    E N D   O F   P A R A G R A P H   //
//                                                                                      //
//  KC_P:  * SELECT TO END OF LINE                                                      //
//        ** SELECT TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_pP' tap dance.
/*
static tap AVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_pP_tap_state.state = cur_dance(state);
  switch (AVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_RGHT);

                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); 
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_DOWN);
                          
                          unregister_code(KC_DOWN); unregister_code(KC_LALT);
                          unregister_code(KC_LSFT);
                            break;
  }
  AVIM_pP_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_p (avim_pp)                                                  //
//                                                                                      //
//  s e l e c t   t o   e n d   o f   l i n e    /    e n d   o f   p a r a g r a p h   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
//              t a p   d a n c e   f o r  -  v   i   m  -  l a y e r s                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ P O W R ]    L A Y E R                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_A (TG_IND)                                                     //
//                                                                                      //
//  T O G G L E    W H O L E    I N D I C A T O R S   /   R I G H T    S H I F T        //
//                                                                                      //
//  TOGGLE 'WHOLE RGB KEYBOARD' / 'THUMBS RGB' AS INDICATOR FOR 'CAPSLOCK', [_NUMB],... //
//                                                                                      //
//  KC_A:   *  TOGGLE 'WHOLE RGB KEYBOARD' / 'THUMBS RGB' AS INDICATOR                  //
//          @  RIGHT SHIFT                                                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'TG_IND' tap dance.
/*
static tap TG_IND_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TG_IND_finished (qk_tap_dance_state_t *state, void *user_data) {
  TG_IND_tap_state.state = cur_dance(state);
  switch (TG_IND_tap_state.state) {

    case SINGLE_TAP:  if (rgblight_config.enable && (capslock_is_active || numbers_is_active)) // #01
                      {
                        if (whole_keyboard_as_indicator)
                        {
                          diff = prev_diff;
                        }
                        else
                        {
                          prev_diff = diff;
                          diff = 2;
                        }
                        whole_keyboard_as_indicator = !whole_keyboard_as_indicator;
                        show_RGB_LEDs();                        
                      }
                      break;
                            
    case SINGLE_HOLD: register_code(KC_RSFT); break;

  }
}

void TG_IND_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TG_IND_tap_state.state) {

    case SINGLE_TAP:  
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RSFT); break;
                            
  }
  TG_IND_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [_powr] kc_a (tg_ind)                                                     //
//                                                                                      //
//  t o g g l e    w h o l e    i n d i c a t o r s   /   r i g h t    s h i f t        //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_W (LCKLOG)                                                     //
//                                                                                      //
//  L O G O U T    /    L O C K    S C R E E N                                          //
//                                                                                      //
//  KC_W: *  LOCK USER SCREEN                                                           //
//        @  LOGOUT CURRENT USER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*
void LCKLOG_function (qk_tap_dance_state_t *state, void *user_data) {
  switch (cur_dance(state)) {
    case SINGLE_TAP://LOCK SCREEN (ask for pasword screen)
                      register_code(KC_LCTL); register_code(KC_LGUI);
                      tap_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      reset_tap_dance(state); break;
                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      tap_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      reset_tap_dance(state); break;
  }
}
*/
//                                                                                      //
// [tapdance] [_powr] kc_w (LCKLOG)                                                     //
//                                                                                      //
//  l o g o u t    /    l o c k    s c r e e n                                          //
//////////////////////////////////////////////////////////////////////////////////////////


//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ p o w r ]    l a y e r                  //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// my own tap_dance harvest                                                             //
//                                                                                      //
// DOUBLE FUNCTION TAP DANCE PERSONALIZATION SECTION END                                //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//               T A P    D A N C E    D E C L A R A T I O N S                          //
//                                                                                      //
//  THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION                          //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//


qk_tap_dance_action_t tap_dance_actions[] = {
// [INFO]
// ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, ...
//   ... or moves to layer. (this is similar to the keycode: 'TO' layer)
// [info]
//
// [EXAMPLES]
// [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
//
// [A_CAPS]       = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// [examples]
//
// Other declarations would go here, separated by commas, if you have them
//

// [_DFLT] LAYER
   [DVIM_Del]=ACTION_TAP_DANCE_FN_ADVANCED_TIME(DVIM_Del_f_always, DVIM_Del_finished, DVIM_Del_reset, 100)
// [_dflt] layer

// [_NUMB] LAYER
  ,[SETNMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SETNMB_finished, SETNMB_reset)
//
// [GHERKIN]
// ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
// [gherkin]
//
// [UNDERSTANDING]
// TIME  50: is too dificult to typing   so fast !!!
// TIME 100 is a right time for typing very fast !!!
// [understanding]
//
// [_numb] layer


// [_POWR] LAYER
// ,[TG_IND]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TG_IND_finished, TG_IND_reset)

// ,[LCKLOG]   = ACTION_TAP_DANCE_FN(LCKLOG_function)
// [_powr] layer



// [_FVIM] LAYER
  ,[FVIM_uU] = ACTION_TAP_DANCE_FN(FVIM_uU_function)
  ,[FVIM_pP] = ACTION_TAP_DANCE_FN(FVIM_pP_function)
// [_fvim] layer

// [_DVIM] LAYER
  ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
  ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer

/*
// [_AVIM] LAYER
// ,[AVIM_uU] = ACTION_TAP_DANCE_FN(AVIM_uU_function)
// ,[AVIM_pP] = ACTION_TAP_DANCE_FN(AVIM_pP_function)
// [_avim] layer
*/
};
//                                                                                      //
//               t a p    d a n c e    d e c l a r a t i o n s                          //
//                                                                                      //
//  this section has to be at the end of the tap dance section                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


// CUSTOMIZED MINI DACTTYL from  

#define LAYOUT_mini_dactyl_base( \
  K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
  K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_wrapper( \
    K01, K02, K03, K04, K05,                                                 K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15,                                                 K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25,                                                 K26, K27, K28, K29, K2A, \
                                _DFLT_LTHMB_ROW1_,     _DFLT_RTHMB_ROW1_, \
                                            KC_NO,      KC_NO,            \
                                _DFLT_LTHMB_ROW2_,     _DFLT_RTHMB_ROW2_  \
    )

#define LAYOUT_mini_dactyl_base_wrapper(...)       LAYOUT_mini_dactyl_base(__VA_ARGS__)


/*
#define LAYOUT_kyria_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_wrapper( \
      KC_ESC,  K01,     K02,     K03,     K04,     K05,                                             K06,     K07,     K08,     K09,     K0A,     KC_MINS, \
   LALT_T(KC_TAB), K11, K12,     K13,     K14,     K15,                                             K16,     K17,     K18,     K19,     K1A, RALT_T(KC_QUOT), \
      OS_LSFT, CTL_T(K21), K22,  K23,     K24,     K25,     KC_NO,   KC_NO,  MEH(KC_MINS), KC_NO,   K26,     K27,     K28,     K29, RCTL_T(K2A), OS_RSFT, \
                                 KC_MUTE, OS_LALT, KC_GRV,  KC_SPC,  BK_LWER,     DL_RAIS, KC_ENT,  OS_RGUI, UC(0x03A8), UC(0x2E2E) \
    )
// Re-pass though to allow templates to be used
#define LAYOUT_kyria_base_wrapper(...)       LAYOUT_kyria_base(__VA_ARGS__)
*/  


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           L A Y E R S       L A Y O U T S                            //
//                                                                                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/*
  *  LEGENDS for all KEYMAPS:
  *   * get a keystroke through single tap
  *  ** get a keystroke through double tap
  *   @ access a layer  through single hold (or modifier)   
  *  @@ access a layer  through double hold (or clean all layers)
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////###

// #if defined(ALPHAS_OVERCHARGED)

/* Keymap _DFLT 0: Default layer = _DFLT layer
// CMD + Q  =  [SINGLE _APPS LAYER]
// CMD + P  =  [SINGLE _APPS LAYER]
  * ,--------------------------------------------.  ,--------------------------------------------.
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Q   |    W   |    E   |    R   |    T   |  |    Y   |    U   |    I   |    O   |    P   |
  * |⌘[_1APP]|        |        |        |        |  |        |        |        |        |⌘[_1APP]|
  * |@[_APPS]|@[_POWR]|@[_RGBL]|@[_FUNC]|@[_SYMB]|  |        |@[_FUNC]|@[_RGBL]|@[_POWR]|@[_APPS]|
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   |  |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |  @LSft |  @LCtl |  @LAlt |  @LGui |@[_ACCN]|  |@[_ACCN]|  @LGui |  @LAlt |  @LCtl |  @LSft |
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   |  |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |@[_DALY]|@[_DVIM]|@[_MOUS]|@[_FVIM]|@[_NUMB]|  |@[_SYMB]|@[_FVIM]|        |        |@[_DALY]|
  * '--------------------------------------------'  '--------------------------------------------'
 *                            ,-----------------.   ,-----------------.
 *                            |        |alt:RGBL|   |alt:RGBL|ONEshoot|
 *                            |        |        |   |        |  layer |
 *                            |        |        |   |        |        |
 *                            |  _MOUS |  _FUNC |   |  _POWR |  _ACCN |
 *                   ,--------+--------+--------|   |--------+--------|--------.
 *                   | Delete |        |        |   |alt:NUMB|alt:FVIM|alt:MOUS|
 *                   |        |        |        |   |        |        |        |
 *                   |        |        |        |   |        |        |        |
 *                   |  _DVIM |  _FVIM |  _NUMB |   |  _APPS |  _SYMB |  _DALY |
 *                   '--------------------------'   '--------------------------'
  *                            ,-----------------.  ,-----------------.
  *                            |        |        |  |        |        |
  *                            |        |        |  |        |        |
  *                            |        |        |  |        |        |
  *                            |        |        |  |        |        |
  *                   ,--------+--------+--------|  |--------+--------|--------.
  *                   |        |        |        |  |        |        |        |
  *                   |        |        |        |  |        |        |        |
  *                   |        |        |        |  |        |        |        |
  *                   |        |        |        |  |        |        |        |
  *                   '--------------------------'  '--------------------------' 
*/



// [_DFLT] = KEYMAP(  // layer 0 : default layer
// // [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// // ###
// //////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// //,--------------------------------------------------------------------------------------.  ,------------------------------------------------------------------------------------------.
//     LT(_APPS, KC_Q), LT(_POWR, KC_W), LT(_RGBL, KC_E), LT(_FUNC, KC_R), LT(_SYMB, KC_T),                 KC_Y, LT(_FUNC, KC_U),   LT(_RGBL, KC_I), LT(_POWR, KC_O),   LT(_APPS, KC_P),
// //|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
//        LSFT_T(KC_A),     CTL_T(KC_S),     ALT_T(KC_D),     GUI_T(KC_F), LT(_ACCN, KC_G),      LT(_ACCN, KC_H),     GUI_T(KC_J),       ALT_T(KC_K),     CTL_T(KC_L),    LSFT_T(KC_SPC),
// //|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
//     LT(_DALY, KC_Z), LT(_DVIM, KC_X), LT(_MOUS, KC_C), LT(_FVIM, KC_V), LT(_NUMB, KC_B),      LT(_SYMB, KC_N), LT(_FVIM, KC_M),            KC_ESC,         KC_BSPC, LT(_DALY, KC_ENT),
// //'--------------------------------------------------------------------------------------'  '------------------------------------------------------------------------------------------'

// //                        ,----------------------------------+---------------------------,   ,------------------+-----------,
//                                                LAUNCHING_APPS,                  MO(_MOUS),             MO(_POWR), OSL(_ACCN),
// //                        |----------------------------------+---------------------------|   |------------------+-----------|
//                                                                                   XXXXXXX,               XXXXXXX,
// //                                                           |---------------------------|   |------------------|
//                           TD(DVIM_Del),             MO(_FVIM),                  MO(_NUMB),             MO(_NUMB),  MO(_SYMB),   MO(_DALY)         
// //                                                                               THUMB_R2_NUMB_DVIM_FVIM_MOUS_SP, LT(_SYMB, KC_ENT)
// //             '----------+----------------------------------+---------------------------.   .------------------+-----------+--------------'
// //////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// // ###
// ),
// END OF _DFLT 0
/////////////////////////////////////////////////////////////////////////////////////////////////////###



// # elif defined(SINGLE_ALPHAS)

/* Keymap _DFLT 0: Default layer = _DFLT layer
 * ,--------------------------------------------.  ,--------------------------------------------.
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |  |    Y   |    U   |    I   |    O   |    P   |
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |  |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |  @LSft |  @LCtl |  @LAlt |  @LGui |        |  |        |  @LGui |  @LAlt |  @LCtl |  @LSft |
 * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |  |    N   |    M   | Escape |Bckspace|  Enter |
 * |        |        |        |        |        |  |        |        |        |        |        |
 * |        |        |        |        |        |  |        |        |        |        |        |
 * '--------------------------------------------'  '--------------------------------------------'
 *                            ,-----------------.  ,-----------------.
 *                            |        |alt:RGBL|  |alt:RGBL|ONEshoot|
 *                            |        |        |  |        |  layer |
 *                            |        |        |  |        |        |
 *                            |  _MOUS |  _FUNC |  |  _POWR |  _ACCN |
 *                   ,--------+--------+--------|  |--------+--------|--------.
 *                   | Delete |        |        |  |alt:NUMB|alt:FVIM|alt:MOUS|
 *                   |        |        |        |  |        |        |        |
 *                   |        |        |        |  |        |        |        |
 *                   |  _DVIM |  _FVIM |  _NUMB |  |  _APPS |  _SYMB |  _DALY |
 *                   '--------------------------'  '--------------------------'
 *
 */


[_DFLT] = LAYOUT_mini_dactyl_base_wrapper(  // layer 0 : default layer


             KC_1,          KC_2,           KC_3,           KC_4,    KC_5,         KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
//|--------------+--------------+---------------+---------------+----------|  |--------+------+------+------+----------|
   LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_COMM),LSFT_T(KC_PDOT),  KC_DLR,      KC_MINS,  KC_4,  KC_5,  KC_6, KC_PLUS,
//|--------------+--------------+---------------+---------------+----------|  |--------+------+------+------+----------|
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_PEQL, KC_PERC,      KC_PSLS,  KC_1,  KC_2,  KC_3, KC_ASTR



/*
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
//,------------------------------------.  ,------------------------------------.
          _M_CORE_DFLT_L1_,     _M_CORE_DFLT_R1_,
//|------------------------------------|  |------------------------------------|
          _M_CORE_DFLT_L2_,     _M_CORE_DFLT_R2_,
//|------------------------------------|  |------------------------------------|
          _M_CORE_DFLT_L3_,     _M_CORE_DFLT_R3_
//'------------------------------------'  '------------------------------------'
*/

),
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _DFLT 0
/////////////////////////////////////////////////////////////////////////////////////////////////////###

// #endif




//
/* Keymap _ACCN 01: _ACCN layer
 * ,--------------------------------------------.        ,--------------------------------------------.
 * | *XXXXX | *XXXXX |    É   | *XXXXX | *XXXXX |        | *XXXXX |    Ú   |    Í   |    Ó   | *XXXXX |
 * |        |        |  (éëèê)|        |        |        |        | (úüùû) | (íïìî) | (óöòô) |        |
 * |        |        | (ÉËÈÊ) |        |        |        |        | (ÚÜÙÛ) | (ÍÏÌÎ) | (ÓÖÒÔ) |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |    Á   | *XXXXX | *XXXXX | *XXXXX | @@@@@@ |        | @@@@@@ | *XXXXX | *XXXXX | *XXXXX | *XXXXX |
 * | (áäàâ) | @CIRCUM| @GRAVE | @DIAE- | @@@@@@ |        | @@@@@@ | @DIAE- | @GRAVE | @CIRCUM|        |
 * | (ÁÄÀÂ) | -MFLEX |        | RESIS  | @@@@@@ |        | @@@@@@ | RESIS  |        |  -FLEX |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | *XXXXX | *XXXXX | *XXXXX | *XXXXX | *XXXXX |        |        | *XXXXX | *XXXXX | *XXXXX | *XXXXX |
 * |        |        |        |        |        |        |   Ñ ñ  |        |        |        |        |
 * |  @RSft |  @RCtl |  @RAlt | @RGui  |        |        |        |  @RGui |  @RAli |  @RCtl |  @RSft |
 * '--------------------------------------------'        '--------------------------------------------'
*/
// _ACCN accent layer 01
[_ACCN] = LAYOUT_wrapper(
           ____ACCN_L1____,                                                            ____ACCN_R1____,
           ____ACCN_L2____,                                                            ____ACCN_R2____,
           ____ACCN_L3____,                                                            ____ACCN_R3____,
                             _ACCN_LEFT_THUMB_ROW1_,          _ACCN_RGHT_THUMB_ROW1_,
                                             KC_NO ,           KC_NO,
                             _ACCN_LEFT_THUMB_ROW2_,          _ACCN_RGHT_THUMB_ROW2_
),
// END OF _ACCN 01
/////////////////////////////////////////////////////////////////////////////////////////////////////##



/* Keymap _NUMB 02: numbers layer
* ,----------------------------------.  ,----------------------------------.
* |      |      |      |      |      |  |      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  |  |   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* | SPACE|DELETE|   .  |   ,  |      |  |      |      |      |      |      |
* |      |      |      |      |   $  |  |   -  |   4  |   5  |   6  |   +  |
* | LSft | LCtl | LAlt | LGui |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |      |      |@@@@@@|  |      |      |      |      |      |
* | ENTER|BCKSPC|  TAB |   =  |   %  |  |   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |@@@@@@|  |      |      |      |      |      |
* '----------------------------------'  '----------------------------------'
*/
// ###
// _NUMB layer 02
[_NUMB] = LAYOUT_wrapper(  // layer 02 : numbers layer
           _S_CORE_NUMB_L1_,                                                          _S_CORE_NUMB_R1_,
           _S_CORE_NUMB_L2_,                                                          _S_CORE_NUMB_R2_,
           _S_CORE_NUMB_L3_,                                                          _S_CORE_NUMB_R3_,
                                   _NUMB_LTHMB_ROW1_,        _NUMB_RTHMB_ROW1_, // _ACCN_RGHT_THUMB_ROW1_,
                                              KC_NO,          KC_NO,
                                   _NUMB_LTHMB_ROW2_,        _NUMB_RTHMB_ROW2_ // TD(SETNMB), MO(_SYMB),  _______
),



/*
// ###
// ###Following keymap works properly:
// ###
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
[_NUMB] = LAYOUT_mini_dactyl_base_wrapper(  // layer 02 : numbers layer
//,------------------------------------------------------------------------.  ,----------------------------------------.
             KC_1,          KC_2,           KC_3,           KC_4,    KC_5,         KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
//|--------------+--------------+---------------+---------------+----------|  |--------+------+------+------+----------|
   LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_COMM),LSFT_T(KC_PDOT),  KC_DLR,      KC_MINS,  KC_4,  KC_5,  KC_6, KC_PLUS,
//|--------------+--------------+---------------+---------------+----------|  |--------+------+------+------+----------|
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_PEQL, KC_PERC,      KC_PSLS,  KC_1,  KC_2,  KC_3, KC_ASTR,
//,------------------------------------------------------------------------.  ,----------------------------------------.
//                               ,---------+----------,  ,-----------+----------,
                                    _______,   _______,     MO(_POWR),  EURO,
//                               |---------+----------|  |-----------+----------|
                                               _______,       _______,
//                                         |----------|  |-----------|
                          _______,  _______,   _______,    TD(SETNMB), MO(_SYMB),  _______
//                      '--------+---------+----------.  .-----------+--------+----------'
),
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// END OF _NUMB 02
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/////////////////////////////////////////////////////////////////////////////////////////////////////###
// ###
*/



/* Keymap _FVIM 03: _FVIM layer
 * ,--------------------------------------------.  ,----------------------------------.
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |        |        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |        |        |  |Prgrph| Begin| Word | Word |End Of|
 * |        |        |        |        |        |  |  Up  |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |        |        |  |Center|      |      |      |      |
 * |        |        |        |        |        |  |LineIn| LEFT |  UP  | DOWN | RIGHT|
 * |        |        |        |        |        |  | View |      |      |      |      |
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |@@@@@@@@|        |  |      |      |      |      |      |
 * |        |        |        |@@@@@@@@|        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |@@@@@@@@|        |  |Prgrph|      | Page | Page |      |
 * |        |@[_XVIM]|@[_CVIM]|@@@@@@@@|        |  | Down | HOME |  UP  | DOWN |  END |
 * '--------------------------------------------'  '----------------------------------'
*/
// _FVIM layer 03
[_FVIM] = KEYMAP(  // layer 03 : _FVIM layer
// ###
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
//,------------------------------------------------------.  ,------------------------------------------------------------------.
      KC_RCTL,   KC_RALT,   KC_RGUI,   KC_RSFT, XXXXXXX,        C(G(KC_UP)), TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP),
//|----------+----------|----------+----------+----------|  |--------------+------------+-----------+-----------+--------------|
      KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT, XXXXXXX,             FVIM_H,     KC_LEFT,      KC_UP,    KC_DOWN,     KC_RGHT,
//|----------+----------|----------+----------+----------|  |--------------+------------+-----------+-----------+--------------|
      KC_LEFT,     KC_UP,   KC_DOWN,   KC_RGHT, XXXXXXX,      C(G(KC_DOWN)),  A(KC_HOME), A(KC_PGUP), A(KC_PGDN),   A(KC_END),    
//'------------------------------------------------------'  '------------------------------------------------------------------'
//                                    ,--------+---------,  ,--------+----------,
                                        _______, _______,   MO(_POWR), _______,
//                                    |--------+---------|  |--------+----------|
                                                 _______,     _______,
//                                             |---------|  |---------|
                               _______, _______, _______,     _______, MO(_CVIM),  _______
//                           '--------+--------+---------.  .--------+----------+----------'
),
/*
//                               ,---------+----------,  ,-----------+----------,
                                   _______, _______,         _______, _______,
//                               |---------+----------|  |-----------+----------|
                                             _______,         _______,
//                                         |----------|  |-----------|
                          _______,  _______, _______,      _______, _______, _______
//                      '--------+---------+----------.  .-----------+--------+----------'
),
//    XXXXXXX, MO(_XVIM), MO(_CVIM), MO(_FVIM), XXXXXXX,      C(G(KC_DOWN)),    FVIM_M,    FVIM_ES,    FVIM_BS,     FVIM_EN,
*/
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// MO(_XVIM),MO(_CVIM),MO(_FVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF _FVIM 03
/////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
/////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,------------------------------------------------------.
      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,  
//|----------+----------|----------+----------+----------|
      _______,   _______,   XXXXXXX,   XXXXXXX, XXXXXXX,  
//|----------+----------|----------+----------+----------|
      XXXXXXX, MO(_XVIM), MO(_CVIM), MO(_FVIM), XXXXXXX,  
//'------------------------------------------------------'
                  // RIGHT_HAND
                    ,-----------------------------------------------------------------------------------.
                        LCTL(LGUI(KC_UP)),   TD(FVIM_uU), LALT(KC_LEFT),   LALT(KC_RGHT),  TD(FVIM_pP),
                    |--------------------+--------------+--------------+----------------+---------------|
                                   FVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,      KC_RGHT,
                    |--------------------+--------------+--------------+----------------+---------------|
                      LCTL(LGUI(KC_DOWN)), LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END) ),
                    '-----------------------------------------------------------------------------------'
/////////////////////////////////////////////////////////////////////////////////////////////////////###
*/



/* Keymap _AVIM X04X: _AVIM layer  // select VIM layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |Select|Select|Select|Select|Select|
 * |      |      |      |      |      |  |Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      |  | Above|Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |Select|Select|Select|Select|
 * |@@@@@@|      |      |      |      |  |      | Char | Line | Line | Char |
 * |@@@@@@|      |      |      |      |  |      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  |Select|Select|Select|Select|Select|
 * |      |      |      |@@@@@@|      |  |Prgrph|      | Page | Page |      |
 * |      |      |      |@@@@@@|      |  | Below| HOME |  UP  | DOWN |  END |
 * '----------------------------------'  '----------------------------------'
*/
// _AVIM layer X04X
/*
[_AVIM] = KEYMAP(  // layer X03X : _AVIM layer  // select VIM layer
// ###
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
//,----------------------------------------------.  ,----------------------------------------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       AVIM_Y,   TD(AVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(AVIM_pP),
//|--------+--------+--------+--------+----------|  |--------+--------------+--------------------+--------------------+----------------|
    _______, _______, _______, _______, XXXXXXX,      XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT),
//|--------+--------+--------+--------+----------|  |--------+--------------+--------------------+--------------------+----------------|
    _______, _______, _______, _______, XXXXXXX,       AVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
//'----------------------------------------------'  '----------------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _AVIM X04X  // AVIM_H is empty
////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  
//|--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,  
//|--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,  
//'----------------------------------------------'

                                     // RIGHT_HAND
                     ,----------------------------------------------------------------------------------.
                        AVIM_Y,   TD(AVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(AVIM_pP),
                     |--------+--------------+--------------------+--------------------+----------------|
                       XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT),
                     |--------+--------------+--------------------+--------------------+----------------|
                        AVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
                     '----------------------------------------------------------------------------------'
/////////////////////////////////////////////////////////////////////////////////////////////////////###
*/

/* Keymap _CVIM 04: _CVIM layer  // power edition layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |Insert| Copy |Duplct| Copy |Insert|
 * |      |      |      |      |      |  | line | prev |currnt| next | line |
 * |      |      |      |      |      |  |abvePr|prgrph|prBelw|prgrph|belwPr|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      | Upper| Lower| Capi |      |
 * |      |      |      |      |      |  |Outdnt| case | case |talize|Indent|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  | Copy | Copy | Copy | Copy | Copy |
 * |      |      |@@@@@@|@@@@@@|      |  |Chrctr| Word | Line |prgrph|  All |
 * |      |      |@@@@@@|@@@@@@|      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// // _CVIM layer 04
// [_CVIM] = KEYMAP(  // layer 04 : _CVIM layer  // power edition VIM layer
// /////////////////////////////////////////////////////////////////////////////////////////////////////###
// //,----------------------------------------------.        ,---------------------------------------------.
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             CVIM_Y, CVIM_U,  CVIM_I,  CVIM_O,  CVIM_P,
// //|--------+--------+--------+--------+----------|        |--------+-------+--------+--------+----------|
//     _______, _______, _______, _______, XXXXXXX,            OUTDNT, CVIM_J,  CVIM_K,  CVIM_L, CVIM_SP,
// //|--------+--------+--------+--------+----------|        |--------+-------+--------+--------+----------|
//     _______, _______, _______, _______, XXXXXXX,             CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN,
// //'----------------------------------------------'        '---------------------------------------------'
// //                            ,--------+---------,        ,--------+----------,
//                                 _______, _______,           _______, _______,
// //                            |--------+---------|        |--------+----------|
//                                          _______,           _______,
// //                                     |---------|        |---------|
//                        _______, _______, _______,           _______, _______, _______
// //                   '--------+--------+---------.        .--------+--------+---------'
// ),

// _CVIM layer 04
[_CVIM] = KEYMAP(  // layer 04 : _CVIM layer  // power edition VIM layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###
//,--------------------------------------------.        ,---------------------------------------------.
     XVIM_P,  XVIM_O,  XVIM_I, XVIM_U, XVIM_Y,             CVIM_Y, CVIM_U,  CVIM_I,  CVIM_O,  CVIM_P,
//|--------+--------+--------+-------+---------|        |--------+-------+--------+--------+----------|
    XVIM_SP,  XVIM_L,  XVIM_K, XVIM_J, XVIM_H,             OUTDNT, CVIM_J,  CVIM_K,  CVIM_L, CVIM_SP,
//|--------+--------+--------+-------+---------|        |--------+-------+--------+--------+----------|
    XVIM_EN, XVIM_BS, XVIM_ES, XVIM_M, XVIM_N,             CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN,
//'--------------------------------------------'        '---------------------------------------------'
//                            ,--------+---------,        ,--------+----------,
                                  KC_UP, _______,           _______, _______,
//                            |--------+---------|        |--------+----------|
                                         _______,           _______,
//                                     |---------|        |---------|
                       KC_LEFT, KC_DOWN, KC_RGHT,           _______, _______, _______
//                   '--------+--------+---------.        .--------+--------+---------'
),
/*
//,---------------------------------------------.        ,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------|        |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------|        |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           _______, _______, _______, _______, _______,
//'---------------------------------------------'        '----------------------------------------------'
//                           ,--------+---------,       ,--------+----------,
                               _______, _______,          _______, _______,
//                           |--------+---------|       |--------+----------|
                                        _______,          _______,
//                                    |---------|       |---------|
                      _______, _______, _______,          _______, _______, _______
//                  '--------+--------+---------.       .--------+--------+---------'
*/
// 'OUTDNT = LGUI(KC_LBRC)' implemented because 'OUTDNT:;' in 'DefaultKeyBinding.dict' doesn't work !!!
// ... it happens the same as in 'transposeWord:;' !!!
// END OF _CVIM 04
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _XVIM 05: _XVIM layer  // movement VIM layer
 * ,----------------------------------.  ,----------------------------------.       
 * |      |      |      |      |      |  |Comple| Align| Align| Align| Align|
 * |      |      |      |      |      |  |  te  |to the|in the|Justi-|to the|
 * |      |      |      |      |      |  |      | Left |Center| fied | Right|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |   5  |  20  |Transp|Transp|  60  |
 * |      |      |      |      |      |  | lines| lines| Words| Chars| lines|
 * |      |      |      |      |      |  |  Up  |  Up  |      |      |  Up  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  |   5  |  20  |Scroll|Scroll|  60  |
 * |      |@@@@@@|      |@@@@@@|      |  | lines| lines| Page | Page | lines|
 * |      |@@@@@@|      |@@@@@@|      |  | Down | Down |  Up  | Down | Down |
 * '----------------------------------'  '----------------------------------'
*/

// // _XVIM layer 05
// [_XVIM] = KEYMAP(  // layer 05 : _XVIM layer  // movement VIM layer
// /////////////////////////////////////////////////////////////////////////////////////////////////////###
// //,----------------------------------------------.         ,--------------------------------------------.
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XVIM_Y, XVIM_U,  XVIM_I,  XVIM_O,  XVIM_P,
// //|--------+--------+--------+--------+----------|         |-------+-------+--------+--------+----------|
//     _______, _______, _______, _______, XXXXXXX,             XVIM_H, XVIM_J,  XVIM_K,  XVIM_L, XVIM_SP,
// //|--------+--------+--------+--------+----------|         |-------+-------+--------+--------+----------|
//     _______, _______, _______, _______, XXXXXXX,             XVIM_N, XVIM_M, XVIM_ES, XVIM_BS, XVIM_EN,
// //'----------------------------------------------'         '--------------------------------------------'
// //                            ,--------+---------,         ,--------+----------,
//                                 _______, _______,            _______, _______,
// //                            |--------+---------|         |--------+----------|
//                                          _______,            _______,
// //                                     |---------|         |---------|
//                        _______, _______, _______,            _______, _______, _______
// //                   '--------+--------+---------.         .--------+--------+---------'
// ),
/*
//,---------------------------------------------.        ,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------|        |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------|        |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           XXXXXXX, _______, _______, _______, _______,
//'---------------------------------------------'        '----------------------------------------------'
//                           ,--------+---------,       ,--------+----------,
                               _______, _______,          _______, _______,
//                           |--------+---------|       |--------+----------|
                                        _______,          _______,
//                                    |---------|       |---------|
                      _______, _______, _______,          _______, _______, _______
//                  '--------+--------+---------.       .--------+--------+---------'
*/
// END OF _XVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////////###



/* Keymap _DVIM 05: _DVIM layer  // delete layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      |  | Yank | Begin| Word | Word |End Of|
 * |      |      |      |      |      |  |      |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      |  |      | Char | Line | Line | Char |
 * |      |      |      |      |      |  |      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |@@@@@@|      |      |      |  |      |Delete|Delete|@@@@@@|Delete|
 * |      |@@@@@@|      |      |      |  |      |      | Page |Delete|      |
 * |      |@@@@@@|      |      |      |  |      | HOME |  UP  |PgDown|  END |
 * '----------------------------------'  '----------------------------------'
 */
// _DVIM layer 05
[_DVIM] = KEYMAP(  // layer 05 : _DVIM layer  // delete layer
//,---------------------------------------------.,------------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    DVIM_Y, TD(DVIM_uU),  DVIM_I,  DVIM_O, TD(DVIM_pP),
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, _______,   KC_UP, XXXXXXX,    DVIM_H,      DVIM_J,  DVIM_K,  DVIM_L,     DVIM_SP,
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT,   XXXXXXX,      DVIM_M, DVIM_ES, DVIM_BS,     DVIM_EN,
//'---------------------------------------------''------------------------------------------------------'
/*
//                           ,--------+---------,,--------+----------,
                               _______, _______,   _______,   _______,
//                           |--------+---------||--------+----------|
                                        _______,   _______,
//                                    |---------||---------|
                      _______, _______, _______,   MO(_FUNC), MO(_RGBL), MO(_APPS)
//                  '--------+--------+---------..--------+--------+---------'
*/
//                           ,--------+---------,,--------+----------,
                               _______, _______,   MO(_POWR),   KC_UP,
//                           |--------+---------||--------+----------|
                                        _______,   _______,
//                                    |---------||---------|
                      _______, _______, _______,  KC_LEFT, KC_DOWN, KC_RGHT
//                  '--------+--------+---------..--------+--------+---------'
),
/*
//                           ,--------+---------,,--------+----------,
                               _______, _______,   _______, _______,
//                           |--------+---------||--------+----------|
                                        _______,   _______,
//                                    |---------||---------|
                      _______, _______, _______,   _______, _______, _______
//                  '--------+--------+---------..--------+--------+---------'
),
//,---------------------------------------------.,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------||--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,   _______, _______, _______, _______, _______,
//|--------+--------+--------+--------+---------||--------+--------+--------+--------+----------|
    _______, _______, _______, _______, _______,   XXXXXXX, _______, _______, _______, _______,
//'---------------------------------------------''----------------------------------------------'
*/

// DVIM_H is empty, DVIM_N is empty
// END OF _DVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////////###



/* Keymap _MOUS 06: Mouse layer
* ,----------------------------------.  ,----------------------------------.
* |      |      |      |      |      |  |      |      |      |      |      |
* |      |      |      |      |      |  |      | wLeft|  wUp | wDown|wRight|
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |      |      |      |  |      |      |      |      |      |
* | @LSft| @LCtl| @LAlt| @LGui|      |  |      | mLeft|  mUp | mDown|mRight|
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |@@@@@@|      |      |  |      |      |      |      |      |
* |Accel0|Accel2|@@@@@@|Accel1|Accel0|  | mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |@@@@@@|      |      |  |      |      |      |      |      |
* '------+------+------+------+------'  '------+------+------+------+------'
*/
// _MOUS layer 06


[_MOUS] = KEYMAP(  // layer 06: mouse layer
/////////////////////////////////////////////////////////////////////////////////////////////////////###
//,----------------------------------------------.       ,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
//|--------+--------+--------+--------+----------|       |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
//|--------+--------+--------+--------+----------|       |--------+--------+--------+--------+----------|
    KC_ACL0, KC_ACL2, XXXXXXX, KC_ACL1, KC_ACL0,           KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5,
//'----------------------------------------------'       '----------------------------------------------'
//                            ,--------+---------,       ,--------+----------,
                               _______, _______,         MO(_POWR),   KC_UP,
//                            |--------+---------|       |--------+----------|
                                          _______,         _______,
//                                     |---------|       |---------|
//                    MO(_DALY), _______, MO(_SYMB),          KC_LEFT, KC_DOWN, KC_RGHT
                        _______, _______, _______,         KC_LEFT, KC_DOWN, KC_RGHT
//                   '--------+--------+---------.       .--------+--------+----------'
),


/*    
//                               ,---------+----------,  ,-----------+----------,
                                   _______, _______,         _______, _______,
//                               |---------+----------|  |-----------+----------|
                                             _______,         _______,
//                                         |----------|  |-----------|
                          _______,  _______, _______,      _______, _______, _______
//                      '--------+---------+----------.  .-----------+--------+----------'
),
*/
//
// Underlines over ASDF keys allow us using MODs while clickig, (e.g. CTL+click)
/*    C O N F I G      F I L E
#define MOUSEKEY_DELAY            300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED    8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
// END OF _MOUS 06

/Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY              60
#define MOUSEKEY_INTERVAL           50
#define MOUSEKEY_MAX_SPEED           8
#define MOUSEKEY_TIME_TO_MAX        40

// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_DELAY 500
// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_INTERVAL 220
#define MOUSEKEY_WHEEL_MAX_SPEED     2
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200  // max. value: 255
*/
// END OF _MOUS 06
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _DALY 07: DAiLY commands layer
 * ,----------------------------------.  ,----------------------------------.
 * |@@@@@@|      |Captur|Captur|      |  |      |      |      |      |@@@@@@|
 * |  Tab |Dictat|Window|Selct.|Float.|  | Close| Prev | Next |Mision|Launch|
 * |@@@@@@|      |^:Copy|^:Copy|window|  |  APP | APP  | APP  |Contrl|@@pad@|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | Caps | Dash |  UP  | Speak|Active|  | Close| Prev | Next |Windws| Space|
 * | Lock | board|      |      |window|  |Window|Window|Window| Apps |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |Reopen|  |      |      |      |      |      |
 * |SftTab| LEFT | DOWN | RIGHT|window|  | Close| Prev | Next |DELETE|Launch|
 * |      |      |      |      | / tab|  |  tab | tab  | tab  |      |  pad |
 * '------+------+------+------+------'  '------+------+------+------+------'
*/
// DALY layer 07
[_DALY] = KEYMAP(  // layer 07: DAiLY commands layer
//,--------------------------------------------------.,-------------------------------------------------.
       KC_TAB,   DICTAD,  CAPSCR,  CAPSLC,    FLOA_W,    CLOS_A, PREV_APP, NEXT_APP,   MISCTL,     DESK,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
     F(CAPSL),   DSHBRD,   KC_UP,   SPEAK,    ACTV_W,    CLOS_W,   PREV_W,   NEXT_W,   APPS_W, KC_SPACE,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
    S(KC_TAB),  KC_LEFT, KC_DOWN, KC_RGHT,    REOPEN,    CLOS_T,   PREV_T,   NEXT_T,   KC_DEL,   LNCHPD,
//'--------------------------------------------------''-------------------------------------------------'
//                               ,---------+----------,  ,-----------+--------,
                                    _______,   _______,     MO(_POWR), _______, 
//                               |---------+----------|  |-----------+--------|
                                               _______,       _______,
//                                         |----------|  |-----------|
                             DESK, F(CAPSL),      SIRI,       _______, _______,  _______
//                      '--------+---------+----------.  .-----------+--------+----------'
),
/*
//                              ,---------+----------,,--------+----------,
                                    KC_TAB, _______,    _______, _______,
//                              |---------+----------||--------+----------|
                                            _______,    _______,
//                                        |----------||----------|
                         KC_BSPC, F(CAPSL),  KC_DEL,    _______, _______, _______
//                     '--------+---------+----------..--------+--------+----------'
),
*/

// ^ + CAPSCR = KC_CPYW
// ^ + CAPSLC = KC_CPYP
// END OF _DALY 07
////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Keymap _FUNC 08: functions Layer
 * ,------------------------------------.  ,----------------------------------.
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |  F01 |  F02 |   F03  |  F04 |  F05 |  |  F06 |  F07 |  F08 |  F09 |  F10 |
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |------+------+--------+------+------|  |------+------+------+------+------|
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |  F11 |  F12 |   F13  |  F14 |  F15 |  |  F16 |  F17 |  F18 |  F19 |  F20 |
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |------+------+--------+------+------|  |------+------+------+------+------|
 * |      |      |        |  fn  |*XXXXX|  |*XXXXX|  fn  |@@@@@@|      |      |
 * |  F21 |  F22 |   F23  |Karab-|      |  |      |Karab-|  UP  | DOWN | RIGHT|
 * |      |      |@[_FUNC]|Elemen|      |  |      |Elemen|@@@@@@|      |      |
 * '------------------------------------'  '----------------------------------'
*/
// _FUNC layer 08

[_FUNC] = KEYMAP(  // layer 08 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,------------------------------------------.           ,----------------------------------------------.
     KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
//|-------+-------+-------+-------+----------|           |--------+--------+--------+--------+----------|
//                                                                          Karabiner-Elements: multiple_apps_mode     
    KC_F11, KC_F12, KC_F13, KC_F14,  KC_F15,                KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,
//|-------+-------+-------+-------+----------|           |--------+--------+--------+--------+----------|
//      Karabiner-Elements: fn                                       fn: Karabiner-Elements
    KC_F21, KC_F22, KC_F23, KC_F24, XXXXXXX,               XXXXXXX,  KC_F24, XXXXXXX, XXXXXXX, XXXXXXX,
//'------------------------------------------'           '----------------------------------------------.
//                       ,--------+----------,           ,--------+----------,
                           _______, _______,             MO(_POWR),     KC_UP,
//                       |--------+----------|           |--------+----------|
                                    _______,               _______,
//                                |----------|           |----------|
//             Karabiner-Elements:                      Karabiner-Elements:
//                              fn                                       fn
                 _______,  _______, _______,               KC_LEFT,   KC_DOWN,  KC_RGHT
//   Karabiner-Elements:                                        Karabiner-Elements:
//    multiple_apps_mode                                         multiple_apps_mode
//              '--------+--------+----------.           .--------+--------+----------'
),


/*
//                               ,---------+----------,  ,-----------+----------,
                                    _______, _______,         _______, _______,
//                               |---------+----------|  |-----------+----------|
                                             _______,         _______,
//                                         |----------|  |-----------|
                          _______,  _______, _______,         _______, _______, _______
//                      '--------+---------+----------.  .-----------+--------+----------'
),
*/
// END OF _FUNC 08
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _SYMB 09: symbols Layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |   +  |   =  |   #  |   *  |   %  |  |   &  |   (  |   )  |   _  |   -  |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | LCtl | LAlt | LGui | LSft |      |  |      | LSft | LGui | LAlt | LCtl |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | `  ~ | '  " |   \  |   /  |   |  |  |   @  |   [  |   ]  |   ,  |   .  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   $  |  |   ^  |   {  |   }  |   ;  |   :  |
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// SYMBOLS layer 09
/*
[_SYMB] = KEYMAP(  // layer 09: symbols layer
//,--------------------------------------------------------------------------.  ,--------------------------------------------------------------------------.
           KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR, KC_PERC,      KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,
//|---------------+---------------+---------------+---------------+----------|  |--------+---------------+---------------+---------------+-----------------|
    LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH), KC_PIPE,        KC_AT,LSFT_T(KC_LBRC),LGUI_T(KC_RBRC),LALT_T(KC_COMM), LCTL_T(KC_DOT),
//|---------------+---------------+---------------+---------------+----------|  |--------+---------------+---------------+---------------+-----------------|
           KC_EXLM,        KC_QUES,        KC_LABK,        KC_RABK,  KC_DLR,      KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_SCLN,        KC_COLN,
//,--------------------------------------------------------------------------'  '--------------------------------------------------------------------------.
//                                                        ,---------+-----------,  ,--------+----------,
                                                              INV_EX,   INV_QU,    MO(_POWR),     EURO,
//                                                        |---------+-----------|  |--------+----------|
                                                                       _______,      _______,
//                                                                  |-----------|  |--------|
                                     O_COMMENT, C_COMMENT, CHANGE_SYMB_TO_NUMB,     _______, _______, _______ 
//                                            '---------+----------+------------.  .--------+--------+---------'
),
*/
[_SYMB] = LAYOUT_wrapper(  // layer 02 : numbers layer
           _S_CORE_SYMB_L1_,                                                          _S_CORE_SYMB_R1_,
           _S_CORE_SYMB_L2_,                                                          _S_CORE_SYMB_R2_,
           _S_CORE_SYMB_L3_,                                                          _S_CORE_SYMB_R3_,
                                   _SYMB_LTHMB_ROW1_,        _SYMB_RTHMB_ROW1_, // _ACCN_RGHT_THUMB_ROW1_,
                                              KC_NO,          KC_NO,
                                   _SYMB_LTHMB_ROW2_,        _SYMB_RTHMB_ROW2_ // TD(SETNMB), MO(_SYMB),  _______
),

//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
/*
/////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,-----------------------------------------------------------------------------.
           KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC,
//|---------------+---------------+---------------+---------------+-------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH), TD(G_DOEU),
//|---------------+---------------+---------------+---------------+-------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,        KC_RABK,    KC_ASTR,
//,-----------------------------------------------------------------------------'

                    // RIGHT_HAND
                    ,-----------------------------------------------------------------------------------.
                            TD(Y_AMCI),        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,    
                    |-----------------+---------------+---------------+---------------+-----------------|
                               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
                    |-----------------+---------------+---------------+---------------+-----------------|
                      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN ),
                    '-----------------------------------------------------------------------------------.
/////////////////////////////////////////////////////////////////////////////////////////////////////###
*/
// END OF _SYMB 09
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _APPS 10: _APPS layer
 * ,----------------------------------.  ,----------------------------------.
 * |SIMPLE|      | *QE* |  APP | TERMI|  | TYPI |      | TEXT | *QE* |SYSTEM|
 * | NOTE |TWITTR| EVER | STORE| -NAL |  |-NATOR| UROOM|-EDIT | OMNI |PREFE-|
 * |      |      |-NOTE |      |      |  |      |      |      |-FOCUS|RENCES|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | APPLE| *⌘L* | *QE* |      |GOOGLE|  |      |SUBLME|KARBNR| CALEN|      |
 * |SCRIPT|SAFARI|  DAY |FINDER|CHROME|  |SKETCH| TEXT |ELMNTS|-DAR  |*XXXXX|
 * |      | SLACK|  ONE |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | STU  |      | CALCU|KARBNR|      |  |      |      | KEY- |      | NUM- |
 * |-DIES | XCODE|-LATOR|EVENT | BOOKS|  | NOTES| MAIL | NOTE | PAGES| BERS |
 * |      |      |      |VIEWER|      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
 *                  ,-----------------.  ,-----------------.
 *                  |        |        |  |        |        |
 *                  |        |        |  |        |        |
 *                  |        |        |  |        |        |
 *                  |        |        |  | _POWR  |        |
 *         ,--------+--------+--------|  |--------+--------|--------.
 *         |        |        |        |  |        |        |        |
 *         |        |        |        |  |        |        |        |
 *         |        |KARABINR|        |  |        |        |        |
 *         |        |  APPS  |        |  |        |        |        |
 *         '--------------------------'  '--------------------------'
*/ // *QE*: QUICK ENTRY
// _APPS layer 10
[_APPS] = KEYMAP(  // layer 10 : apps layer
// ###
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// [PENDING]
// Feedly
// [pending]
//,-----------------------------------------------------------------.  ,------------------------------------------------------------------.
    APP_Q_SNOTE, APP_W_TWTTR, APP_E_EVERN, APP_R_APSTO, APP_T_TERMI,     APP_Y_TYPIN, APP_U_UROOM, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_A_SCRPT, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,     APP_H_SKTCH, APP_J_SUBLI, APP_K_KRBNR, APP_L_CLNDR, APPSP_EMPTY,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_KVIEW, APP_B_BOOKS,     APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB,
//'-----------------------------------------------------------------'  '------------------------------------------------------------------'
//                               ,---------+----------,  ,-----------+----------,
                                    _______,   _______,     MO(_POWR), _______,
//                               |---------+----------|  |-----------+----------|
                                               _______,       _______,
//                                         |----------|  |-----------|
                   _______, _______, TH_L3_KAR_APPS,       _______,   _______, _______
//               '--------+--------+------------------.  .-----------+----------+----------'
),
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _APPS 10
/////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
/////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,-----------------------------------------------------------------.
    APP_Q_SNOTE, APP_W_TWTTR, APP_E_EVERN, APP_R_APSTO, APP_T_TERMI,
//|------------+------------+------------+------------+-------------|
    APP_A_SCRPT, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,
//|------------+------------+------------+------------+-------------|
    APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_KVIEW, APP_B_BOOKS,
//'-----------------------------------------------------------------'

                                     // RIGHT_HAND
                                     ,------------------------------------------------------------------.
                                       APP_Y_TYPIN, APP_U_UROOM, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
                                     |------------+------------+------------+------------+--------------|
                                       APP_H_SKTCH, APP_J_SUBLI, APP_K_KRBNR, APP_L_CLNDR, APPSP_EMPTY,
                                     |------------+------------+------------+------------+--------------|
                                       APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB ),
                                     '------------------------------------------------------------------'
/////////////////////////////////////////////////////////////////////////////////////////////////////###
*/



/*  
*  Keymap _RGBL 11: RGB Light leds layer
,--------------------------------------------------. ,-------------------------------------------------.
|    RED   |  CORAL |   ORANGE  |GOLDENROD|  GOLD  | | YELLOW |    HUE   |    HUE   |        | REVERSE |
|          |        |           |         |        | |        | DECREMENT| INCREMENT|        | RGB MODE|
|----------+--------+-----------+---------+--------| |--------+----------+----------+--------+---------|
|CHARTREUSE|  GREEN |SPRINGGREEN|TURQUOISE|  TEAL  | |  WHITE |SATURATION|SATURATION|        |         |
|          |        |           |         |        | |        | DECREMENT| INCREMENT|        | RGB MODE|
|----------+--------+-----------+---------+--------| |--------+----------+----------+--------+---------|
|   CYAN   |  AZURE |    BLUE   |  PURPLE | MAGENTA| |  PINK  |   VALUE  |   VALUE  | WITHOUT| BL_OFF  |
|          |        |           |         |        | |        | DECREMENT| INCREMENT|  COLOR |RGBToggle|
'--------------------------------------------------' '-------------------------------------------------'
*                  ,-----------------.  ,-----------------.
*                  |        |        |  |        |        |
*                  |        |        |  |        |        |
*                  |        |        |  |        |        |
*                  |        |        |  |  _POWR |        |
*         ,--------+--------+--------|  |--------+--------|--------.
*         |        |        |        |  |        |        |        |
*         |        |        |        |  |        |        |        |
*         |        |        |        |  |        |        |        |
*         |        |        |        |  |        |        |        |
*         '--------------------------'  '--------------------------'
*/
// _RGBL layer 11

[_RGBL] = KEYMAP( // layer 11: _RGBL layer
//'-----------------------------------------------'    '-----------------------------------------------'
     CH_RED, CH_CORL, CH_ORNG, CH_GOLR, CH_GOLD,          CH_YLLW, RGB_HUI, RGB_HUD, SAV_COL, RGB_RMOD,

    CH_CHRT, CH_GREN, CH_SPRG, CH_TRQS, CH_TEAL,         CH_WHIT, RGB_SAI, RGB_SAD, GET_HSV,  RGB_MOD,

    RGB_TOG, CH_EMPT, CH_BLUE, CH_PRPL, CH_MGNT,          CH_PINK, RGB_VAI, RGB_VAD, CH_EMPT,  RGB_TOG,
//'-----------------------------------------------'    '-----------------------------------------------'
//                           ,---------+----------,    ,---------+----------,
                                _______, _______,       MO(_POWR), _______,
//                           |---------+----------|    |---------+----------|
                                         _______,         _______,
//                                     |----------|    |---------|
                      CH_CYAN,  CH_AZUR, _______,        _______, _______, _______
//                  '--------+---------+----------.    .---------+--------+----------'
),





// END OF _RGBL 11
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _POWR 12: POWeR productivity layer
* ,----------------------------------.  ,----------------------------------.
* |Toggle|@@@@@@|      |      |XXXXXX|  |midVol|Volume|Volume|minVol|Volume|
* | Whole|LCKSCR|LOGOUT|onCtrl|XXXXXX|  | lev.8|  Up  | Down | lev.1| Mute |
* |Indctr|@@@@@@|      | RESET|XXXXXX|  |      |      |      |@@@@@@|      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |XXXXXX|Rewind| Play/|Forwrd|Toogle|  |Toogle| Zoom | Zoom | Zoom |Invert|
* |XXXXXX|      | Pause|      |Smooth|  |Keybrd|  IN  |  OUT |ON/OFF|Colors|
* |XXXXXX|      |      |      |Images|  |follow|      |      |      |      |
* |RCntrl| RAlt | RCmnd|RShift|      |  | Focus|      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* | Menu | Dock | Tool |Status|Float.|  |Cntrst|Bright|Bright|Bright|Cntrst|
* | _bar | _bar | _bar | _bar |Window|  |      |      |      |  min.|      |
* |      |      |      |      |      |  |  Up  |  Up  | Down |lev. 1| Down |
* | SLEEP|KILLAP|K_MENU|SHUT_D|RSTART|  |      |      |      |      |      |
* '----------------------------------'  '----------------------------------'
*                  ,-----------------.  ,-----------------.
*                  |  CLEAR |        |  |        |        |
*                  |   ALL  |        |  |        |        |
*                  | LAYERS |        |  |        |        |
*                  |-> _DFLT|  LCTL  |  |        |        |
*         ,--------+--------+--------|  |--------+--------|--------.
*         |        |        |        |  |        |        |        |
*         |        |        |        |  |        |        |        |
*         |        |   RAW  |        |  |        |        |        |
*         |        |  RESET |        |  |        |        |        |
*         '--------------------------'  '--------------------------'
//NOTES/keymap_POWR_layer*/
// _POWR layer 12
[_POWR] = KEYMAP(  // layer 12: POWeR productivity layer
// ###
// ////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
//,---------------------------------------------------------------.  ,---------------------------------------------------------------.
       TOG_ID,       LCKSCR,      LOGOUT,    MY_RESET,    XXXXXXX,           VOL_8,KC__VOLUP, KC__VOLDOWN,       VOL_1,     KC__MUTE,
//|-----------+------------+------------+------------+------------|  |------------+---------+------------+------------+--------------|
      KC_RCTL,RALT_T(KC_F7),RGUI_T(KC_SPC),RSFT_T(KC_F9), ZOMSMTH,         ZOM_FOL,   ZOM_IN,     ZOM_OUT,     ZOM_TOG,      INV_CLR,
//      TOG_ID,       KC_RW,      KC_SPC,       KC_FF,    ZOMSMTH,         ZOM_FOL,   ZOM_IN,     ZOM_OUT,     ZOM_TOG,      INV_CLR,
//|-----------+------------+------------+------------+------------|  |------------+---------+------------+------------+--------------|
        SL_MEN,      KA_DCK,      KM_TOL,      SH_STA,     RT_FLO,         CNTR_UP,  KC_PAUS,     KC_SLCK,    BRIGHT_1,      CNTR_DN,
//'---------------------------------------------------------------'  '---------------------------------------------------------------'
// You can reach _POWR key anywhere because it's always at the same position: THUMB_R4, but ...
// ... maybe you're lost into a layer, which you don't know which one it is and ...
// ... you can't reach a control key for resetting the keyboard.
// ... that's why we put one control key here, at 'THUMB_L4' position.
//                                              ,---------+----------,  ,--------+----------,
                                                  MY_CLEAR,   KC_LCTL,    _______, _______,
//                                              |---------+----------|  |--------+----------|
                                                              _______,    _______,
//                                                        |----------|  |--------|
                                         _______,    RESET,   _______,    _______, _______, _______
//                                     '--------+---------+----------.  .--------+--------+---------'
)
//////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/*
// LEFT_HAND
//,-------------------------------------------------------------------------.
MY_STEP_INDICAT,        LOGOUT,     LCKSCR,      MY_RESET,     XXXXXXX,
//|------------+--------------+---------------+--------------+--------------|
TOG_ID,         KC_F7,         KC_SPC,         KC_F9, ZOMSMTH,
//|------------+------------------------------+--------------+--------------|
    SL_MEN,   KA_DCK,    KM_TOL,   SH_STA, RT_FLO,
//'-------------------------------------------------------------------------'

                                      // RIGHT_HAND
                                      ,----------------------------------------------------------------.
                                              VOL_8, KC__VOLUP, KC__VOLDOWN,       VOL_1,    KC__MUTE,
                                      |------------+----------+------------+------------+--------------|
                                        ZOM_FOL,   ZOM_IN,    ZOM_OUT, ZOM_TOG, INV_CLR,
                                      |------------+----------+------------+------------+--------------|
                                         CNTR_UP,   KC_PAUS,     KC_SLCK,    BRIGHT_1, CNTR_DN,
                                      '----------------------------------------------------------------'
*/
// END OF _POWR 12
/////////////////////////////////////////////////////////////////////////////////////////////////////###



/////////////////////////////////////////////////////////////////////////////////////////////////////###
};
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           l a y e r s       l a y o u t s                            //
//                                                                                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           I N I T      P R O C E S S E S                             //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*
void matrix_init_user(void) {

https://docs.qmk.fm/#/custom_quantum_functions?id=matrix_init_-function-documentation

  Keyboard/Revision: void matrix_init_kb  (void)
  Keymap:            void matrix_init_user(void)

Keyboard Post Initialization code
This is ran as the very last task in the keyboard initialization process. This is useful if you want...
...to make changes to certain features, as they should be initialized by this point.

Example keyboard_post_init_user() Implementation
This example, running after everything else has initialized, sets up the rgb underglow configuration.

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
}

// set_unicode_input_mode(UC_OSX);
// REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
}; // end of matrix_init_user
*/
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                        M A T R I X   I N I T   U S E R                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void keyboard_post_init_rgb(void) {
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_STARTUP_ANIMATION)
    // if (userspace_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (user_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (rgblight_config.enable) {
        layer_state_set_user(layer_state);
        uint16_t old_hue = rgblight_config.hue;
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        for (uint16_t i = 255; i > 0; i--) {
            rgblight_sethsv_noeeprom( ( i + old_hue) % 255, 255, 255);
            matrix_scan();
            wait_ms(10);
        }
    }
#endif
    layer_state_set_user(layer_state);
}
//
void keyboard_post_init_user(void) {
// Call the post init code.

// Wenset default color variables from the initial color of the keyboard and ...

  set_default_hsv();

  keyboard_post_init_rgb();

// [UNCOMMENTTHIS]
// ... we show our default color.
//show_RGB_LEDs(); 
// [uncommentthis]
}
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           i n i t      p r o c e s s e s                             //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                       F N _ A C T I O N S     F U N C T I O N S                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
const uint16_t PROGMEM fn_actions[] = {
  [ACC_A] = ACTION_FUNCTION(ACC_A),
  [ACC_E] = ACTION_FUNCTION(ACC_E),
  [ACC_I] = ACTION_FUNCTION(ACC_I),
  [ACC_O] = ACTION_FUNCTION(ACC_O),
  [ACC_U] = ACTION_FUNCTION(ACC_U),

  [TIL_N] = ACTION_FUNCTION(TIL_N),

  [CAPSL] = ACTION_FUNCTION(CAPSL)
};
/////////////////////////////////////////////////////////////////////////////////////////////////////###


/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING   ( 105  CHARACTERS)   MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  shift_flag = get_mods()&SHFT_MODS;
  switch (id) {

    case ACC_A ... TIL_N:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of action_function()
        {
        //  release LSHIFT
            // old way who worked fine
            // del_mods(shift_flag);
            // del_weak_mods(shift_flag);
            // send_keyboard_report();
          remove_activated_mod(shift_flag);
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else { if (id == TIL_N)           {tilde_accent_function(); } 

                  else                           { acute_accent_function(); } 
                     }
                  }
               }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
          add_desired_mod(shift_flag);
          // add_mods(shift_flag);
          // add_weak_mods(shift_flag);
          // send_keyboard_report();
        };
      }
    break;

    case CAPSL:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
         capslock_tap();
         show_RGB_LEDs();
      }
      break;
  }

  if (record->event.pressed) 
  {
    switch (id) 
    {   case ACC_A: tap_code(KC_A); break;
        case ACC_E: tap_code(KC_E); break;
        case ACC_I: tap_code(KC_I); break;
        case ACC_O: tap_code(KC_O); break;
        case ACC_U: tap_code(KC_U); break;
        case TIL_N: tap_code(KC_N); break;
    }
  }
};
//                                                                                      //
//                                                                                      //
//                       f n _ a c t i o n s     f u n c t i o n s                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
void matrix_scan_user(void) {
                
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////###
//                                                                                                    //
//                                                                                                    //
//                                          M  A  C  R   O  S                                         //
//                                                                                                    //
//                                                                                                    //
//                               P R O C E S S    R E C O R D    U S E R                              //
//                                                                                                    //
//                                                                                                    //
// BEGINNING OF NEW MACROS WAY                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////###
//
// [UNDERSTANDING]
// We implement MACROS when we need QMK functions, or more than one keystroke in a specific keypress ...
// ... and we don't have the need to use tap dance cases.  Because tap_dance is annoying to use or ...
// ... because tap_dance is slow for showing RGB layer color.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                    */
/*  W A Y   0   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   fvim(j);                                                                                         */
/*                                                                                                    */
/*   this is the best one and it's posible because of the following function definition:              */
/*                                                                                                    */
/*   void fvim(char *key)                                                                             */
/*   {                                                                                                */
/*     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"f");                                      */
/*     send_string(key);                                                                              */
/*   }                                                                                                */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                    */
/*  W A Y   1   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"fj");                                       */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////////###            
/*                                                                                                    */
/*  W A Y   2   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   actual_mods = get_mods();                                                                        */
/*   add_mods(ALL_MODS); add_weak_mods(ALL_MODS); send_keyboard_report();                             */
/*   SEND_STRING("v");                                                                                */
/*   del_mods(ALL_MODS); add_weak_mods(ALL_MODS);                                                     */
/*                                                                                                    */
/*   add_mods(actual_mods);                       send_keyboard_report();                             */
/*   SEND_STRING("fj");                                                                               */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                    */
/*  W A Y   3   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);  */
/*   register_code(KC_V);    unregister_code(KC_V);                                                   */
/* unregister_code(KC_LGUI); unregister_code(KC_LALT);                                                */
/* unregister_code(KC_LCTL); unregister_code(KC_LSFT);                                                */
/*   register_code(KC_F);    unregister_code(KC_F);                                                   */
/*   register_code(KC_J);    unregister_code(KC_J);                                                   */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                    */
/*  W A Y   4   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*           T H I S    W A Y     D O E S N ' T      W O R K  ! ! !                                   */
/*   register_code(MOD_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(MOD_HYPR);  */
/*   register_code(KC_HYPR);  register_code(KC_V); unregister_code(KC_V); unregister_code(KC_HYPR);   */
/*   register_code(HYPR);     register_code(KC_V); unregister_code(KC_V); unregister_code(HYPR);      */
/*   register_code(KC_F);   unregister_code(KC_F);                                                    */                               
/*   register_code(KC_J);   unregister_code(KC_J);                                                    */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////////###

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

/*
// [EXAMPLE]  // look at the comments !!!
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case FOO:
      if (record->event.pressed) {
        // Do something when pressed
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case KC_ENTER:
      // Play a tone when enter is pressed
      if (record->event.pressed) {
        PLAY_NOTE_ARRAY(tone_qwerty);
      }
      return true; // Let QMK send the enter press/release events
    default:
      return true; // Process all other keycodes normally
  }
}
// [example]
*/

  if (record->event.pressed)
  // Do something when pressed
  {
    shift_flag   = get_mods()&SHFT_MODS;
    control_flag = get_mods()&CTRL_MODS;
    option_flag  = get_mods()&ALT_MODS;
    gui_flag     = get_mods()&GUI_MODS;

    switch(keycode)
    {

      case PREV_APP:  register_code  (KC_LGUI);
                      register_code  (KC_LSFT);
                      tap_code       (KC_TAB);
                      unregister_code(KC_LSFT);
                      changing_apps = true;
                      return false;                      

      case NEXT_APP:  register_code  (KC_LGUI);
                      tap_code       (KC_TAB);
                      changing_apps = true;
                      return false;



      case O_COMMENT: tap_code       (KC_SLSH);
                      register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      return false;

      case C_COMMENT: register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      tap_code       (KC_SLSH);
                      return false;

      case MY_CLEAR:  layer_clear(); return false;

      case MY_RESET:  if (get_mods()&CTRL_MODS)
                      {
                        reset_my_keyboard_function();
                        return false;
                      }

      case CHANGE_SYMB_TO_NUMB:
                      layer_off(_SYMB);
                      layer_on(_NUMB);
                      return false;

      case TH_L3_KAR_APPS:  
                      karabiner_apps_working = true;
                      if (multi_apps_karabiner)
                      {
                        // triggered_gui();
                        add_desired_mod(current_flag);
                        // add_mods(current_flag);
                        // add_weak_mods(current_flag);
                        // send_keyboard_report();
                      }
                      
                      layer_off(_APPS);
                      register_code(KC_F20);
                      return false;
                      
      case TH_L4_FUNC_RGBL:
                      if (get_mods()&ALT_MODS)
                      {
                        layer_on(_RGBL);
                      }
                      else
                      {
                        layer_on(_FUNC);
                      }
                      return false;

      case TH_R1_DALY_MOUS:
                      if (get_mods()&ALT_MODS)
                      {
                        layer_on(_MOUS);
                      }
                      else
                      {
                        layer_on(_DALY);
                      }
                      return false;

      case TH_R2_SYMB_FVIM:
                      if (get_mods()&ALT_MODS)
                      {
                        layer_on(_FVIM);
                      }
                      else
                      {
                        symbols_pressed = true;
                        layer_on(_SYMB);
                      }
                      return false;

      // case LAUNCHING_APPS: rgblight_sethsv_noeeprom(COLOR_APPS);
      //                      apps_working = true;
      //                      if (triggered_gui())
      //                        multi_apps = true;

      //                      layer_on(_APPS);
      //                      return false;

      case TH_R3_APPS_NUMB: if (option_flag)
                               {
                                  layer_on(_NUMB);
                               }
                               else
                               {
                                 apps_working = true;
                                 if (gui_flag)
                                 {
                                   current_flag = gui_flag;
                                   multi_apps = true;
                                   multi_apps_karabiner = true;
                                 }
                                 layer_on(_APPS);
                               }
                               return false;

      case TH_R4_POWR_RGBL:
                      if (get_mods()&ALT_MODS)
                      {
                        layer_on(_RGBL);
                      }
                      else
                      {
                        layer_on(_POWR);
                      }
                      return false;

      case TOG_ID:   if (rgblight_config.enable && (capslock_is_active || numbers_is_active))
                      {
                        // if (whole_keyboard_as_indicator)
                        // {
                        //   diff = prev_diff;
                        // }
                        // else
                        // {
                        //   prev_diff = diff;
                        //   diff = 2;
                        // }
                        whole_keyboard_as_indicator = !whole_keyboard_as_indicator;
                        show_RGB_LEDs();                        
                      }
                      return false;


//
// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
//    case MY_STEP_INDICAT:
      //////////////////////////////////////////////////////////////////////////////////////////
      //                                                                                      //
      // [PROCESS_RECORD_USER] [_POWR] KC_Q (MY_STEP_INDICAT)                                 //
      //                                                                                      //
      //  S T E P S   U P   W I D T H   O F   RGB   W O R K I N G   A S  I N D I C A T O R S  //
      //                                                                                      //
      //  STEPS UP WIDTH OF RGB USED AS INDICATORS FOR 'CAPSLOCK', [_NUMB] LAYER,...          //
      //                                                                                      //
      //  KC_Q:   *  STEPS UP RGB WIDTH USED AS INDICATORS FOR CAPSLOCK, [_NUMB] LAYER,...    //
      //                                                                                      //
      //////////////////////////////////////////////////////////////////////////////////////////
      //
          // if ( rgblight_config.enable && !whole_keyboard_as_indicator
          //    && (capslock_is_active || numbers_is_active) )
          // {
          //   diff = (diff < 5 ? diff + 1 : 2 );
          //   show_RGB_LEDs();
          // }
          // return false;
// this function is not going to be used with 23 leds per hand
//

      case KC_BSPC:  rgblight_sethsv_noeeprom(HSV_MY_RED);
                     return true;

      case KC_DEL:   rgblight_sethsv_noeeprom(HSV_MY_RED);
                     return true;
                     
// 🔥💀☠️🔥

      // case THUMB_L2_FVIM_SYMB_DALY_POWR_CAPSL:
      //                 if (get_mods()&GUI_MODS) // if I am pressing LGUI (COMMAND)
      //                 {
      //                   layer_on(_SYMB);
      //                 }
      //                 else
      //                 if (get_mods()&ALT_MODS)
      //                 {
      //                   layer_on(_DALY);
      //                 }
      //                 else
      //                 if (get_mods()&CTRL_MODS)
      //                 {
      //                   layer_on(_POWR);
      //                 }
      //                 else
      //                 if (get_mods()&SHFT_MODS)
      //                 {
      //                   capslock_tap();
      //                   show_RGB_LEDs();
      //                 }
      //                 else
      //                 {
      //                   layer_on(_FVIM);
      //                 }
      //                 return false;


      // case THUMB_R2_NUMB_DVIM_FVIM_MOUS_SP:
      //                 if (get_mods()&GUI_MODS) // if I am pressing LGUI (COMMAND)
      //                 {
      //                   layer_on(_NUMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&ALT_MODS)
      //                 {
      //                   layer_on(_DVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&CTRL_MODS)
      //                 {
      //                   layer_on(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&SHFT_MODS)
      //                 {
      //                   layer_on(_MOUS);
      //                   return false;
      //                 }
      //                 else
      //                 {
      //                   register_code(KC_SPACE);
      //                   return false;
      //                 }

      
// 🔥💀☠️🔥
      //
      //[SAVING_SPACE]
      // using remove_control_mod as a bool function, we save from 38 to 66 bytes --> 28 bytes saved
      case SL_MEN:    if (remove_control_mod())
                      {
                         register_code(KC_POWER);
                      // without this delay, POWER doesn't work !!!   
                         wait_ms(500);
                         unregister_code(KC_POWER);
                      // SEND_STRING("s");  // 's' for selecting button sleep but it's not necessary
                      }
                      else
                      {
                         register_code(KC_LCTL); tap_code(KC_F2); unregister_code(KC_LCTL);
                      }
                      return false;

      case KA_DCK:    if (remove_control_mod())
                      {
                        register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      }
                      else
                      {
                        register_code(KC_LCTL); tap_code(KC_F3); unregister_code(KC_LCTL); // DOCK BAR
                      }
                      return false;

      case KM_TOL:    if (remove_control_mod())
                      {
                        register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      }
                      else                      
                      {
                        register_code(KC_LCTL); tap_code(KC_F5); unregister_code(KC_LCTL); // TOOLS BAR
                      }
                      return false;

      case SH_STA:    if (control_flag)
                      {
                        volumeSetToLevel(1);
                    //  keystrokes for shutting down:  (guessed by try and fail method)
                        register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_POWER);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   
                      }
                      else
                      {
                    // [SYSTEM PREFERENCES]
                        register_code(KC_LCTL); tap_code(KC_F8); unregister_code(KC_LCTL);  // STATUS BAR
                    // [system preferences]
                      }
                      return false;

      case RT_FLO:    if (control_flag)
                      {
                      //keystrokes for restarting:  (guessed by try and fail method)
                        register_code(KC_LGUI);
                        tap_code(KC_POWER);                      
                        unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      }
                      else
                      {
                      // [SYSTEM PREFERENCES]
                        register_code(KC_LCTL); tap_code(KC_F6); unregister_code(KC_LCTL);
                      // [system preferences]
                      }
                      return false;

                     

      case CIRCU:    circumflex_requested = true; // requested circumflex accent
                     return false;                // Skip all further processing of this key when pressed


      case GRAVE:    grave_requested      = true; return false; // requested grave      accent
      case DIAER:    diaeresis_requested  = true; return false; // requested diaeresis  accent


      case VOL_1:    volumeSetToLevel(1);         return false; // set volume to minimum (level 1)
      case VOL_8:    volumeSetToLevel(8);         return false; // set volume to middle  (level 8)


/* OLD APPS CODE
      case APP_A_SCRPT: callApp("Simplenote.app");            return false; break; // simplenote
      case APP_S_SAFAR: callApp("Safari.app");                return false; break; // S afari
      case APP_D_D_ONE: callApp("Day One Classic.app");       return false; break; // D ay one
      case APP_F_FINDE: callApp("Finder.app");                return false; break; // F inder
      case APP_G_CHRME: callApp("Google Chrome.app");         return false; break; // G oogle chrome

      case APP_H_SKTCH: callApp("Sketch.app");                return false; break; // sketc H
      case APP_K_KRBNR: callApp("Karabiner-EventViewer.app"); return false; break; // K arabiner Evnt Vwr
      case APP_L_CLNDR: callApp("Calendar.app");              return false; break; // Calendar
      case APPSP_EMPTY: callApp("");                          return false; break; //

      case APP_Z_STUDI: callApp("Studies.app");               return false; break; // Studies
      case APP_X_XCODE: callApp("Xcode.app");                 return false; break; // Xcode
      case APP_C_CALCU: callApp("Calculator.app");            return false; break; // Calculator
      case APP_V_VVVVV: callApp("");                          return false; break; //
      case APP_B_BOOKS: callApp("Books.app");                 return false; break; // Books

      case APP_N_NOTES: callApp("Notes.app");                 return false; break;  // Notes
   // Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
   // Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
   //   system("open //Applications//Notes.app");
   //   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
      case APP_M_MAIL:  callApp("Mail");                      return false; break; // Mail
      case APP_ES_KEYN: callApp("Keynote");                   return false; break; // Keynote
      case APP_BS_PAGE: callApp("Pages");                     return false; break; // Pages
      case APP_EN_NUMB: callApp("Numbers");                   return false; break; // Numbers
*/

      case BRIGHT_1: brightSetToLevel(1);         return false; // set bright to minimum (level 1)

// APPLICATIONS
// Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
// Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
//   system("open //Applications//Notes.app");
//   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
//
//
//
// KEYCODES FOR TRIGGERING APPS

// LEFT ROW 1 APPS
      case APP_Q_SNOTE: callApp("q");                         return false; // simple note
      case APP_W_TWTTR: callApp("w");                         return false; // t W itter
      //
      // [SAVING_SPACE]
      // 88 bytes free when disable Evernote case and 40 bytes when I enable it  -->  it costs 48 bytes of code
      case APP_E_EVERN: 
                        if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_N);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  E vernote
                        }
                        else
                        {
                          callApp("e");                        
                        }
                        return false;                                       // E vernote

      case APP_R_APSTO: callApp("r");                         return false; // app sto R e
      case APP_T_TERMI: callApp("t");                         return false; // T erminal


// RIGHT ROW 1 APPS
      case APP_Y_TYPIN: callApp("y");                         return false; // t Y pinator
      case APP_U_UROOM: callApp("u");                         return false; // U room
      case APP_I_TEDIT: callApp("i");                         return false; // texted I t
      case APP_O_OMNIF: if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_SPC);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  O mnifocus
                        }
                        else
                        {
                          callApp("o");                       
                        }
                        return false;                                       // O mnifocus
      case APP_P_SPREF: callApp("p");                         return false; // system P references


// LEFT ROW 2 APPS
      case APP_A_SCRPT: callApp("a");                         return false; // A pple script
      case APP_S_SAFAR: if (control_flag)
                        {
                          remove_control_mod();
                          // if (shift_flag)
                          // {
                          //   shift_was_activated = true;
                          //   remove_shift_mod();
                          // }

                          if (shift_flag)
                          {
                            shift_was_activated = true;
                            remove_activated_mod(shift_flag);
                            // del_mods     (shift_flag);
                            // del_weak_mods(shift_flag);
                            // send_keyboard_report();
                          }

                          wait_ms(50);
                          callApp("s");
                          wait_ms(50);
                          register_code(KC_LGUI);
                          // wait_ms(50);
                          tap_code(KC_L);                                   // Opens addre S S    bar for introduce an URL...
                          unregister_code(KC_LGUI);
                          if (shift_was_activated)
                          {
                            shift_was_activated = false;
                            wait_ms(50);                                    // ... or googling something
                            send_string("http://www.slack.com\n");          // S lack
                          }
                        }                          
                        else
                        {
                          callApp("s");                                     // S afari     
                        }
                        return false;
      case APP_D_D_ONE: 
                        if (control_flag)
                        {
                          register_code(KC_LSFT);
                          tap_code(KC_D);
                          unregister_code(KC_LSFT);
                          unregister_code(KC_LCTL);                         // quick entry  D ay one
                        }
                        else
                        {
                          callApp("d");
                        }
                        return false;                                       // D ay one
      case APP_F_FINDE: callApp("f");                         return false; // F inder
      case APP_G_CHRME: callApp("g");                         return false; // G oogle chrome


// RIGHT ROW 2 APPS
      case APP_H_SKTCH: callApp("h");                         return false; // sketc H
      case APP_J_SUBLI: callApp("j");                         return false; // sublime text
      case APP_K_KRBNR: callApp("k");                         return false; // K arabiner-elements
      case APP_L_CLNDR: callApp("l");                         return false; // Calendar
      case APPSP_EMPTY: callApp(" ");                         return false; // ???? EMPTY EMPTY EMPTY EMPTY 


// LEFT ROW 3 APPS
      case APP_Z_STUDI: callApp("z");                         return false; // Studies
      case APP_X_XCODE: callApp("x");                         return false; // Xcode
      case APP_C_CALCU: callApp("c");                         return false; // Calculator
      case APP_V_KVIEW: callApp("v");                         return false; // karabiner-event Viewer
      case APP_B_BOOKS: callApp("b");                         return false; // Books


// RIGHT ROW 3 APPS
      case APP_N_NOTES: callApp("n");                         return false; // Notes
      case APP_M_MAIL:  callApp("m");                         return false; // Mail      
      // case APP_ES_KEYN: callApp("\e");                        return false; // Keynote
      // case APP_BS_PAGE: callApp("\b");                        return false; // Pages
      // case APP_EN_NUMB: callApp("\n");                        return false; // Numbers
      case APP_ES_KEYN: callApp("1");                         return false; // Keynote
      case APP_BS_PAGE: callApp("2");                         return false; // Pages
      case APP_EN_NUMB: callApp("3");                         return false; // Numbers
// keycodes for triggering apps
// applications
//
//
//





// _FVIM
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case FVIM_H: fvim("h");  return false;
/*
      case FVIM_M: fvim("m");  return false;
      case FVIM_ES:fvim("\e"); return false;
      case FVIM_BS:fvim("\b"); return false;
      case FVIM_EN:fvim("\n"); return false;
   // _fvim
*/
// [INFO]
/*
* [#ref] Escape sequences in C
* wikipedia link: 
* https://en.wikipedia.org/wiki/Escape_sequences_in_C        

* \e  \x001B  
* register_code (KC_ESC); unregister_code (KC_ESC); } break;
* case FVIM_ES:if (record->event.pressed) { fvim("\e"); } break;

* \b  \x0008
* register_code(KC_BSPC); unregister_code(KC_BSPC); } break;   
* case FVIM_BS:if (record->event.pressed) { fvim("\b"); } break;

* \n  \x000A      new line
* register_code (KC_ENT); unregister_code (KC_ENT); } break; 
* \r  \x000D      carriage return
      case FVIM_EN:if (record->event.pressed) { fvim("\n"); } break;
*/
// [info]

// _DVIM

      case DVIM_Y: dvim("y");  return false;
//         DVIM_uU is tap_dance
      case DVIM_I: dvim("i");  return false;
      case DVIM_O: dvim("o");  return false;
//         DVIM_pP is tap_dance

      case DVIM_H: dvim("h");  return false;
      case DVIM_J: dvim("j");  return false;
      case DVIM_K: dvim("k");  return false;
      case DVIM_L: dvim("l");  return false;
      case DVIM_SP:dvim(" ");  return false;

//    case DVIM_N: dvim("n");  return false;
      case DVIM_M: dvim("m");  return false;
      case DVIM_ES:dvim("\e"); return false;
      case DVIM_BS:dvim("\b"); return false;
      case DVIM_EN:dvim("\n"); return false;
/*
// select _AVIM
//            case AVIM_Y: avim("y");  return false;
//            case AVIM_N: avim("n");  return false;
// the rest of the keys are combination of _FVIM + SHIFT key            
*/

// _CVIM
      case CVIM_Y: cvim("y");  return false;
      case CVIM_U: cvim("u");  return false;
      case CVIM_I: cvim("i");  return false;
      case CVIM_O: cvim("o");  return false;
      case CVIM_P: cvim("p");  return false;

//    cvim("h") is disable because "OUTDNT:" from DefaultKeybindigs.dict doesn't work
      case CVIM_J: cvim("j");  return false;
      case CVIM_K: cvim("k");  return false;
      case CVIM_L: cvim("l");  return false;
      case CVIM_SP:cvim(" ");  return false;

      case CVIM_N: cvim("n");  return false;
      case CVIM_M: cvim("m");  return false;
      case CVIM_ES:cvim("\e"); return false;
      case CVIM_BS:cvim("\b"); return false;
      case CVIM_EN:cvim("\n"); return false;

// _XVIM
      case XVIM_Y: xvim("y");  return false;
      case XVIM_U: xvim("u");  return false;
      case XVIM_I: xvim("i");  return false;
      case XVIM_O: xvim("o");  return false;
      case XVIM_P: xvim("p");  return false;

      case XVIM_H: xvim("h");  return false;
      case XVIM_J: xvim("j");  return false;
      case XVIM_K: xvim("k");  return false;
      case XVIM_L: xvim("l");  return false;
      case XVIM_SP:xvim(" ");  return false;

      case XVIM_N:  xvim("n");  return false;
      case XVIM_M:  xvim("m");  return false;
      case XVIM_ES: xvim("\e"); return false;
      case XVIM_BS: xvim("\b"); return false;
      case XVIM_EN: xvim("\n"); return false;



/*            HSV COLORS            */
/*
#define HSV_MY_EMPTY          0,   0,   0  //   0,   0,   0  //   0°,   0.0%,   0.0%
#define HSV_MY_WHITE          0,   0, 255  //   0,   0, 255  //   0°,   0.0%, 100.0%
#define HSV_MY_RED            0, 255, 255  //   0, 255, 255  //   0°, 100.0%, 100.0%
#define HSV_MY_CORAL         11, 176, 255  //  16, 178, 255  //  16°,  69.8%, 100.0%
#define HSV_MY_ORANGE        28, 255, 255  //  30, 255, 255  //  30°, 100.0%, 100.0%
#define HSV_MY_GOLDENROD     30, 218, 218  //  43, 216, 217  //  43°,  84.8%,  85.1%
#define HSV_MY_GOLD          36, 255, 255  //  51, 255, 255  //  51°, 100.0%, 100.0%
#define HSV_MY_YELLOW        43, 255, 255  //  60, 255, 255  //  60°, 100.0%, 100.0%
#define HSV_MY_CHARTREUSE    64, 255, 255  //  90, 255, 255  //  90°, 100.0%, 100.0%
#define HSV_MY_GREEN         85, 255, 255  // 120, 255, 255  // 120°, 100.0%, 100.0%
#define HSV_MY_SPRINGGREEN  106, 255, 255  // 150, 255, 255  // 150°, 100.0%, 100.0%  
#define HSV_MY_TURQUOISE    123,  90, 112  // 174,  90, 110  // 174°,  35.5%,  43.1%
#define HSV_MY_TEAL         128, 255, 128  // 180, 255, 128  // 180°, 100.0%,  50.2%
#define HSV_MY_CYAN         128, 255, 255  // 180, 255, 255  // 180°, 100.0%, 100.0%
#define HSV_MY_AZURE        132, 102, 255  // 186, 102, 255  // 186°,  40.0%, 100.0%
#define HSV_MY_BLUE         170, 255, 255  // 240, 255, 255  // 240°, 100.0%, 100.0%
#define HSV_MY_PURPLE       191, 255, 255  // 269, 255, 255  // 269°, 100.0%, 100.0%   300 255 128  300 100.0 50.0
#define HSV_MY_MAGENTA      213, 255, 255  // 300, 255, 255  // 300°, 100.0%, 100.0%
#define HSV_MY_PINK         234, 128, 255  // 330, 127, 255  // 330°,  49.8%, 100.0%  wikipedia 330 59.0 100.0
*/



// [_RGBL]
/*
RGB COMMANDS
*/
      case RGB_HUI: rgblight_increase_hue_noeeprom();          return false;
      case RGB_HUD: rgblight_decrease_hue_noeeprom();          return false;
      case RGB_SAI: rgblight_increase_sat_noeeprom();          return false;
      case RGB_SAD: rgblight_decrease_sat_noeeprom();          return false;
      case RGB_VAI: rgblight_increase_val_noeeprom();          return false;
      case RGB_VAD: rgblight_decrease_val_noeeprom();          return false;

                 // Save the original setting to EEPROM before layer change, 
                 // and read it back and set it again after returning to base layer.
      case SAV_COL: set_default_hsv();
                    eeconfig_update_rgblight(rgblight_config.raw);
                    flashing_LEDs(10, RGB_MY_AZURE, RGB_MY_PURPLE);
                    return false;

      case GET_HSV: flashing_LEDs(5, RGB_MY_YELLOW, RGB_MY_PURPLE);
                    // SEND_STRING("\n===");
                    SEND_STRING("\nget_hsv() -> ");
                    get_hsv();
                    BEEP_1;
                    return false;

// [WHYWEDOTHIS]
// We reprogram RGB_TOG instead of using it because originally it save to eeprom,
// ... and we don't want to wear the eeprom down.
// We use this for saving and restoring current LEDs while toggling.                    
      case RGB_TOG: rgblight_toggle_noeeprom();
                    set_default_hsv();
                    //wait_ms(50);
                    wait_ms(10);
                    show_RGB_LEDs();
                    return false;
// [whywedothis]                    

/*
ROW 1 COLORS
*/
      case CH_RED:  rgblight_sethsv_noeeprom(HSV_MY_RED);           return false;
      case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_DARK_CORAL);    return false;
      case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE_RED);    return false;
      case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); return false;
      case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);          return false;
      // case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); return false;
      // case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE);      return false;
      // case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_GOLDENROD);   return false;
      // case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);        return false;

      case CH_YLLW: rgblight_sethsv(HSV_MY_YELLOW);                 return false;

/*
ROW 2 COLORS
*/
      case CH_CHRT: rgblight_sethsv_noeeprom(HSV_MY_CHARTREUSE);  return false;
      case CH_GREN: rgblight_sethsv_noeeprom(HSV_MY_GREEN);       return false;
      case CH_SPRG: rgblight_sethsv_noeeprom(HSV_MY_SPRINGGREEN); return false;
      case CH_TRQS: rgblight_sethsv_noeeprom(HSV_MY_TURQUOISE);   return false;
      case CH_TEAL: rgblight_sethsv_noeeprom(HSV_MY_TEAL);        return false;

      case CH_WHIT: rgblight_sethsv_noeeprom(HSV_MY_WHITE);       return false;

/*
ROW 3 COLORS
*/
      case CH_CYAN: rgblight_sethsv_noeeprom(HSV_MY_CYAN);        return false;
      case CH_AZUR: rgblight_sethsv_noeeprom(HSV_MY_AZURE);       return false;
      case CH_BLUE: rgblight_sethsv_noeeprom(HSV_MY_BLUE);        return false;
      case CH_PRPL: rgblight_sethsv_noeeprom(HSV_MY_PURPLE);      return false;
      case CH_MGNT: rgblight_sethsv(HSV_MY_MAGENTA);              return false;

      case CH_PINK: rgblight_sethsv_noeeprom(HSV_MY_PINK);        return false;

      case CH_EMPT: rgblight_sethsv_noeeprom(HSV_MY_EMPTY);       return false;

// [_rgbl]


      case DICTAD:
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false;
      case SIRI:
        register_code(KC_LGUI); register_code(KC_SPC);
        return false;

   // this line is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed
    }

  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {

      case CHANGE_SYMB_TO_NUMB:
                      layer_off(_NUMB);
                      if (symbols_pressed)
                      {
                        layer_on(_SYMB);
                      }

                      return false;

      case TH_L3_KAR_APPS:
                      karabiner_apps_working = false;
                      unregister_code(KC_F20);
                      if (apps_working)
                      {
                        if (multi_apps_karabiner)
                        {
                          multi_apps           = true;
                        }
                        layer_on(_APPS);
                      }
                      else
                      {
                        if (multi_apps_karabiner)
                        {
                          remove_activated_mod(current_flag);
                          // del_mods     (current_flag);
                          // del_weak_mods(current_flag);
                          // send_keyboard_report();

                          multi_apps_karabiner = false;
                        }
                        show_RGB_LEDs();
                      }
                      return false;

      case TH_L4_FUNC_RGBL:
                      if (state_number == _FUNC)
                      {
                         layer_off(_FUNC);
                      }
                      else
                      if (state_number == _RGBL)
                      {
                        layer_off(_RGBL);
                      }
                      return false;

      case TH_R1_DALY_MOUS:
                      if (state_number == _MOUS)
                      {
                         layer_off(_MOUS);
                      }
                      else
                      if (state_number == _DALY)
                      {
                        // remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                          // triggered_gui();
                          // remove_activated_mod(gui_flag);
                        }
                        layer_off(_DALY);
                      }
                      return false;

        case TH_R2_SYMB_FVIM:
                      if (state_number == _FVIM)
                      {
                        layer_off(_FVIM);
                      }
                      else
                      {
                        symbols_pressed = false;
                        if (state_number == _SYMB)
                        {
                          layer_off(_SYMB);
                        }
                      }
                      return false;
      // case LAUNCHING_APPS: apps_working = false;
      //                      layer_off(_APPS);
      //                      show_RGB_LEDs();
      //                      return false;
      case TH_R3_APPS_NUMB: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
                               {
                                 apps_working = false;
                                 layer_off(_APPS);
                               }
                               return false;

      case TH_R4_POWR_RGBL:
                      if (state_number == _POWR)
                      {
                         layer_off(_POWR);
                      }
                      else
                      if (state_number == _RGBL)
                      {
                        layer_off(_RGBL);
                      }
                      return false;
                      
      case KC_BSPC:  show_RGB_LEDs();
                     return true;
                    

      // case THUMB_L2_FVIM_SYMB_DALY_POWR_CAPSL:
      //                 if (state_number == _FVIM)
      //                 {
      //                   layer_off(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _SYMB)
      //                 {
      //                   layer_off(_SYMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _DALY)
      //                 {
      //                   layer_off(_DALY);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _POWR)
      //                 {
      //                   layer_off(_POWR);
      //                   return false;
      //                 }


      // case THUMB_R2_NUMB_DVIM_FVIM_MOUS_SP:
      //                 if (state_number == _NUMB)
      //                 {
      //                   layer_off(_NUMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _DVIM)
      //                 {
      //                   layer_off(_DVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _FVIM)
      //                 {
      //                   layer_off(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _MOUS)
      //                 {
      //                   layer_off(_MOUS);
      //                   return false;
      //                 }
      //                 else
      //                 {
      //                   unregister_code(KC_SPC);
      //                   return false;
      //                 }

 
// 🔥💀☠️🔥
                                  

     case KC_DEL:    if (state_number == _DALY)
                     {
                       rgblight_sethsv_noeeprom(COLOR_DALY);
                       return true;
                     }
                     show_RGB_LEDs();
                     return true;
                

      case CIRCU: circumflex_requested = false; // non-requested circumflex accent
      return false;                      // Skip all further processing of this key when released


      case GRAVE: grave_requested      = false;  // non-requested grave      accent
      return false;                      // Skip all further processing of this key when released

      case DIAER: diaeresis_requested  = false;  // non-requested diaeresis  accent
      return false;                      // Skip all further processing of this key when released


//       case MY_CLEAR:
//       case MY_RESET:

//       case TOG_ID:
//       case MY_STEP_INDICAT:


//       case SL_MEN:
//       case KA_DCK:
//       case KM_TOL:
//       case SH_STA:
//       case RT_FLO:


//       case VOL_1:
//       case VOL_8:
//       case BRIGHT_1:


//       case APP_Q_SNOTE:
//       case APP_W_TWTTR:
//       case APP_E_EVERN:
//       case APP_R_APSTO:
//       case APP_T_TERMI:

//       case APP_Y_TYPIN:
//       case APP_U_UROOM:
//       case APP_I_TEDIT:
//       case APP_O_OMNIF:
//       case APP_P_SPREF:

//       case APP_A_SCRPT:
//       case APP_S_SAFAR:
//       case APP_D_D_ONE:
//       case APP_F_FINDE:
//       case APP_G_CHRME:

//       case APP_H_SKTCH:
//       case APP_J_SUBLI:
//       case APP_K_KRBNR:
//       case APP_L_CLNDR:
//       case APPSP_EMPTY:

//       case APP_Z_STUDI:
//       case APP_X_XCODE:
//       case APP_C_CALCU:
//       case APP_V_KVIEW:
//       case APP_B_BOOKS:

//       case APP_N_NOTES:
//       case APP_M_MAIL:
//       case APP_ES_KEYN:
//       case APP_BS_PAGE:
//       case APP_EN_NUMB:

// // _FVIM
//    // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
//    // ... except for the 'H' key:
//       case FVIM_H:

//       case FVIM_M:
//       case FVIM_ES:
//       case FVIM_BS:
//       case FVIM_EN:
//    // _fvim


// // _DVIM
//       case DVIM_Y:
//       //   DVIM_uU is tap_dance
//       case DVIM_I:
//       case DVIM_O:
//       //   DVIM_pP is tap_dance

//       case DVIM_H:
//       case DVIM_J:
//       case DVIM_K:
//       case DVIM_L:
//       case DVIM_SP:

//       case DVIM_M:
//       case DVIM_ES:
//       case DVIM_BS:
//       case DVIM_EN: 

// /*
// // select _AVIM
// //            case AVIM_Y:
// //            case AVIM_N:
// // the rest of the keys are combination of _FVIM + SHIFT key            
// */

// // _CVIM
//       case CVIM_Y:
//       case CVIM_U:
//       case CVIM_I:
//       case CVIM_O:
//       case CVIM_P:

// //    case CVIM_H:
//       case CVIM_J:
//       case CVIM_K:
//       case CVIM_L:
//       case CVIM_SP:

//       case CVIM_N:
//       case CVIM_M:
//       case CVIM_ES:
//       case CVIM_BS:
//       case CVIM_EN:

// // _XVIM
//       case XVIM_Y:
//       case XVIM_U:
//       case XVIM_I:
//       case XVIM_O:
//       case XVIM_P:

//       case XVIM_H:
//       case XVIM_J:
//       case XVIM_K:
//       case XVIM_L:
//       case XVIM_SP:

//       case XVIM_N:
//       case XVIM_M:
//       case XVIM_ES:
//       case XVIM_BS:
//       case XVIM_EN:

//       case DICTAD:

// // [_RGBL]
//       case SAV_COL:
//       case GET_HSV:
//       case RGB_TOG: return false; // Skip all further processing of ALL these keys when released

      case RGB_HUI:
      case RGB_HUD:
      case RGB_SAI:
      case RGB_SAD:
      case RGB_VAI:
      case RGB_VAD:

      case CH_RED: 
      case CH_CORL:
      case CH_ORNG:
      case CH_GOLR:
      case CH_GOLD:

      case CH_YLLW:

      case CH_CHRT:
      case CH_GREN:
      case CH_SPRG:
      case CH_TRQS:
      case CH_TEAL:

      case CH_WHIT:

      case CH_CYAN:
      case CH_AZUR:
      case CH_BLUE:
      case CH_PRPL:
      case CH_MGNT:

      case CH_PINK:

      case CH_EMPT: set_default_hsv(); return false;
// [_rgbl]
                                     
     case SIRI:      unregister_code(KC_SPC);  unregister_code(KC_LGUI);
                     return false;


   // this line is responsible of the management of the releases for THE REST of the keys.
      default: return true; // Process all other keycodes normally when released
    }
  }
};
//                                                                                      //
//                                                                                      //
//                                  m  a  c  r   o  s                                   //
//                                                                                      //
//                                                                                      //
//                       p r o c e s s    r e c o r d    u s e r                        //
//                                                                                      //
// end of new macros way                                                                //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                      L A Y E R _S T A T E _ S E T _ U S E R                          //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                      P R E D E F I N E D      C O L O R S                            //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*              RGB COLORS
#define RGB_MY_EMPTY        0x00, 0x00, 0x00
#define RGB_MY_WHITE        0xFF, 0xFF, 0xFF
#define RGB_MY_RED          0xFF, 0x00, 0x00
#define RGB_MY_CORAL        0xFF, 0x7C, 0x4D
#define RGB_MY_ORANGE       0xFF, 0x80, 0x00
#define RGB_MY_GOLDENROD    0xD9, 0xA5, 0x21
#define RGB_MY_GOLD         0xFF, 0xD9, 0x00
#define RGB_MY_YELLOW       0xFF, 0xFF, 0x00
#define RGB_MY_CHARTREUSE   0x80, 0xFF, 0x00
#define RGB_MY_GREEN        0x00, 0xFF, 0x00
#define RGB_MY_SPRINGGREEN  0x00, 0xFF, 0x80
#define RGB_MY_TURQUOISE    0x47, 0x6E, 0x6A
#define RGB_MY_TEAL         0x00, 0x80, 0x80
#define RGB_MY_CYAN         0x00, 0xFF, 0xFF
#define RGB_MY_AZURE        0x99, 0xf5, 0xFF
#define RGB_MY_BLUE         0x00, 0x00, 0xFF
#define RGB_MY_PURPLE       0x7A, 0x00, 0xFF
#define RGB_MY_MAGENTA      0xFF, 0x00, 0xFF
#define RGB_MY_PINK         0xFF, 0x80, 0xBF
*/
//                                                                                      //
// p r e d e f i n e d      c o l o r s                                                 //
//////////////////////////////////////////////////////////////////////////////////////////

uint32_t layer_state_set_user(uint32_t state) {

// I have changed this variable to global   // int  state_number; //= 321; //biton32(state);
    state_number = biton32(state);

  switch (state_number) {
    case _DFLT:   //  0
//        active_layer = 0;

  numbers_is_active = false; // #01

  if (apps_just_activated)
  {
    apps_just_activated = false;

    if (!multi_apps)
    {
      HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
    }
    else
    {
      multi_apps           = false;
    }
  }
  if (karabiner_apps_working)
  {
    rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
  }
  else
  {
    show_RGB_LEDs();
  }

  break;     

//
// #define _DFLT   0  //  gherkin ALPHAS DEFAULT    layer 
// #define _ACCN   1  //  gherkin ACCENTS           layer 
// #define _NUMB   2  //  gherkin numbers           layer 
// #define _FVIM   3  //  Fake                  VIM layer
// /*
// #define _AVIM  X12X  //  select              VIM layer
// We don't use _AVIM because we use instead: 'SHIFT' for getting the same result, but easier and clearer !
// */
// #define _CVIM   4  //  power edition         VIM layer
// // #define _XVIM   5  //  movement              VIM layer
// #define _DVIM   5  //  Delete                VIM layer
// #define _MOUS   6  //  mouse                     layer
// #define _DALY   7  //  gherkin DAiLY commands    layer 
// #define _FUNC   8  //  gherkin functions         layer 
// #define _SYMB   9  // gherkin symbols           layer 
// #define _APPS  10  //  APPlicationS              layer
// #define _RGBL  11  //  backlight                 layer
// #define _POWR  12  //  POWER        productivity layer
//

     case _ACCN:   //  1
// //        active_layer = 1;
         rgblight_sethsv_noeeprom(COLOR_ACCN); // (0xD9, 0xA5, 0x21)
         break;

    case _NUMB:   //  2
//        active_layer = 2;
        numbers_is_active = true; // #01
//        send_string(string_state_number);
//        SEND_STRING("[_NUMB]");
//        rgblight_setrgb   (0x00,  0x00, 0xFF); // blue
        show_RGB_LEDs();
        break;

    case _FVIM:   //  3
//        active_layer = 3;
        rgblight_sethsv_noeeprom(COLOR_FVIM); // (0x00, 0x80, 0x80)
        break;
    case _CVIM:   // 4
//        active_layer = 4;
        rgblight_sethsv_noeeprom(COLOR_VIM_); // (320, 255, 255)
        break; 
    case _DVIM:   // 5
//        active_layer = 5;
        rgblight_sethsv_noeeprom(COLOR_DVIM); // (0xFF, 0x00, 0x00)
        break;

    case _MOUS:   // 6
//        active_layer = 6;
        rgblight_sethsv_noeeprom(COLOR_MOUS); // (0x00,  0xFF, 0x00)
        break;

    case _DALY:   //  7
//        active_layer = 7;
        rgblight_sethsv_noeeprom(COLOR_DALY); // (0x7A, 0x00, 0xFF)
        break;

    case _FUNC:   //  8
//        active_layer = 8;
        rgblight_sethsv_noeeprom(COLOR_FUNC); // (0x99, 0xF5, 0xFF)
        break;

    case _SYMB:   //  9
//        active_layer = 9;
        rgblight_sethsv_noeeprom(COLOR_SYMB); // (0x00,  0xFF, 0x00)
        break;

    case _APPS:   //  10
//        active_layer = 10;
        rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
        apps_just_activated = true;
        break;

    case _RGBL:   // 11
//      active_layer = 11;
        BEEP_1;
        break;

    case _POWR:   //  12
//        active_layer = 12;
        rgblight_sethsv_noeeprom(COLOR_POWR); // (0xFF, 0xFF, 0x00)
        break;

    default:  break;  //  for any other layers
//        active_layer = 13;
  };
  return state;
};




/*
uint32_t layer_state_set_user(uint32_t state) {
// I have changed this variable to global   // int  state_number; //= 321; //biton32(state);
    state_number = biton32(state);

    char string_state_number[4]; // = "ok.";
// [INFO]           //  convert an integer to string (for showing number layer)
// [STACKOVERFLOW]  //  first answer from Alexander Galkin
//  https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
    itoa(state_number, string_state_number, 10);
// [stackoverflow]
// [info]

  switch (state_number) {
    case _DFLT:   //  0
        active_layer = 0;
        numbers_is_active = false; // #01
//        rgblight_setrgb      (0x00, 0x00, 0x00);
//        rgblight_setrgb_range(0x00, 0x00, 0x00, INNER_RGHT - 2, INNER_LEFT_ANIMATION_START + 2);        
//        send_string(string_state_number);
//        SEND_STRING("[_DFLT]");
        if (hide_other_apps == true)
        {
          HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
          hide_other_apps = false;
        }
        show_RGB_LEDs();
        break; 

    case _ACCN:   //  1
        active_layer = 1;
        rgblight_sethsv_noeeprom(HSV_MY_GOLDENROD); // (0xD9, 0xA5, 0x21)
        break;
    
    case _NUMB:   //  3
        active_layer = 3;
        numbers_is_active = true; // #01
//        send_string(string_state_number);
//        SEND_STRING("[_NUMB]");
//        rgblight_setrgb   (0x00,  0x00, 0xFF); // blue
        show_RGB_LEDs();
        break;

    case _SYMB:   //  4
        active_layer = 4;
        rgblight_sethsv_noeeprom(HSV_MY_GREEN); // (0x00,  0xFF, 0x00)
        break;

    case _FUNC:   //  5
        active_layer = 5;
        rgblight_sethsv_noeeprom(HSV_MY_TURQUOISE); // (0x99, 0xF5, 0xFF)
        break;

    case _DALY:   //  6
        active_layer = 6;
        rgblight_sethsv_noeeprom(HSV_MY_PURPLE); // (0x7A, 0x00, 0xFF)
        break;

    case _APPS:   //  7
        active_layer = 7;
      rgblight_sethsv_noeeprom(HSV_MY_ORANGE); // (0xFF, 0x80, 0xBF)
      gui_flag = get_mods()&GUI_MODS;
      if (gui_flag)
      {
        hide_other_apps = true;
      }
      break;

    case _POWR:   //  8
        active_layer = 8;
        rgblight_sethsv_noeeprom(HSV_MY_YELLOW); // (0xFF, 0xFF, 0x00)
        break;

    case _FVIM:   //  9
        active_layer = 9;
        rgblight_sethsv_noeeprom(HSV_MY_MAGENTA); // (0x00, 0x80, 0x80)
        break;
    case _DVIM:   // 10
        active_layer = 10;
        rgblight_sethsv_noeeprom(HSV_MY_RED); // (0xFF, 0x00, 0x00)
        break;

    case _CVIM:   // 11
        active_layer = 11;
        rgblight_sethsv_noeeprom(HSV_MY_PINK); // (320, 255, 255)
        break;
    case _XVIM:   // 12
        active_layer = 12;
        rgblight_sethsv_noeeprom(HSV_MY_PINK); // (320, 255, 255)
        break; 

    case _MOUS:   // 14
        active_layer = 14;
        rgblight_sethsv_noeeprom(HSV_MY_CYAN); // (0x00,  0xFF, 0x00)
        break;

    case _RGBL:   // 15
        active_layer = 15;
        break;

    default: //  for any other layers
        active_layer = 16;
        break;
  };
  return state;
}; 
*/
//                                                                                      //
//                                                                                      //
//                      l a y e r _s t a t e _ s e t _ u s e r                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                   E N D    O F    T H E    Q M K    C O D E                          //
//                                                                                      //
//                   ####      T  H  E      E  N  D      ####                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
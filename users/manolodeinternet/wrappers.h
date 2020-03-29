#pragma once
#include "manolodeinternet.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// // clang-format off
// This code line is essential (needed) for Mini Dactyl keyboard firmware compilation
#define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// IT'S NOT NECESSARY !!! Z- next line is a must for gherkin
// #define KEYMAP_wrapper(...)                     LAYOUT(__VA_ARGS__) // good line of code
// Gherkin keyboard doesn't need any wrapper in my user space

// #define KEYMAP_wrapper(...)                     KEYMAP_MINI_D(__VA_ARGS__) // good line of code
// #define KEYMAP_wrapper(...)                     LAYOUT(__VA_ARGS__) // good line of code
// #define KEYMAP_wrapper(...)                     KEYMAP(__VA_ARGS__) // trying


// #define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// [MINE]
// #define KEYMAP_mini_dactyl_base(...)            KEYMAP(__VA_ARGS__)
// [mine]

// #define LAYOUT_ergodox_wrapper(...)          LAYOUT_ergodox(__VA_ARGS__)
// #define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)
// #define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)
// #define LAYOUT_ortho_5x12_wrapper(...)       LAYOUT_ortho_5x12(__VA_ARGS__)
// #define LAYOUT_gergo_wrapper(...)            LAYOUT_gergo(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts
NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

//[MINE]

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING SYMBOLS 4 ( FOR USING INTO 'ACTION_TAP_DANCE_DOUBLE(SYMBOL1, SYMBOL2)' )    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// [INFO] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
#define SYM_EURO         LSFT(LALT(KC_2))  // euro symbol
// [info]
#define SYM_I_QU      LSFT(LALT(KC_SLSH))  // inverted question mark
#define SYM_I_EX               LALT(KC_1)  // inverted exclamation mark
//                                                                                      //
// defining symbols 4 ( for using into 'action_tap_dance_double(symbol1, symbol2)' )    //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING _DALY COMMANDS 6                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

// COMMON KEYMAPS
#define CAP_SCRN          LSFT(LGUI(KC_3))  // Capture whole screen
#define CAP_SLDE          LSFT(LGUI(KC_4))  // Capture portion of screen
// [UNUSED]
//      KC_CPYW          LCTL   (CAP_SCRN)  // Copy whole screen       // LCTL (LSFT(LGUI(KC_3)))
//      KC_CPYP          LCTL   (CAP_SLDE)  // Copy portion of screen  // LCTL (LSFT(LGUI(KC_4)))
// [unused]

#define PREV_WIN     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_WIN           LGUI(KC_GRAVE)  //     next window
#define PREV_TAB       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_TAB             LCTL(KC_TAB)  //     next tab


#define APP_WIND            LCTL(KC_DOWN)  // applications windows
#define MISS_CTL              LCTL(KC_UP)  // mission control
#define    SPEAK               LCAG(KC_H)  // start/stop to speak selected text 
                                                //or all the text if any is selected
                                                // LCTL = Hold Left Control, Alt and GUI and press kc
// [SYSTEM PREFERENCES]
#define     DESK                    KC_F6  // show desktop
#define LANCHPAD                   KC_F17  // F17 (set at 'Sys.Pref./Keyboard/Shortcuts/Launchpad & Doc')
#define DSHBOARD                   KC_F18  // F18 (set at 'Sys.Pref./Keyboard/Shortcuts/Mission Control')
#define ACTV_WIN              LCTL(KC_F4)  // active window
#define FLOA_WIN              LCTL(KC_F6)  // floating window
// [system preferences]

#define REOPEN_L         LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define CLOSE_AP               LGUI(KC_Q)  // close application
#define CLOSE_WI               LGUI(KC_W)  // close window
#define CLOSE_TB               LGUI(KC_W)  // close tab

// [UNUSED]
#define AUT_FILL                    KC_F5  // autocompletion
#define PST_MTCH   LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
// 3ERD PARTY APPLICATIONS // SUBLIME COMMANDS
#define PST_HYST          LALT(LGUI(KC_V))   //PASTE (SUBLIME TEXT) FROM HISTORY
// 3erd party applications // sublime commands
// [unused]
//                                                                                      //
// defining _daly commands 6                                                            //
//////////////////////////////////////////////////////////////////////////////////////////














//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//miniDactyl
#define _DFLT   0  //  gherkin ALPHAS DEFAULT    layer 
#define _ACCN   1  //  gherkin ACCENTS           layer 
#define _NUMB   2  //  gherkin numbers           layer 
#define _FVIM   3  //  Fake                  VIM layer
#define _XVIM   4  //  power edition         VIM layer
#define _DVIM   5  //  Delete                VIM layer
#define _MOUS   6  //  mouse                     layer
#define _DALY   7  //  gherkin DAiLY commands    layer 
#define _FUNC   8  //  gherkin functions         layer 
#define _SYMB   9  //  gherkin symbols           layer 
#define _APPS  10  //  APPlicationS              layer
#define _LGHT  11  //  backlight                 layer
#define _POWR  12  //  POWER        productivity layer

// _CVIM is included at the right side of _XVIM
// #define _CVIM   5  //  movement              VIM layer

// We don't use _AVIM because we use instead: 'SHIFT' for getting the same result, but easier and clearer !
// #define _AVIM  X12X  //  select              VIM layer

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
/*
[EMPTY TEMPLATE]
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 *
 * 
 *                             < < < < < < < < <         > > > > > > > > > 
 *                            .-----------------.^      ^.-----------------.
 *                            |      L5|      L4|^      ^|R4      |R5      |
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                   .--------+--------+--------|^      ^|--------+--------|--------.
 *                   |L1      |L2      |L3      |^      ^|      R3|      R2|      R1|
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   '--------------------------'^      ^'--------------------------'
 *                  > > > > > > > > > > > > > > >        < < < < < < < < < < < < < < <
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            | _DFLT_LTHMB_RW1_|        | _DFLT_RTHMB_RW1_|
 *                            |        |        |        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |     _DFLT_LTHMB_RW2_     |        |     _DFLT_RTHMB_RW2_     |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
[empty template] 
 */

/*
==================
ACRONYM DICTIONARY
==================
{_F_CORE_}:       full core keymap
{_S_CORE_}:     simple core keymap

{__OVER_}: overcharged core keymap

  *  LEGENDS for all KEYMAPS:

  *  @@@@@@@@ key pressed previously for accesing current layer
  *  ( #### ) key pressed previously for accesing the layer where the trigger for current layer is.
              * i.e.: for accesing _XVIM we press 'V' and 'C'
                'V' is represented with '( #### )' and 'C' is represented with '@@@@@@@@'
  *  (( ## )) it's not necessary, you can access this layer directly, but maybe this is the ...
              key pressed previously for accesing the layer where the trigger for current layer is. 

  *   * get a keystroke through single tap
  *  ** get a keystroke through double tap
  *
  *   @
  *  @@
  *   H access a layer  through single hold (or modifier)   
  *  HH access a layer  through double hold (or clean all layers)

  *   G holding GUI modifier
  *   A holding ALT modifier
        [UNDERSTANDING]
         * HOLDING G+'Q' = HOLDING G+'P' = G[_1APP] = [SINGLE _APPS LAYER]
         * HOLDING   'Q' =           'P' =  [_APPS] =         [APPS LAYER]
        [understanding]

// [INFO]
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// [info]
==================
acronym dictionary
==================

[MANAGING MACROS]
#if defined(OVERCHARGED_ALPHAS)
# elif defined(MODIFIERS_ALPHAS) //#if defined(OVERCHARGED_ALPHAS)
#endif //# elif defined(MODIFIERS_ALPHAS)

#if defined(MINI_DACTYL_THUMBS)
#endif //#if defined(MINI_DACTYL_THUMBS)
[managing macros]
*/

// [_DFLT]
#if defined(OVERCHARGED_ALPHAS)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |G[_1APP]|        |        |        |        |        |        |        |        |        |G[_1APP]|
 * | [_APPS]| [_POWR]| [_LGHT]| [_FUNC]| [_SYMB]|        | [_NUMB]| [_FUNC]| [_LGHT]| [_POWR]| [_APPS]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |   LGui |   LSft | [_ACCN]|        | [_ACCN]|   LSft |   LGui |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   | Escape |Bckspace|  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | [_DALY]| [_DVIM]| [_MOUS]| [_FVIM]| [_NUMB]|        | [_SYMB]| [_FVIM]| [_XVIM]|        | [_DALY]|
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___DEFAULT_L1___ LT(_APPS, KC_Q),LT(_POWR, KC_W),LT(_LGHT, KC_E),LT(_FUNC, KC_R),LT(_SYMB,KC_T)
#define ___DEFAULT_L2___    LCTL_T(KC_A),   LALT_T(KC_S),   LGUI_T(KC_D),   LSFT_T(KC_F),LT(_ACCN,KC_G)
#define ___DEFAULT_L3___ LT(_DALY, KC_Z),LT(_DVIM, KC_X),LT(_MOUS, KC_C),LT(_FVIM, KC_V),LT(_NUMB,KC_B)

#define ___DEFAULT_R1___ LT(_NUMB,KC_Y),LT(_FUNC,KC_U), LT(_LGHT, KC_I),LT(_POWR,KC_O), LT(_APPS, KC_P)
#define ___DEFAULT_R2___ LT(_ACCN,KC_H),  LSFT_T(KC_J),    LGUI_T(KC_K),  LALT_T(KC_L),  LCTL_T(KC_SPC)
#define ___DEFAULT_R3___ LT(_SYMB,KC_N),LT(_FVIM,KC_M),LT(_XVIM,KC_ESC),       KC_BSPC,LT(_DALY,KC_ENT)

//#if defined(OVERCHARGED_ALPHAS)
#elif defined(MODIFIERS_ALPHAS)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |   LGui |   LSft |        |        |        |   LSft |   LGui |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   | Escape |Bckspace|  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___DEFAULT_L1___         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define ___DEFAULT_L2___ LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),         KC_G
#define ___DEFAULT_L3___         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B

#define      ___DEFAULT_R1___             KC_Y,         KC_U,         KC_I,         KC_O,          KC_P
#define      ___DEFAULT_R2___             KC_H, LSFT_T(KC_J), LGUI_T(KC_K), LALT_T(KC_L),LCTL_T(KC_SPC)
#define      ___DEFAULT_R3___             KC_N,         KC_M,       KC_ESC,      KC_BSPC,        KC_ENT

//#elif defined(MODIFIERS_ALPHAS)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |alt:RGBL|        |alt:RGBL|ONEshoot|
 *                            |        |        |        |        |  layer |
 *                            |        |        |        |        |        |
 *                            | [_MOUS]| [_FUNC]|        | [_POWR]| [_ACCN]|
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   | Delete |        |        |        |alt:NUMB|alt:FVIM|alt:MOUS|
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   | [_DVIM]| [_FVIM]| [_NUMB]|        | [_APPS]| [_SYMB]| [_DALY]|
 *                   '--------------------------'        '--------------------------'
 */
#define _DFLT_LTHMB_RW1_               LT(_MOUS,KC_TAB), TH_L4_FUNC_RGBL
#define _DFLT_LTHMB_RW2_ TD(DVIM_Del),        MO(_FVIM),         TT_NUMB /*TT(_NUMB)*/

#define      _DFLT_RTHMB_RW1_                        TH_R4_POWR_RGBL, OSL(_ACCN)
#define      _DFLT_RTHMB_RW2_                        TH_R3_APPS_NUMB, TH_R2_SYMB_FVIM, TH_R1_DALY_MOUS

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _DFLT 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_ACCN]
/* [_ACCN] = LAYER 01 : ACCENTS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX|        | XXXXXXX| XXXXXXX|        | XXXXXXX|    U   |    I   |    O   | XXXXXXX|
 * |        |        |    E   |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |@@@@@@@@|        |        |        |        |
 * |        | XXXXXXX| XXXXXXX| XXXXXXX|        |        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |    A   |  CIRCUM|  GRAVE |  DIAE- |        |        |        |  DIAE- |  GRAVE |  CIRCUM|        |
 * |        | -MFLEX |        | RESIS  |        |        |        | RESIS  |        |  -FLEX |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |    N   |        |        |        |        |
 * |   RCtl |   RAlt |  RGui  |  RSft  |        |        |        |  RSft  |  RGui  |  RAlt  |  RCtl  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___ACCENTS_L1___  XXXXXXX, XXXXXXX, F(ACC_E),XXXXXXX, XXXXXXX
#define ___ACCENTS_L2___ F(ACC_A),   CIRCU,    GRAVE,  DIAER, XXXXXXX
#define ___ACCENTS_L3___  KC_RCTL, KC_RALT,  KC_RGUI,KC_RSFT, XXXXXXX

#define      ___ACCENTS_R1___                             XXXXXXX, F(ACC_U), F(ACC_I), F(ACC_O), XXXXXXX
#define      ___ACCENTS_R2___                             XXXXXXX,    DIAER,    GRAVE,    CIRCU, XXXXXXX
#define      ___ACCENTS_R3___                             F(TIL_N), KC_RSFT,  KC_RGUI,  KC_RALT, KC_RCTL

#if defined(MINI_DACTYL_THUMBS)
/* [_ACCN] = LAYER 01 : ACCENTS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |  DIAE- |
 *                            |        |        |        |        | RESIS  |
 *                            |        | [_RGBL]|        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |   LSft |        |        |        |   LSft |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _ACCN_LTHMB_RW1_                      _______, MO(_RGBL)
#define _ACCN_LTHMB_RW2_             _______, KC_LSFT,   _______

#define      _ACCN_RTHMB_RW1_                                         MO(_POWR), DIAER
#define      _ACCN_RTHMB_RW2_                                         _______,   KC_LSFT, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _ACCN 01
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_NUMB]
#if defined(OVERCHARGED_ALPHAS)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |    %   |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |        |        |        |        |*  $    |        |*   /   |        |        |        |        |
 * |  enter |bckspace|   tab  |    =   |** EURO |        |@ NUMBON|    1   |    2   |    3   |    *   |
 * |        |        |        |        |@@NUMBOF|        |@@NUMBOF|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,      KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_PCMM),LSFT_T(KC_PDOT),   KC_PERC
#define ___NUMBERS_L3___        KC_PENT,       KC_BSPC,         KC_TAB,        KC_PEQL,TD(DENUOF)

#define      ___NUMBERS_R1___                                     KC_6,       KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                     KC_PMNS,    KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                     TD(SLNUMB), KC_1, KC_2, KC_3, KC_PAST

//# if defined(OVERCHARGED_ALPHAS)
#elif defined(MODIFIERS_ALPHAS)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |    %   |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |    =   |    $   |        |    /   |    1   |    2   |    3   |    *   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,   KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_PCMM),LSFT_T(KC_PDOT),KC_PERC
#define ___NUMBERS_L3___        KC_PENT,       KC_BSPC,         KC_TAB,        KC_PEQL, KC_DLR

#define      ___NUMBERS_R1___                                        KC_6,    KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                        KC_PMNS, KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                        KC_PSLS, KC_1, KC_2, KC_3, KC_PAST

//# elif defined(MODIFIERS_ALPHAS)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |  EURO  |
 *                            |        |        |        |        |        |
 *                            |        |        |        |  _POWR |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |  _SYMB |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _NUMB_LTHMB_RW1_                    _______, _______
#define _NUMB_LTHMB_RW2_           _______, _______, _______

#define      _NUMB_RTHMB_RW1_                                            MO(_POWR),  EURO
#define      _NUMB_RTHMB_RW2_                                            _______,    MO(_SYMB), _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _NUMB 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FVIM]
/* [_FVIM] = LAYER 03 : FAKE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | XXXXXXX|        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        |        |        |        |paragrph|  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |        |        |   Up   | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | Center |        |        |        |        |
 * |        |        |        |        | XXXXXXX|        |  Line  |        |        |        |        |
 * |        |        |        |        |        |        |   In   |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |  View  |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |        |        |        |        |        |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        | TOOGLE |        |        |paragrph|        |  Page  |  Page  |        |
 * |  LSft  |@[_DVIM]|@[_XVIM]|[_FVIM] |  LSft  |        |  Down  |  HOME  |   UP   |  DOWN  |   END  |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___FAKEVIM_L1___ KC_LEFT,     KC_UP,   KC_DOWN,   KC_RGHT, XXXXXXX
#define ___FAKEVIM_L2___ _______,   _______,   _______,   _______, XXXXXXX
#define ___FAKEVIM_L3___ KC_LSFT, MO(_DVIM), MO(_XVIM), TT(_FVIM), KC_LSFT

#define      ___FAKEVIM_R1___             C(G(KC_UP)), TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP)
#define      ___FAKEVIM_R2___                  FVIM_H,     KC_LEFT,      KC_UP,    KC_DOWN,     KC_RGHT
#define      ___FAKEVIM_R3___           C(G(KC_DOWN)),  A(KC_HOME), A(KC_PGUP), A(KC_PGDN),   A(KC_END)

#if defined(MINI_DACTYL_THUMBS)
/* [_FVIM] = LAYER 03 : FAKE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |@[_XVIM]|        |
 *                   '--------------------------'        '--------------------------'
 */
#define _FVIM_LTHMB_RW1_                      _______, _______
#define _FVIM_LTHMB_RW2_             _______, _______, _______

#define      _FVIM_RTHMB_RW1_                                         MO(_POWR), _______
#define      _FVIM_RTHMB_RW2_                                         _______,   MO(_XVIM), _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// MO(_DVIM),MO(_XVIM),MO(_FVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF _FVIM 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_XVIM]
/* [_XVIM] = LAYER 04 : EXTENDED EDITION VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |  Align |  Align |  Align |  Align |        |        | Insert |  Copy  | Duplict|  Copy  | Insert |
 * | to the | Justi- | in the | to the |Complete|        |  line  |  prev  | current|  next  |  line  |
 * |  right |  fied  | center |  left  |        |        |  above |paragrph|paragrph|paragrph|  below |
 * |        |        |        |        |        |        |paragrph|        |  below |        |paragrph|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |   60   | Trans  | Trans  |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  -pose |  -pose |  lines |  lines |        | Outdent| Upper  | Lower  | Capi   | Indent |
 * |   up   |  chars |  words |   up   |   up   |        |        |  -case |  -case | -talize|        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |@@@@@@@@|( #### )|        |        |        |(( ## ))|@@@@@@@@|        |        |
 * |   60   | Scroll | Scroll |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  page  |  page  |  lines |  lines |        |  Copy  |  Copy  |  Copy  |  Copy  |  Copy  |
 * |   down |  down  |   up   |   down |   down |        |charactr|  word  |  line  |paragrph|   ALL  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___EXT_VIM_L1___  XVIM_P,  XVIM_O,  XVIM_I, XVIM_U, XVIM_Y
#define ___EXT_VIM_L2___ XVIM_SP,  XVIM_L,  XVIM_K, XVIM_J, XVIM_H
#define ___EXT_VIM_L3___ XVIM_EN, XVIM_BS, XVIM_ES, XVIM_M, XVIM_N

#define      ___EXT_VIM_R1___                                 CVIM_Y, CVIM_U, CVIM_I,  CVIM_O,  CVIM_P
#define      ___EXT_VIM_R2___                                 OUTDNT, CVIM_J, CVIM_K,  CVIM_L,  CVIM_SP
#define      ___EXT_VIM_R3___                                 CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_XVIM] = LAYER 04 : EXTENDED EDITION VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |   UP   |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |  LEFT  |  DOWN  |  RIGHT |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _XVIM_LTHMB_RW1_                        KC_UP, _______
#define _XVIM_LTHMB_RW2_             KC_LEFT, KC_DOWN, KC_RGHT

#define      _XVIM_RTHMB_RW1_                                         MO(_POWR), _______
#define      _XVIM_RTHMB_RW2_                                         _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// [BUG]
// 'OUTDNT = LGUI(KC_LBRC)' implemented because 'OUTDNT:;' in 'DefaultKeyBinding.dict' doesn't work !!!
// ... it happens the same as in 'transposeWord:;' !!!
// [bug]
// END OF _XVIM 04
////////////////////////////////////////////////////////////////////////////////////////////////////###

// [_DVIM]
/* [_DVIM] = LAYER 05 : DELETE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |        |        |        |  Yank  |  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |        |        |        | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|        
 * |        |        |        |        |        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |   UP   |        |        |        |  Char  |  Line  |  Line  |  Char  |
 * |        |        |        |        |        |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|        
 * |        |@@@@@@@@|        |(( ## ))|        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |        |        |        |        |        |  Page  |  Page  |  until |
 * |        |        |  LEFT  |  DOWN  |  RIGHT |        |        |  HOME  |   Up  |   Down  |   END  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___DEL_VIM_L1___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ___DEL_VIM_L2___ XXXXXXX, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX
#define ___DEL_VIM_L3___ XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT

#define      ___DEL_VIM_R1___                        DVIM_Y,  TD(DVIM_uU), DVIM_I,  DVIM_O, TD(DVIM_pP)
#define      ___DEL_VIM_R2___                        DVIM_H,  DVIM_J,      DVIM_K,  DVIM_L,    DVIM_SP
#define      ___DEL_VIM_R3___                        XXXXXXX, DVIM_M,      DVIM_ES, DVIM_BS,   DVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_DVIM] = LAYER 05 : DELETE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _DVIM_LTHMB_RW1_                      _______, _______
#define _DVIM_LTHMB_RW2_             _______, _______, _______

#define      _DVIM_RTHMB_RW1_                                               MO(_POWR), _______
#define      _DVIM_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
//[BUG] DVIM_H is empty
//[bug]
//      DVIM_N is empty
// END OF _DVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_MOUS]
/* [_MOUS] = LAYER 06 : MOUSE LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |XXXXXXXX|XXXXXXXX|XXXXXXXX|XXXXXXXX|XXXXXXXX|        |        |  Wheel |  Wheel |  Wheel |  Wheel |
 * |        |        |        |        |        |        |        |  Left  |   Up   |  Down  |  Right |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |  Mouse |  Mouse |  Mouse |  Mouse |
 * |        |        |        |        |        |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |  LGui  |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |Accelera|Accelera|@@@@@@@@|Accelera|  Mouse |        |  Mouse |  Mouse |  Mouse |  Mouse |  Mouse |
 * |  -tion |  -tion |        |  -tion | Button |        | Button | Button | Button | Button | Button |
 * |    1   |    2   |        |    0   |    1   |        |    1   |    2   |    3   |    4   |    5   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____MOUSE_L1____ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ____MOUSE_L2____ _______, _______, _______, _______, KC_LGUI
#define ____MOUSE_L3____ KC_ACL1, KC_ACL2, XXXXXXX, KC_ACL0, KC_BTN1

#define      ____MOUSE_R1____                        XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R
#define      ____MOUSE_R2____                        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R
#define      ____MOUSE_R3____                        KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5

#if defined(MINI_DACTYL_THUMBS)
/* [_MOUS] = LAYER 06 : MOUSE LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |        |        |
 *                            |        |        |        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _MOUS_LTHMB_RW1_                      _______, _______
#define _MOUS_LTHMB_RW2_             _______, _______, _______

#define      _MOUS_RTHMB_RW1_                                               MO(_POWR), KC_UP
#define      _MOUS_RTHMB_RW2_                                               KC_LEFT,   KC_DOWN, KC_RGHT

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _MOUS 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DALY]
/* [_DALY] = LAYER 07 : DAILY COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        | Capture| Capture|        |        |        |        |        |        |        |
 * |   Tab  | Dicta  | Screen |  Slide |Floating|        |  Close |  Prev  |  Next  | Mission|  Desk  |
 * |        |  -tion |        |        | Window |        |   App  |   App  |   App  | Control|        |
 * |        |        |^:cpySCR|^:cpySLD|        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | Caps   |  Dash- |   Up   |  Speak | Active |        |  Close |  Prev  |  Next  | Windows| Space  |
 * |   lock |  board |        |        | Window |        | Window | Window | Window |  Apps  |    bar |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        | Reopen |        |        |        |        |        |        |
 * | Reverse|  Left  |  Down  |  Right |        |        |  Close |  Prev  |  Next  | Delete | Launch |
 * |   Tab  |        |        |        | Window |        |   Tab  |   Tab  |   Tab  |        |   -pad |
 * |@@@@@@@@|        |        |        |  / Tab |        |        |        |        |        |@@@@@@@@|
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____DAILY_L1____ KC_TAB,   DICTATION, CAP_SCRN, CAP_SLDE, FLOA_WIN
#define ____DAILY_L2____ F(CAPSL),  DSHBOARD,    KC_UP,    SPEAK, ACTV_WIN
#define ____DAILY_L3____ S(KC_TAB),  KC_LEFT,  KC_DOWN,  KC_RGHT, REOPEN_L

#define      ____DAILY_R1____                        CLOSE_AP, PREV_APP, NEXT_APP, MISS_CTL,     DESK
#define      ____DAILY_R2____                        CLOSE_WI, PREV_WIN, NEXT_WIN, APP_WIND, KC_SPACE
#define      ____DAILY_R3____                        CLOSE_TB, PREV_TAB, NEXT_TAB,   KC_DEL, LANCHPAD

#if defined(MINI_DACTYL_THUMBS)
/* [_DALY] = LAYER 07 : DAILY COMMANDS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |        |        |
 *                            |        |        |        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |CAPSLOCK|  SIRI  |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _DALY_LTHMB_RW1_                        KC_TAB, _______
#define _DALY_LTHMB_RW2_             _______, F(CAPSL),    SIRI

#define      _DALY_RTHMB_RW1_                                               MO(_POWR), KC_UP
#define      _DALY_RTHMB_RW2_                                               KC_LEFT,   KC_DOWN, KC_RGHT

//#if defined(MINI_DACTYL_THUMBS)
#endif
// ^ + Capture Screen = Copy Screen
// ^ + Capture Slide  = Copy Slide
// END OF _DALY 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FUNC]
/* [_FUNC] = LAYER 08 : FUNCTIONS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   F01  |   F02  |   F03  |   F04  |   F05  |        |   F06  |   F07  |   F08  |   F09  |   F10  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |KAR-APPS|
 * |        |        |        |        |        |        |        |        |        |        | trigger|
 * |   F11  |   F12  |   F13  |   F14  |   F15  |        |   F16  |   F17  |   F18  |   F19  |   F20  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |   fn   |        |        |        |   fn   |        |        |        |
 * |        |        |        | (Krbnr)|        |        |        | (Krbnr)|        |        |        |
 * |   F21  |   F22  |   F23  |   F24  |        |        |        |   F24  |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define __FUNCTIONS_L1__ KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5
#define __FUNCTIONS_L2__ KC_F11, KC_F12, KC_F13, KC_F14,  KC_F15
#define __FUNCTIONS_L3__ KC_F21, KC_F22, KC_F23, KC_F24, XXXXXXX

#define      __FUNCTIONS_R1__                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10
#define      __FUNCTIONS_R2__                        KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20
#define      __FUNCTIONS_R3__                        XXXXXXX,  KC_F24, XXXXXXX, XXXXXXX, XXXXXXX

#if defined(MINI_DACTYL_THUMBS)
/* [_FUNC] = LAYER 08 : FUNCTIONS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |   fn   |
 *                            |        |        |        |        | (Krbnr)|
 *                            |        |        |        | [_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |KAR-APPS|        |
 *                   |        |        |        |        |        | trigger|        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _FUNC_LTHMB_RW1_                       _______, _______
#define _FUNC_LTHMB_RW2_             _______,  _______, _______

#define      _FUNC_RTHMB_RW1_                                               MO(_POWR), KC_F24
#define      _FUNC_RTHMB_RW2_                                               _______,   KC_F20, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _FUNC 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_SYMB]
#if defined(OVERCHARGED_ALPHAS)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    +   |    =   |    #   |    *   |    %   |        |    @   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |   LSft |  LGui  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  !  ¡  |  ?  ¿  |  <     |  >  ^  | $ EURO |        |    ^   |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___SYMBOLS_L1___        KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,   KC_PERC
#define ___SYMBOLS_L2___ LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH),   KC_PIPE
#define ___SYMBOLS_L3___     TD(Z_EXCL),     TD(X_QUES),        KC_LABK,     TD(V_RACI),TD(G_DOEU)

#define      ___SYMBOLS_R1___                                 KC_AT, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS
#define      ___SYMBOLS_R2___ KC_AMPR,LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_COMM), LCTL_T(KC_DOT)
#define      ___SYMBOLS_R3___                               KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN

# elif defined(MODIFIERS_ALPHAS) //#if defined(OVERCHARGED_ALPHAS)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    +   |    =   |    #   |    *   |    %   |        |    @   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |   LSft |  LGui  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    !   |    ?   |    <   |    >   |    $   |        |    ^   |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___SYMBOLS_L1___        KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,KC_PERC
#define ___SYMBOLS_L2___ LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH),KC_PIPE
#define ___SYMBOLS_L3___        KC_EXLM,        KC_QUES,        KC_LABK,        KC_RABK, KC_DLR

#define      ___SYMBOLS_R1___                                 KC_AT, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS
#define      ___SYMBOLS_R2___ KC_AMPR,LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_COMM), LCTL_T(KC_DOT)
#define      ___SYMBOLS_R3___                               KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN
#endif //# elif defined(MODIFIERS_ALPHAS)

#if defined(MINI_DACTYL_THUMBS)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 *                            .-----------------.        .-----------------.
 *                            |inverted|inverted|        |        |        |
 *                            | exclam.|question|        |        |  EURO  |
 *                            |  mark  |  mark  |        |        |        |
 *                            |        |        |        |  _POWR |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |  / *   |   * /  |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        | [_NUMB]|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _SYMB_LTHMB_RW1_                               INV_EX,   INV_QU
#define _SYMB_LTHMB_RW2_      O_COMMENT, C_COMMENT, CHANGE_SYMB_TO_NUMB

#define      _SYMB_RTHMB_RW1_                                                MO(_POWR),  EURO
#define      _SYMB_RTHMB_RW2_                                                _______, _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _SYMB 09
////////////////////////////////////////////////////////////////////////////////////////////////////###

// [_APPS]
/* [_APPS] = LAYER 10 : APPLICATIONS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |@@@@@@@@|        |        |        |        |        |        |        |        |        |@@@@@@@@|
 * | SIMPLE | TWITTER|EVERNOTE|   APP  |TERMINAL|        |  TYPI  |  UROOM |TextEdit|  OMNI  | SYSTEM |
 * |  NOTE  |        |        |  STORE |        |        | -NATOR |        |        | -FOCUS | PREFE  |
 * |        |        |*qck_ent|        |   >_   |        |        |        |        |*qck_ent| -RENCES|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |XXXXXXXX|
 * |  APPLE |  SLACK |  DAY   | FINDER | GOOGLE |        | SKETCH | SUBLIME|KARBINER|CALENDAR|        |
 * | SCRIPT |(safari)|   ONE  |        | CHROME |        |        |  TEXT  |ELEMENTS|        |        |
 * |        |        |*qck_ent|        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | STUDIES|  XCODE | CALCU  |KARBINER|  BOOKS |        |  NOTES |  MAIL  | KEYNOTE|  PAGES | NUMBERS|
 * |        |        | -LATOR | EVENT  |        |        |        |        |        |        |        |
 * |        |        |        | VIEWER |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
// *QE*: QUICK ENTRY
// [PENDING]
// Feedly
// [pending]
*/
/*
#define __APPLICATS_L1__ APP_Q_SNOTE, APP_W_TWTTR, APP_E_EVERN, APP_R_APSTO, APP_T_TERMI
#define __APPLICATS_L2__ APP_A_SCRPT, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME
#define __APPLICATS_L3__ APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_KVIEW, APP_B_BOOKS

#define      __APPLICATS_R1__           APP_Y_TYPIN, APP_U_UROOM, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF
#define      __APPLICATS_R2__           APP_H_SKTCH, APP_J_SUBLI, APP_K_KRBNR, APP_L_CLNDR, APPSP_EMPTY
#define      __APPLICATS_R3__           APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB
*/
#define __APPLICATS_L1__ _______, _______, _______, _______, _______
#define __APPLICATS_L2__ _______, _______, _______, _______, _______
#define __APPLICATS_L3__ _______, _______, _______, _______, _______

#define      __APPLICATS_R1__           _______, _______, _______, _______, _______
#define      __APPLICATS_R2__           _______, _______, _______, _______, _______
#define      __APPLICATS_R3__           _______, _______, _______, _______, _______

#if defined(MINI_DACTYL_THUMBS)
/* [_APPS] = LAYER 10 : APPLICATIONS LAYER
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
 */
#define _APPS_LTHMB_RW1_                      _______,        _______
#define _APPS_LTHMB_RW2_             _______, _______, TH_L3_KAR_APPS

#define      _APPS_RTHMB_RW1_                                               MO(_POWR), _______
#define      _APPS_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF _APPS 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###




//[mine]





#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________COLEMAK_L1________________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________       KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2________________       KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________DVORAK_L1_________________        KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define _________________DVORAK_L2_________________        KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define _________________DVORAK_L3_________________        KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define _________________DVORAK_R1_________________        KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _________________DVORAK_R2_________________        KC_D,    KC_H,    KC_T,    KC_N,    KC_S
#define _________________DVORAK_R3_________________        KC_B,    KC_M,    KC_W,    KC_V,    KC_Z


#define _________________WHITE_R1__________________       KC_V,    KC_Y,    KC_D,    KC_COMM, KC_QUOT
#define _________________WHITE_R2__________________       KC_A,    KC_T,    KC_H,    KC_E,    KC_B
#define _________________WHITE_R3__________________       KC_P,    KC_K,    KC_G,    KC_W,    KC_Q

#define _________________WHITE_L1__________________       KC_INT1, KC_J,    KC_M,    KC_L,    KC_U
#define _________________WHITE_L2__________________       KC_MINS, KC_C,    KC_S,    KC_N,    KC_O  // KC_I
#define _________________WHITE_L3__________________       KC_X,    KC_R,    KC_F,    KC_DOT,  KC_Z


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________        _______, _______, _______, _______, _______


#define _________________LOWER_L1__________________        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________        _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________        _________________FUNC_RIGHT________________

#define _________________LOWER_R1__________________        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________        _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT



#define _________________RAISE_L1__________________        ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________        ___________________BLANK___________________
#define _________________RAISE_L3__________________        ___________________BLANK___________________

#define _________________RAISE_R1__________________        ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________        _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC
#define _________________RAISE_R3__________________        _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END



#define _________________ADJUST_L1_________________        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG
#define _________________ADJUST_L2_________________        MU_TOG , CK_TOGG, AU_ON,   AU_OFF,  CG_NORM
#define _________________ADJUST_L3_________________        RGB_RMOD,RGB_HUD,RGB_SAD, RGB_VAD, KC_RGB_T

#define _________________ADJUST_R1_________________        KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5
#define _________________ADJUST_R2_________________        CG_SWAP, QWERTY,  COLEMAK, DVORAK,  WORKMAN
#define _________________ADJUST_R3_________________        MG_NKRO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT

// clang-format on
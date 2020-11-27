#pragma once
#include "wrappers_defines.h"
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//miniDactyl
#define _DFLT  0  //  gherkin ALPHAS IAEOU DFLT layer
// #define _PINKY  1  //  PINKY DEMULTIPLIER        layer for not using notHomeRowPinkiesKeys (BFYX)
//                    //                                             nor inner right index keys (GH)
// _PINKY is implemented into _FVIM (BFYX) and _SYMB (GH) layers
#define _QWER   1  //  gherkin ALPHAS QWERT DFLT layer
#define _ACCN   2  //  gherkin ACCENTS           layer 
#define _NUMB   3  //  gherkin numbers           layer 
#define _FVIM   4  //  Fake                  VIM layer
#define _XVIM   5  //  power edition         VIM layer
#define _DVIM   6  //  Delete                VIM layer
#define _MOUS   7  //  mouse                     layer
#define _DALY   8  //  gherkin DAiLY commands    layer 
#define _FUNC   9  //  gherkin functions         layer 
#define _SYMB  10  //  gherkin symbols           layer 
#define _LEDS  11  //  backlight                 layer
#define _POWR  12  //  POWER        productivity layer
// #define _APPS  13  //  applications shortcuts    layer
#if defined(COMPREHENSIVE_30_LAYOUT)
    // #define _TEST  14  //  LAYER FOR TESTING               // must be over layer number 15 ...
    // #define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!
#elif defined(SIMPLE_30_LAYOUT)
    // #define _RGBL  _LGHT
#endif
//                                                                                      //
// defining layers                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// This code line is essential (needed) for compile Mini Dactyl keyboard firmware
#define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// This code line is essential (needed) for compile Gherkin keyboard firmware
#define KEYMAP_gherkin_wrapper(...)             LAYOUT_ortho_3x10(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts.
Organized so we can quickly adapt and modify all keyboards at once, rather than one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Modifiers on home row is on all of the layouts.
NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

/*
 * [EMPTY TEMPLATE]
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
 *                            |L5      |L4      |^      ^|      R4|      R5|
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

  *  ######## key pressed previously for accesing current layer via mirrored trigger
  *  @@@@@@@@ key pressed previously for accesing current layer
  *  ( @@@@ ) key pressed previously for accesing the layer where the trigger for current layer is.
              * i.e.: for accesing _XVIM we press 'V' and 'C'
                'V' is represented with '( @@@@ )' and 'C' is represented with '@@@@@@@@'
  *  (( @@ )) it's not necessary, you can access this layer directly, but maybe this is the ...
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
#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT) //#if defined(COMPREHENSIVE_30_LAYOUT)
#endif //#elif defined(SIMPLE_30_LAYOUT)

#if defined(MINI_DACTYL_THUMBS)
#endif //#if defined(MINI_DACTYL_THUMBS)
[managing macros]
*/

//[INFO]
/* Several cursors are availale at:

 * [_DVIM]   F
           C V B

 * [_FVIM] Q W E R
           J K L SP
                                   L5
 * [_XVIM] LEFT  THUMB CLUSTER: L1 L2 L3

                                             R5
 * [_MOUS] RIGHT THUMB CLUSTER:           R3 R2 R1  

 */
//[info]

/* [_DFLT] = LAYER 00 : UAIH DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    B   |    L   |    S   |    C   |BCKSPACE|        |    Z   |    ,   |    O   |    P   |    Y   |
 * |        |G[_1APP]|        |        |S-DELETE|        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    G   |    N   |    R   |    T   |    M   |        |    .   |    U   |    A   |    I   |    H   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_ACCN]|        |        |  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |S- ENTER|        |        |        |        |        |        |
 * |    F   |    J   |    V   |    D   |  SPACE |        |    E   |    W   |    K   |    Q   |    X   |
 * |        |        |        |        |A-ESCAPE|        |[_PINKY]|        |        |        |        |
 * |        | [_DALY]| [_MOUS]| [_NUMB]| [_SYMB]|        |[ _FVIM]| [_XVIM]| [_FUNC]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
// home/repos/keygen: customized by me (ieants KEYBOARD LAYOUT ANALYZER)
// link to original fork: 
// https://ieants.cc/code/keyboard/klatest/#/main
/*pub static ZUAIH_NEXT_BACKSPACE_LAYOUT: Layout = Layout(

          'B', 'L', 'S', 'C',  'KC_BSPC',                       'Z',    ,       'O', 'P', 'Y',
          'G', 'N', 'R', 'T',  'M',                             '.',    'U',    'A', 'I', 'H',
          'F', 'J', 'V', 'D',  'KC_SPC',                        'E',    'W',    'K', 'Q', 'X', 
*/
#if defined(COMPREHENSIVE_30_LAYOUT)
#define ____DFLT___L1___           KC_B,  TD(L_APPS),LT(_POWR,KC_S),LT(_LEDS,KC_C), _DVIM_BS
#define ____DFLT___L2___    LCTL_T(KC_G),LSFT_T(KC_N),  LALT_T(KC_R),     LGUI_T(KC_T), LT(_ACCN,KC_M)
#define ____DFLT___L3___           KC_F, LT(_DALY,KC_J),LT(_MOUS,KC_V),  LT(_NUMB,KC_D),  _SYM_SPC

#define ____DFLT___R1___            KC_Z , LT(_LEDS,KC_COMM),LT(_POWR,KC_O),     TD(R_APPS), KC_Y
#define ____DFLT___R2___           KC_DOT,   LGUI_T(KC_U),  LALT_T(KC_A),   LSFT_T(KC_I),  LCTL_T(KC_H)
#define ____DFLT___R3___           LT(_FVIM,KC_E),LT(_SYMB,KC_W),LT(_XVIM,KC_K),LT(_DALY, KC_Q), KC_X

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_DFLT] = LAYER 00 : UAIH DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    B   |    L   |    S   |    C   |BCKSPACE|        |    Z   |    ,   |    O   |    P   |    Y   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    G   |    N   |    R   |    T   |    M   |        |    .   |    U   |    A   |    I   |    H   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    F   |    J   |    V   |    D   |  SPACE |        |    E   |    W   |    K   |    Q   |    X   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____DFLT___L1___        KC_Y,         KC_P,         KC_O,         KC_COMM,       KC_BSPC
#define ____DFLT___L2___ LCTL_T(KC_H), LSFT_T(KC_I), LALT_T(KC_A), LGUI_T(KC_U),         KC_DOT
#define ____DFLT___L3___        KC_X,         KC_Q,         KC_K,         KC_W,          KC_E

#define ____DFLT___R1___             KC_Z,              KC_C,         KC_S,         KC_L,         KC_B
#define ____DFLT___R2___             KC_M,       LGUI_T(KC_T), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_G)
#define ____DFLT___R3___            _SYM_SPC,           KC_D,         KC_V,         KC_J,         KC_F
//#elif defined(SIMPLE_30_LAYOUT)
#endif
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_DFLT] 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
// COMMON THUMB CLUSTER FOR BOTH DEFAULT LAYERS: _DFLT & _QWER
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
#if defined(MINI_DACTYL_THUMBS)
// [_DFLT] = LAYER 00 :  _DFLT (UAIH) DEFAULT LAYER
// [_QWER] = LAYER 00 : _QWER         DEFAULT LAYER
/* [DFLT] = LAYER 00 :          _DFLT DEFAULT LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |ONEshoot|
 *                            |        |   Tab  |        |        |  layer |
 *                            |        |        |        |        |        |
 *                            |@[_LEDS]|@[_FUNC]|        |@[_POWR]|@[_ACCN]|
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   | Delete |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |@[_DVIM]|@[_SYMB]|@[_NUMB]|        |@[_APPS]|@[_FVIM]|@[_DALY]|
 *                   '--------------------------'        '--------------------------'
 */
// MO(_DALY) instead of OSL(_DALY) is for not getting stucked in _DVIM layer, I don't know why !
#define _DFLT_LTHMB_RW1_            LT(_LEDS, KC_TAB), OSL(_FUNC)
#define _DFLT_LTHMB_RW2_        MO(_DALY), OSL(_SYMB),    TT_NUMB  // TT(_NUMB)is slower than TT_NUMB

#define      _DFLT_RTHMB_RW1_                              MO(_POWR),          OSL(_ACCN)
#define      _DFLT_RTHMB_RW2_                              TH_R3_APPS_TRIGGER, OSL(_FVIM), TD(DVIM_Del)
//#if defined(MINI_DACTYL_THUMBS)
#endif
//
// common thumb cluster for both default layers: _DFLT & _QWER
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_QWER]
/* [_QWER] = LAYER 01 : QWERT DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_ACCN]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   |  Enter |Bckspace| Escape |
 * |        |        |        |        |        |        |[_PINKY]|        |        |        |        |
 * |        | [_DALY]| [_MOUS]| [_NUMB]| [_SYMB]|        |[ _FVIM]| [_XVIM]| [_FUNC]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#if defined(COMPREHENSIVE_30_LAYOUT)

#define ____QWER__L1___         KC_Q ,     TD(L_APPS), LT(_POWR, KC_E), LT(_LEDS, KC_R), LT(_DVIM,KC_T) //TD(APPS_Q)
#define ____QWER__L2___  LCTL_T(KC_A),   LSFT_T(KC_S),    LALT_T(KC_D),    LGUI_T(KC_F), LT(_ACCN,KC_G)
#define ____QWER__L3___          KC_Z, LT(_DALY,KC_X), LT(_MOUS, KC_C), LT(_NUMB, KC_V), LT(_SYMB,KC_B)

#define ____QWER__R1___          KC_Y ,LT(_LEDS,KC_U), LT(_POWR, KC_I),       TD(R_APPS),       KC_P //TD(APPS_P)
#define ____QWER__R2___ LT(_ACCN,KC_H),  LGUI_T(KC_J),    LALT_T(KC_K),     LSFT_T(KC_L),LCTL_T(KC_SPC)
#define ____QWER__R3___ LT(_FVIM,KC_N),LT(_XVIM,KC_M),LT(_FUNC,KC_ENT),LT(_DALY,KC_BSPC),       KC_ESC

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_QWER] = LAYER 01 : QWERT DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   |  Enter |Bckspace| Escape |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____QWER__L1___         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define ____QWER__L2___ LCTL_T(KC_A), LSFT_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F),         KC_G
#define ____QWER__L3___         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B

#define      ____QWER__R1___             KC_Y,         KC_U,         KC_I,         KC_O,          KC_P
#define      ____QWER__R2___             KC_H, LGUI_T(KC_J), LALT_T(KC_K),  LSFT_T(KC_L),LCTL_T(KC_SPC) // [BUG] KC_SPC instead of KC_J
#define      ____QWER__R3___             KC_N,         KC_M,       KC_ENT,      KC_BSPC,        KC_ESC  // BSPC_DEL // [bug]
//#elif defined(SIMPLE_30_LAYOUT)
#endif
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_QWER] 01
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_ACCN]
/* [_ACCN] = LAYER 02 : ACCENTS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| CIRCUM-| XXXXXXX|        | XXXXXXX| XXXXXXX|    O   | XXXXXXX| XXXXXXX|
 * |        |        |        | FLEX   |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * | XXXXXXX|    N   |  GRAVE |  DIAE- |        |        | XXXXXXX|    U   |    A   |    I   | XXXXXXX|
 * |        |        |        |  RESIS |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|        |        |    E   | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        | L_Shift|        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */

#define ___ACCENTS_L1___  XXXXXXX,  XXXXXXX, XXXXXXX,   CIRCU, XXXXXXX
#define ___ACCENTS_L2___  XXXXXXX, F(TIL_N),   GRAVE,   DIAER, XXXXXXX
#define ___ACCENTS_L3___  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT

#define      ___ACCENTS_R1___                            XXXXXXX,  XXXXXXX, F(ACC_O),  XXXXXXX, XXXXXXX
#define      ___ACCENTS_R2___                            XXXXXXX, F(ACC_U), F(ACC_A), F(ACC_I), XXXXXXX
#define      ___ACCENTS_R3___                           F(ACC_E),  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX
#if defined(MINI_DACTYL_THUMBS)
/* [_ACCN] = LAYER 02 : ACCENTS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |@@@@@@@@|
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|@[_MOUS]|
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |  GRAVE |  DIAE- |   CIR  |        |        |        |        |
 *                   |        | RESIS  |-CUMFLEX|        |        |        |        |
 *                   |        |        |        |        |@[_NUMB]|@[_SYMB]|@[_DALY]|
 *                   '--------------------------'        '--------------------------'
 */
#define _ACCN_LTHMB_RW1_        XXXXXXX, XXXXXXX
#define _ACCN_LTHMB_RW2_ GRAVE,   DIAER,   CIRCU

// With 'OSL(_MOUS)' it allow us not twist our fingers for access mirrored layer trigger keys
// We can tap it and then: hold the mirrored layer trigger
#define    _ACCN_RTHMB_RW1_                              OSL(_POWR), OSL(_MOUS) //🔥🔥🔥
#define    _ACCN_RTHMB_RW2_                              OSL(_NUMB), OSL(_SYMB), OSL(_DALY)//OSL(_DVIM)
                                                       // get stuck and doesn't return to default layer
//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_ACCN] 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_NUMB]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_NUMB] = LAYER 03 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |*  $    |        |    -   |    4   |    5   |    6   |    +   |
 * |        |        |        |        |** EURO |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |@@@@@@@@|        |        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |*  EURO |*   =   |        |*   /   |    1   |    2   |    3   |    *   |
 * |        |        |        |        |**  %   |        |@ NUMBON|        |        |        |        |
 * |        |        |        |@@NUMBOF|        |        |@@NUMBOF|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,       KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LSFT_T(KC_DEL),LALT_T(KC_COMM), LGUI_T(KC_DOT), TD(R_DOEU)
#define ___NUMBERS_L3___         KC_TAB,       KC_BSPC,        KC_PENT,     TD(NUMBOF), TD(B_EQPE)

#define      ___NUMBERS_R1___                                     KC_6,       KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                     KC_PMNS,    KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                     TD(SLNUMB), KC_1, KC_2, KC_3, KC_PAST

//# if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_NUMB] = LAYER 03 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |*  $    |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |** EURO |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |*   =   |  EURO  |        |    /   |    1   |    2   |    3   |    *   |
 * |        |        |        |**  %   |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___NUMBERS_L1___           KC_1,           KC_2,            KC_3,           KC_4,       KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC), LSFT_T(KC_DEL), LALT_T(KC_COMM), LGUI_T(KC_DOT), TD(R_DOEU)
#define ___NUMBERS_L3___         KC_TAB,        KC_BSPC,         KC_PENT,     TD(B_EQPE),       EURO

#define      ___NUMBERS_R1___                                        KC_6,    KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                        KC_PMNS, KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                        KC_PSLS, KC_1, KC_2, KC_3, KC_PAST

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_NUMB] = LAYER 03 : NUMBERS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |   TAB  |        |        |        |  EURO  |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |@@@@@@@@|        |        |        |        |
 *                   |        |        |        |        | XXXXXXX|        |        |
 *                   |        |        | Toggle |        |        |        |        |
 *                   |        |@[_SYMB]|@[_NUMB]|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _NUMB_LTHMB_RW1_                     KC_TAB, _______
#define _NUMB_LTHMB_RW2_           _______, _______, _______

#define      _NUMB_RTHMB_RW1_                                               MO(_POWR), EURO
#define      _NUMB_RTHMB_RW2_                                               XXXXXXX,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_NUMB] 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_FVIM]
/* [_FVIM] = LAYER 04 : FAKE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        | Center |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT |  Line  |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        |        |   in   |        |paragrph|  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |  View  |        |   Up   | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |    B   |    F   |    Y   |   X    |        |  Shift |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |        |        |        |        |        |        |paragrph|        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |  Down  |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |  Mouse |  Mouse |        |        |        |@@@@@@@@|        |        |        |        |
 * |        | Button | Button |        |        |        |        |  Move  |  Move  |  Move  |  Move  |
 * |        |    2   |    1   | TOOGLE |        |        | TOOGLE |        |  Page  |  Page  |        |
 * |        |        |        | [_FVIM]| [_XVIM]|        | [_FVIM]|  HOME  |   UP   |  DOWN  |   END  |
 * '--------------------------------------------'        '--------------------------------------------'
*/
// PINKIES DEFINITION
#define PINKY_1  LSFT_T(KC_B)
#define PINKY_2  LALT_T(KC_F)
#define PINKY_3  LGUI_T(KC_Y)
#define PINKY_4  KC_X
// pinkies definition
#define ___FAKEVIM_L1___      KC_LEFT,     KC_UP,   KC_DOWN,   KC_RGHT,   FVIM_H
#define ___FAKEVIM_L2___      KC_LCTL,   PINKY_1,   PINKY_2,   PINKY_3,  PINKY_4
#define ___FAKEVIM_L3___      XXXXXXX,   KC_BTN2,   KC_BTN1, TT(_FVIM), MO(_XVIM)

// WITHOUT CAMEL CASE JUMPS
// #define ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP)
#define ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), TD(FVIM_iI), TD(FVIM_oO), TD(FVIM_pP)
#define ___FAKEVIM_R2___ C(G(KC_DOWN)), KC_LEFT,     KC_UP,       KC_DOWN,     KC_RGHT
#define ___FAKEVIM_R3___ TT(_FVIM),     A(KC_HOME),  A(KC_PGUP),  A(KC_PGDN),  A(KC_END)

#if defined(MINI_DACTYL_THUMBS)
/* [_FVIM] = LAYER 04 : FAKE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |@[_MOUS]|        |        |@[_POWR]|@[_MOUS]|
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |@@@@@@@@|        |
 *                   |        |        |        |        |        |        |        |
 *                   |        | TOGGLE |        |        |        | TOGGLE |        |
 *                   |@[_DVIM]|@[_FVIM]|@[_XVIM]|        |@[_XVIM]|@[_FVIM]|@[_DVIM]|
 *                   '--------------------------'        '--------------------------'
 */
#define _FVIM_LTHMB_RW1_                      MO(_MOUS),   _______
#define _FVIM_LTHMB_RW2_           MO(_DVIM), TT(_FVIM), MO(_XVIM)

#define      _FVIM_RTHMB_RW1_                                           MO(_POWR), MO(_MOUS)
#define      _FVIM_RTHMB_RW2_                                           MO(_XVIM), TT(_FVIM), MO(_DVIM)

//#if defined(MINI_DACTYL_THUMBS)
#endif
// MO(_DVIM),MO(_XVIM),MO(_FVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF [_FVIM] 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_XVIM]
/* [_XVIM] = LAYER 05 : EXTENDED EDITION VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |  Align |  Align |  Align |  Align |        |        |Duplicat|  Copy  |  Copy  |  Copy  | Insert |
 * | to the | Justi- | in the | to the |Complete|        | current|  prev  |  next  |  next  |  line  |
 * |  left  |  fied  | center |  right |        |        |paragrph|paragrph|paragrph|paragrph|  below |
 * |        |        |        |        |        |        |  below |        |        |        |paragrph|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |   60   | Trans  | Trans  |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  -pose |  -pose |  lines |  lines |        | Outdent| Upper  | Lower  | Capi   | Indent |
 * |   up   |  chars |  words |   up   |   up   |        |        |  -case |  -case | -talize|        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |( @@@@ )|        |        |        |@@@@@@@@|        |        |        |
 * |   60   | Scroll | Scroll |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  page  |  page  |  lines |  lines |        |  Copy  |  Copy  |  Copy  |  Copy  |  Copy  |
 * |   down |   up   |  down  |   down |   down |        |charactr|  word  |  line  |paragrph|   ALL  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___EXT_VIM_L1___ XVIM_U,   XVIM_O,  XVIM_I, XVIM_P, XVIM_Y
#define ___EXT_VIM_L2___ XVIM_SP,  XVIM_L,  XVIM_K, XVIM_J, XVIM_H
#define ___EXT_VIM_L3___ XVIM_EN, XVIM_ES, XVIM_BS, XVIM_M, XVIM_N

// #define      ___EXT_VIM_R1___ /* OUTDNT & INDENT must exist */CVIM_Y, CVIM_U, CVIM_I,  CVIM_O,  CVIM_P
#define      ___EXT_VIM_R1___ /* OUTDNT & INDENT must exist */CVIM_I, CVIM_U, CVIM_O,  CVIM_Y,  CVIM_P
#define      ___EXT_VIM_R2___ /* CVIM_H doesn't work */       OUTDNT, CVIM_J, CVIM_K,  CVIM_L,  INDENT
#define      ___EXT_VIM_R3___ /*and CVIM_SP neither in Xcode*/CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_XVIM] = LAYER 05 : EXTENDED EDITION VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |@@@@@@@@|        |@@@@@@@@|        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _XVIM_LTHMB_RW1_                      _______, _______
#define _XVIM_LTHMB_RW2_             _______, _______, _______

#define            _XVIM_RTHMB_RW1_                                         MO(_POWR), _______
#define            _XVIM_RTHMB_RW2_                                         _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// [BUG]
// 'OUTDNT = LGUI(KC_LBRC)' implemented because 'OUTDNT:;' in 'DefaultKeyBinding.dict' doesn't work !!!
// ... it happens the same as in 'transposeWord:;' !!!
// [bug]
// END OF [_XVIM] 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DVIM]
/* [_DVIM] = LAYER 06 : DELETE VIM LAYER
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
 * |        |@@@@@@@@|        |(( @@ ))|        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |        |        |        |        |  until |  Page  |  Page  |  until |
 * |        |        |  LEFT  |  DOWN  |  RIGHT |        |        |  HOME  |   Up   |  Down  |   END  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */                                                                  // [DELETEME]
#define ___DEL_VIM_L1___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX // delete arrows from _DVIM ...
#define ___DEL_VIM_L2___ XXXXXXX, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX //...because _DALY has it yet in D XCV !
#define ___DEL_VIM_L3___ XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT // [deleteme]

#define      ___DEL_VIM_R1___                        DVIM_Y,  TD(DVIM_uU), DVIM_I,  DVIM_O, TD(DVIM_pP)
#define      ___DEL_VIM_R2___                        DVIM_H,  DVIM_J,      DVIM_K,  DVIM_L,    DVIM_SP
#define      ___DEL_VIM_R3___                        XXXXXXX, DVIM_M,      DVIM_ES, DVIM_BS,   DVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_DVIM] = LAYER 06 : DELETE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |@@@@@@@@|
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
// END OF [_DVIM] 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_MOUS]
/* [_MOUS] = LAYER 07 : MOUSE LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |  Mouse |        |        |        |        |        |        |
 * |  Mouse |  Mouse |  Mouse |  Mouse | Button |        |        |  Wheel |  Wheel |  Wheel |  Wheel |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT |    3   |        |        |  Left  |   Up   |  Down  |  Right |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |  Mouse |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | Button |        |        |  Mouse |  Mouse |  Mouse |  Mouse |
 * |        |        |        |        |    2   |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |Accelera|Accelera|@@@@@@@@|Accelera|  Mouse |        |  Mouse |  Mouse |  Mouse |  Mouse |  Mouse |
 * |  -tion |  -tion |        |  -tion | Button |        | Button | Button | Button | Button | Button |
 * |    1   |    2   |        |    0   |    1   |        |    1   |    2   |    3   |    4   |    5   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____MOUSE_L1____         KC_MS_L,       KC_MS_U,         KC_MS_D,         KC_MS_R, KC_BTN3
#define ____MOUSE_L2____ LCTL_T(KC_LEFT), LALT_T(KC_UP), LSFT_T(KC_DOWN), LGUI_T(KC_RGHT), KC_BTN2
#define ____MOUSE_L3____         KC_ACL2,       KC_ACL1,         XXXXXXX,         KC_ACL0, KC_BTN1

#define      ____MOUSE_R1____                        XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R
#define      ____MOUSE_R2____                        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R
#define      ____MOUSE_R3____                        KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5

#if defined(MINI_DACTYL_THUMBS)
/* [_MOUS] = LAYER 07 : MOUSE LAYER
 *                            .-----------------.        .-----------------.
 *                            |@@@@@@@@|        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |        |        |
 *                            |@[_ACCN]|@[_POWR]|        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   |@[_DALY]|@[_FVIM]|@[_APPS]|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _MOUS_LTHMB_RW1_               _______, _______
#define _MOUS_LTHMB_RW2_      _______, _______, _______

#define      _MOUS_RTHMB_RW1_                                               MO(_POWR), _______
#define      _MOUS_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_MOUS] 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DALY]
/* [_DALY] = LAYER 08 : DAILY COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        | Capture| Capture|        |        |        |        |        |        |        |
 * |  Dicta | Speak  | Screen |  Slide |Floating|        |  Close |  Prev  |  Next  |Applicat| Mission|
 * |  -tion |        |        |        | Window |        |   App  |   App  |   App  | windows| Control|
 * |        |        |^:cpySCR|^:cpySLD|        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  Dash- | Launch-|   Tab  |  Caps  | Active |        |  Close |  Prev  |  Next  |  DESK  |Notific.|
 * |  board |   pad  |        |  lock  | Window |        | Window | Window | Window |        | Center |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |@@@@@@@@|        |        |        |        |        |        |        |@@@@@@@@|        |
 * |        |        |  Play  |        | Reopen |        |  Close |  Prev  |  Next  |Previous|  Next  |
 * |  SIRI  | Rewind |   ...  | Forward| Window |        |   Tab  |   Tab  |   Tab  | browser| browser|
 * |        |        |  Pause |        |  / Tab |        |        |        |        |  page  |  page  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____DAILY_L1____ DICTATION,    SPEAK,   CAP_SCRN, CAP_SLDE, FLOA_WIN
#define ____DAILY_L2____  DSHBOARD, LANCHPAD,     KC_TAB, F(CAPSL), ACTV_WIN
#define ____DAILY_L3____      SIRI,   REWIND, PLAY_PAUSE,  FORWARD, REOPEN_L

#define      ____DAILY_R1____                        CLOSE_AP, PREV_APP, NEXT_APP, APP_WIND,  MISS_CTL
#define      ____DAILY_R2____                        CLOSE_WI, PREV_WIN, NEXT_WIN, DESK,      NOTF_CNT
#define      ____DAILY_R3____                        CLOSE_TB, PREV_TAB, NEXT_TAB, PREV_PAGE, NEXT_PAGE

#if defined(MINI_DACTYL_THUMBS)
/* [_DALY] = LAYER 08 : DAILY COMMANDS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |  Tab   |        |        |   Tab  |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |@@@@@@@@|        |        |        |        |        |        |
 *                   |        |        |        |        |  SIRI  |CAPSLOCK|        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _DALY_LTHMB_RW1_                   KC_TAB, _______  
#define _DALY_LTHMB_RW2_         _______, _______, _______

#define      _DALY_RTHMB_RW1_                                              MO(_POWR), KC_TAB
#define      _DALY_RTHMB_RW2_                                              SIRI,      F(CAPSL), _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// ^ + Capture Screen = Copy Screen
// ^ + Capture Slide  = Copy Slide
// END OF [_DALY] 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FUNC]
/* [_FUNC] = LAYER 09 : FUNCTIONS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   F01  |   F02  |   F03  |   F04  |   F05  |        |   F06  |   F07  |   F08  |   F09  |   F10  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   F11  |   F12  |   F13  |   F14  |   F15  |        |   F16  |   F17  |   F18  |   F19  |   F20  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |  LGui  |  LSft  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |   fn   |KAR-APPS|        |        |        |        |        |        |        |KAR-APPS|   fn   |
 * | (Krbnr)| trigger|        |        |        |        |        |        |        | trigger| (Krbnr)|
 * |   F21  |   F22  |   F23  |   F24  |        |        |        |        |        |   F22  |   F21  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/*  KEYBOARD -> SHORTCUTS -> DISPLAY
      Decrease display brightness                           F13
      Increase display brightness                           F14
 *  KEYBOARD -> SHORTCUTS -> LAUNCHPAD & DOCK
      Show Launchpad                                        F15
 *  KEYBOARD -> SHORTCUTS -> MISSION CONTROL
      Show Desktop                                          F16 
      Show Dashboard                                        F17
      Show Notification Center                              F18
      Turn Do Not Disturb On/Off                            F19
 */
#define __FUNCTIONS_L1__          KC_F1,          KC_F2,          KC_F3,          KC_F4,   KC_F5
#define __FUNCTIONS_L2__ LCTL_T(KC_F11), LALT_T(KC_F12), LSFT_T(KC_F13), LGUI_T(KC_F14),  KC_F15
#define __FUNCTIONS_L3__         KC_F21,         KC_F22,         KC_F23,         KC_F24, XXXXXXX

#define      __FUNCTIONS_R1__      KC_F6,           KC_F7,          KC_F8,         KC_F9,       KC_F10
#define      __FUNCTIONS_R2__    (KC_F16), LGUI_T(KC_F17), LSFT_T(KC_F18),LALT_T(KC_F19),LCTL_T(KC_F20)
#define      __FUNCTIONS_R3__     XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_F22,       KC_F21

#if defined(MINI_DACTYL_THUMBS)
/* [_FUNC] = LAYER 09 : FUNCTIONS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |@@@@@@@@|        |        |        |//[FUTURE_IMPROVEMENT]
 *                            |        |        |        |        |        | fn+shift+down:slct pageDwn
 *                            |        |        |        |        |        | fn+shift+up:select pageUp
 *                            |        |        |        |@[_POWR]|        |//[future_improvement]
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |@[_APPS]|   fn   |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |Karabner|Karabner|        |
 *                   |        |        |        |        |elements|elements|        |
 *                   '--------------------------'        '--------------------------'
 * [FUTURE_IMPROVEMENT]
 *   fn+shift+downarrow: select page down
 *   fn+shift+uparrow:   select page up
 * [future_improvement]
 */
/*
#define _FUNC_LTHMB_RW1_                        OSL(_POWR),  _______
#define _FUNC_LTHMB_RW2_             MO(_DVIM),  MO(_FVIM), OSL_APPS
*/
#define _FUNC_LTHMB_RW1_                      _______, TT(_FUNC)
#define _FUNC_LTHMB_RW2_             _______, _______,   _______

#define      _FUNC_RTHMB_RW1_                                                MO(_POWR), _______
#define      _FUNC_RTHMB_RW2_                                                KC_F22,    KC_F21, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_FUNC] 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_SYMB]
// [_SYMB] = LAYER 10 : SYMBOLS LAYER
// SUPER New _SYMB
/* .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |  \  |  |    /   |    *   |    &   |        |  %  ˆ  |    (   |    )   |  !  ¡  |  ENTER |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |  -  __ |    [   |    ]   | $ EURO |        |  `  ~  |    G   |    H   |  ;  :  |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |        |  +  =  |    '   |    "   |        |        |  @  #  |    {   |    }   |  ?  ¿  |SPACEBAR|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // SUPER New _SYMB
#define PINKY_L2  LGUI_T(KC_G)
#define PINKY_R2  LALT_T(KC_H)
#define ___SYMBOLS_L1___  XXXXXXX,         KC_BSLS,        KC_SLSH,        KC_ASTR,       KC_AMPR
#define ___SYMBOLS_L2___  KC_LCTL, LSFT_T(KC_MINS),LALT_T(KC_LBRC),LGUI_T(KC_RBRC), CURRENCY_SIGN
#define ___SYMBOLS_L3___  XXXXXXX,         PLUS_EQ,        QUOTE,        D_QUOTE,       XXXXXXX

#define                        ___SYMBOLS_R1___ PERC_CI,  KC_LPRN,  KC_RPRN,  EXCLAMATION_MARK, KC_ENT
#define                        ___SYMBOLS_R2___ KC_GRAVE, PINKY_L2, PINKY_R2, LSFT_T(KC_SCLN),  KC_LCTL
#define                        ___SYMBOLS_R3___ AT_HASH,  KC_LCBR,  KC_RCBR,  QUESTION_MARK,    KC_SPC

#if defined(MINI_DACTYL_THUMBS)
/* [_SYMB] = LAYER 10 : SYMBOLS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |  / *   |   * /  |        |        |  EURO  |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |@@@@@@@@|        |        |inverted|inverted|        |
 *                   |        |        |        |        | exclam.|question|        |
 *                   |        |        |        |        |  mark  |  mark  |        |
 *                   |        |        |        |        |    ¡   |    ¿   |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _SYMB_LTHMB_RW1_               O_COMMENT, C_COMMENT
#define _SYMB_LTHMB_RW2_      _______, TT(_SYMB),   _______

#define      _SYMB_RTHMB_RW1_                                               MO(_POWR), EURO
#define      _SYMB_RTHMB_RW2_                                               INV_EX,    INV_QU, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_SYMB] 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_LEDS]
#if defined(BACKLIGHT_ENABLE)
  /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
   * .--------------------------------------------.        .--------------------------------------------.
   * |        |        |        |        |        |        |        |        |        |        | Toggle |
   * |  Level |  Level |  Level |  Level |  Level |        | Breath | Breath | Breath | Breath | Breath |
   * |   01   |   02   |   03   |   04   |   05   |        |   01   |   02   |   03   |   04   |        |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |  Level |  Level |  Level |  Level |  Level |        | Breath | Breath | Breath | Breath | Breath |
   * |   06   |   07   |   08   |   09   |   10   |        |   05   |   06   |   07   |   12   |   15   |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |        | Toggle |        |  Raise |  Lower |        |
   * |  Level |  Level |  Level |  Level |  Level |        |Backlght|Backlght|Backlght|Backlght|Backlght|
   * |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |        |        |   ON   |        |        |   OFF  |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * '--------------------------------------------'        '--------------------------------------------'
   */
  /* BL_OFF
   QMK standard keycode BL_OFF doesn't work ! ! !
   I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ! ! !
   */
  #define _LEDS_LIGHTS_L1_ BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05
  #define _LEDS_LIGHTS_L2_ BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10
  #define _LEDS_LIGHTS_L3_ BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15

  #define      _LEDS_LIGHTS_R1_           BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG
  #define      _LEDS_LIGHTS_R2_           BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BRTH_15
  #define      _LEDS_LIGHTS_R3_           BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF

#elif defined(RGBLIGHT_ENABLE)
  /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        | Reverse|
   * |   Red  |  Coral | Orange | Golden |  Gold  |      | Yellow |  Raise |  Lower |  Save  |   RGB  |
   * |        |        |        |   Rod  |        |      |        |   Hue  |   Hue  | colors |   Mode |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Char  |  Green | Spring |  Tur   |  Teal  |      |  White |  Raise |  Lower |   Get  |   RGB  |
   * | -treuse|        |   Green| -quoise|        |      |        |saturat.|saturat.| colors |   Mode |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Cyan  |  Azure |  Blue  | Purple | Magenta|      |  Pink  |  Raise |  Lower |   No   | Toggle |
   * |        |        |        |        |        |      |        |  value |  value |  color |   RGB  |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define _LEDS_LIGHTS_L1_  CH_RED, CH_CORL, CH_ORNG, CH_GOLR, CH_GOLD
  #define _LEDS_LIGHTS_L2_ CH_CHRT, CH_GREN, CH_SPRG, CH_TRQS, CH_TEAL
  #define _LEDS_LIGHTS_L3_ CH_CYAN, CH_AZUR, CH_BLUE, CH_PRPL, CH_MGNT

  #define            _LEDS_LIGHTS_R1_                      CH_YLLW, RGB_HUI, RGB_HUD, SAV_COL, RGB_RMOD
  #define            _LEDS_LIGHTS_R2_                      CH_WHIT, RGB_SAI, RGB_SAD, GET_HSV,  RGB_MOD
  #define            _LEDS_LIGHTS_R3_                      CH_PINK, RGB_VAI, RGB_VAD, CH_EMPT,  RGB_TOG
//#elif defined(RGBLIGHT_ENABLE)
#endif

  #if defined(MINI_DACTYL_THUMBS)
  /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
   *                            .-----------------.        .-----------------.
   *                            |@@@@@@@@|        |        |        |        |
   *                            |        |        |        |        |  White |
   *                            |        |        |        |        |        |
   *                            |@[_ACCN]|@[_POWR]|        |@[_POWR]|        |
   *                   .--------+--------+--------|        |--------+--------|--------.
   *                   |        |        |        |        |        |        |        |
   *                   |        |        |        |        |  Pink  |  Cyan  |  Azure |
   *                   |        |        |        |        |        |        |        |
   *                   |@[_DVIM]|@[_FVIM]|@[_APPS]|        |        |        |        |
   *                   '--------------------------'        '--------------------------'
   */
/*
#define _DFLT_LTHMB_RW1_                     OSL_LEDS, LT(_FUNC, KC_TAB)// OSL(_FUNC)
#define _DFLT_LTHMB_RW2_        MO(_DALY), OSL(_SYMB),           TT_NUMB//TT(_NUMB)isSlowerThan TT_NUMB

#define      _DFLT_RTHMB_RW1_                              MO(_POWR),          OSL(_ACCN)
#define      _DFLT_RTHMB_RW2_                              TH_R3_APPS_TRIGGER, OSL(_FVIM), TD(DVIM_Del)
*/
  #define _LEDS_LTHMB_RW1_                  _______, _______
  #define _LEDS_LTHMB_RW2_         _______, _______, _______

  #define      _LEDS_RTHMB_RW1_                                          MO(_POWR), CH_WHIT
  #define      _LEDS_RTHMB_RW2_                                          CH_PINK,   CH_PRPL, CH_AZUR
     
  //#if defined(MINI_DACTYL_THUMBS)
  #endif
// END OF [_LEDS] 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_POWR]

/* [_POWR] = LAYER 12 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |Clear CL|        |        |        |        |        |        |        |        |        |
 * |        | Stuck  |LckScren| Toggle |  Cycle |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        |Modifirs|    /   |  Whole |  Steps |        | Volume | Volume | Volume | Volume | Volume |
 * | @RESET |& Layers| Log Out|Indictor|Indictor|        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | Toggle |        |        |        | Toggle |        | Toggle |        |        |        |        |
 * |  layer | Invert |        |        |  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  |   Do   |
 * | _QWER  | Colors |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle |   Not  |
 * |   RCtl |  RSft  |  RAlt  |  RGui  | Images |        |Followng|  RGui  |  RAlt  |  RSft  | Disturb|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |        |        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|@SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // Toggle Zoom Smooth Images is not in use nowadays.  But its keycode is still alive.    [DELETEME]
// #define ____POWER_L3____ TD(SLEP_M),     KA_DCK,     KM_TOL, TD(SHUT_S),     RT_FLO
// TG(_QWER) has been substituted by TD(TG_QWE) for allowing flash animation before toggling.

#if defined (RGBLIGHT_ENABLE)
#define ____POWER_L1____ TD(HRESET),    MY_CLEAR, TD(LCKLOG),     TOG_ID,     STP_ID    
#else
#define ____POWER_L1____ TD(HRESET),    MY_CLEAR, TD(LCKLOG),     XXXXXXX,     XXXXXXX    
#endif

#define ____POWER_L2____ TD(TG_QWE), TD(RA_INCO),    KC_RALT,    KC_RGUI,   ZOOMSMTH  // RALT_T(KC_F7), RSFT_T(KC_SPC), RGUI_T(KC_F9),
#define ____POWER_L3____ TD(SLEP_M),  TD(KILA_D), TD(KILM_T), TD(SHUT_S), TD(RSTT_F)


#define      ____POWER_R1____ VOL_8,    S(A(KC__VOLUP)), S(A(KC__VOLDOWN)),VOL_1,      KC__MUTE
#define      ____POWER_R2____ ZOOM_FOL, TD(RG_ZOIN),     TD(RA_ZOUT),      TD(RS_ZOOM),LCTL_T(DONT_DST)
#define      ____POWER_R3____ CNTRST_U, INC_BRGH,        DEC_BRGH,         BRIGHT_1,   CNTRST_D

#if defined(MINI_DACTYL_THUMBS)
/* [_POWR] = LAYER 12 : POWER COMMANDS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |@@@@@@@@|        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            | Control|MY_RESET|        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |  Clear |        |        |        |        |        |
 *                   |        |   ALL  |        |        |        |        |        |
 *                   |        |Layers->|        |        |        |        |        |
 *                   |        |>[_DFLT]|KC_RESET|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 * You can reach _POWR key anywhere because it's always at the same position: THUMB_R4, but ...
 * ... maybe you're lost into a layer, which you don't know which one it is and ...
 * ... you can't reach a control key for resetting the keyboard.
 * ... that's why we put one control key here, at 'THUMB_L4' position.
 */
#define _POWR_LTHMB_RW1_                  KC_LCTL, MY_RESET
#define _POWR_LTHMB_RW2_        _______, MY_CLEAR,    RESET

#define      _POWR_RTHMB_RW1_                                                 _______, _______
#define      _POWR_RTHMB_RW2_                                                 _______, _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_POWR] 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_APPS]
// #if defined(COMPREHENSIVE_30_LAYOUT)
/* [_APPS] = LAYER 12 : APPLICATIONS LAYER
//
 * KARABINER-ELEMENTS
 * .--------------------------------------------.        .--------------------------------------------.
 * |@@@@@@@@|        |        |        |        |        |        |        |        |        |@@@@@@@@|
 * | simple | tWitter|Evernote|   app  |Terminal|        |  tYpi  | sUblime|textedIt|  Omni  | system |
 * |  note  |        |        |  stoRe |        |        | -nator | text   |        | -focus | Prefe  |
 * |        |        |*qck_ent|        |   >_   |        |        |        |        |*qck_ent| -rences|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   dAy  |  Slack | Discord| Finder | Google |        | sketcH | sUblime|Karbiner|caLendar| sublime|
 * |   one  |(safari)|        |        | chrome |        |        | text   |elements|        | text   |
 * |*qck_ent|        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | studies|  Xcode | Calcu  |karbiner|  Books |        |  Notes |  Mail  | keynote|  pages | numbers|
 * |        |        | -lator | event  |        |        |        |        |        |        |        |
 * |        |        |        | Viewer |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 * KARABINER-ELEMENTS
//
// *qck_ent: QUICK ENTRY
// [PENDING]
// Feedly
// [pending]
*/

// #define __APPLICATS_L1__ APP_Q_SNOTE, APP_W_TWTTR, APP_E_EVERN, APP_R_APSTO, APP_T_TERMI
// #define __APPLICATS_L2__ APP_A_SCRPT, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME
// #define __APPLICATS_L3__ APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_KVIEW, APP_B_BOOKS

// #define      __APPLICATS_R1__           APP_Y_TYPIN, APP_U_UROOM, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF
// #define      __APPLICATS_R2__           APP_H_SKTCH, APP_J_SUBLI, APP_K_KRBNR, APP_L_CLNDR, APPSP_EMPTY
// #define      __APPLICATS_R3__           APP_N_NOTES, APP_M_MAIL,  APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB

// #define __APPLICATS_L1__ _______, _______, _______, _______, _______
// #define __APPLICATS_L2__ _______, _______, _______, _______, _______
// #define __APPLICATS_L3__ _______, _______, _______, _______, _______

// #define      __APPLICATS_R1__           _______, _______, _______, _______, _______
// #define      __APPLICATS_R2__           _______, _______, _______, _______, _______
// #define      __APPLICATS_R3__           _______, _______, _______, _______, _______

// #if defined(MINI_DACTYL_THUMBS)
/* [_APPS] = LAYER 12 : APPLICATIONS LAYER
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |  Quit  | Toggle |        |        |@@@@@@@@|        |        |
 *                   | current| current|KAR-APPS|        |        |        |        |
 *                   |   app  |    &   | trigger|        |        |        |        |
 *                   |        |last app|        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
// #define _APPS_LTHMB_RW1_                      _______,        _______
// #define _APPS_LTHMB_RW2_             _______, _______, TH_L3_KAR_APPS

// #define      _APPS_RTHMB_RW1_                                               MO(_POWR), _______
// #define      _APPS_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
// #endif
// END OF [_APPS] 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF COMMON LAYERS 01...12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###



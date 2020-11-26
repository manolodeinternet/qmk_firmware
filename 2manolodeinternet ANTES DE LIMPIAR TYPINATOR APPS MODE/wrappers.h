#pragma once
#include "wrappers_defines.h"
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//miniDactyl
#define _HIAU  0  //  gherkin ALPHAS IAEOU DFLT layer
#define _PINKY  1  //  PINKY DEMULTIPLIER        layer for not using notHomeRowPinkiesKeys (JZQV)
                   //                                             nor inner right index keys (GW)
#define _QWERT  2  //  gherkin ALPHAS QWERT DFLT layer
#define _ACCN   3  //  gherkin ACCENTS           layer 
#define _NUMB   4  //  gherkin numbers           layer 
#define _FVIM   5  //  Fake                  VIM layer
#define _XVIM   6  //  power edition         VIM layer
#define _DVIM   7  //  Delete                VIM layer
#define _MOUS   8  //  mouse                     layer
#define _DALY   9  //  gherkin DAiLY commands    layer 
#define _FUNC  10  //  gherkin functions         layer 
#define _SYMB  11  //  gherkin symbols           layer 
#define _LEDS  12  //  backlight                 layer
// #define _APPS  12  //  applications shortcuts    layer
#define _POWR  13  //  POWER        productivity layer
#if defined(COMPREHENSIVE_30_LAYOUT)

    #define _TEST  14  //  LAYER FOR TESTING               // must be over layer number 15 ...

    #define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!

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

// [_KIOJ]
/* [_KIOJ] = LAYER 00 : KIOJ DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    K   |    I   |    O   |    J   |   ESC  |        |    G   |    C   |    M   |    N   |    W   |
 * |G[_1APP]|        |        |        |        |        |        |        |        |        |G[_1APP]|
 * | [_APPS]| [_POWR]| [_LEDS]| [_FUNC]|        |        |        | [_FUNC]| [_LEDS]| [_POWR]| [_APPS]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    A   |    E   |SPACEBAR|  ENTER |        |    D   |    S   |    T   |    R   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |  LGui  | [_NUMB]|        | [_ACCN]|  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    X   |    Y   |    Q   |    U   |BCKSPACE|        |    V   |    F   |    L   |    B   |    Z   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | [_DALY]|[_PINKY]| [_MOUS]| [_SYMB]| [_DVIM]|        | [_FVIM]| [_SYMB]| [_XVIM]|[_PINKY]| [_DALY]|
 * '--------------------------------------------'        '--------------------------------------------'
 */
/* [_BEAKL] = LAYER 00 : BEAKL DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    K   |    I   |    O   |    J   |BCKSPACE|        |    G   |    C   |    M   |    N   |    W   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    A   |    E   |SPACEBAR|    M   |        |    D   |    S   |    T   |    R   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |  LGui  | [_MOUS]|        | [_ACCN]|  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |A(ENTER)|        |        |        |        |        |        |
 * |    X   |    Y   |    Q   |    U   |  SPACE |        |    V   |    F   |    L   |    B   |    Z   |
 * |        |        |        |        |SA(ESCP)|        |        |        |        |        |        |
 * |        | [_DALY]| [_NUMB]| [_SYMB]|[_PINKY]|        | [_FVIM]| [_XVIM]| [_FUNC]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */

// HIAU_COMMA_BACKSP_DOT_LAYOUT
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// Y   P   O   ,   ⌫   |   Z   C   S   L   B
// H   I   A   U   .   |   M   T   R   N   G 
// X   Q   K   W   E   |   ␣ ¹ D   V   J   F
//TEST
/* [_HIAU] = LAYER 00 : HIAU DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    B   |    L   |    S   |    C   |BCKSPACE|        |    .   |    ,   |    O   |    P   |    Y   |
 * |        |G[_1APP]|        |        |S-DELETE|        |        |        |        |G[_1APP]|        |
 * | [_LEDS]| [_APPS]| [_POWR]| [_MOUS]| [_DVIM]|        | [_SYMB]|        | [_POWR]| [_APPS]| [_LEDS]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    G   |    N   |    R   |    T   |    M   |        |    Z   |    U   |    A   |    I   |    H   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_ACCN]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |S- ENTER|        |        |        |        |        |        |
 * |    F   |    J   |    V   |    D   |  SPACE |        |    E   |    W   |    K   |    Q   |    X   |
 * |        |        |        |        |A-ESCAPE|        |        |        |        |        |        |
 * | [_FUNC]| [_DALY]| [_NUMB]|[_PINKY]| [_SYMB]|        | [_FVIM]|[_PINKY]| [_XVIM]| [_DALY]| [_FUNC]|
 * '--------------------------------------------'        '--------------------------------------------'
 */
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

/* [_HIAU] = LAYER 00 : HIAU DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Y   |    P   |    O   |    ,   |BCKSPACE|        |    Z   |    C   |    S   |    L   |    B   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * | [_FUNC]| [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]| [_FUNC]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    I   |    A   |    U   |    .   |        |    M   |    T   |    R   |    N   |    G   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_MOUS]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |S(ENTER)|        |        |        |        |
 * |    X   |    Q   |    K   |    W   |    E   |        |  SPACE |    D   |    V   |    J   |    F   |
 * |        |        |        |        |        |        |A(ESCPE)|        |        |        |        |
 * |        | [_DALY]| [_NUMB]|[_PINKY]| [_SYMB]|        | [_FVIM]|[_PINKY]| [_XVIM]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
 //TEST
#if defined(COMPREHENSIVE_30_LAYOUT)

#define ____HIAU___L1___ LT(_FUNC,KC_Y),  TD(L_APPS),LT(_POWR,KC_O),LT(_LEDS,KC_COMM),LT(_DVIM,KC_BSPC)
#define ____HIAU___L2___   LCTL_T(KC_H),LSFT_T(KC_I),  LALT_T(KC_A),     LGUI_T(KC_U), LT(_MOUS,KC_DOT)
#define ____HIAU___L3___         KC_X,LT(_DALY,KC_Q),LT(_NUMB,KC_K),  LT(_PINKY,KC_W),   LT(_SYMB,KC_E)

#define ____HIAU___R1___            KC_Z , LT(_LEDS,KC_C),LT(_POWR,KC_S),     TD(R_APPS),LT(_FUNC,KC_B)
#define ____HIAU___R2___   LT(_ACCN,KC_M),   LGUI_T(KC_T),  LALT_T(KC_R),   LSFT_T(KC_N),  LCTL_T(KC_G)
#define ____HIAU___R3___ FVIM_SPC_ENT_ESC,LT(_PINKY,KC_D),LT(_XVIM,KC_V),LT(_DALY, KC_J),         KC_F

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_HIAU] = LAYER 00 : HIAU DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Y   |    P   |    O   |    ,   |BCKSPACE|        |    Z   |    C   |    S   |    L   |    B   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    I   |    A   |    U   |    .   |        |    M   |    T   |    R   |    N   |    G   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    X   |    Q   |    K   |    W   |    E   |        |  SPACE |    D   |    V   |    J   |    F   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____HIAU___L1___        KC_Y,         KC_P,         KC_O,         KC_COMM,       KC_BSPC
#define ____HIAU___L2___ LCTL_T(KC_H), LSFT_T(KC_I), LALT_T(KC_A), LGUI_T(KC_U),         KC_DOT
#define ____HIAU___L3___        KC_X,         KC_Q,         KC_K,         KC_W,          KC_E

#define ____HIAU___R1___             KC_Z,              KC_C,         KC_S,         KC_L,         KC_B
#define ____HIAU___R2___             KC_M,       LGUI_T(KC_T), LALT_T(KC_R), LSFT_T(KC_N), LCTL_T(KC_G)
#define ____HIAU___R3___ FVIM_SPC_ENT_ESC,              KC_D,         KC_V,         KC_J,         KC_F
//#elif defined(SIMPLE_30_LAYOUT)
#endif
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_JIOK] 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
















/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// BEGINING OF COMMON LAYERS 01...12


// [_JIOK]
/*
#if defined(COMPREHENSIVE_30_LAYOUT)
*/
/* [_JIOK] = LAYER 00 : JIOK DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    J   |    I   |    O   |    K   |   ESC  |        |    G   |    C   |    M   |    N   |    Z   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_FUNC]|        | [_FUNC]| [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    A   |    E   |SPACEBAR|BCKSPACE|        |    D   |    S   |    T   |    R   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |  LGui  | [_DVIM]|        | [_ACCN]|  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    Y   |    X   |    U   |  ENTER |        |    W   |    F   |    L   |    B   |    V   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        | [_DALY]| [_NUMB]| [_SYMB]|[_PINKY]|        | [_FVIM]| [_MOUS]| [_XVIM]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/*
#define ____JIOK___L1___        KC_J,      TD(APPS_I), LT(_POWR,KC_O), LT(_LEDS,KC_K), LT(_FUNC,KC_ESC)
#define ____JIOK___L2___ LCTL_T(KC_H),   LALT_T(KC_A),   LSFT_T(KC_E), LGUI_T(KC_SPC),LT(_DVIM,KC_BSPC)
#define ____JIOK___L3___        KC_Q,  LT(_DALY,KC_Y), LT(_NUMB,KC_X), LT(_SYMB,KC_U),LT(_PINKY,KC_ENT)

#define ____JIOK___R1___   LT(_FUNC,KC_G), LT(_LEDS,KC_C), LT(_POWR,KC_M), TD(APPS_N),            KC_W
#define ____JIOK___R2___   LT(_ACCN,KC_D), LGUI_T(KC_S),   LSFT_T(KC_T),   LALT_T(KC_R),   LCTL_T(KC_P)
#define ____JIOK___R3___   LT(_FVIM,KC_V), LT(_MOUS,KC_F), LT(_XVIM,KC_L), LT(_DALY,KC_B),        KC_Z

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
*/
/* [_JIOK] = LAYER 00 : JIOK DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    J   |    I   |    O   |    K   |   ESC  |        |    G   |    C   |    M   |    N   |    Z   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    A   |    E   |SPACEBAR|BCKSPACE|        |    D   |    S   |    T   |    R   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |   LGui |        |        |        |  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    Y   |    X   |    U   |  ENTER |        |    W   |    F   |    L   |    B   |    V   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/*
#define ____JIOK___L1___         KC_J,         KC_I,         KC_O,           KC_K,   KC_ESC
#define ____JIOK___L2___ LCTL_T(KC_H), LALT_T(KC_A), LSFT_T(KC_E), LGUI_T(KC_SPC),   KC_BSPC
#define ____JIOK___L3___         KC_Q,         KC_Y,         KC_X,           KC_U,   KC_ENT

#define      ____JIOK___R1___             KC_G,  KC_C,         KC_M,         KC_N,         KC_Z
#define      ____JIOK___R2___             KC_D,  LGUI_T(KC_S), LSFT_T(KC_T), LALT_T(KC_R), LCTL_T(KC_P)
#define      ____JIOK___R3___             KC_W,  KC_F,         KC_L,         KC_B,         KC_V
//#elif defined(SIMPLE_30_LAYOUT)
#endif
*/
//
// THUMB CLUSTER DEFINED BELOW
//
// END OF [_JIOK] 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// PINKY DEMULTIPLIER FOR JIOK LAYER
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// [_PINKY]
/* [_PINKY] = LAYER 01 : PINKY DEMULTIPLIER LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |    J   |        |        |        |    Z   |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |    H   |        |        |        |    P   |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |   LCtl |        |        |        |   LCtl |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |    Q   |        |        |        |    V   |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// PINKY DEMULTIPLIER LAYER
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*
#define ____PINKY__L1___     _______, _______, _______,        KC_J,  _______
#define ____PINKY__L2___     _______, _______, _______, LCTL_T(KC_H), _______
#define ____PINKY__L3___     _______, _______, _______,        KC_Q,  _______

#define ____PINKY__R1___                 _______,        KC_Z,  _______, _______, _______
#define ____PINKY__R2___                 _______, LCTL_T(KC_P), _______, _______, _______
#define ____PINKY__R3___                 _______,        KC_V,  _______, _______, _______
*/
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_PINKY] 01
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
// COMMON THUMB CLUSTER FOR BOTH DEFAULT LAYERS: _JIOK & _QWERT
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
#if defined(MINI_DACTYL_THUMBS)
//  [_JIOK] = LAYER 00 :  _JIOK DEFAULT LAYER
// [_QWERT] = LAYER 00 : _QWERT DEFAULT LAYER
/*   [DFLT] = LAYER 00 :   DFLT DEFAULT LAYER
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
#define _DFLT_LTHMB_RW1_            LT(_LEDS, KC_TAB), OSL(_FUNC)
#define _DFLT_LTHMB_RW2_        MO(_DALY), OSL(_SYMB),    TT_NUMB  // TT(_NUMB)is slower than TT_NUMB

#define      _DFLT_RTHMB_RW1_                              MO(_POWR),          OSL(_ACCN)
#define      _DFLT_RTHMB_RW2_                              TH_R3_APPS_TRIGGER, OSL(_FVIM), TD(DVIM_Del)
//#if defined(MINI_DACTYL_THUMBS)
#endif
//
// common thumb cluster for both default layers: _jiok & _qwert
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


















/* [_BEAKL] = LAYER 00 : BEAKL DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    K   |    I   |    O   |    J   |   ESC  |        |    G   |    C   |    M   |    N   |    W   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * |        | [_APPS]| [_POWR]| [_LEDS]| [_FUNC]|        | [_FUNC]| [_LEDS]| [_POWR]| [_APPS]|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    A   |    E   |SPACEBAR|  ENTER |        |    D   |    S   |    T   |    R   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |  LGui  | [_NUMB]|        | [_ACCN]|  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    X   |    Y   |    Q   |    U   |BCKSPACE|        |    V   |    F   |    L   |    B   |    Z   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | [_DALY]|[_PINKY]| [_MOUS]| [_SYMB]| [_DVIM]|        | [_FVIM]| [_SYMB]| [_XVIM]|[_PINKY]| [_DALY]|
 * '--------------------------------------------'        '--------------------------------------------'
 */

/* [_HIAU] = LAYER 00 : HIAU DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Y   |    P   |    O   |    ,   |BCKSPACE|        |    Z   |    C   |    S   |    L   |    B   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    I   |    A   |    U   |    .   |        |    M   |    T   |    R   |    N   |    G   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  |        |        |        |  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    X   |    Q   |    K   |    W   |    E   |        |  SPACE |    D   |    V   |    J   |    F   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// PINKY DEMULTIPLIER LAYER FOR HIAU LAYER
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_PINKY]
/* [_PINKY] = LAYER 01 : PINKY DEMULTIPLIER LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |    Y   |        |        |        |        |        |    B   |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |    Y   |    H   |   X    |        |        |        |    F   |    G   |   B    |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |   LCtl |        |        |        |        |        |   LCtl |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |    X   |        |        |        |        |        |    F   |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// PINKY DEMULTIPLIER LAYER
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
#define ____PINKY__L1___     _______, _______,        KC_Y,  _______, _______
#define ____PINKY__L2___     _______,    KC_Y, LCTL_T(KC_H),    KC_X, _______
#define ____PINKY__L3___     _______, _______,        KC_X,  _______, _______

#define ____PINKY__R1___                 _______, _______,        KC_B, _______, _______
#define ____PINKY__R2___                 _______,    KC_F, LCTL_T(KC_G),    KC_B, _______
#define ____PINKY__R3___                 _______, _______,        KC_F, _______, _______
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_PINKY] 01
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//BASURA BASURA BASURA
/* [_HIAU] = LAYER 00 : HIAU DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Y   |    P   |    O   |    ,   |BCKSPACE|        |    Z   |    C   |    S   |    L   |    B   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * | [_FUNC]| [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        |        | [_LEDS]| [_POWR]| [_APPS]| [_FUNC]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    H   |    I   |    A   |    U   |    .   |        |    M   |    T   |    R   |    N   |    G   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_MOUS]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |S(ENTER)|        |        |        |        |
 * |    X   |    Q   |    K   |    W   |    E   |        |  SPACE |    D   |    V   |    J   |    F   |
 * |        |        |        |        |        |        |A(ESCPE)|        |        |        |        |
 * |        | [_DALY]| [_NUMB]|[_PINKY]| [_SYMB]|        | [_FVIM]|[_PINKY]| [_XVIM]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
/*#define ____HIAU___L1___ LT(_FUNC,KC_Y),TD(L_APPS), LT(_POWR,KC_O), LT(_LEDS,KC_COMM), LT(_DVIM,KC_BSPC)
#define ____HIAU___L2___   LCTL_T(KC_H),    LSFT_T(KC_I),   LALT_T(KC_A), LGUI_T(KC_U), LT(_MOUS,KC_DOT)
#define ____HIAU___L3___          KC_X,   LT(_DALY,KC_Q), LT(_NUMB,KC_K), LT(_SYMB,KC_W),LT(_PINKY,KC_E)

#define ____HIAU___R1___            KC_Z, LT(_LEDS,KC_C), LT(_POWR,KC_S),TD(R_APPS),LT(_FUNC,KC_B)
#define ____HIAU___R2___   LT(_ACCN,KC_M),  LGUI_T(KC_T),   LALT_T(KC_R),   LSFT_T(KC_N),   LCTL_T(KC_G)
// #define ____HIAU___R3___   LT(_FVIM,KC_V),LT(_MOUS,KC_F), LT(_XVIM,KC_L), LT(_DALY,KC_B),          KC_Z
#define ____HIAU___R3___   FVIM_SPC_ENT_ESC,LT(_PINKY,KC_D), LT(_XVIM,KC_V), LT(_DALY,KC_J),          KC_F*/
//basura basura basura
//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


// MO(_DALY) instead of OSL(_DALY) is for not getting stucked in _DVIM layer, I don't know why !
// [_QWERT]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_QWERT] = LAYER 02 : QWERT DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |G[_1APP]|        |        |        |        |        |        |        |G[_1APP]|        |
 * | [_FUNC]| [_APPS]| [_POWR]| [_LEDS]| [_DVIM]|        | [_SYMB]| [_LEDS]| [_POWR]| [_APPS]| [_FUNC]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LSft  |  LAlt  |  LGui  | [_ACCN]|        | [_ACCN]|  LGui  |  LAlt  |  LSft  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   |  Enter |Bckspace| Escape |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        | [_DALY]| [_NUMB]| [_MOUS]| [_SYMB]|        | [_FVIM]| [_SYMB]| [_XVIM]| [_DALY]|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____QWERT__L1___      LT(_FUNC, KC_Q),TD(L_APPS),LT(_POWR, KC_E),LT(_LEDS, KC_R),LT(_DVIM,KC_T) //TD(APPS_Q)
#define ____QWERT__L2___    LCTL_T(KC_A),   LSFT_T(KC_S),   LALT_T(KC_D),   LGUI_T(KC_F),LT(_ACCN,KC_G)
#define ____QWERT__L3___           KC_Z, LT(_DALY, KC_X),LT(_NUMB, KC_C),LT(_MOUS, KC_V),LT(_SYMB,KC_B)

#define ____QWERT__R1___ LT(_SYMB,KC_Y),LT(_FUNC,KC_U), LT(_LEDS, KC_I),LT(_POWR,KC_O),TD(APPS_P)       //TD(APPS_P)
#define ____QWERT__R2___ LT(_ACCN,KC_H),  LGUI_T(KC_J),    LALT_T(KC_K),  LSFT_T(KC_L),LCTL_T(KC_SPC)
#define ____QWERT__R3___ LT(_FVIM,KC_N),LT(_SYMB,KC_M),LT(_XVIM,KC_ENT),  LT(_DALY,KC_BSPC), KC_ESC

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_QWERT] = LAYER 02 : QWERT DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |  LSft  |   LGui |        |        |        |  LGui  |  LSft  |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   |  Enter |Bckspace| Escape |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____QWERT__L1___         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define ____QWERT__L2___ LCTL_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LGUI_T(KC_F),         KC_G
#define ____QWERT__L3___         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B

#define      ____QWERT__R1___             KC_Y,         KC_U,         KC_I,         KC_O,          KC_P
#define      ____QWERT__R2___             KC_H, LGUI_T(KC_J), LSFT_T(KC_K),  LALT_T(KC_L),LCTL_T(KC_SPC) // [BUG] KC_SPC instead of KC_J
#define      ____QWERT__R3___             KC_N,         KC_M,       KC_ENT,      KC_BSPC,        KC_ESC   // [bug]
//#elif defined(SIMPLE_30_LAYOUT)
#endif
//
// THUMB CLUSTER DEFINED ABOVE
//
// END OF [_QWERT] 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###



// [BUG]// [BUG] increment two units to the layer from now on...


// [_ACCN]
/* [_ACCN] = LAYER 03 : ACCENTS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX|    O   | XXXXXXX| XXXXXXX|        | XXXXXXX| CIRCUM-| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |        | FLEX   |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * | XXXXXXX|    I   |    A   |    U   | XXXXXXX|        |        |  DIAE- |  GRAVE |    N   | XXXXXXX|
 * |        |        |        |        |        |        |        |  RESIS |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|    E   |        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        | L_Shift|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___ACCENTS_L1___  XXXXXXX,  XXXXXXX, F(ACC_O),  XXXXXXX, XXXXXXX
#define ___ACCENTS_L2___  XXXXXXX, F(ACC_I), F(ACC_A), F(ACC_U), XXXXXXX
#define ___ACCENTS_L3___  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, F(ACC_E)

#define      ___ACCENTS_R1___                              XXXXXXX, CIRCU,   XXXXXXX, XXXXXXX,  XXXXXXX
#define      ___ACCENTS_R2___                              XXXXXXX, DIAER,   GRAVE,   F(TIL_N), XXXXXXX
#define      ___ACCENTS_R3___                              KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX

#if defined(MINI_DACTYL_THUMBS)
/* [_ACCN] = LAYER 03 : ACCENTS LAYER
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
// END OF [_ACCN] 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_NUMB]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_NUMB] = LAYER 04 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |*  $    |        |    -   |    4   |    5   |    6   |    +   |
 * |        |        |        |        |** EURO |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |@@@@@@@@|        |        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |*  EURO |*   =   |        |*   /   |    1   |    2   |    3   |    *   |
 * |        |        |        |        |**  %   |        |@ NUMBON|        |        |        |        |
 * |        |        |        |@@NUMBOF|        |        |@@NUMBOF|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,       KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LALT_T(KC_DEL),LSFT_T(KC_COMM), LGUI_T(KC_DOT), TD(R_DOEU)
#define ___NUMBERS_L3___         KC_TAB,       KC_BSPC,        KC_PENT,     TD(NUMBOF), TD(B_EQPE)

#define      ___NUMBERS_R1___                                     KC_6,       KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                     KC_PMNS,    KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                     TD(SLNUMB), KC_1, KC_2, KC_3, KC_PAST

//# if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_NUMB] = LAYER 04 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |*  $    |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |** EURO |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |*   =   |  EURO  |        |    /   |    1   |    2   |    3   |    *   |
 * |        |        |        |**  %   |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___NUMBERS_L1___           KC_1,           KC_2,            KC_3,           KC_4,       KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC), LALT_T(KC_DEL), LSFT_T(KC_COMM), LGUI_T(KC_DOT), TD(R_DOEU)
#define ___NUMBERS_L3___         KC_TAB,        KC_BSPC,         KC_PENT,     TD(B_EQPE),       EURO

#define      ___NUMBERS_R1___                                        KC_6,    KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                        KC_PMNS, KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                        KC_PSLS, KC_1, KC_2, KC_3, KC_PAST

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_NUMB] = LAYER 04 : NUMBERS LAYER
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
// END OF [_NUMB] 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_FVIM]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_FVIM] = LAYER 05 : FAKE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |  Mouse |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | Button |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        |        |    1   |        |paragrph|  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |        |        |   Up   | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        | Center |        |        |        |        |        |        |
 * |        |        |        |        |  Line  |        |  Shift |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |        |        |        |        |   in   |        |paragrph|        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |  View  |        |  Down  |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |        |        |        |        |        |        |        |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        | TOOGLE |        |        | TOOGLE |        |  Page  |  Page  |        |
 * |@[_DALY]|@[_DVIM]|@[_MOUS]|@[_FVIM]|@[_XVIM]|        |@[_FVIM]|  HOME  |   UP   |  DOWN  |   END  |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___FAKEVIM_L1___   KC_LEFT,     KC_UP,   KC_DOWN,   KC_RGHT,   KC_BTN1
#define ___FAKEVIM_L2___   KC_LCTL,   KC_LALT,   KC_LSFT,   KC_LGUI,    FVIM_H
#define ___FAKEVIM_L3___ MO(_DALY), MO(_DVIM), MO(_MOUS), TT(_FVIM), MO(_XVIM)

// #define ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP)
#define ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), TD(FVIM_iI), TD(FVIM_oO), TD(FVIM_pP)
#define ___FAKEVIM_R2___ C(G(KC_DOWN)), KC_LEFT,     KC_UP,       KC_DOWN,     KC_RGHT
#define ___FAKEVIM_R3___ TT(_FVIM),     A(KC_HOME),  A(KC_PGUP),  A(KC_PGDN),  A(KC_END)

//# if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_FVIM] = LAYER 05 : FAKE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |  Mouse |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | Button |        |paragrph|  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |    1   |        |   Up   | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |  Mouse |        | Center |        |        |        |        |
 * |        |        |        |        | Button |        |  Line  |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |        |        |        |        |    2   |        |   in   |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |  View  |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| TOGGLE |        |paragrph|        |  Page  |  Page  |        |
 * |        |        |        |        |@[_FVIM]|        |  Down  |  HOME  |   UP   |  DOWN  |   END  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___FAKEVIM_L1___ KC_LEFT,   KC_UP, KC_DOWN, KC_RGHT,   KC_BTN1
#define ___FAKEVIM_L2___ KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI,   KC_BTN2
#define ___FAKEVIM_L3___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TT(_FVIM)

// #define                ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP)
#define                ___FAKEVIM_R1___ C(G(KC_UP)),   TD(FVIM_uU), TD(FVIM_iI), TD(FVIM_oO), TD(FVIM_pP)
#define                ___FAKEVIM_R2___ FVIM_H,        KC_LEFT,     KC_UP,      KC_DOWN,    KC_RGHT
#define                ___FAKEVIM_R3___ C(G(KC_DOWN)), A(KC_HOME),  A(KC_PGUP), A(KC_PGDN), A(KC_END)
//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_FVIM] = LAYER 05 : FAKE VIM LAYER
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
// END OF [_FVIM] 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_XVIM]
/* [_XVIM] = LAYER 06 : EXTENDED EDITION VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |  Align |  Align |  Align |  Align |        |        | Insert |  Copy  | Duplict|  Copy  | Insert |
 * | to the | Justi- | in the | to the |Complete|        |  line  |  prev  | current|  next  |  line  |
 * |  left  |  fied  | center |  right |        |        |  above |paragrph|paragrph|paragrph|  below |
 * |        |        |        |        |        |        |paragrph|        |  below |        |paragrph|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
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
 * |        |        |@@@@@@@@|( @@@@ )|        |        |        |        |@@@@@@@@|        |        |
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
/* [_XVIM] = LAYER 06 : EXTENDED EDITION VIM LAYER
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
// END OF [_XVIM] 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DVIM]
/* [_DVIM] = LAYER 07 : DELETE VIM LAYER
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
/* [_DVIM] = LAYER 07 : DELETE VIM LAYER
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
// END OF [_DVIM] 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_MOUS]
/* [_MOUS] = LAYER 08 : MOUSE LAYER
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
/* [_MOUS] = LAYER 08 : MOUSE LAYER
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
// END OF [_MOUS] 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DALY]
/* [_DALY] = LAYER 09 : DAILY COMMANDS LAYER
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
/* [_DALY] = LAYER 09 : DAILY COMMANDS LAYER
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
// END OF [_DALY] 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FUNC]
/* [_FUNC] = LAYER 10 : FUNCTIONS LAYER
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
 * |KAR-APPS|        |        |   fn   |        |        |        |   fn   |        |        |KAR-APPS|
 * | trigger|        |        | (Krbnr)|        |        |        | (Krbnr)|        |        | trigger|
 * |   F21  |   F22  |   F23  |   F24  |        |        |        |   F24  |        |        |   F21  |
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
#define      __FUNCTIONS_R3__     XXXXXXX,         KC_F24,        XXXXXXX,       XXXXXXX,       KC_F21

#if defined(MINI_DACTYL_THUMBS)
/* [_FUNC] = LAYER 10 : FUNCTIONS LAYER
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
#define      _FUNC_RTHMB_RW2_                                                KC_F21,    KC_F24, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_FUNC] 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_SYMB]
/* [_SYMB] = LAYER 11 : SYMBOLS LAYER
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// Old _SYMB
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |    +   |    =   |    #   |    *   |    %   |        |    @   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |  LGui  |  LSft  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |  !  ¡  |  ?  ¿  |  <     |  >  ^  |    ^   |        | $ EURO |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// New _SYMB 
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |    +   |    =   |    #   | $ EURO |    %   |        |    *   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |  LGui  |  LSft  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |  !  ¡  |  ?  ¿  |  <     |  >  ^  |    ^   |        |    @   |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
// New _SYMB
/* .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  \  |  |    +   |    /   |    *   |    &   |        |    %   |    (   |    )   |  !  ¡  |  ?  ¿  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    =   |    -   |    [   |    ]   | $ EURO |        |    :   |  ,  <  |  .  >  |     ;  |  '  "  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |        |        |  LGui  |  LSft  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |    #   |   __   |    <   |    >   |   ^    |        |    @   |    {   |    }   |    "   |  `  ~  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___SYMBOLS_L1___         KC_BSLS,       KC_PLUS,        KC_SLSH,        KC_ASTR,        KC_AMPR
#define ___SYMBOLS_L2___  LCTL_T(KC_EQL),LALT_T(KC_MINS),LSFT_T(KC_LBRC),LGUI_T(KC_RBRC), CURRENCY_SIGN  //   TD(R_DOEU)
#define ___SYMBOLS_L3___         KC_HASH,       KC_UNDS,        KC_LABK,        KC_RABK,        KC_CIRC  //   TD(V_RACI)

#define    ___SYMBOLS_R1___ KC_PERC,        KC_LPRN,         KC_RPRN,  EXCLAMATION_MARK,  QUESTION_MARK   //   TD(Z_EXCL), TD(X_QUES)
#define    ___SYMBOLS_R2___ KC_COLN, LGUI_T(KC_COMM), LSFT_T(KC_DOT),  LALT_T(KC_SCLN), LCTL_T(KC_QUOT)
#define    ___SYMBOLS_R3___ KC_AT,         KC_LCBR,         KC_RCBR,          KC_DQUO,         KC_GRAVE

#if defined(MINI_DACTYL_THUMBS)
/* [_SYMB] = LAYER 11 : SYMBOLS LAYER
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
// END OF [_SYMB] 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_LEDS]
#if defined(BACKLIGHT_ENABLE)
  /* [_LEDS] = LAYER 12 : LEDS LIGHTS LAYER
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
  /* [_LEDS] = LAYER 12 : LEDS LIGHTS LAYER
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
  /* [_LEDS] = LAYER 12 : LEDS LIGHTS LAYER
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
// END OF [_LEDS] 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// [_POWR]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_POWR] = LAYER 13 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        | Clear  |@@@@@@@@|        |        |        |        |        |@@@@@@@@|        |        |
 * |        | Stuck  |LckScren|        |        |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        |Modifirs|    /   |        |        |        | Volume | Volume | Volume | Volume | Volume |
 * | @RESET |& Layers| Log Out|My_Reset|  Reset |        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | Toggle |        |  Play  |        | Toggle |        | Toggle |        |        |        |        |
 * |  layer | Rewind |  /Pause| Forward|  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  | Invert |
 * |[_QWERT]|        |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle | Colors |
 * |   RCtl |   RAlt |  RSft  |  RGui  | Images |        |Followng|        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |        |        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|@SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // Toggle Zoom Smooth Images is not in use nowadays.  But its keycode is still alive.    [DELETEME]
// #define ____POWER_L3____ TD(SLEP_M),     KA_DCK,     KM_TOL, TD(SHUT_S),     RT_FLO
// TG(_QWERT) has been substituted by TD(TG_QWE) for allowing flash animation before toggling.
#define ____POWER_L1____ TD(HRESET),      MY_CLEAR,     TD(LCKLOG),       XXXXXXX,     RESET
#define ____POWER_L2____ TD(TG_QWE), RALT_T(KC_F7), RSFT_T(KC_SPC), RGUI_T(KC_F9),  ZOOMSMTH
#define ____POWER_L3____ TD(SLEP_M),    TD(KILA_D),     TD(KILM_T),    TD(SHUT_S),TD(RSTT_F)

//#define    ____POWER_R2____ ZOOM_FOL,    ZOOM_IN,         ZOOM_OUT,          ZOOM_TOG,    INV_COLO
#define      ____POWER_R1____ TD(V8_TEST), S(A(KC__VOLUP)), S(A(KC__VOLDOWN)), TD(V1_LAST), KC__MUTE
#define      ____POWER_R2____ ZOOM_FOL,    TD(RS_ZOIN),     TD(RG_ZOUT),       TD(RA_ZOOM), TD(RA_INCO)
#define      ____POWER_R3____ CNTRST_U,    INC_BRGH,        DEC_BRGH,          BRIGHT_1,    CNTRST_D

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_POWR] = LAYER 13 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |Clear CL|        |        |        |        |        |        |        |        |        |
 * |        | Stuck  |LckScren| Toggle |  Cycle |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        |Modifirs|    /   |  Whole |  Steps |        | Volume | Volume | Volume | Volume | Volume |
 * | @RESET |& Layers| Log Out|Indictor|Indictor|        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | Toggle |        |        |        | Toggle |        | Toggle |        |        |        |        |
 * |  layer | Invert |        |        |  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  |   Do   |
 * | _QWERT | Colors |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle |   Not  |
 * |   RCtl |   RAlt |  RSft  |  RGui  | Images |        |Followng|        |        |        | Disturb|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |        |        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|@SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // Toggle Zoom Smooth Images is not in use nowadays.  But its keycode is still alive.    [DELETEME]
// #define ____POWER_L3____ TD(SLEP_M),     KA_DCK,     KM_TOL, TD(SHUT_S),     RT_FLO
// TG(_QWERT) has been substituted by TD(TG_QWE) for allowing flash animation before toggling.
#define ____POWER_L1____ TD(HRESET)     MY_CLEAR, TD(LCKLOG),     TOG_ID,     STP_ID    
#define ____POWER_L2____ TD(TG_QWE), TD(RA_INCO),    KC_RSFT,    KC_RGUI,   ZOOMSMTH  // RALT_T(KC_F7), RSFT_T(KC_SPC), RGUI_T(KC_F9),
#define ____POWER_L3____ TD(SLEP_M),  TD(KILA_D), TD(KILM_T), TD(SHUT_S), TD(RSTT_F)

#define      ____POWER_R1____ VOL_8,    S(A(KC__VOLUP)), S(A(KC__VOLDOWN)),VOL_1,      KC__MUTE
#define      ____POWER_R2____ ZOOM_FOL, TD(RS_ZOIN),     TD(RG_ZOUT),      TD(RA_ZOOM),LCTL_T(DONT_DST)
#define      ____POWER_R3____ CNTRST_U, INC_BRGH,        DEC_BRGH,         BRIGHT_1,   CNTRST_D

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_POWR] = LAYER 13 : POWER COMMANDS LAYER
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
// END OF [_POWR] 13
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



/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// BEGINING OF SPECIFIC LAYERS 13, 17
//
// [_TEST]
// [_LAST]
#if defined(COMPREHENSIVE_30_LAYOUT)
// Layers especifically for Gherkins.

  // #define _TEST  14  //  LAYER FOR TESTING
  // #define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!

  // [_TEST]
  /* [_TEST] = LAYER 14 : TEST LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |        |    1   |    2   |    3   |        |
   * |    +   |    @   |    #   |    =   |    %   |      |    &   |  Beep  |  Beeps |  Beeps |    -   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  `  ~  |  '  "  |    \   |    /   |  $  €  |      |    |   |    [   |    ]   |    ,   |    .   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  LCtl  |  LAlt  |  LSft  |  LGui  |        |      |        |  LGui  |  LSft  |  LAlt  |  LCtl  |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  !  ¡  |  ?  ¿  |    <   |  >  ^  |    *   |      | XXXXXXX|    {   |    }   |    :   |    ;   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |@[_SYMB]|        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define ____TEST__L1____       KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC
  #define ____TEST__L2____ CTL_T(KC_GRV), ALT_T(KC_QUOT),LSFT_T(KC_BSLS), GUI_T(KC_SLSH), TD(R_DOEU)
  #define ____TEST__L3____    TD(Z_EXCL),     TD(X_QUES),        KC_LABK,     TD(V_RACI),    KC_ASTR

  #define      ____TEST__R1____ KC_AMPR, BEEP_1,         BEEP_2,          BEEP_3,         KC_MINS
  #define      ____TEST__R2____ KC_PIPE, GUI_T(KC_LBRC), LSFT_T(KC_RBRC), ALT_T(KC_COMM), CTL_T(KC_DOT)
  #define      ____TEST__R3____ LT(_SYMB, KC_NO),KC_LCBR,KC_RCBR,         KC_COLN,        KC_SCLN
  // END OF _TEST 14
  ///////////////////////////////////////////////////////////////////////////////////////////////// ###

  // [_LAST]
  /* [_LAST] = LAYER 17 : LAST LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        | Toggle |
   * |  Level |  Level |  Level |  Level |  Level |      | Breath | Breath | Breath | Breath | Breath |
   * |   01   |   02   |   03   |   04   |   05   |      |   01   |   02   |   03   |   04   |        |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Level |  Level |  Level |  Level |  Level |      | Breath | Breath | Breath | Breath | Breath |
   * |   06   |   07   |   08   |   09   |   10   |      |   05   |   06   |   07   |   12   |   15   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      | Toggle |        |  Raise |  Lower |        |
   * |  Level |  Level |  Level |  Level |  Level |      |Backlght|Backlght|Backlght|Backlght|Backlght|
   * |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |      |        |   ON   |        |        |   OFF  |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define ____LAST__L1____ BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05
  #define ____LAST__L2____ BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10
  #define ____LAST__L3____ BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15

  #define      ____LAST__R1____ BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG
  #define      ____LAST__R2____ BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BRTH_15
  #define      ____LAST__R3____ BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF

  // END OF _LAST 17
  ///////////////////////////////////////////////////////////////////////////////////////////////// ###

#elif defined(SIMPLE_30_LAYOUT)
// Layers especifically for Mini Dactyl

    // No extra layers for 'simple_30_layout'

#endif
//
// END OF SPECIFIC LAYERS 14, 17
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


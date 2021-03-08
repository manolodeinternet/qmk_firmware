// MiniDactyl 2019/11/04
// =================================================================
// CONFIG.H


// #define SIMPLE_30_LAYOUT



#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C
#define EE_HANDS
/* Select hand configuration */
//#define MASTER_LEFT
//#define MASTER_RIGHT

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

//[TAP DANCE PREREQUISITES]
#define TAPPING_TERM 180 //150 //300
// If you’re having issues with taps (un)registering,
//...you can add a delay between the register and unregister events
#define TAP_CODE_DELAY 100
#define TAPPING_TOGGLE 1
// #define TAPPING_TERM_PER_KEY
//[tap dance prerequisites]

///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

//#define RGBLED_SPLIT { 6, 7 } // 2020/02/17

/*(just added, @drashna)*/
//#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT { 0, 12 }
/*(just added, @drashna)*/
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////

#undef  RGBLED_NUM




// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////


//
// DEFINE LAYOUT
//
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###
// 1:
// QMK_FIRMWARE/USERS/MANOLODEINTERNET/WRAPPERS.H
// You have to uncomment one of these two lines:
// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows with all modifiers and layer triggers
//
// 2:
// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows as simple as we can, but with modifiers...
//
// 3:
// ...and layer triggers are defined on thumb rows !!!
//
/* 1: */
// #define COMPREHENSIVE_30_LAYOUT
/* 2: */
         #define SIMPLE_30_LAYOUT
/* 3: */
         #define MINI_DACTYL_THUMBS
// [IMPROVEME]
// Change `MINI_DACTYL_THUMBS` with `THUMBS_ENABLED`    
// [iproveme]
//
// qmk_firmware/users/manolodeinternet/wrappers.h
//
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###

//
// DEFINE LEDS_TYPE
//
// You have to uncomment the lines you don't need:
//
/* 1: */ 
// #define BACKLIT_LEDS
/* 2: */
#define RGB_LEDS
//
// define apps_triggers
//










//#define RGBLIGHT_STARTUP_ANIMATION  // $126 bytes (firmare cost)


//#define RGBLIGHT_ANIMATIONS     // Enable all additional animation modes.
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_BREATHING // Enable breathing animation mode.
//#define RGBLIGHT_MODE_BREATHING   3                         // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.0  // 1.0 ... 2.7  // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_MAX    200  //     ... 255

#define RGBLED_NUM 13

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8



// #define USER_PRINT
/*
 * [FEATURE DISABLE OPTIONS]
 *  These options are also useful to firmware size reduction.
 */
/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER    // it's necessary for tap_dance

// #define NO_ACTION_TAPPING  // it's necessary for mod/tap feature !
//                            // 2492-430= 2062 bytes saved with this single '#define NO_...' line of code

// #define NO_ACTION_FUNCTION // it's neccesary for action_functions

// We need ACTION_ONESHOT activated for running OSL(_ACCN)
// #define NO_ACTION_ONESHOT






#define NO_ACTION_MACRO       // apparently it's necessary only for macros !!!






/*
 * [feature disable options]
 */

#endif
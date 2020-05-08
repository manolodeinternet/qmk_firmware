#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* for QMK DFU bootloader */
/* not required if using default ProMicro bootloader */
/* set top left key as bootloader mode escape key */
#define QMK_ESC_OUTPUT B4 // usually COL
#define QMK_ESC_INPUT F7 // usually ROW
#define QMK_LED B0

//Tap Dance Prerequisite
// #define TAPPING_TERM 200

// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////

// In 'qmk_firmware/Users/manolodeinternet/wrappers.h'...
// ...we define alpha rows with all modifiers and layer triggers
// #define COMPREHENSIVE_30_LAYOUT

// //////////////////////////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////////////////////////



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
#define COMPREHENSIVE_30_LAYOUT
/* 2: */
         // #define SIMPLE_30_LAYOUT
/* 3: */
         // #define MINI_DACTYL_THUMBS
//
// qmk_firmware/users/manolodeinternet/wrappers.h
//
//////////////////////////////////////////////////////////////////////////////////////////////// MINE ###
//
// define layout
//

//
// DEFINE APPS_TRIGGERS
//
// You have to uncomment one of these two lines:
//
/* 1: */ 
// #define DEFAULT_TYPINATOR_APPS
/* 2: */
#define DEFAULT_KARABINER_APPS
//
// define apps_triggers
//





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
#define NO_ACTION_ONESHOT  // 1906-1434 bytes saved
// next define, apparently it's necessary only for macros !!!
#define NO_ACTION_MACRO    // 2196-1906 bytes saved
/*
 * [feature disable options]
 */

#endif

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

//#define MASTER_LEFT
// #define _MASTER_RIGHT
 #define EE_HANDS

#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT // copied from gherkin

//////////////////////////////////////////////////////////////////////////////////////////////////////###
// COPIED FROM 40PERCENTCLUB/GHERKIN/

//Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY 60
#define MOUSEKEY_INTERVAL 50
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_TIME_TO_MAX 40

// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_DELAY 500
// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_INTERVAL 220
#define MOUSEKEY_WHEEL_MAX_SPEED 2
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200  // max. value: 255

// copied from 40percentclub/Gherkin/
//////////////////////////////////////////////////////////////////////////////////////////////////////###

#undef  RGBLED_NUM
#define RGBLED_NUM 13

//////////////////////////////////////////////////////////////////////////////////////////////////////###
// #define RGBLIGHT_ANIMATIONS

//#define RGBLIGHT_EFFECT_ALTERNATING       // 
//#define RGBLIGHT_EFFECT_BREATHING         // 1110 bytes over
//#define RGBLIGHT_EFFECT_CHRISTMAS         //  772 bytes free
//#define RGBLIGHT_EFFECT_KNIGHT            //  660 bytes free
#define RGBLIGHT_EFFECT_RAINBOW_MOOD      // 696 bytes free
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL     // 
//#define RGBLIGHT_EFFECT_RGB_TEST          // 
//#define RGBLIGHT_EFFECT_SNAKE             // 
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT   // 
//////////////////////////////////////////////////////////////////////////////////////////////////////###

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif
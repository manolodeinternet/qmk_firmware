#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

//#define MASTER_LEFT
//#define _MASTER_RIGHT
 #define EE_HANDS

#undef  RGBLED_NUM

//#define RGBLIGHT_ANIMATIONS

//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_MODE_BREATHING   3                         // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.0  // 1.0 ... 2.7  // [MINE] Is it ok ?
//#define RGBLIGHT_EFFECT_BREATHE_MAX    200  //     ... 255

//#define RGBLIGHT_EFFECT_KNIGHT

#define RGBLED_NUM 13

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8




//You have to comment one of these two lines:
//#define ALPHAS_OVERCHARGED
  #define SINGLE_ALPHAS



#endif
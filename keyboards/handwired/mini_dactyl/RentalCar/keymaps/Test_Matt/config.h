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

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 8
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define PERMISSIVE_HOLD

// #define ONESHOT_TAP_TOGGLE        2
// #define ONESHOT_TIMEOUT           3000

// // one-shot layer keys
// #define KC_MOMD OSL(_LOWER)

//#define OSL_LWR OSL(LWR)
//#define OSL_FUN OSL(FUN)

#endif
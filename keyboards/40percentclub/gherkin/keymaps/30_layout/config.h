#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"
#endif







// Enable this in case KC_LCAP were not recognized instead of KC_CAPS
/*
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
*/











#define PREVENT_STUCK_MODIFIERS

//Tap Dance Prerequisite
#define TAPPING_TERM 200

//Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY 20
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_DELAY 50
#define MOUSEKEY_WHEEL_INTERVAL 255
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 255  // max. value: 255

/* for QMK DFU bootloader */
/* not required if using default ProMicro bootloader */
/* set top left key as bootloader mode escape key */
#define QMK_ESC_OUTPUT B4 // usually COL
#define QMK_ESC_INPUT F7 // usually ROW
#define QMK_LED B0


/* confi.h had the following:
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 32
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_DELAY 50
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200
*/

/* keymap.c had the following:
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/
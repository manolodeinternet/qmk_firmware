#pragma once
#include QMK_KEYBOARD_H

#include "wrappers_defines.h"
#include "manolodeinternet.h"


// #include "rgblight.h"
// #include "wrappers.h"

// #include "wrappers.h"
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"


extern rgblight_config_t rgblight_config;    // without this line, it doesn't recognize rgblight_config
extern LED_TYPE tmp_led;

extern bool capslock_is_active;
// extern bool numbers_is_active;   // flag for _NUMB layer




bool whole_keyboard_as_indicator;
uint8_t diff, prev_diff;

uint16_t default_hue;
uint8_t  default_sat;
uint8_t  default_val;





// THIS VARIABLES ARE NOT GOING TO BE USED WITH 23 LEDS PER HAND
// __attribute__((weak)) int  prev_diff = 1;
// this variables are not going to be used with 23 leds per hand



void set_default_hsv(void);


void get_hsv(void);


void show_RGB_LEDs(void);


#pragma once
#include QMK_KEYBOARD_H

#include "wrappers_defines.h"
#include "manolodeinternet.h"


// #include "rgblight.h"
// #include "wrappers.h"

// #include "wrappers.h"
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"


extern rgblight_config_t rgblight_config;    // without this line, it doesn't recognize rgblight_config
//... we use it for checking if RGB LEDs are enabled along the program, trough 'process_record user' in
//... 'TOG_ID', 'STP_ID', 'SAV_COL'; in 'show_RGB_LEDs'; in drashna code 'keyboard_post_init_rgb';or in
//... 'rgblight_mini_dactyl.c' with 'setrgb_range' function.

// LED_TYPE tmp_led;  //[DELETEME]

// extern bool capslock_is_active;
// extern bool numbers_is_active;  //[only_GHERKIN]  // flag for _NUMB layer




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


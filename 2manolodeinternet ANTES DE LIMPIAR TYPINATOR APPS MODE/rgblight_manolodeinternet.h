// #pragma once
// #include QMK_KEYBOARD_H

// #include "wrappers_defines.h"
#include "manolodeinternet.h"


// #include "rgblight.h"
// #include "wrappers.h"

// #include "wrappers.h"
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"


//... we use it for checking if RGB LEDs are enabled along the program, trough 'process_record user' in
//... 'TOG_ID', 'STP_ID', 'SAV_COL'; in 'show_RGB_LEDs'; in drashna code 'keyboard_post_init_rgb';or in
//... 'rgblight_mini_dactyl.c' with 'setrgb_range' function.

// LED_TYPE tmp_led;  //[DELETEME]

// extern bool capslock_is_active;
// extern bool numbers_is_active;  //[MINI_DACTYL_SCOPE]  // flag for _NUMB layer


extern rgblight_config_t rgblight_config;    // without this line, it doesn't recognize rgblight_config


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

// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// // [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
// // [FUNCTIONS] [_LEDS] KC_O (SAV_COL)process_record_user                                //
// // [FUNCTIONS] [_LEDS] KC_L (GET_HSV)process_record_user                                //
// //                                                                                      //
// // RESET MY KEYBOARD FUNCTION                                                           //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //
void flashing_RGB_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2);
// //                                                                                      //
// // [functions] [_powr] kc_r   (my_reset)process_record_user                             //
// // [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
// //                                                                                      //
// // reset my keyboard function                                                           //
// //////////////////////////////////////////////////////////////////////////////////////////

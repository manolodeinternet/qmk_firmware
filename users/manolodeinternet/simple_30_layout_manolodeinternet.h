// #pragma once
// #include QMK_KEYBOARD_H

#include "manolodeinternet.h"
// #include "rgblight_mini_dactyl.h"

// SPECIFIC VARIABLES FOR MINI DACTYL
    uint8_t control_flag;
    uint8_t  option_flag;
    uint8_t current_flag;

    int    state_number;

    uint16_t lt12_timer;  // for using TT_NUMB; my own implementation of TT(layer): Layer Tap/Toggle

bool flip_layer_triggers; //for changing layers thumb triggers to the opposite hand

bool shift_was_activated; // it allows using shift+control+S for  opening Slack webpage in Safari
  
// bool numbers_is_active;   // flag for _NUMB layer


bool symbols_pressed;     // it allows changing from _SYMB to _NUMB and come back without LEDs issues

bool apps_trigger;        // with no apps layer
bool multi_apps_trigger;  // with no apps layer

bool multi_apps;
bool multi_apps_karabiner;  
bool apps_just_activated;
bool apps_working;
bool karabiner_apps_working;
bool changing_apps;   



      

// specific variables for mini dactyl


// __attribute__((weak)) bool triggered_control_mod(void);
// __attribute__((weak)) bool triggered_mod(uint8_t mod);








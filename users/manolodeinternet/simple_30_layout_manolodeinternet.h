#include "manolodeinternet.h"
// SPECIFIC VARIABLES FOR MINI DACTYL

    int    state_number;

    uint16_t lt12_timer;  // for using TT_NUMB; my own implementation of TT(layer): Layer Tap/Toggle

bool flip_layer_triggers; //for changing layers thumb triggers to the opposite hand

bool symbols_pressed;     // it allows changing from _SYMB to _NUMB and come back without LEDs issues

bool apps_trigger;        // with no apps layer
bool karabiner_apps_trigger;

bool multi_apps;
bool apps_just_activated;
bool changing_apps;
      

// specific variables for mini dactyl


// __attribute__((weak)) bool triggered_control_mod(void);
// __attribute__((weak)) bool triggered_mod(uint8_t mod);








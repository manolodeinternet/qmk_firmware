// #include "manolodeinternet.h"
#include "simple_30_layout_manolodeinternet.h"

    uint8_t control_flag;
    uint8_t  option_flag;

    uint8_t current_flag;


    int    state_number;

    uint16_t lt12_timer;


bool flip_layer_triggers     = false;

bool shift_was_activated    = false;
  
// bool numbers_is_active      = zizialse; // #01


bool symbols_pressed        = false;

bool apps_trigger           = false;  // with no apps layer
bool multi_apps_trigger     = false;  // with no apps layer

bool multi_apps             = false;
bool multi_apps_karabiner   = false;  
bool apps_just_activated    = false;
bool apps_working           = false;
bool karabiner_apps_working = false;
bool changing_apps          = false;           







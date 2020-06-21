bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    switch (keycode) // A..Z less (E O S D Evernote, OmniFocus, SimpleNote, DayOne)
    {
      case TH_L3_KAR_APPS:  
                      // layer_off(_APPS);
                      karabiner_apps_working = true;
                      
                      if (multi_apps)
                      {
                        // [BUG] current_flag or gui_flag ???
                        add_desired_mod(current_flag);
                        // [bug]

                        // add_mods(current_flag);
                        // add_weak_mods(current_flag);
                        // send_keyboard_report();
                      }
                      register_code(KC_F20);
                      
                      return false;

      ...

      default:     return false;
    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {

      case TH_R3_APPS_TRIGGER: apps_trigger = false;
                               apps_working = false;

                               show_RGB_LEDs();
                               return false;


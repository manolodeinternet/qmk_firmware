// APPS - PROCESS_RECORD_APPS
bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    switch(keycode)
    {
      case TD(DVIM_Del):// Left Thumb 1
                        // Quit app
                        register_code(KC_LGUI);
                             tap_code(KC_Q);
                      unregister_code(KC_LGUI);
                        return false;

      case MO(_FVIM):   // Left Thumb 2
                        // Toggle between current and last app
                        // It's similar to KC_Y in [_DALY], but ...
                        // IT CHANGES QUICKLY, WITHOUT APPS BAR IN THE MIDDLE OF THE SCREEN !!!
                        // If you want to change from one app to another app in multi_apps mode,
                        //...uncomment next line.
                        // multi_apps = true;
                          register_code(KC_LGUI);
                               tap_code(KC_TAB);
                        unregister_code(KC_LGUI);
                        return false;


//#01 #R3-L3
      case TT_NUMB:     // Left Thumb 3
                        // Karabiner-apps mode
#if defined(DEFAULT_TYPINATOR_APPS)
                        karabiner_apps_trigger = true;  
                        if (multi_apps)
                        {
                          // [bug] current_flag or gui_flag ???
                          add_mod(gui_flag);
                          // [bug]
                        }
                        register_code(KC_F20);                      
#elif defined(DEFAULT_KARABINER_APPS)
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
//[BUG]
                        unregister_code(KC_F20);

//karabiner_apps_trigger = false; ???

//[bug]
                        apps_trigger = true;
                        if (multi_apps)
                        {
                          remove_mod(gui_flag);
                        }
#endif
                        return false;


//#02 #R3-L3
      default:
   // default case will call one app for every 3x10 alpha keys
#if defined(DEFAULT_KARABINER_APPS)
                if (apps_trigger)
                { // calling appps at 'typinator style'
                  call_app_with_keycode(keycode & 0xFF);//the filter avoids modifiers on home row
                  return false;                   // i.e. pressing J is no KC_J, but LSFT_T(KC_J)
                }
             // calling apps at 'karabiner style'
                return true;
#elif defined(DEFAULT_TYPINATOR_APPS)
                if (karabiner_apps_trigger)
                {
               // calling apps at 'karabiner style'
                  return true;
                }
             // calling appps at 'typinator style'
                call_app_with_keycode(keycode & 0xFF);//the filter avoids modifiers on home row
                return false;                   // i.e. pressing J is no KC_J, but LSFT_T(KC_J)
#endif
                break;

    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {

//#03 #R3-L3
      case TH_R3_APPS_TRIGGER:// Right Thumb 3
                              // Switch off 'apps_trigger' variable mode without layer
                              // first_apps_trigger_pressed = false;

#if defined(DEFAULT_TYPINATOR_APPS)
                               apps_trigger = false;

                               if (!karabiner_apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                                 else
                                 {
                                    HIDEOTH;
                                 }
                               }

#elif defined(DEFAULT_KARABINER_APPS)
                               unregister_code(KC_F20);
                               karabiner_apps_trigger = false;

                               if (!apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                               }
#endif
                               return false;


//#04 #R3-L3
      case TT_NUMB:            // Left Thumb 3
                               // Karabiner-apps mode
                               // second_apps_trigger_pressed = false;

#if defined(DEFAULT_TYPINATOR_APPS)
                               unregister_code(KC_F20);
                               karabiner_apps_trigger = false;

                               if (!apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                               }

#elif defined(DEFAULT_KARABINER_APPS)
                               apps_trigger = false;

                               if (!karabiner_apps_trigger)
                               {
                                show_RGB_LEDs();
                                if (multi_apps)
                                {
                                  multi_apps = false;
                                }
                                else
                                {
                                  HIDEOTH;
                                }
                               }
#endif
                               return false;

      default:                 return false;
    } // switch(keycode)
  } // else ( if (record->event.pressed) )
}; // bool process_record_apps(uint16_t keycode, keyrecord_t *record)


// USER - PROCESS_RECORD_USER
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // [DELETEME]
  // if (record->event.pressed)
  // {
  //   shift_flag   = get_mods()&SHFT_MODS;
  //   control_flag = get_mods()&CTRL_MODS;
  //   option_flag  = get_mods()&ALT_MODS;
  //   gui_flag     = get_mods()&GUI_MODS;
  // }
  // [deleteme]

  if (apps_trigger || karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  }

// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode
  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {
//[_DFLT]


//#05 #R3-L3
      case TT_NUMB: // Left Thumb 3
                      lt12_timer = timer_read();
                      layer_invert(_NUMB);
                    return false;
//[_dflt]

//#06 #R3-L3
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
      case TH_R3_APPS_TRIGGER://if (option_flag)
                                if (check_mod_and_remove_it(ALT_MODS, true))
                                {
                                   layer_on(_NUMB);
                                }
                                else
                                {

#if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________
                                  apps_trigger = true;

                                  if (check_mod_and_remove_it (GUI_MODS, true)) { multi_apps = true;  }
                                  if (check_mod_and_remove_it(CTRL_MODS, true)) { control_apps = true;}
                                  if (check_mod_and_remove_it(SHFT_MODS, true)) { shift_apps = true;  }

#elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

                                  register_code(KC_F20);
                                  karabiner_apps_trigger = true;

                                  if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }
#endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

                                  rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
                                }
                                return false; 
// //////////////////////////////////////////////////////////////////////////////////////////////// ###

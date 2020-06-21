      case SIRI:
        register_code(KC_LGUI); register_code(KC_SPC);
        return false;
//[_daly]

   // this line is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed
    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release

  if (apps_trigger || karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  } // if (apps_trigger && !karabiner_apps_trigger)

    switch(keycode)
    {
    // [FIRMWARE_SIZE]
        // 746-674= 72 bytes saved using TT(layer) instead of my implementation
        // ... but RGB layer color changes too slow.  MY way is instantly changed !
        // if (record->event.pressed) {
        // case TT_NUMB:   lt12_timer = timer_read();
                        // layer_invert(_NUMB);
        //                 return false; 
        // Emulating TT(layer), but better:
    // [firmware_size]


//#07 #R3-L3
      case TT_NUMB:   // Left Thumb 3
                      // if Karabiner_apps_trigger ---> Karabiner_apps off
                      // else Invert _NUMB if it was a hold, no a quick tap


#if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________

                      if (karabiner_apps_trigger)
                      {
                        karabiner_apps_trigger = false;
                        unregister_code(KC_F20);

                        // remove 'multi_apps' mode
                        if (multi_apps)
                        {
                          remove_mod(gui_mod);
                        }

                        if (!apps_trigger) // if our right thumb doesn't continue holding R3
                        {
                          show_RGB_LEDs();
                          if (multi_apps)
                          {
                        // only if neither 'karabiner_apps_trigger' nor 'apps_trigger' are no longer working !
                            multi_apps = false;
                          }
                          else
                          {
                            // HIDEOTH;
                          }
                        }
                      }
                      return false;

#elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

                      if (apps_trigger)
                      {
                        apps_trigger = false;

                        if (multi_apps && karabiner_apps_trigger)
                        {
                          add_mod(gui_mod);
                        }

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
                        }// if (!karabiner_apps_trigger)

                      }// if (apps_trigger)
                      return false;

#endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

                      if (timer_elapsed(lt12_timer) > TAPPING_TERM)
                      {  
                        // if we have had pressed this 'trigger layer key' more time than tapping_term
                        // is because we have used it for typing some numbers (or letters if came from
                        // ... numbers layers)
                        //
                        // now, when we release this 'trigger layer key', we return to previous layer
                        layer_invert(_NUMB);
                      }                        
                      return false;


//#08 #R3-L3
      case TH_R3_APPS_TRIGGER: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
#if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________
                               {
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
                                     wait_ms(100);
                                     HIDEOTH;
                                   }
                                 }
                               }

#elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯
                               {
                                 karabiner_apps_trigger = false;
                                 unregister_code(KC_F20);

                                 if (!apps_trigger)
                                 {
                                   show_RGB_LEDs();
                                   if (multi_apps)
                                   {
                                     multi_apps = false;
                                     remove_mod(gui_mod);
                                   }
                                   else
                                   {
                                     // do nothing
                                   }
                                 }// if (!apps_trigger)
                               }

#endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

                               return false;










      case CHANGE_SYMB_TO_NUMB:      case SIRI:
        register_code(KC_LGUI); register_code(KC_SPC);
        return false;
//[_daly]

   // this line is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed
    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release

  if (apps_trigger || karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  } // if (apps_trigger && !karabiner_apps_trigger)

    switch(keycode)
    {
    // [FIRMWARE_SIZE]
        // 746-674= 72 bytes saved using TT(layer) instead of my implementation
        // ... but RGB layer color changes too slow.  MY way is instantly changed !
        // if (record->event.pressed) {
        // case TT_NUMB:   lt12_timer = timer_read();
                        // layer_invert(_NUMB);
        //                 return false; 
        // Emulating TT(layer), but better:
    // [firmware_size]


//#07 #R3-L3
      case TT_NUMB:   // Left Thumb 3
                      // if Karabiner_apps_trigger ---> Karabiner_apps off
                      // else Invert _NUMB if it was a hold, no a quick tap


#if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________

                      if (karabiner_apps_trigger)
                      {
                        karabiner_apps_trigger = false;
                        unregister_code(KC_F20);

                        // remove 'multi_apps' mode
                        if (multi_apps)
                        {
                          remove_mod(gui_mod);
                        }

                        if (!apps_trigger) // if our right thumb doesn't continue holding R3
                        {
                          show_RGB_LEDs();
                          if (multi_apps)
                          {
                        // only if neither 'karabiner_apps_trigger' nor 'apps_trigger' are no longer working !
                            multi_apps = false;
                          }
                          else
                          {
                            // HIDEOTH;
                          }
                        }
                      }
                      return false;

#elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

                      if (apps_trigger)
                      {
                        apps_trigger = false;

                        if (multi_apps && karabiner_apps_trigger)
                        {
                          add_mod(gui_mod);
                        }

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
                        }// if (!karabiner_apps_trigger)

                      }// if (apps_trigger)
                      return false;

#endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

                      if (timer_elapsed(lt12_timer) > TAPPING_TERM)
                      {  
                        // if we have had pressed this 'trigger layer key' more time than tapping_term
                        // is because we have used it for typing some numbers (or letters if came from
                        // ... numbers layers)
                        //
                        // now, when we release this 'trigger layer key', we return to previous layer
                        layer_invert(_NUMB);
                      }                        
                      return false;


//#08 #R3-L3
      case TH_R3_APPS_TRIGGER: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
#if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________
                               {
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
                                     wait_ms(100);
                                     HIDEOTH;
                                   }
                                 }
                               }

#elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯
                               {
                                 karabiner_apps_trigger = false;
                                 unregister_code(KC_F20);

                                 if (!apps_trigger)
                                 {
                                   show_RGB_LEDs();
                                   if (multi_apps)
                                   {
                                     multi_apps = false;
                                     remove_mod(gui_mod);
                                   }
                                   else
                                   {
                                     // do nothing
                                   }
                                 }// if (!apps_trigger)
                               }

#endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

                               return false;










      case CHANGE_SYMB_TO_NUMB:
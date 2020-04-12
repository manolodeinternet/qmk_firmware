//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// MACROS FOR PROCESS_RECORD_USER()                                                     //
//                                                                                      //
///////////////////////////////////////////////////////////////////////////////////////

enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

#elif defined(SIMPLE_30_LAYOUT)

   ,TH_L4_FUNC_LEDS
   ,TH_R4_POWR_LEDS

...

  if (record->event.pressed)
  // Do something when pressed
  {

    option_flag  = get_mods()&ALT_MODS;

...

   case TH_L4_FUNC_LEDS:
      // if (get_mods()&ALT_MODS)
      if (triggered_mod(KC_A))
      {
        layer_on(_LEDS);
      }
      else
      {
        layer_on(_FUNC);
      }
      return false;

...

    case TH_R4_POWR_LEDS:
      // if (get_mods()&ALT_MODS)
      if (triggered_mod(KC_A))
      {
        layer_on(_LEDS);
      }
      else
      {
        layer_on(_POWR);
      }
      return false;

...

  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {

...

    case TH_L4_FUNC_LEDS:
      if (state_number == _LEDS)
      {
        layer_off(_LEDS);
      }
      else
      if (state_number == _FUNC)
      {
         layer_off(_FUNC);
      }
      return false;


...

    case TH_R4_POWR_LEDS:
      if (state_number == _LEDS)
      {
        layer_off(_LEDS);
      }
      else
      if (state_number == _POWR)
      {
         layer_off(_POWR);
      }
      return false;

...

// #include QMK_KEYBOARD_H
#include "fn_actions.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                                                                                   //
//                             F N _ A C T I O N S     F U N C T I O N S                             //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
//

const uint16_t PROGMEM fn_actions[] = {
  [ACC_A] = ACTION_FUNCTION(ACC_A),
  [ACC_E] = ACTION_FUNCTION(ACC_E),
  [ACC_I] = ACTION_FUNCTION(ACC_I),
  [ACC_O] = ACTION_FUNCTION(ACC_O),
  [ACC_U] = ACTION_FUNCTION(ACC_U),

  [TIL_N] = ACTION_FUNCTION(TIL_N),

  [CAPSL] = ACTION_FUNCTION(CAPSL)
};
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  sft_mod = get_mods()&SHFT_MODS;
  switch (id) {

    case ACC_A ... TIL_N:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (sft_mod)  // sft_mod is grabbed at the very beginning of action_function()
        {
        //  release LSHIFT
            // old way who worked fine
            // del_mods(sft_mod);
            // del_weak_mods(sft_mod);
            // send_keyboard_report();
          remove_mod(sft_mod);
        }// if (sft_mod)
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else { if (id == TIL_N)           {tilde_accent_function(); } 

                  else                           { acute_accent_function(); } 
                     }
                  }
               }

        enable_capslock_after_accents_function();
        if (sft_mod)
        {
        //  press LSHIFT
          add_mod(sft_mod);
          // add_mods(sft_mod);
          // add_weak_mods(sft_mod);
          // send_keyboard_report();
        }// if (sft_mod)
      }// if (record->event.pressed)
    break;

    case CAPSL:
      if (record->event.pressed)
      {
      /*The key is being pressed.*/
         capslock_tap();

#if defined(RGBLIGHT_ENABLE)
         show_RGB_LEDs();
#endif
      }// if (record->event.pressed)
      break;
  }// switch (id)

  if (record->event.pressed) 
  {
    switch (id) 
    {   case ACC_A: tap_code(KC_A); break;
        case ACC_E: tap_code(KC_E); break;
        case ACC_I: tap_code(KC_I); break;
        case ACC_O: tap_code(KC_O); break;
        case ACC_U: tap_code(KC_U); break;
        case TIL_N: tap_code(KC_N); break;
    }
  }
};
//                                                                                                   //
//                                                                                                   //
//                             f n _ a c t i o n s     f u n c t i o n s                             //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////

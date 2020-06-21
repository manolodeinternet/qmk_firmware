//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


      case KC_A...KC_C:

      case KC_F...KC_N:

      case KC_P...KC_R:

      case KC_T...KC_Z: call_app_with_keycode(keycode);
                        return false;

      case KC_D:

      case KC_E:

      case KC_O:

      case KC_S:  

      case KC_SPC:
      case KC_ESC:
      case KC_BSPC:
      case KC_ENT: return false;
    //30 keys: 26 alpha keys + space + escape + backspace + enter

      default:     return false;
    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

      case KC_A...KC_Z:
      case KC_SPC:
      case KC_ESC:
      case KC_BSPC:
      case KC_ENT: return false;
    //30 keys: 26 alpha keys + space + escape + backspace + enter

      default:     return false;
    }
  }
  return false;
};


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    switch (keycode) // A..Z less (E O S D Evernote, OmniFocus, SimpleNote, DayOne)
    {
    //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER


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

      case KC_A:
      case KC_B:
      case KC_C:


      case KC_F:
      case KC_G:
      case KC_H:
      case KC_I:
      case KC_J:
      case KC_K:
      case KC_L:
      case KC_M:
      case KC_N:

      case KC_P:
      case KC_Q:
      case KC_R:

      case KC_T:
      case KC_U:
      case KC_V:
      case KC_W:
      case KC_X:
      case KC_Y:
      case KC_Z: call_app_with_keycode(keycode);
                 return false;

      case KC_D:

      case KC_E:

      case KC_O:

      case KC_S:  

      case KC_SPC:
      case KC_ESC:
      case KC_BSPC:
      case KC_ENT: return false;
    //30 keys: 26 alpha keys + space + escape + backspace + enter

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

                               if (!karabiner_apps_working)
                               {
                                 show_RGB_LEDs();
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                               }
                               return false;

    //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER
      case KC_A:
      case KC_B:
      case KC_C:
      case KC_D:
      case KC_E:
      case KC_F:
      case KC_G:
      case KC_H:
      case KC_I:
      case KC_J:
      case KC_K:
      case KC_L:
      case KC_M:
      case KC_N:
      case KC_O:
      case KC_P:
      case KC_Q:
      case KC_R:
      case KC_S:  
      case KC_T:
      case KC_U:
      case KC_V:
      case KC_W:
      case KC_X:
      case KC_Y:
      case KC_Z:

      case KC_SPC:
      case KC_ESC:
      case KC_BSPC:
      case KC_ENT: return false;
    //30 keys: 26 alpha keys + space + escape + backspace + enter

      default:     return false;
    }
  }
  return false;
};

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

//       case APP_Q_SNOTE:
//       case APP_W_TWTTR:
//       case APP_E_EVERN:
//       case APP_R_APSTO:
//       case APP_T_TERMI:

//       case APP_Y_TYPIN:
//       case APP_U_UROOM:
//       case APP_I_TEDIT:
//       case APP_O_OMNIF:
//       case APP_P_SPREF:

//       case APP_A_SCRPT:
//       case APP_S_SAFAR:
//       case APP_D_D_ONE:
//       case APP_F_FINDE:
//       case APP_G_CHRME:

//       case APP_H_SKTCH:
//       case APP_J_SUBLI:
//       case APP_K_KRBNR:
//       case APP_L_CLNDR:
//       case APPSP_EMPTY:

//       case APP_Z_STUDI:
//       case APP_X_XCODE:
//       case APP_C_CALCU:
//       case APP_V_KVIEW:
//       case APP_B_BOOKS:

//       case APP_N_NOTES:
//       case APP_M_MAIL:
//       case APP_ES_KEYN:
//       case APP_BS_PAGE:
//       case APP_EN_NUMB:


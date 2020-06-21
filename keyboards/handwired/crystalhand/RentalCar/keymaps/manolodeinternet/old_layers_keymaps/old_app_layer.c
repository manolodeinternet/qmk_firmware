
//[PLACEHOLDER] //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// //[_APPS] = LAYER 10 : APPLICATIONS LAYER
//   [_APPS] = LAYOUT_wrapper(
// //.----------------------------------------.                 .----------------------------------------.
//                __APPLICATS_L1__,                                          __APPLICATS_R1__,
// //|----------------------------------------|                 |----------------------------------------|
//                __APPLICATS_L2__,                                          __APPLICATS_R2__,
// //|----------------------------------------|                 |----------------------------------------|
//                __APPLICATS_L3__,                                          __APPLICATS_R3__,
// //'----------------------------------------'                 '----------------------------------------'
// //
//  //                     .------------------------.     .------------------------.
//                             _APPS_LTHMB_RW1_,              _APPS_RTHMB_RW1_,
// //                     |------------------------|     |------------------------|
//                                       KC_NO ,               KC_NO,
// //                     |------------------------|     |------------------------|
//                             _APPS_LTHMB_RW2_,              _APPS_RTHMB_RW2_
// //                     '------------------------'     '------------------------'
// ),
// // END OF _APPS 10
// /////////////////////////////////////////////////////////////////////////////////////////////////// ###
//[PLACEHOLDER] //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


  // if (apps_trigger && !karabiner_apps_working)
  // {
  //   return process_record_apps(keycode, record);
  // }

  // if (apps_trigger && !karabiner_apps_working)
  // {
  //   switch(keycode)
  //   {


  //   //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER
  //     // case LCTL_T(KC_A):
  //     // case LALT_T(KC_S):
  //     // case LGUI_T(KC_D):
  //     // case LSFT_T(KC_F):

  //     // case LSFT_T(KC_J):
  //     // case LGUI_T(KC_K):
  //     // case LALT_T(KC_L):
  //     // case LCTL_T(KC_SPC):

  //     // case KC_B ... KC_C:
  //     // case KC_E:
  //     // case KC_G ... KC_I:
  //     // case KC_M ... KC_R:
  //     // case KC_T ... KC_Z:
  //     // case KC_ESC:
  //     // case KC_BSPC:
  //     // case KC_ENT:        return false; break;

  //     case KC_A ... KC_Z: 
  //     case KC_SPC:
  //     case KC_ESC:        
  //     case KC_BSPC:       
  //     case KC_ENT:        return false; break;

    //30 keys: 26 alpha keys + space + escape + backspace + enter




      // this 'TH_R3_APPS_TRIGGER' has been moved below !!!
      // case TH_R3_APPS_TRIGGER: apps_trigger = false;
      //                          apps_working = false;

      //                          if (!karabiner_apps_working)
      //                          {
      //                            show_RGB_LEDs();
      //                            if (multi_apps)
      //                            {
      //                              multi_apps = false;
      //                            }
      //                            else
      //                            {
      //                               HIDEOTH;
      //                            }
      //                          }
      //                          return false; break;

    //   default:     return false; break;
    // } // switch (keycode)
  // } // if (apps_trigger && !karabiner_apps_working)
  // else
  // {



  //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

{ KC_A, KC_B, KC_C,
  KC_F, KC_G, KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N,
  KC_P, KC_Q, KC_R,
  KC_T, KC_U, KC_V, KC_W, KC_X, KC_Y, KC_Z,
  KC_SPC,
  KC_ESC,
  KC_BSPC,
  KC_ENT }
// case KC_D:
// case KC_E:
// case KC_F ... KC_N:
// case KC_O:
// case KC_P ... KC_R:
// case KC_S:
// case KC_T ... KC_Z:
// case KC_SPC:
// case KC_ESC:    call_app_with_keycode(KC_1);        return false; break;
// case KC_BSPC:   call_app_with_keycode(KC_2);        return false; break;
// case KC_ENT:    call_app_with_keycode(KC_3);        return false; break;
uint16_t apps_keycodes[2] = {KC_J, KC_T}; 

const char *apps_names[2] = {"Sublime Text\n", "Terminal.app\n"};




//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



// APPS - PROCESS_RECORD_APPS
bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    // switch(keycode & 0xFF)
    // {
    //   //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER      
    //   // case KC_A ... KC_C:
    //   // case KC_D:
    //   // case KC_E:
    //   // case KC_F ... KC_N:
    //   // case KC_O:
    //   // case KC_P ... KC_R:
    //   // case KC_S:
    //   // case KC_T ... KC_Z:
    //   // case KC_SPC:
    //   // case KC_ESC:    call_app_with_keycode(KC_1);        return false; break;
    //   // case KC_BSPC:   call_app_with_keycode(KC_2);        return false; break;
    //   // case KC_ENT:    call_app_with_keycode(KC_3);        return false; break;

    //   case KC_A ... KC_Z: call_app_with_keycode(keycode); return false; break;
    //   case KC_SPC:        call_app_with_keycode(keycode); return false; break;
    //   case KC_ESC:        call_app_with_keycode(KC_1);    return false; break;
    //   case KC_BSPC:       call_app_with_keycode(KC_2);    return false; break;
    //   case KC_ENT:        call_app_with_keycode(KC_3);    return false; break;
    //   //30 keys: 26 alpha keys + space + escape + backspace + enterV
    // } // switch (keycode & 0xFF)
    switch(keycode)
    {
//    case TH_L3_KAR_APPS:
      case TT_NUMB: karabiner_apps_trigger = true;  
                    if (multi_apps)
                    {
                      // [bug] current_flag or gui_flag ???
                      add_desired_mod(current_flag);
                      // [bug]

                      // add_mods(current_flag);
                      // add_weak_mods(current_flag);
                      // send_keyboard_report();
                      }
                      register_code(KC_F20);                      
                      return false; break;

      default:        call_app_with_keycode(keycode & 0xFF);
                      return false;
    } // switch (keycode)


//     switch (keycode) // A..Z less (E O S D Evernote, OmniFocus, SimpleNote, DayOne)
//     {
//     //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER
//       case KC_A ... KC_Z:

//       case KC_SPC: call_app_with_keycode(keycode); return false; break;

//       case KC_ESC:    call_app_with_keycode(KC_1); return false; break;
//       case KC_BSPC:   call_app_with_keycode(KC_2); return false; break;
//       case KC_ENT:    call_app_with_keycode(KC_3); return false; break;

// //    case TH_L3_KAR_APPS:
//       case TT_NUMB:   karabiner_apps_trigger = true;  
//                       if (multi_apps)
//                       {
//                         // [bug] current_flag or gui_flag ???
//                         add_desired_mod(current_flag);
//                         // [bug]

//                         // add_mods(current_flag);
//                         // add_weak_mods(current_flag);
//                         // send_keyboard_report();
//                       }
//                       register_code(KC_F20);                      
//                       return false; break;
//     //30 keys: 26 alpha keys + space + escape + backspace + enter

//       default:     return false;
//     } // switch (keycode)


  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {


    //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER

      // case KC_A ... KC_Z:

      // case KC_SPC:
      // case KC_ESC:
      // case KC_BSPC:
      // case KC_ENT: return false; break;
    //30 keys: 26 alpha keys + space + escape + backspace + enter


      case TH_R3_APPS_TRIGGER: apps_trigger = false;

                               if (!karabiner_apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                                 else
                                 {
                                    // wait_ms(1000);
                                    HIDEOTH;
                                 }
                               }
                               return false; break;

      default:     return false; break;
    }
  }
  // return false;
};



// USER - PROCESS_RECORD_USER
bool process_record_user(uint16_t keycode, keyrecord_t *record) {



  // if (record->event.pressed)
  // {
  //   shift_flag   = get_mods()&SHFT_MODS;
  //   control_flag = get_mods()&CTRL_MODS;
  //   option_flag  = get_mods()&ALT_MODS;
  //   gui_flag     = get_mods()&GUI_MODS;
  // }


  if (apps_trigger && !karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  } // if (apps_trigger && !karabiner_apps_trigger)




// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in default mode
  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {
      case TT_NUMB: 
//    case TH_L3_KAR_APPS: 
//
// NEXT NEVER HAPPENS !!!
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
                    // if (apps_trigger)
                    // {
                    //   karabiner_apps_trigger = true;  
                    //   if (multi_apps)
                    //   {
                    //     // [bug] current_flag or gui_flag ???
                    //     add_desired_mod(current_flag);
                    //     // [bug]

                    //     // add_mods(current_flag);
                    //     // add_weak_mods(current_flag);
                    //     // send_keyboard_report();
                    //   }
                    //   register_code(KC_F20);                      
                    // }
                    // else
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
                      lt12_timer = timer_read();
                      layer_invert(_NUMB);
                    return false;


      case PREV_APP:  register_code  (KC_LGUI);
                      register_code  (KC_LSFT);
                      tap_code       (KC_TAB);
                      unregister_code(KC_LSFT);
                      changing_apps = true;
                      return false;                      

      case NEXT_APP:  register_code  (KC_LGUI);
                      tap_code       (KC_TAB);
                      changing_apps = true;
                      return false;
  


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

const uint16_t apps_keycodes[APPS_DICT_SIZE] =
{
  KC_Q, KC_W, KC_E, KC_R, KC_T,
  KC_A, KC_S, KC_D, KC_F, KC_G,
  KC_Z, KC_X, KC_C, KC_V, KC_B,
  
                                                                  KC_Y, KC_U, KC_I,   KC_O,    KC_P,
                                                                  KC_H, KC_J, KC_K,   KC_L,    KC_SPC,
                                                                  KC_N, KC_M, KC_ESC, KC_BSPC, KC_ENT 
};

const char *apps_names[APPS_DICT_SIZE] =
{
"Simplenote",    "Twitter",      "Evernote",           "App Store",             "Terminal",
"Script Editor", "Safari",       "Day One",            "Finder",                "Google Chrome",
"Studies",       "Xcode",        "Calculator",         "Karabiner-EventViewer", "Books"

"Typinator",     "URoom",        "TextEdit",           "Omnifocus",             "System Preferences",
[FIRMWARE_SIZE]
with only next 5 apps, we get saving 352 bytes over + 364 bytes free = 716 bytes free
"Sketch",        "Sublime Text", "Karabiner-Elements", "Calendar",              "Safari",
[firmware_size]
"Notes",         "Mail",         "Keynote",            "Pages",                 "Numbers"
};

void write_app_name(uint16_t keycode)
{
    for(int my_index = 0; my_index < APPS_DICT_SIZE; my_index++)
    {
        if (apps_keycodes[my_index] == keycode)
        {
          // SS_BEEP_2;
       // open Spotlight search:
          register_code (KC_LGUI);
               tap_code (KC_SPC);
        unregister_code (KC_LGUI);

             send_string(apps_names[my_index]);
             SEND_STRING(".app");
                tap_code(KC_ENT);
        } // if (apps_keycodes[my_index] == keycode)
    } // for (int my_index...  
}



void call_app_with_keycode(uint16_t keycode /* keycode is already filtered with '& 0xFF' */ )  
{

switch(keycode)
{
      case KC_E: 
                        if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_N);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  E vernote
                        }
                        else
                        {
                          write_app_name(keycode);                          // E vernote
                        }
                        // return false;
                        break;

      case KC_O:
                        if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_SPC);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  O mnifocus
                        }
                        else
                        {
                          write_app_name(keycode);                          // O mnifocus
                        }
                        // return false;
                        break;


      case KC_S:        //               S: opens Safari
                        //       control+S: opens Safari with address bar focused 
                        // shift+control+S: opens Slack webpage in Safari 

                        if (control_flag)
                        {
                          triggered_control_mod();
                          // if (shift_flag)
                          // {
                          //   shift_was_activated = true;
                          //   remove_shift_mod();
                          // }

                          if (shift_flag)
                          {
                            shift_was_activated = true;
                            remove_activated_mod(shift_flag);
                            // del_mods     (shift_flag);
                            // del_weak_mods(shift_flag);
                            // send_keyboard_report();
                          }







                          // wait_ms(50);
                          // my_wait_milliseconds((uint32_t)50);


                          write_app_name(keycode);

                          wait_ms(50);
                          // my_wait_milliseconds((uint32_t)50);


                          register_code(KC_LGUI);
                          // wait_ms(50);
                          tap_code(KC_L);                                   // Opens addre S S    bar for introduce an URL...
                          unregister_code(KC_LGUI);
                          if (shift_was_activated)
                          {
                            shift_was_activated = false;

 ///////////////////////////////////////
                           wait_ms(50);                                    // ... or googling something
                            // my_wait_milliseconds((uint32_t)50);



                            send_string("http://www.slack.com\n");          // S lack
                          }
                        }                          
                        else
                        {
                          write_app_name(keycode);                          // S afari     
                        }
                        // return false;
                        break;


      case KC_D: 
                        if (control_flag)
                        {
                          register_code(KC_LSFT);
                          tap_code(KC_D);
                          unregister_code(KC_LSFT);
                          unregister_code(KC_LCTL);                         // quick entry  D ay one
                        }
                        else
                        {
                          write_app_name(keycode);                          // D ay one
                        }
                        // return false;
                        break;


      //30 KEYS: 26 ALPHA KEYS + SPACE + ESCAPE + BACKSPACE + ENTER      
      // case KC_A ... KC_C:
      // // case KC_D:
      // // case KC_E:
      // case KC_F ... KC_N:
      // // case KC_O:
      // case KC_P ... KC_R:
      // // case KC_S:
      // case KC_T ... KC_Z:
      // case KC_SPC:
      // case KC_ESC:
      // case KC_BSPC:
      // case KC_ENT:

// // Left Row 1:
//       case KC_Q:
//       case KC_W:
//     //case KC_E:
//       case KC_R:
//       case KC_T:

// // Right Row 2:
//       case KC_H ... KC_L:
//       case KC_SPC:

// // Right Row 3:
//       case KC_N:
//       case KC_M:

      case KC_A ... KC_C:
// case KC_D:
// case KC_E:
      case KC_F ... KC_N:
// case KC_O:
      case KC_P ... KC_R:
// case KC_S:
      case KC_T ... KC_Z:
      case KC_SPC:
      case KC_ESC:
      case KC_BSPC:
      case KC_ENT:

                          write_app_name(keycode); 
                          // return false;

  } // switch(keycode)

} // void call_app_with_keycode(uint16_t keycode)

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

// APPLICATIONS
// Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
// Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
//   system("open //Applications//Notes.app");
//   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
//
//
//

// KEYCODES FOR TRIGGERING APPS

// // [FIRMWARE_SIZE]
// //  From APP_Q_SNOTE to APP_EN_NUMB we save 676 bytes !!!
// // [firmware_size]
// // LEFT ROW 1 APPS
//       case APP_Q_SNOTE: callApp("q");                         return false; // simple note
//       //
//     // [FIRMWARE_SIZE]
//       // 10 bytes saved if we don't declare 'APP_W_TWTTR' and don't write the next line
//       case APP_W_TWTTR: callApp("w");                         return false; // t W itter
//     // [firmware_size]
//       //
//     // [FIRMWARE_SIZE]
//       // 88 bytes free when disable Evernote case and 40 bytes when I enable it  -->  it costs 48 bytes of code
//     // [firmware_size]
//       case APP_E_EVERN: 
//                         if (control_flag)
//                         {
//                           register_code(KC_LALT);
//                           tap_code(KC_N);
//                           unregister_code(KC_LALT);
//                           unregister_code(KC_LCTL);                         // quick entry  E vernote
//                         }
//                         else
//                         {
//                           callApp("e");                        
//                         }
//                         return false;                                       // E vernote
//       //
//       case APP_R_APSTO: callApp("r");                         return false; // app sto R e
//       case APP_T_TERMI: callApp("t");                         return false; // T erminal


// // RIGHT ROW 1 APPS
//       case APP_Y_TYPIN: callApp("y");                         return false; // t Y pinator
//       case APP_U_UROOM: callApp("u");                         return false; // U room
//       case APP_I_TEDIT: callApp("i");                         return false; // texted I t
//       case APP_O_OMNIF: if (control_flag)
//                         {
//                           register_code(KC_LALT);
//                           tap_code(KC_SPC);
//                           unregister_code(KC_LALT);
//                           unregister_code(KC_LCTL);                         // quick entry  O mnifocus
//                         }
//                         else
//                         {
//                           callApp("o");                       
//                         }
//                         return false;                                       // O mnifocus
//       case APP_P_SPREF: callApp("p");                         return false; // system P references


// // LEFT ROW 2 APPS
//       case APP_A_SCRPT: callApp("a");                         return false; // A pple script
//       case APP_S_SAFAR: //               S: opens Safari
//                         //       control+S: opens Safari with address bar focused 
//                         // shift+control+S: opens Slack webpage in Safari 

//                         if (control_flag)
//                         {
//                           triggered_control_mod();
//                           // if (shift_flag)
//                           // {
//                           //   shift_was_activated = true;
//                           //   remove_shift_mod();
//                           // }

//                           if (shift_flag)
//                           {
//                             shift_was_activated = true;
//                             remove_activated_mod(shift_flag);
//                             // del_mods     (shift_flag);
//                             // del_weak_mods(shift_flag);
//                             // send_keyboard_report();
//                           }

//                           wait_ms(50);
//                           callApp("s");
//                           wait_ms(50);
//                           register_code(KC_LGUI);
//                           // wait_ms(50);
//                           tap_code(KC_L);                                   // Opens addre S S    bar for introduce an URL...
//                           unregister_code(KC_LGUI);
//                           if (shift_was_activated)
//                           {
//                             shift_was_activated = false;
//                             wait_ms(50);                                    // ... or googling something
//                             send_string("http://www.slack.com\n");          // S lack
//                           }
//                         }                          
//                         else
//                         {
//                           callApp("s");                                     // S afari     
//                         }
//                         return false;
//       case APP_D_D_ONE: 
//                         if (control_flag)
//                         {
//                           register_code(KC_LSFT);
//                           tap_code(KC_D);
//                           unregister_code(KC_LSFT);
//                           unregister_code(KC_LCTL);                         // quick entry  D ay one
//                         }
//                         else
//                         {
//                           callApp("d");
//                         }
//                         return false;                                       // D ay one
//       case APP_F_FINDE: callApp("f");                         return false; // F inder
//       case APP_G_CHRME: callApp("g");                         return false; // G oogle chrome


// // RIGHT ROW 2 APPS
//       case APP_H_SKTCH: callApp("h");                         return false; // sketc H
//       case APP_J_SUBLI: callApp("j");                         return false; // sublime text
//       case APP_K_KRBNR: callApp("k");                         return false; // K arabiner-elements
//       case APP_L_CLNDR: callApp("l");                         return false; // Calendar
//       // case APPSP_EMPTY: callApp(" ");                         return false; // ???? EMPTY EMPTY EMPTY EMPTY 


// // LEFT ROW 3 APPS
//       // case APP_Z_STUDI: callApp("z");                         return false; // Studies
//       case APP_X_XCODE: callApp("x");                         return false; // Xcode
//       case APP_C_CALCU: callApp("c");                         return false; // Calculator
//       case APP_V_KVIEW: callApp("v");                         return false; // karabiner-event Viewer
//       case APP_B_BOOKS: callApp("b");                         return false; // Books


// // RIGHT ROW 3 APPS
//       case APP_N_NOTES: callApp("n");                         return false; // Notes
//       case APP_M_MAIL:  callApp("m");                         return false; // Mail      
//       // case APP_ES_KEYN: callApp("\e");                        return false; // Keynote
//       // case APP_BS_PAGE: callApp("\b");                        return false; // Pages
//       // case APP_EN_NUMB: callApp("\n");                        return false; // Numbers
//       // case APP_ES_KEYN: callApp("1");                         return false; // Keynote
//       case APP_BS_PAGE: callApp("2");                         return false; // Pages
//       case APP_EN_NUMB: callApp("3");                         return false; // Numbers
// // keycodes for triggering apps
// // applications
// //
// // keycodes for triggering apps
//
// [firmware_size]









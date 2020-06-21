// OLD FN_ACTIONS
/*
  [DIA_A] = ACTION_FUNCTION(DIA_A),
  [DIA_E] = ACTION_FUNCTION(DIA_E),
  [DIA_I] = ACTION_FUNCTION(DIA_I),
  [DIA_O] = ACTION_FUNCTION(DIA_O),
  [DIA_U] = ACTION_FUNCTION(DIA_U),
*/  
//     case DIA_A:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(shift_flag);
//             del_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
//         diaeresis_accent_function();
//         enable_capslock_after_accents_function();
//         if (shift_flag)
//         {
//         //  press LSHIFT
//             add_mods(shift_flag);
//             add_weak_mods(shift_flag);
//             send_keyboard_report();
//         };            
//      // [FIXME] [FIX THE FO LINE LOCATION]
//       register_code(KC_A);
//       unregister_code(KC_A);
//     }
//     else
//     {
// //        SEND_STRING("NO record event pressed");
//     }
//     break;


//     case DIA_E:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(shift_flag);
//             del_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
//         diaeresis_accent_function();
//         enable_capslock_after_accents_function();
//         if (shift_flag)
//         {
//         //  press LSHIFT
//             add_mods(shift_flag);
//             add_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
       
//         register_code(KC_E);
//         unregister_code(KC_E);
//       }
//       else
//       {
//       }
//       break;

//     case DIA_I:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(shift_flag);
//             del_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
//         diaeresis_accent_function();
//         enable_capslock_after_accents_function();
//         if (shift_flag)
//         {
//         //  press LSHIFT
//             add_mods(shift_flag);
//             add_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
        
//         register_code(KC_I);
//         unregister_code(KC_I);
//       }
//       else
//       {
//       }
//       break;

//     case DIA_O:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(shift_flag);
//             del_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
//         diaeresis_accent_function();
//         enable_capslock_after_accents_function();
//         if (shift_flag)
//         {
//         //  press LSHIFT
//             add_mods(shift_flag);
//             add_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
            
//         register_code(KC_O);
//         unregister_code(KC_O);
//       }
//       else
//       {
//       }
//       break;

//     case DIA_U:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(shift_flag);
//             del_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
//         diaeresis_accent_function();
//         enable_capslock_after_accents_function();
//         if (shift_flag)
//         {
//         //  press LSHIFT
//             add_mods(shift_flag);
//             add_weak_mods(shift_flag);
//             send_keyboard_report();
//         };
            
//         register_code(KC_U);       
//         unregister_code(KC_U);
//       }
//       else
//       {
//       }  
//       break;

// old fn_actions

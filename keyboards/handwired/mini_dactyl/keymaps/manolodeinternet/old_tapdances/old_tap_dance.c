// gherkin
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
  {
   if (state->interrupted || !state->pressed) 
   // IF the key has been pressed only once 
   // AND  (the key has been interrupted by pressing another key after it
   //       OR   the key is not pressed at present)
     return SINGLE_TAP;
     else 
     // IF  the key has been pressed only once
     // AND the key has not been interrupted
     // AND the key is still pressed  
       return SINGLE_HOLD;
    }
    else 
    { 
      if (state->count == 2)
        { 
          if (state->interrupted)
          // IF   the key has been pressed twice
          // AND  the key has been interrupted by pressing another key after it
          return DOUBLE_SINGLE_TAP;
          else
            if (state->pressed) 
            // IF  the key has been pressed twice
            // AND the key has not been interrupted by pressing another key
            // AND the key is still pressed
              return DOUBLE_HOLD;
            else
            // IF  the key has been pressed twice
            // AND the key has not being interrupted by pressing another key
            // AND the key is not pressed at present
              return DOUBLE_TAP;
        }
/*
      else if (state->count == 3) {
      if (state->interrupted) return TRIPLE_SINGLE_TAP;
      else if (state->pressed) return TRIPLE_HOLD;
      else return TRIPLE_TAP;
      }
      else if (state->count == 4) {
        if (state->interrupted) return QUADRUPLE_SINGLE_TAP;
        else if (state->pressed) return QUADRUPLE_HOLD;
        else return QUADRUPLE_TAP;
      }
      else if (state->count == 5) {
        if (state->interrupted) return QUINTUPLE_SINGLE_TAP;
        else if (state->pressed) return QUINTUPLE_HOLD;
        else return QUINTUPLE_TAP;
      }
      else if (state->count == 6) {
        if (state->interrupted) return SEXTUPLE_SINGLE_TAP;
        else if (state->pressed) return SEXTUPLE_HOLD;
        else return SEXTUPLE_TAP;
      }
      else return 18; //magic number. At some point this method will expand to work for more presses
*/
      else return 6;
    }
}
//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


//minidactyl
 int cur_dance (qk_tap_dance_state_t *state) {
   if (state->count == 1) 
         if (state->interrupted || !state->pressed) 
         // IF the key has been pressed only once 
         // AND  (the key has been interrupted by pressing another key after it
         //       OR   the key is not pressed at present)
           return SINGLE_TAP;
         else    
           //key has not been interrupted, but they key is still held. Means you want to send a 'HOLD'.
           // [MINE]
           // IF  the key has been pressed only once
           // AND the key has not been interrupted
           // AND the key is still pressed  (the key is still held)
           // [mine]
         // {    option_flag = get_mods()&ALT_MODS;
         //      gui_flag = get_mods()&GUI_MODS;

         //      if (option_flag)
         //        return ALT_plus_HOLD;
         //      else
         //        if (gui_flag)
         //          return GUI_plus_HOLD;          
         //        else
                  return SINGLE_HOLD;
          // }
 //if (state->count == 1) 
   else
   if (state->count == 2)
     { 
       if (state->interrupted)
       // IF   the key has been pressed twice
       // AND  the key has been interrupted by pressing another key after it
       return DOUBLE_SINGLE_TAP;
       else
         if (state->pressed) 
         // IF  the key has been pressed twice
         // AND the key has not been interrupted by pressing another key
         // AND the key is still pressed
         // {
         //   gui_flag = get_mods()&GUI_MODS;
         //   if (gui_flag)
         //     return GUI_plus_DOUBLE_HOLD;          
         //   else
             return DOUBLE_HOLD;
         // }
         else
         // IF  the key has been pressed twice
         // AND the key has not being interrupted by pressing another key
         // AND the key is not pressed at present
           return DOUBLE_TAP;
     } //    if (state->count == 2)
 /*
         else if (state->count == 3) {
         if (state->interrupted) return TRIPLE_SINGLE_TAP;
         else if (state->pressed) return TRIPLE_HOLD;
         else return TRIPLE_TAP;
         }
         else if (state->count == 4) {
           if (state->interrupted) return QUADRUPLE_SINGLE_TAP;
           else if (state->pressed) return QUADRUPLE_HOLD;
           else return QUADRUPLE_TAP;
         }
         else if (state->count == 5) {
           if (state->interrupted) return QUINTUPLE_SINGLE_TAP;
           else if (state->pressed) return QUINTUPLE_HOLD;
           else return QUINTUPLE_TAP;
         }
         else if (state->count == 6) {
           if (state->interrupted) return SEXTUPLE_SINGLE_TAP;
           else if (state->pressed) return SEXTUPLE_HOLD;
           else return SEXTUPLE_TAP;
         }
         else return 18; //magic number. At some point this method will expand to work for more presses
 */
     else
       return 6/*9*/;
 }
 //                                                                                      //
 // tap dance general setup section end                                                  //
 //////////////////////////////////////////////////////////////////////////////////////////

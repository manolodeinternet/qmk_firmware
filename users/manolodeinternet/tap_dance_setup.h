
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE STATES DECLARATIONS                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
  enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
    SINGLE_TAP           = 1
   ,SINGLE_HOLD          = 2
   ,DOUBLE_TAP           = 3
   ,DOUBLE_HOLD          = 4
   ,DOUBLE_SINGLE_TAP    = 5 //send SINGLE_TAP twice - NOT DOUBLE_TAP
/*
   ,GUI_plus_HOLD        = 6
   ,ALT_plus_HOLD        = 7
   ,GUI_plus_DOUBLE_HOLD = 8
*/
/* ,TRIPLE_TAP           = 6
   ,TRIPLE_HOLD          = 7
   ,TRIPLE_SINGLE_TAP    = 8
   ,QUADRUPLE_TAP        = 9
   ,QUADRUPLE_HOLD       = 10
   ,QUADRUPLE_SINGLE_TAP = 11
   ,QUINTUPLE_TAP        = 12
   ,QUINTUPLE_HOLD       = 13
   ,QUINTUPLE_SINGLE_TAP = 14
   ,SEXTUPLE_TAP         = 15
   ,SEXTUPLE_HOLD        = 16
   ,SEXTUPLE_SINGLE_TAP  = 17
 * Add more enums here if you want for sevenfold, eightfold], etc.
 */
 };
//                                                                                      //
// tap dance states declarations                                                        //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum tap_dance_keycodes {

  // COMMON TAPDANCE KEYCODES ACCESSIBLE FROM ALL KEYBOARDS
  // TAP DANCE KEYCODES ACCESSIBLE FROM _FVIM LAYER 03
  // (i.e. KC_U: *'begin of line'/**'begin of paragraph')
   FVIM_uU ,FVIM_pP
  ,DVIM_uU ,DVIM_pP
  // tap dance keycodes accessible from _fvim layer 03

  // TAP DANCE KEYCODES ACCESSIBLE FROM _POWR LAYER 12
  ,SLEP_M   //   menu bar / (on hold) SLEEP
  // tap dance keycodes accessible from _powr layer 12
  // common tapdance keycodes accessible from all keyboards

  #if defined(COMPREHENSIVE_30_LAYOUT)
    // TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB LAYER 02
    ,DENUOF  //   return to *GHKN layer (gherkin default layer)  // ... percent
    ,SLNUMB  //   return to *GHKN layer (gherkin default layer)  // ... slash

    // TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB  LAYER 09
    ,V_RACI  // right angle bracket & circumflex accent
    //  ,A_GRAV  // grave & tilde         //tilde        accessible while holding SHIFT key !
    //  ,S_QUOT  // quote & double quote  //double quote accessible while holding SHIFT key !
    ,G_DOEU  // dolar & euro
    ,Z_EXCL
    ,X_QUES

    // TAP DANCE KEYCODES ACCESSIBLE FROM _POWR LAYER 12
    ,LOGOUT   // logout user session
    ,HRESET   // on hold RESET keyboard
    ,KILM_T   //   dock bar / (on hold) KILL MENU
    ,KILA_D   //  tools bar / (on hold) KILL CURRENT APP
    ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART
    /*
    ,RC_RWND // right control / rewind       // KC_F7
    ,RA_PLAY // right alt     / play/pause   // KC_SPC
    ,RG_FRWD // right gui     / forward      // KC_F9
    */
    ,RS_ZOIN // right shift   / zoom in
    ,RG_ZOUT // right gui     / zoom out
    ,RA_ZOOM // right alt     / zoom on/off
    ,RC_INCO // right control / invert colors
    // [ADVICE]
    // ,BCKLIT // accessing _BLIT layer from tap dance into _POWR layer
               // ...this way we don't waste a layer from being accesible from Default layer,
               // ...remember that you only can access 16 layer through LT(lyr, key) and LM(layer, mod)
    // [advice]    
    ,V1_LAST  // accessing _LAST layer from tap dance into _POWR layer
    ,V8_TEST  // accessing _TEST layer from tap dance into _POWR layer
    // tap dance keycodes accessible from _powr layer 12

    // TAP DANCE KEYCODES ACCESSIBLE FROM _FVIM LAYER 03
    ,FVIM_iI ,FVIM_oO
    // tap dance keycodes accessible from _fvim layer 03
      
//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
    ,DVIM_Del  // Delete when tapping, _DVIM when holding 
    ,FUNC_LED

//#elif defined(SIMPLE_30_LAYOUT)
#endif
};
//                                                                                      //
// tap dance declarations (list of my tap dance configurations)                         //
//////////////////////////////////////////////////////////////////////////////////////////



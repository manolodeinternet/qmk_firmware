//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// MACROS FOR PROCESS_RECORD_USER()                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)
// MACROS FOR _ACCN LAYER 1
    CIRCU = SAFE_RANGE
   ,GRAVE
   ,DIAER 
// macros for _accn layer 1
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// MACROS FOR _POWR LAYER 12
    ,VOL_1
    ,VOL_8
    ,BRIGHT_1
// macros for _powr layer 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _APPS LAYER 10
    ,APP_Q_SNOTE ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_APSTO ,APP_T_TERMI
                                         ,APP_Y_TYPIN ,APP_U_UROOM ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF
    ,APP_A_SCRPT ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME
                                         ,APP_H_SKTCH ,APP_J_SUBLI,APP_K_KRBNR ,APP_L_CLNDR ,APPSP_EMPTY 
    ,APP_Z_STUDI ,APP_X_XCODE ,APP_C_CALCU ,APP_V_KVIEW ,APP_B_BOOKS
                                         ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB
// macros for _apps layer 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// MACROS FOR _DALY LAYR 7
    ,DICTATION
// macros for _daly layer 7
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _?VIM 9, 10, 11, 12, 13

// MACROS FOR _FVIM LAYER 03
// this layer is all implemented without using '/Users/myUser/Library/KeyBindings/DefaultKeyBinding.dict'
// except for the 'H' key:
    ,FVIM_H
// macros for _fvim layer 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _DVIM LAYER 05
    ,DVIM_Y         ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN
// macros for _dvim layer 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// _AVIM LAYER
//    ,AVIM_Y                     // _AVIM is for select VIM layr
//    ,AVIM_N                     // it's used SHIFT+key for the rest of the right side of the keyboard
// _avim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//
// MACROS FOR _XVIM LAYER 04
//
// Initially _CVIM and _XVIM were two different layers...
// ... Now we have _CVIM on the right hand and _XVIM on the left hand. Both of them under _XVIM layer #
// _CVIM LAYER
    ,CVIM_Y ,CVIM_U ,CVIM_I  ,CVIM_O  ,CVIM_P
    ,CVIM_H ,CVIM_J ,CVIM_K  ,CVIM_L  ,CVIM_SP
    ,CVIM_N ,CVIM_M ,CVIM_ES ,CVIM_BS ,CVIM_EN
// _cvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// MACROS FOR _XVIM LAYER
    ,XVIM_Y ,XVIM_U ,XVIM_I  ,XVIM_O  ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN
// _xvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
// macros for _xvim layer 04
//

//////////////////////////////////////////////////////////////////////////////////////////////////// ###
// macros for _?vim 3, 4, 5
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

#if defined(COMPREHENSIVE_30_LAYOUT)

  // empty !¡

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
  // MACROS FOR _DFLT LAYER 00
      ,TT_NUMB
      ,TH_L3_KAR_APPS
  //  ,TH_L4_FUNC_LEDS
      ,TH_R1_DALY_MOUS
      ,TH_R2_SYMB_FVIM
      ,TH_R3_APPS_NUMB
      ,TH_R4_POWR_LEDS
  // macros for _DFLT layer 00
  /////////////////////////////////////////////////////////////////////////////////////////////////// ###

  // MACROS FOR _SYMB LAYER 09
      ,O_COMMENT
      ,C_COMMENT
      ,CHANGE_SYMB_TO_NUMB
  // macros for _symb layer 09
  /////////////////////////////////////////////////////////////////////////////////////////////////// ###

  // MACROS FOR _POWR LAYER 12
      ,MY_CLEAR
      ,MY_RESET
  //  ,SL_MEN
      ,KM_TOL
      ,KA_DCK
      ,SH_STA
      ,RT_FLO

  // macros for _powr layer 12
  /////////////////////////////////////////////////////////////////////////////////////////////////// ###

  // MACROS FOR _DALY LAYER 07
      ,PREV_APP
      ,NEXT_APP
      ,SIRI
  // macros for _daly layer 07

//#elif defined(SIMPLE_30_LAYOUT)
#endif


#if defined(BACKLIGHT_ENABLE)
//
// MACROS FOR _BLIT 15
    ,BLIT_OFF                      // = SAFE_RANGE

    ,BLIT_01 ,BLIT_02  ,BLIT_03  ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07  ,BLIT_08  ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12  ,BLIT_13  ,BLIT_14 ,BLIT_15

                                          ,BRTH_00
    ,BRTH_01 ,BRTH_02  ,BRTH_03  ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07  ,BRTH_08  ,BRTH_09 ,BRTH_10
             ,BRTH_12                     ,BRTH_15
// macros for _blit 15
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
//#if defined(BACKLIGHT_ENABLE)
#elif defined(RGBLIGHT_ENABLE)
//
// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
    ,STP_ID  // it increments step indicator for RGB LEDs
// this function is not going to be used with 23 leds per hand
    ,TOG_ID  // it toggles keyboard as whole indicator for capslock ON/OFF
// macros for default layer 0
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// MACROS FOR _LEDS 11
// RED
    ,CH_RED  ,CH_CORL  ,CH_ORNG  ,CH_GOLR ,CH_GOLD          ,CH_YLLW          ,SAV_COL
// GREEN
    ,CH_CHRT ,CH_GREN  ,CH_SPRG  ,CH_TRQS ,CH_TEAL          ,CH_WHIT          ,GET_HSV
// BLUE
    ,CH_CYAN ,CH_AZUR  ,CH_BLUE  ,CH_PRPL ,CH_MGNT          ,CH_PINK          ,CH_EMPT

// macros for _leds 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//#elif defined(RGBLIGHT_ENABLE)
#endif

}; // enum custom keycodes
//                                                                                      //
// macros for process_record_user()                                                     //
//////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "manolodeinternet.h"
#include "comprehensive_30_layout_manolodeinternet.h"
#include "backlight_manolodeinternet.h"

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


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum tap_dance_keycodes {

  // COMMON TAPDANCE KEYCODES ACCESSIBLE FROM ALL KEYBOARDS

    V_MOUS

  // TAP DANCE KEYCODES ACCESSIBLE FROM _POWR LAYER 12
  ,TG_QWE  // toggle _QWER layer ON/OFF 
  ,LCKLOG  // lock screen / (on hold) logout user session
  ,HRESET  // on hold RESET keyboard

  ,RG_ZOIN // right shift   / zoom in
  ,RA_ZOUT // right gui     / zoom out
  ,RS_ZOOM // right alt     / zoom on/off
  ,RA_INCO // right control / invert colors

  ,SLEP_M  //    menu bar / (on hold) SLEEP
  ,KILA_D  //  tools bar / (on hold) KILL CURRENT APP
  ,KILM_T  //   dock bar / (on hold) KILL MENU
  ,SHUT_S  //  status bar / (on hold) SHUT DOWN
  ,RSTT_F  // floating w / (on hold) COMPUTER   RESTART
  // tap dance keycodes accessible from _powr layer 12

  // common tapdance keycodes accessible from all keyboards



#if defined(COMPREHENSIVE_30_LAYOUT)
    // TAP DANCE KEYCODES ACCESSIBLE FROM _DFLT LAYER 0
    ,L_APPS
    ,R_APPS
    // TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB LAYER 02
    ,NUMBOF  //   return to *GHKN layer (gherkin default layer)  // ... percent
    ,SLNUMB  //   return to *GHKN layer (gherkin default layer)  // ... slash
      
//#if defined(COMPREHENSIVE_30_LAYOUT)
// #elif defined(SIMPLE_30_LAYOUT)
//     ,DVIM_Del  // Delete when tapping, _DVIM when holding 

// //#elif defined(SIMPLE_30_LAYOUT)
#endif
};
//                                                                                      //
// tap dance declarations (list of my tap dance configurations)                         //
//////////////////////////////////////////////////////////////////////////////////////////




//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥




//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
// TAP DANCE GENERAL SETUP SECTION START                                                //
//                                                                                      //
//  * SINGLE_TAP                                                                        //
// ** DOUBLE_TAP                                                                        //
//  @ SINGLE_HOLD                                                                       //
// @@ DOUBLE_HOLD                                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
    bool is_press_action;
    int  state;
} tap;



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



int cur_dance (qk_tap_dance_state_t *state);//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_J (RG_ZOIN)                                                    //
//                                                                                      //
//  R I G H T    S H I F T    /    Z O O M   I N                                        //
//                                                                                      //
//  KC_J:  *  ZOOM IN,                                                                  //
//         @  RIGHT SHIFT                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void RG_ZOIN_finished (qk_tap_dance_state_t *state, void *user_data);
void RG_ZOIN_reset    (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_j (RG_ZOIN)                                                    //
//                                                                                      //
//  r i g h t    s h i f t    /    z o o m   i n                                        //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_K (RA_ZOUT)                                                    //
//                                                                                      //
//  R I G H T    G U I     /     Z O O M    O U T                                       //
//                                                                                      //
//  KC_K:  *  ZOOM OUT,                                                                 //
//         @  RIGHT GUI                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void RA_ZOUT_finished (qk_tap_dance_state_t *state, void *user_data);
void RA_ZOUT_reset    (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_k (RA_ZOUT)                                                    //
//                                                                                      //
//  r i g h t    g u i     /     z o o m    o u t                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_L (RS_ZOOM)                                                    //
//                                                                                      //
//  R I G H T    A L T    /    Z O O M    O N / O F F                                   //
//                                                                                      //
//  KC_L:  *  ZOOM ON/OFF,                                                              //
//         @  RIGHT ALT                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void RS_ZOOM_finished (qk_tap_dance_state_t *state, void *user_data);
void RS_ZOOM_reset    (qk_tap_dance_state_t *state, void *user_data);
// //                                                                                      //
// // [tapdance] [_powr] kc_l (RS_ZOOM)                                                    //
// //                                                                                      //
// //  r i g h t    a l t    /    z o o m    o n / o f f                                   //
// //////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_SP (RA_INCO)                                                   //
//                                                                                      //
//  R I G H T    A L T    /     I N V E R T    C O L O R S                              //
//                                                                                      //
//  KC_SP:  *  INVERT COLORS,                                                           //
//          @  RIGHT ALT                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void RA_INCO_finished (qk_tap_dance_state_t *state, void *user_data);
void RA_INCO_reset    (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_sp (ra_inco)                                                   //
//                                                                                      //
//  r i g h t    a l t    /     i n v e r t    c o l o r s                              //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_U (FVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void FVIM_uU_finished (qk_tap_dance_state_t *state, void *user_data);
// void FVIM_uU_reset    (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [ _fvim ] kc_u (fvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_U (FVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void FVIM_uU_function (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [ _fvim ] kc_u (fvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_P (FVIM_pP)                                                  //
//                                                                                      //
//  E N D   O F   L I N E  /  P A R A G R A P H                                         //
//                                                                                      //
//  KC_P:  * END OF LINE                                                                //
//        ** END OF PARAGRAPH                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void FVIM_pP_finished (qk_tap_dance_state_t *state, void *user_data);
// void FVIM_pP_reset    (qk_tap_dance_state_t *state, void *user_data);



// void FVIM_iI_finished (qk_tap_dance_state_t *state, void *user_data);
// void FVIM_iI_reset    (qk_tap_dance_state_t *state, void *user_data);


// void FVIM_oO_finished (qk_tap_dance_state_t *state, void *user_data);
// void FVIM_oO_reset    (qk_tap_dance_state_t *state, void *user_data);



//                                                                                      //
// [tapdance] [ _fvim ] kc_p (fvim_pp)                                                  //
//                                                                                      //
//  e n d   o f   l i n e  /  p a r a g r a p h                                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_U (DVIM_uU)                                                  //
//                                                                                      //
//  D E L E T E   T O   B E G I N N I N G   O F   L I N E   /   P A R A G R A P H       //
//                                                                                      //
//  KC_U:  * DELETE TO BEGINNING OF LINE                                                //
//        ** DELETE TO BEGINNING OF PARAGRAPH                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [ _dvim ] kc_u (dvim_uu)                                                  //
//                                                                                      //
//  d e l e t e   t o   b e g i n n i n g   o f   l i n e   /   p a r a g r a p h       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_P (DVIM_pP)                                                  //
//                                                                                      //
//  D E L E T E   T O   E N D   O F   L I N E   /   E N D   O F   P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * DELETE TO END OF LINE                                                      //
//        ** DELETE TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ A L P H ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  T A P   D A N C E   F O R   [ _ D F L T ]  L A Y E R    ( I A E O U  /  Q W E R T)  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] KC_V (V_MOUS)                                                     //
//                                                                                      //
//  _ M O U S     L A Y E R                                                             //
//                                                                                      //
//  KC_V: *  KC_V                                                                       //
//        @  _MOUS LAYER                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'V_MOUS' tap dance.
/*static tap V_MOUS_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void V_MOUS_finished (qk_tap_dance_state_t *state, void *user_data);
void V_MOUS_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_dflt] kc_p (v_mous)                                                     //
//                                                                                      //
//  _ m o u s     l a y e r                                                             //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] KC_J (L_APPS)                                                     //
//                                                                                      //
//  _ A P P S     L A Y E R                                                             //
//                                                                                      //
//  KC_Y: *  KC_Y                                                                       //
//        @  _APPS LAYER                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*static tap L_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void L_APPS_finished (qk_tap_dance_state_t *state, void *user_data);
void L_APPS_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_dflt] kc_y (l_apps)                                                     //
//                                                                                      //
//  _ a p p s     l a y e r                                                             //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] KC_Z (R_APPS)                                                     //
//                                                                                      //
//  _ A P P S     L A Y E R                                                             //
//                                                                                      //
//  KC_Z: *  KC_Z                                                                       //
//        @  _APPS LAYER                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*static tap R_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void R_APPS_finished (qk_tap_dance_state_t *state, void *user_data);
void R_APPS_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_dflt] kc_z (r_apps)                                                     //
//                                                                                      //
//  _ a p p s     l a y e r                                                             //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
// #if defined(SIMPLE_30_LAYOUT)
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] THUMB_L1 (DVIM_Del)                                               //
//                                                                                      //
//  D V I M    L A Y E R    /    D E L E T E                                            //
//                                                                                      //
//  THUMB_L1:  @ [_DVIM] LAYER                                                          //
//             *  DELETE,                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// void DVIM_Del_f_always(qk_tap_dance_state_t *state, void *user_data);
// void DVIM_Del_finished (qk_tap_dance_state_t *state, void *user_data);
// void DVIM_Del_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_dflt] thumb_l1 (dvim_del)                                               //
//                                                                                      //
//  d v i m    l a y e r    /    b a c k s p a c e                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//#if defined(SIMPLE_30_LAYOUT)
// #endif //(COMPREHENSIVE_30_LAYOUT)

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Q (TG_QWE)                                                     //
//                                                                                      //
//  T O G G L E     _ Q W E R T     L A Y E R                                           //
//                                                                                      //
//  KC_Q: @  TOGGLE _QWER LAYER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*static tap TG_QWE_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void TG_QWE_finished (qk_tap_dance_state_t *state, void *user_data);
void TG_QWE_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_q (tg_qwe)                                                     //
//                                                                                      //
//  t o g g l e     _ q w e r t     l a y e r                                           //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_E (LCKLOG)                                                     //
//                                                                                      //
//  L O G O U T    /    L O C K    S C R E E N                                          //
//                                                                                      //
//  KC_E: *  LOCK USER SCREEN                                                           //
//        @  LOGOUT CURRENT USER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*tap LCKLOG_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void LCKLOG_finished (qk_tap_dance_state_t *state, void *user_data);
void LCKLOG_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_e (LCKLOG)                                                     //
//                                                                                      //
//  l o g o u t    /    l o c k    s c r e e n                                          //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Z (SLEP_M)                                                     //
//                                                                                      //
//  M E N U   B A R   /    S L E E P   C O M P U T E R                                  //
//                                                                                      //
//  KC_Z:   *  MENU BAR                                                                 //
//          @  SLEEP COMPUTER                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*tap SLEP_M_tap_state = {
  .is_press_action = true,
  .state = 0
};*/
void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data);
void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_z (slep_m)                                                     //
//                                                                                      //
//  m e n u   b a r   /    s l e e p   c o m p u t e r                                  //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_X (KILA_D)                                                     //
//                                                                                      //
//  D O C K   B A R    /    F O R C E   T O   K I L L   C U R R E N T   A P P           //
//                                                                                      //
//  KC_X:   *  DOCK BAR                                                                 //
//          @  KILL CURRENT APP                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void KILA_D_finished (qk_tap_dance_state_t *state, void *user_data);
void KILA_D_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_x (kila_d)                                                     //
//                                                                                      //
//  d o c k   b a r    /    f o r c e   t o   k i l l   c u r r e n t   a p p           //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_C (KILM_T)                                                     //
//                                                                                      //
//  T O O L S   B A R   /   K I L L   M E N U                                           //
//                                                                                      //
//  KC_C:   *  TOOLS BAR                                                                //
//          @  KILL MENU                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void KILM_T_finished (qk_tap_dance_state_t *state, void *user_data);
void KILM_T_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_c (kilm_t)                                                     //
//                                                                                      //
//  t o o l s   b a r   /   k i l l   m e n u                                           //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_V (SHUT_S)                                                     //
//                                                                                      //
//  S T A T U S   B A R    /    S H U T   D O W N                                       //
//                                                                                      //
//  KC_V:   *  STATUS BAR                                                               //
//          @  SHUT DOWN (SET VOL TO 1 AND SHUT DOWN)                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data);
void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_v (shut_s)                                                     //
//                                                                                      //
//  s t a t u s   b a r    /    s h u t   d o w n                                       //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_B (RSTT_F)                                                     //
//                                                                                      //
//  F L O A T I N G   W I N D O W   /   R E S T A R T                                   //
//                                                                                      //
//  KC_B:  *  FLOATING WINDOW,                                                          //
//         @  RESTART                                                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data);
void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_powr] kc_b (rstt_f)                                                     //
//                                                                                      //
//  f l o a t i n g   w i n d o w   /   r e s t a r t                                   //
//////////////////////////////////////////////////////////////////////////////////////////

void HRESET_finished (qk_tap_dance_state_t *state, void *user_data);
void HRESET_reset (qk_tap_dance_state_t *state, void *user_data);
//

//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               t a p   d a n c e   f o r  -  s y m b o l s  -  l a y e r s            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


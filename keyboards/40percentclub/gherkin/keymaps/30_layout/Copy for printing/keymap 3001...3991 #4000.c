/* Keymap R_XTND 5: RIGHT eXtended default layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      | Vol. | Vol. |      |      |
 * |  Tab | Desk |Windws|Mision|Float.||      |      |      | Mute |      |
 * |      |      | Apps |Contrl|Window||      |  Up  | Down |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |Sublim|      |      ||      |      |      |      |      |
 * | Caps |Dictat|Text 3| Speak|Active||      |      |  UP  |      |      |
 * |      |      |Histry|      |Window||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      | PASTE||      |      |      |      |@@@@@@|
 * |      |      |      |      |   &  ||      | LEFT | DOWN | RIGHT|@@@@@@|
 * | UNDO |  CUT | COPY | PASTE| MATCH|| REDO |      |      |      |@@@@@@|
 * '------+------+------+------+------'`------+------+------+------+------'
 */
[R_XTND] = LAYOUT_ortho_3x10(  // layer 5: RIGHT eXtended default layer
//|--------|-------|---------+---------+----------||--------|----------|------------|---------+--------|
     KC_TAB,   DESK, APP_WIND, MISS_CTL, FLOA_WIN,   XXXXXXX, KC__VOLUP, KC__VOLDOWN, KC__MUTE, XXXXXXX,
//|--------|-------|---------+---------+----------||--------|----------|------------|---------+--------|
    F(RXTND_CAPS), DICTAD,  P_ST_HY,    SPEAK, ACTV_WIN,   XXXXXXX,   _______,       KC_UP,  _______, _______,
//|--------|-------|---------+---------+----------||--------|----------|------------|---------+--------|
    XT_UNDO, XT_CUT,  XT_COPY,  XT_PAST,  XT_MTCH,   XT_REDO,   KC_LEFT,     KC_DOWN,  KC_RGHT, _______ ), 
//|--------|-------|---------+---------+----------||--------|----------|------------|---------+--------|
// END OF R_XTND 5
////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Keymap APPS 6: APPS layer
 * ,----------------------------------.,----------------------------------.
 * |      |@@@@@@| EVER |      | TERMI|| TYPI |      | TEXT |@@@@@@|SYSTEM|
 * |      |@@@@@@|-NOTE |      |-NAL  ||-NATOR|      |-EDIT |@@@@@@|PREFE-|
 * |      |TWITTR|      |      |      ||      |      |      |OMNIFO|RENCES|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |  DAY |      |GOOGLE||      | SUBLI|KARBNR| CALEN|      |
 * |      |SAFARI|  ONE |FINDER|CHROME||SKETCH|-ME   | EVENT|-DAR  |      |
 * |      |      |      |      |      ||      | TEXT |VIEWER|      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * | STU  |      | CALCU|      |      ||      |      |      |      |      |
 * |-DIES |      |-LATOR|      |      || NOTES| MAIL |      |      |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// APPS layer 6
[APPS] = LAYOUT_ortho_3x10(  // layer 6 : apps layer
  //,------------+------------+------------+------------+-------------++------------+------------+------------+------------+--------------.
          _______, APP_W_TWTTR, APP_E_EVERN,     _______, APP_T_TERMI,   APP_Y_TYPIN,     _______, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
  //|------------|------------|------------+------------+-------------||------------|------------+------------+------------+--------------|
          _______, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,   APP_H_SKTCH, APP_J_SUBLI, APP_K_KVIEW, APP_L_CLNDR,     XXXXXXX,
  //|------------|------------|------------+------------+-------------||------------|------------+------------+------------+--------------|
      APP_Z_STUDI,     XXXXXXX, APP_C_CALCU,     XXXXXXX,     XXXXXXX,   APP_N_NOTES,  APP_M_MAIL,     XXXXXXX,     XXXXXXX,     XXXXXXX ),
  //,------------+------------+------------+------------+-------------++------------+------------+------------+------------+--------------.
// END OF APPS 6
////////////////////////////////////////////////////////////////////////////////////////////////////////




/* Keymap SUSR 7: Super USeR productivity layer
* ,-----------------------------------.,---------------------------------.
* |@@@@@@|      |      |      |      ||      |      |      |      |@@@@@@| 
* |@@@@@@|      |      |onHold|      ||      |      |      |      |@@@@@@|
* | BLIT |LOGOUT|LCKSCR| RESET| REDO ||      |      |      |      | BLIT |
* |------+------+------+------+------||------+------+------+------+------|
* | Menu | Dock | Tool |Status|Float.||      |      |      |      |      |
* | _bar | _bar | _bar | _bar |Window||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |onHold|onHold|onHold|onHold|onHold||      | LGui | LAlt | LCtl | LSft |
* | SLEEP|K_MENU|KILL_A|SHUT_D|RSTART||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* | RSft | RCtl | RAlt | RGui |      ||      | RGui | RAlt | RCtl | RSft |
* '------+------+------+------+------'`------+------+------+------+------'
*/
// SUSR layer 7
[SUSR] = LAYOUT_ortho_3x10(  // layer 7: Super USeR productivity layer
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------.
      MO(BLIT), TD(LOGOUT),    LCK_SCR, TD(HRESET),    XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(BLIT),
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------|
    TD(SLEP_M), TD(KILM_D), TD(KILA_T), TD(SHUT_S), TD(RSTT_F),   XXXXXXX, _______, _______, _______,  _______,
//               ALT+CMD+ESC SFT+ALT+CMD+ESC
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------|
       KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI,    XXXXXXX,   XXXXXXX, KC_RGUI, KC_RALT, KC_RCTL,  KC_RSFT ), 
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------'
// END OF SUSR 7
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap PVIM 8: PVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Move | Move | Move | Move | Move |
 * |      |      |      |      |      ||Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      ||  Up  |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Center| Move | Move | Move | Move |
 * | LSft | LCtl | LAlt | LGui |      ||LineIn|      |      |      |      |
 * |      |      |      |      |      || View | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |[SVIM]|[DVIM]|[MOUS]|@@@@@@|      || Move | Move | Move | Move | Move |
 * |      |      |      |@@@@@@|      ||Prgrph|      | Page | Page |      |
 * |[XVIM]|[AVIM]|[ZVIM]|@@@@@@|      || Down | HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// PVIM layer 8

//[DELETE]
//#define PERVIM     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p")
//#define K_PERV(kc) send_string(kc)
//[delete]
[PVIM] = LAYOUT_ortho_3x10(  // layer 8 : PVIM layer
  //,-----------+-----------+-----------+--------+---------++--------------------+--------------+--------------+----------------+--------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,     LCTL(LGUI(KC_UP)),   TD(PVIM_uU), LALT(KC_LEFT),   LALT(KC_RGHT), TD(PVIM_pP),
  //|-----------|-----------|-----------+--------+---------||--------------------+--------------+--------------+----------------+--------------|
         _______,    _______,    _______, _______, XXXXXXX,                PVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,     KC_RGHT,
  //|-----------|-----------|-----------+--------+---------||--------------------+--------------+--------------+----------------+--------------|
      TD(SX_VIM), TD(DA_VIM), TD(MOU_ZV), _______, XXXXXXX,   LCTL(LGUI(KC_DOWN)), LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END) ),
  //,-----------+-----------+-----------+--------+---------++--------------------+--------------+--------------+----------------+--------------.
  // END OF PVIM 8
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap DVIM 9: DVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      ||      | Begin| Word | Word |End Of|
 * |      |      |      |      |      ||      |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |Delete|Delete|Delete|Delete|      ||      |Delete|Delete|Delete|Delete|
 * | Char | Line | Line | Char |      || Yank | Char | Line | Line | Char |
 * | LEFT |  UP  | DOWN | RIGHT|      ||      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |@@@@@@|      |@@@@@@|      ||      |Delete|Delete|@@@@@@|Delete|
 * |      |      |      |@@@@@@|      ||      |      | Page |Delete|      |
 * |      |      |      |@@@@@@|      ||      | HOME |  UP  |PgDown|  END |
 * `----------------------------------'`----------------------------------'
*/
// DVIM layer 9
[DVIM] = LAYOUT_ortho_3x10(  // layer 9 : DVIM layer
  //,--------+--------+--------+--------+---------++--------+------------+--------+--------+-------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, TD(DVIM_uU),  DVIM_I,  DVIM_O, TD(DVIM_pP),  // DVIM_Y is empty
  //|--------|--------|--------+--------+---------||--------+------------+--------+--------+-------------|
       DVIM_J,  DVIM_K,  DVIM_L, DVIM_SP, XXXXXXX,    DVIM_H,      DVIM_J,  DVIM_K,  DVIM_L,     DVIM_SP,
  //|--------|--------|--------+--------+---------||--------+------------+--------+--------+-------------|
      _______, _______, _______, _______, XXXXXXX,   XXXXXXX,      DVIM_M, DVIM_ES, DVIM_BS,     DVIM_EN ),// DVIM_N is empty
  //,--------+--------+--------+--------+---------++--------+------------+--------+--------+-------------.
  // END OF DVIM 9
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap SVIM 10: SVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||Select|Select|Select|Select|Select|
 * |      |      |      |      |      ||Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      || Above|Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |Select|Select|Select|Select|
 * |      |      |      |      |      ||      | Char | Line | Line | Char |
 * |      |      |      |      |      ||      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |@@@@@@|      |      |@@@@@@|      ||Select|Select|Select|Select|Select|
 * |      |      |      |@@@@@@|      ||Prgrph|      | Page | Page |      |
 * |      |      |      |@@@@@@|      || Below| HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// SVIM layer 10
[SVIM] = LAYOUT_ortho_3x10(  // layer 10 : SVIM layer
  //,--------+--------+--------+--------+---------++--------+--------------+--------------------+--------------------+---------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    SVIM_Y,   TD(SVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(SVIM_pP),
  //|--------|--------|--------+--------+---------||--------+--------------+--------------------+--------------------+---------------|
      _______, _______, _______, _______, XXXXXXX,   XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT), // SVIM_H is empty
  //|--------|--------|--------+--------+---------||--------+--------------+--------------------+--------------------+---------------|
      _______, _______, _______, _______, XXXXXXX,    SVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
  //,--------+--------+--------+--------+---------++--------+--------------+--------------------+--------------------+---------------.
  // END OF SVIM 10                               // SVIM_H is empty
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap XVIM 11: XVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Copy |Upper |Capita|      |Lower |
 * |      |      |      |      |      || prev.|case  |lize  |      |case  |
 * |      |      |      |      |      ||prgrph| Word | Word |      | Word |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Duplct|  25  |  50  |  50  |  25  |
 * |      |      |      |      |      ||prgrph| lines| lines| lines| lines|
 * |      |      |      |      |      || Below|  UP  |  UP  | DOWN | DOWN |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      || Copy |Scroll|Scroll|Scroll|Scroll|
 * |@@@@@@|      |      |@@@@@@|      || next |      | Page | Page |      |
 * |@@@@@@|      |      |@@@@@@|      ||prgrph| HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// XVIM layer 11
[XVIM] = LAYOUT_ortho_3x10(  // layer 11 : XVIM layer
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XVIM_Y, XVIM_U,  XVIM_I, XXXXXXX,  XVIM_P,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   XVIM_H, XVIM_J,  XVIM_K,  XVIM_L, XVIM_SP,
  //|--------|--------|--------+--------+---------||-------+-------+--------+------------------|
      _______, _______, _______, _______, XXXXXXX,   XVIM_N, XVIM_M, XVIM_ES, XVIM_BS, XVIM_EN ),
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
  // END OF XVIM 11
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap ZVIM 12: ZVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||Insert|Trans |      |      |Trans |
 * |      |      |      |      |      ||LnAbve|pose  |      |      |pose  |
 * |      |      |      |      |      ||prgrph| Words|      |      |Chrctr|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Select|Select|Select|Select|Select|
 * |      |      |      |      |      ||& Copy|& Copy|& Copy|& Copy|& Copy|
 * |      |      |      |      |      ||Chrctr| Word | Line |prgrph|  All |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      ||Insert|      |      |      |      |
 * |      |      |@@@@@@|@@@@@@|      ||LnBlow|      |      |      |      |
 * |      |      |@@@@@@|@@@@@@|      ||prgrph|      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// ZVIM layer 12 
[ZVIM] = LAYOUT_ortho_3x10(  // layer 12 : ZVIM layer
  //,--------+--------+--------+--------+---------++-------+--------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   ZVIM_Y,  ZVIM_U, XXXXXXX, XXXXXXX,  ZVIM_P,
  //|--------|--------|--------+--------+---------||-------+--------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   ZVIM_H,  ZVIM_J,  ZVIM_K,  ZVIM_L, ZVIM_SP,
  //|--------|--------|--------+--------+---------||-------+--------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   ZVIM_N, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  //,--------+--------+--------+--------+---------++-------+--------+--------+--------+---------.
  // END OF ZVIM 12
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap AVIM 13: AVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Super|Align |Align |Align |Align |
 * |      |      |      |      |      ||script|      |      | Justi|      |
 * |      |      |      |      |      ||      | Left |Center|-fied | Right|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||  Un  |  Out |      |      |  In  |
 * |      |      |      |      |      ||script|-dent |      |      |-dent |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      || Subs | Check|Ignore|      |      |
 * |      |@@@@@@|      |@@@@@@|      ||script| spell| spell|      |      |
 * |      |@@@@@@|      |@@@@@@|      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// AVIM layer 13
[AVIM] = LAYOUT_ortho_3x10(  // layer 13 : AVIM layer
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   AVIM_Y, AVIM_U,  AVIM_I,  AVIM_O,  AVIM_P,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   AVIM_H, AVIM_J, XXXXXXX, XXXXXXX, AVIM_SP,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   AVIM_N, AVIM_M, AVIM_ES, XXXXXXX, XXXXXXX ),
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
  // END OF AVIM 13
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap MOUS 14: Mouse layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |Accel0|      |      |      |      ||      | wLeft|  wUp | wDown|wRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | LSft | LCtl | LAlt | LGui |      ||      | mLeft|  mUp | mDown|mRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |@@@@@@|@@@@@@|      ||      |      |      |      |      |
* |Accel1|Accel2|      | mBtn1|Accel0|| mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |      |@@@@@@|      ||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/
// MOUS layer 14
[MOUS] = LAYOUT_ortho_3x10(  // layer 14: mouse layer
  KC_ACL0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
  _______, _______, _______, _______, XXXXXXX,   XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
  KC_ACL1, KC_ACL2, _______, KC_BTN1, KC_ACL0,   KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5 ),
//
/*    C O N F I G      F I L E
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/
// END OF MOUS 14
////////////////////////////////////////////////////////////////////////////////////////////////////////



/*  
*  Keymap BLIT 15: BACKLIT - BackLIghT layer
* .-----------------------------------------------------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |BREATH_1|BREATH_2|BREATH_3|BREATH_4|BREATH_T|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |BREATH_5|BREATH_6|BREATH_7|BREATH12|BL_TOGGL|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|F
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |BREATH15| BL_ON | BL_INC | BL_DEC | BL_OFF |
* '-----------------------------------------------------------------------------------------'
*/
// BLIT layer 15
[BLIT] = LAYOUT_ortho_3x10( // layer 15: BLIT layer
  BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05, BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG,
  BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10, BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BL_TOGG,
  BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15, BRTH_15,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF ),// BL_OFF
// QMK standard keycode BL_OFF doesn't work ! ! !
// I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ! ! !
// END OF BLIT 15
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap TEST 31: TEST transparent layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      |   E  |      |      ||      |   U  |   I  |   O  |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   A  |      |      |      |      ||      |      |      |      |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      |      |      |      ||   N  |      |      |      |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// TEST transparent layer 31
[TEST] = LAYOUT_ortho_3x10(  // layer 31 : TEST layer 
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
         _______, _______, F(E_VOWEL), _______, _______, /*LAYER_IS*/_______, F(U_VOWEL), F(I_VOWEL), F(O_VOWEL), _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
      F(A_VOWEL), _______,    _______, _______, _______,      _______,    _______,    _______,    _______, _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
         _______, _______,    _______, _______, _______,   F(N_TILDE),    _______,    _______,    _______, _______ )
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
  // END OF TEST 31
////////////////////////////////////////////////////////////////////////////////////////////////////////
};


const uint16_t PROGMEM fn_actions[] = {
  [A_VOWEL] = ACTION_FUNCTION(A_VOWEL),  // Calls action_function()
  [E_VOWEL] = ACTION_FUNCTION(E_VOWEL),
  [I_VOWEL] = ACTION_FUNCTION(I_VOWEL),
  [O_VOWEL] = ACTION_FUNCTION(O_VOWEL),
  [U_VOWEL] = ACTION_FUNCTION(U_VOWEL),
  [N_TILDE] = ACTION_FUNCTION(N_TILDE),
  [RXTND_CAPS] = ACTION_FUNCTION(RXTND_CAPS)
};
////////////////////////////////////////////////////////////////////////////////////////////////////////



void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//  static uint8_t mods_pressed;
//MODS
//  static uint8_t shift_flag;
//    SEND_STRING(" \n    \n    action_function WORKING !!!\n");
  shift_flag = get_mods()&LSHIFT_MODS;
  accent_pressed = acute_requested | diaeresis_requested | grave_requested | circumflex_requested;
  switch (id) {
//    SEND_STRING("switch WORKING\n");
    case A_VOWEL:
//      SEND_STRING("case A_VOWEL\n");
      if (record->event.pressed) 
      {
//        SEND_STRING("recordeventpressed\n");
        if (accent_pressed)
        {
//            SEND_STRING("accent pressed\n");
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
//                SEND_STRING("shift flag\n");
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };            
        } // [FIXME] [FIX THE FO LINE LOCATION]
        register_code(KC_A);
        unregister_code(KC_A);
    }
    else
    {
//        SEND_STRING("NO record event pressed");
    }
      break;

    case E_VOWEL:
      if (!record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
           
        }
        register_code(KC_E);
        unregister_code(KC_E);
      }
      else
      {
      }
      break;

    case I_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
      }
      else
      {
        register_code(KC_I);
        unregister_code(KC_I);
      }
      break;

    case O_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_O);
        unregister_code(KC_O);
      }
      else
      {
      }
      break;

    case U_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_U);       
        unregister_code(KC_U);
      }
      else
      {
      }  
      break;

    case N_TILDE:
      if (record->event.pressed) 
      {
        if (acute_requested)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { tilde_accent_function(); }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_N);
        unregister_code(KC_N);
      }
      else 
      {
      }
      break;


    case RXTND_CAPS:
      if (record->event.pressed) 
      {
         /* The key is being pressed.*/
        press_capslock();
      }
      else 
      {
        release_capslock();
      }
      break;

 }
}
// end of action_function
////////////////////////////////////////////////////////////////////////////////////////////////////////



// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
// [UNDERSTANDING]
// We implement MACROS when we need using QMK functions, or more than one keystroke in a specific layer
// and we don't have the need to use tap dance cases
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    0    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              pvim(j);                                                                                                      */
/*                                                                                                                            */
/*              this is the best one and it's posible because of the following function definition:                           */
/*                                                                                                                            */
/*              void pvim(char *key)                                                                                          */
/*              {                                                                                                             */
/*                SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");                                                   */
/*                send_string(key);                                                                                           */
/*              }                                                                                                             */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    1    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"pj");                                                    */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
/*                                                                                                                            */
/*   W A Y    2    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              actual_mods = get_mods();                                                                                     */
/*              add_mods(ALL_MODS); send_keyboard_report();                                                                   */
/*              SEND_STRING("v");                                                                                             */
/*              set_mods(actual_mods); send_keyboard_report();                                                                */
/*              SEND_STRING("pj");                                                                                            */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    3    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              register_code(KC_LSFT);   register_code(KC_LCTL);   register_code(KC_LALT);   register_code(KC_LGUI);         */
/*              register_code(KC_V);    unregister_code(KC_V);                                                                */
/*            unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);         */
/*              register_code(KC_P);    unregister_code(KC_P);                                                                */                               
/*              register_code(KC_J);    unregister_code(KC_J);                                                                */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    4    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*                            T H I S    W A Y     D O E S N ' T      W O R K  ! ! !                                          */
/*              register_code(MOD_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(MOD_HYPR);               */
/*              register_code(KC_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(KC_HYPR);                 */
/*              register_code(HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(HYPR);                       */
/*              register_code(KC_P);    unregister_code(KC_P);                                                                */                               
/*              register_code(KC_J);    unregister_code(KC_J);                                                                */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (record->event.pressed)
    {
        switch(keycode)
        {
//    ,APP_Q_QQQQQ ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_RRRRR ,APP_T_TERMI ,APP_Y_TYPIN ,APP_U_UUUUU ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF 
//    ,APP_A_AAAAA ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KVIEW ,APP_L_CLNDR ,APP_SP_SPSP 
//    ,APP_Z_STUDI ,APP_X_XXXXX ,APP_C_CALCU ,APP_V_VVVVV ,APP_B_BBBBB ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_ESES ,APP_BS_BSBS ,APP_EN_ENEN   

            case APP_Q_QQQQQ: callApp("");                   return false; break;  //
            case APP_W_TWTTR: callApp("Tw");                 return false; break;  // Twitter
            case APP_E_EVERN: callApp("Eve");                return false; break;  // Evernote
            case APP_R_RRRRR: callApp("");                   return false; break;  //
            case APP_T_TERMI: callApp("Term");               return false; break;  // Terminal

            case APP_Y_TYPIN: callApp("Typina");             return false; break;  // Typinator
            case APP_U_UUUUU: callApp("");                   return false; break;  //
            case APP_I_TEDIT: callApp("TextE");              return false; break;  // TextEdit
            case APP_O_OMNIF: callApp("OmniF");              return false; break;  // OmniFocus
            case APP_P_SPREF: callApp("Sy Pr");              return false; break;  // System Preferences

            case APP_A_AAAAA: callApp("sim .app");           return false; break;  // Simplenote
            case APP_S_SAFAR: callApp("Saf");                return false; break;  // Safari        // _delay_ms(50);
            case APP_D_D_ONE: callApp("Day O");              return false; break;  // Day One
            case APP_F_FINDE: callApp("Find");               return false; break;  // Finder
            case APP_G_CHRME: callApp("Chrom");              return false; break;  // Google Chrome

            case APP_H_SKTCH: callApp("Sketch.app");         return false; break;  // Sketch
            case APP_J_SUBLI: callApp("Subl");               return false; break;  // Sublime Text
            case APP_K_KVIEW: callApp("KEV");                return false; break;  // Karabiner Event Viewer
            case APP_L_CLNDR: callApp("Cale");               return false; break;  // Calendar
            case APP_SP_SPSP: callApp("");                   return false; break;  //

            case APP_Z_STUDI: callApp("Stud");               return false; break;  // Studies
            case APP_X_XXXXX: callApp("");                   return false; break;  //
            case APP_C_CALCU: callApp("Calc");               return false; break;  // Calculator
            case APP_V_VVVVV: callApp("");                   return false; break;  //
            case APP_B_SNOTE: callApp("");                   return false; break;  // 

            case APP_N_NOTES: callApp("Notes");              return false; break;  // Notes
            case APP_M_MAIL:  callApp("Mail");               return false; break;  // Mail
            case APP_ES_ESES: callApp("");                   return false; break;  //
            case APP_BS_BSBS: callApp("");                   return false; break;  //
            case APP_EN_ENEN: callApp("");                   return false; break;  //




// PVIM
            case PVIM_H: pvim("h"); return false; break;
/* [info]
 * [#ref] Escape sequences in C
 * wikipedia link: 
   https://en.wikipedia.org/wiki/Escape_sequences_in_C        
        case PVIM_ES:if (record->event.pressed) { pvim("\e"); } break;   // \e    \x001B   // register_code (KC_ESC); unregister_code (KC_ESC); } break;
        case PVIM_BS:if (record->event.pressed) { pvim("\b"); } break;   // \b    \x0008   // register_code(KC_BSPC); unregister_code(KC_BSPC); } break;

        case PVIM_EN:if (record->event.pressed) { pvim("\n"); } break;   // \n    \x000A      new line
                                                                         // \r    \x000D      carriage return   
                                                                                           // register_code (KC_ENT); unregister_code (KC_ENT); } break; 
 */
// DVIM
            case DVIM_I: dvim("i");  return false; break;
            case DVIM_O: dvim("o");  return false; break;

            case DVIM_H: dvim("h");  return false; break;
            case DVIM_J: dvim("j");  return false; break;
            case DVIM_K: dvim("k");  return false; break;
            case DVIM_L: dvim("l");  return false; break;
            case DVIM_SP:dvim(" ");  return false; break;

            case DVIM_M: dvim("m");  return false; break;
            case DVIM_ES:dvim("\e"); return false; break;
            case DVIM_BS:dvim("\b"); return false; break;
            case DVIM_EN:dvim("\n"); return false; break;
      
// SVIM
            case SVIM_Y: svim("y");  return false; break;
            case SVIM_N: svim("n");  return false; break;
      
// XVIM
            case XVIM_Y: xvim("y");  return false; break;
            case XVIM_U: xvim("u");  return false; break;
            case XVIM_I: xvim("i");  return false; break;
            case XVIM_P: xvim("p");  return false; break;

            case XVIM_H: xvim("h");  return false; break;
            case XVIM_J: xvim("j");  return false; break;
            case XVIM_K: xvim("k");  return false; break;
            case XVIM_L: xvim("l");  return false; break;
            case XVIM_SP:xvim(" ");  return false; break;

            case XVIM_N: xvim("n");  return false; break;
            case XVIM_M: xvim("m");  return false; break;
            case XVIM_ES:xvim("\e"); return false; break;
            case XVIM_BS:xvim("\b"); return false; break;
            case XVIM_EN:xvim("\n"); return false; break;
      
// ZVIM
            case ZVIM_Y: zvim("y");  return false; break;
            case ZVIM_U: zvim("u");  return false; break;
            case ZVIM_P: zvim("p");  return false; break;

            case ZVIM_H: zvim("h");  return false; break;
            case ZVIM_J: zvim("j");  return false; break;
            case ZVIM_K: zvim("k");  return false; break;
            case ZVIM_L: zvim("l");  return false; break;
            case ZVIM_SP:zvim(" ");  return false; break;

            case ZVIM_N: zvim("n");  return false; break;
      
// AVIM
            case AVIM_Y: avim("y");  return false; break;
            case AVIM_U: avim("u");  return false; break;
            case AVIM_I: avim("i");  return false; break;
            case AVIM_O: avim("o");  return false; break;
            case AVIM_P: avim("p");  return false; break;

            case AVIM_H: avim("h");  return false; break;
            case AVIM_J: avim("j");  return false; break;
            case AVIM_SP:avim(" ");  return false; break;

            case AVIM_N: avim("n");  return false; break;
            case AVIM_M: avim("m");  return false; break;
            case AVIM_ES:avim("\e"); return false; break;
      


            case DICTAD:
                register_code(KC_RGUI); unregister_code(KC_RGUI);
                register_code(KC_RGUI); unregister_code(KC_RGUI);
                return false; break;
/*
  case LAYER_IS:              // for testing reasons
      what_layer_is_this_mine(); return false; break;
*/
            case BLIT_OFF: gherkinBacklightLevel =  0; layer_clear(); return false; 
            case BLIT_01:  gherkinBacklightLevel =  1; layer_clear(); return false;
            case BLIT_02:  gherkinBacklightLevel =  2; layer_clear(); return false;
            case BLIT_03:  gherkinBacklightLevel =  3; layer_clear(); return false;
            case BLIT_04:  gherkinBacklightLevel =  4; layer_clear(); return false;
            case BLIT_05:  gherkinBacklightLevel =  5; layer_clear(); return false; 

            case BLIT_06:  gherkinBacklightLevel =  6; layer_clear(); return false;
            case BLIT_07:  gherkinBacklightLevel =  7; layer_clear(); return false;
            case BLIT_08:  gherkinBacklightLevel =  8; layer_clear(); return false;
            case BLIT_09:  gherkinBacklightLevel =  9; layer_clear(); return false;
            case BLIT_10:  gherkinBacklightLevel = 10; layer_clear();  return false;

            case BLIT_11:  gherkinBacklightLevel = 11; layer_clear(); return false;
            case BLIT_12:  gherkinBacklightLevel = 12; layer_clear(); return false;
            case BLIT_13:  gherkinBacklightLevel = 13; layer_clear(); return false;
            case BLIT_14:  gherkinBacklightLevel = 14; layer_clear(); return false;
            case BLIT_15:  gherkinBacklightLevel = 15; layer_clear(); return false;

           case BRTH_01:  breathing_period_set(1); breathing_enable(); return false; 
           case BRTH_02:  breathing_period_set(2); breathing_enable(); return false; 
           case BRTH_03:  breathing_period_set(3); breathing_enable(); return false; 
           case BRTH_04:  breathing_period_set(4); breathing_enable(); return false; 
           case BRTH_05:  breathing_period_set(5); breathing_enable(); return false; 
           case BRTH_06:  breathing_period_set(6); breathing_enable(); return false;
           case BRTH_07:  breathing_period_set(7); breathing_enable(); return false; 

           case BRTH_12:  breathing_period_set(12); breathing_enable(); return false; 
           case BRTH_15:  breathing_period_set(15); breathing_enable(); return false; 

           default: return true; 
      }
	}
  else
  {
    return true;
  }
}
// END OF NEW MACROS WAY
////////////////////////////////////////////////////////////////////////////////////////////////////////



// QMK POWER tricks
// *****************************************************************************************************
// FOR KNOWING WHAT LAYER WE ARE AT THE MOMENT:
/*
        uint8_t layer = biton32(layer_state);
void what_layer_is_this_mine(void) {
  switch (layer) {
    case GHKN:   SEND_STRING("GHKN");   break;
    case SYMB:   SEND_STRING("SYMB");   break;
    case L_XTND: SEND_STRING("L_XTND"); break;
    case R_XTND: SEND_STRING("R_XTND"); break;
    case PVIM:   SEND_STRING("PVIM");   break;
    case DVIM:   SEND_STRING("DVIM");   break;
    case NMBR:   SEND_STRING("NMBR");   break;
    case FNCT:   SEND_STRING("FNCT");   break;
    case APPS:   SEND_STRING("APPS");   break;
    case SUSR:   SEND_STRING("SUSR");   break;
    case SVIM:   SEND_STRING("SVIM");   break;
    case XVIM:   SEND_STRING("XVIM");   break;
    case ZVIM:   SEND_STRING("ZVIM");   break;
    case AVIM:   SEND_STRING("AVIM");   break;
    case MOUS:   SEND_STRING("MOUS");   break;
    case BLIT:   SEND_STRING("BLIT");   break;
    case TEST:   SEND_STRING("TEST");   break;
    default:     SEND_STRING("UNKNOWN");break;
  }
}
*/

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {

    case GHKN: //  
        /*
        myLevel = layer_state;
        send_string(myLevel);
        send_string(gherkinBacklightLevel);
        SEND_STRING(" [Level GHKN]; ");
        */
        backlight_level(gherkinBacklightLevel);
//        layer_clear();    // [DANGER] I have commented this line.  Maybe it must be mandatory !
//        breathing_disable();
        break; 

    case NMBR:   //  1
        /*
        SEND_STRING(" [Level NMBR]; ");
        */
        backlight_level(BL_NMBR);
        breathing_period_set(BR_NMBR);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
        breathing_enable();
        break;
    case SYMB:   //  2
    /*
        SEND_STRING(" [Level SYMB]; ");
    */
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB); // [LAST]      // BUT if CAPS_LOCK was set out before [SYMB] we loose thhe breathing ...
        breathing_enable();
        break;

/*
    case FNCT:   //  3
// [TESTING]        SEND_STRING(" [Level FNCT]; ");     [testing]
        backlight_level(BL_FNCT);
        break;
    case L_XTND: //  4
// [TESTING]        SEND_STRING(" [Level L_XTND]; ");     [testing]
    case R_XTND: //  5
// [TESTING]        SEND_STRING(" [Level R_XTND]; ");     [testing]
        backlight_level(BL_XTND);
        break;
    case APPS:   //  6
// [TESTING]        SEND_STRING(" [Level APPS]; ");     [testing]
        backlight_level(BL_APPS);
        break;
    case SUSR:   //  7
// [TESTING]        SEND_STRING(" [Level SUSR]; ");     [testing]
        backlight_level(BL_SUSR);
        break;
    case PVIM:   //  8
// [TESTING]        SEND_STRING(" [Level PVIM]; ");     [testing]
        backlight_level(BL_PVIM);
        break;
    case DVIM:   //  9
// [TESTING]        SEND_STRING(" [Level DVIM]; ");     [testing]
        backlight_level(BL_DVIM);
        break;
    case SVIM:   // 10
// [TESTING]        SEND_STRING(" [Level SVIM]; ");     [testing]
        backlight_level(BL_SVIM);
        break;



    case XVIM:   // 11
// [TESTING]        SEND_STRING(" [Level XVIM]; ");     [testing]
//        backlight_level(BL_VIM);  //V
//        break;
    case ZVIM:   // 12
// [TESTING]        SEND_STRING(" [Level ZVIM]; ");     [testing]
//        backlight_level(BL_VIM);  //V
//        break;
    case AVIM:   // 13
// [TESTING]        SEND_STRING(" [Level AVIM]; ");     [testing]
        backlight_level(BL_VIM);  //V
        break;



    case MOUS:   // 14
// [TESTING]        SEND_STRING(" [Level MOUS]; ");     [testing]
        backlight_level(BL_MOUS);
        break;
*/

/*
    case BLIT:   // 15
// [TESTING]        SEND_STRING(" [Level BLIT]; ");     [testing]
        backlight_level(BL_MIN);
        break;
    default: //  for any other layers, or the default layer
// [TESTING]        SEND_STRING(" [Level WITHOU DETERMINE: LEVEL DEFAULT FROM THE SWITCH STATEMENT]; ");     [testing]
        backlight_level(BL_LOW);
        break;
*/
    }
  return state;
}; // END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
////////////////////////////
//#### T H E    E N D ####//
////////////////////////////


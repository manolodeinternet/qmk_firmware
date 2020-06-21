//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                        M A T R I X   I N I T   U S E R                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void matrix_init_user(void) {
}
/*
  https://docs.qmk.fm/#/custom_quantum_functions?id=matrix_init_-function-documentation

  Keyboard/Revision: void matrix_init_kb  (void)
  Keymap:            void matrix_init_user(void)

  Keyboard Post Initialization code
  This is ran as the very last task in the keyboard initialization process. This is useful if you want...
  ...to make changes to certain features, as they should be initialized by this point.

  Example keyboard_post_init_user() Implementation
  This example, running after everything else has initialized, sets up the rgb underglow configuration.
*/
void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
}

// set_unicode_input_mode(UC_OSX);
// REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
// end of matrix_init_user
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                        m a t r i x   i n i t   u s e r                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////






// [MASTER_DRASHNA]
void keyboard_post_init_rgb(void) {
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_STARTUP_ANIMATION)
    // if (userspace_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (user_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (rgblight_config.enable) {
        layer_state_set_user(layer_state);
        uint16_t old_hue = rgblight_config.hue;
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        for (uint16_t i = 255; i > 0; i--) {
            rgblight_sethsv_noeeprom( ( i + old_hue) % 255, 255, 255);
            matrix_scan();
            wait_ms(10);
        }
    }
#endif
    layer_state_set_user(layer_state);
}
// [master_drashna]


void keyboard_post_init_user(void) {
// Call the post init code.

  set_default_hsv();

  keyboard_post_init_rgb();

}
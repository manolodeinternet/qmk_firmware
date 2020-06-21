# MiniDactyl 2019/11/04




# https://docs.qmk.fm/#/config_options?id=behaviors-that-can-be-configured
#define RGBLIGHT_SPLIT
# Needed if both halves of the board have RGB LEDs wired directly to the RGB output pin on the controllers...
# ...instead of passing the output of the left half to the input of the right half

# SPLIT_KEYBOARD = yes // 2020/02/17


# SIMPLE_30_LAYOUT





TAP_DANCE_ENABLE = yes
ifndef QUANTUM_DIR
	include ../../../../Makefile
endif

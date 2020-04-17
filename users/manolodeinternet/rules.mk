# [UNDERSTANDING] 
#
# SIMPLE_30 and COMPREHENSIVE_30 constant parameters(directives) are defined at: '/Users/...'
#'.../navarro/qmk_firmware/keyboards/handwired/mini_dactyl/RentalCar/keymaps/manolodeinternet/Makefile'
#
# [understanding]

SRC += manolodeinternet.c \
       tap_dance_setup.c

ifeq ($(strip $(SIMPLE_30)), yes)
	SRC += simple_30_layout_manolodeinternet.c
endif

ifeq ($(strip $(COMPREHENSIVE_30)), yes)
	SRC += comprehensive_30_layout_manolodeinternet.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
#   SRC += rgblight_mini_dactyl.c  // doesn't work, it needs the whole path:
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c \
           /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_manolodeinternet.c
endif

ifeq ($(strip $(BACKLIGHT_ENABLE)), yes)
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/backlight_manolodeinternet.c
endif

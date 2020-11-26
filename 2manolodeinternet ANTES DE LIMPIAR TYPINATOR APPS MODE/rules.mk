# [UNDERSTANDING] 
#
# SIMPLE_30 and COMPREHENSIVE_30 constant parameters(directives) are defined at:

#    /Users/navarro/qmk_firmware/keyboards/handwired/mini_dactyl/RentalCar/keymaps/...
# .../manolodeinternet/Makefile
#
# [understanding]




# with the file manolodeinternet.c into 'SRC +=', QMK compiles mini_dactyl but doesn't compile Gerkins
# omiting the file manolodeinternet.c in 'SRC +=' it compiles gherkins but doesn't compile mini_dactyl!
SRC += tapdance_setup.c \
       fn_actions.c \
       process_record_user_common_keyboards.c
#      /Users/navarro/qmk_firmware/keyboards/handwired/mini_dactyl/RentalCar/keymaps/manolodeinternet/process_record_keymap.c
#      /Users/navarro/qmk_firmware/users/manolodeinternet/process_record_user_common_keyboards.c

ifeq ($(strip $(SIMPLE_30)), yes)
    SRC += manolodeinternet.c \
           simple_30_layout_manolodeinternet.c \
           process_record_keymap.c
endif

ifeq ($(strip $(COMPREHENSIVE_30)), yes)
    SRC += manolodeinternet.c \
           comprehensive_30_layout_manolodeinternet.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
#   SRC += rgblight_mini_dactyl.c  // doesn't work, it needs the whole path:
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c \
           /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_manolodeinternet.c
endif

ifeq ($(strip $(BACKLIGHT_ENABLE)), yes)
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/backlight_manolodeinternet.c
endif
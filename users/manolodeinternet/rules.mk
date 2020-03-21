SRC += manolodeinternet.c




ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)

# SRC += rgblight_mini_dactyl.c
# Previous line doesn't work, I don't know why.

# When compiling, it appears the following message:
# make[1]: *** No rule to make target `keyboards/handwired/mini_dactyl/RentalCar/keymaps/manolodeinternet/rgblight_mini_dactyl.c',
# needed by `.build/obj_handwired_mini_dactyl_RentalCar_rev2_manolodeinternet/rgblight_mini_dactyl.o'.  Stop.
# make: *** [handwired/mini_dactyl/RentalCar/rev2:manolodeinternet] Error 1
#Make finished with errors

# It needs the whole path:
    SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c

#     ifeq ($(strip $(INDICATOR_LIGHTS)), yes)
#         OPT_DEFS += -DINDICATOR_LIGHTS
#     endif
#     ifeq ($(strip $(RGBLIGHT_TWINKLE)), yes)
#         OPT_DEFS += -DRGBLIGHT_TWINKLE
#     endif
#     ifeq ($(strip $(RGBLIGHT_NOEEPROM)), yes)
#         OPT_DEFS += -DRGBLIGHT_NOEEPROM
#     endif
#     ifeq ($(strip $(RGBLIGHT_STARTUP_ANIMATION)), yes)
#         OPT_DEFS += -DRGBLIGHT_STARTUP_ANIMATION
#     endif
endif

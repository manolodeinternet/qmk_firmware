# MiniDactyl 2019/11/04

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif


TAP_DANCE_ENABLE  = yes # Enable Tap Dance (comment if not being implemented)
MOUSEKEY_ENABLE   = yes # Mouse keys(+4700)
UNICODE_ENABLE    = no
UNICODEMAP_ENABLE = no


# [FIXME]
#    LINK_TIME_OPTIMIZATION_ENABLE = yes
# [fixme]
# [INFO]
#    https://docs.qmk.fm/#/config_options?id=build-options
#    this will automatically disable legacy TMK Macros and Functions features. So, compiling, it breaks
#    It does this by automatically defining NO_ACTION_MACRO and NO_ACTION_FUNCTION.
#    (Note: This does not affect QMK Macros and Layers.)
# [info]
 
# SIMPLE_30 is defined in:
#         /Users/navarro/qmk_firmware/keyboards/handwired/mini_dactyl/keymaps/manolodeinternet/Makefile
# But you need this line here, if no, i doesn't compile. It apears the following error:
# Linking: .build/handwired_mini_dactyl_rev2_manolodeinternet.elf                                     [ERRORS]
#  | 
#  | /usr/local/opt/avr-binutils/bin/avr-ld: .build/obj_handwired_mini_dactyl_rev2_manolodeinternet/tapdance_setup.o: in function `DVIM_uU_function':
#  | /Users/navarro/qmk_firmware/users/manolodeinternet/tapdance_setup.c:222: undefined reference to `dvim'
#  | /usr/local/opt/avr-binutils/bin/avr-ld: .build/obj_handwired_mini_dactyl_rev2_manolodeinternet/tapdance_setup.o: in function `HRESET_finished':
#  | /Users/navarro/qmk_firmware/users/manolodeinternet/tapdance_setup.c:358: undefined reference to `reset_my_keyboard_function' 
#  ...
# IT DOESN'T RECOGNIZE ANY DEFINITION FROM MANOLODEINTERNET.C. IT DOESN'T INCLUDE THAT FILE IN USERS/RULES.MK
SIMPLE_30 = yes  # This is necessary for compiling MINI_DACTYL
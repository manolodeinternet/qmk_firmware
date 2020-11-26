# particular rules for this keymap over general ones for Gherkin keyboard
# SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/manolodeinternet.c

# This gboards combo implementation does't work for me.
# VPATH  +=  keyboards/gboards/


TAP_DANCE_ENABLE  = yes # Enable Tap Dance (comment if not being implemented)
MOUSEKEY_ENABLE   = yes # Mouse keys(+4700)
UNICODE_ENABLE    = no
UNICODEMAP_ENABLE = no

# [FIRMWARE_SIZE]
# 3134-2302 = 832 bytes3 with two example combos
# For using combos, you need dedicated alphas, if you use LT or MT keys, combo disables them.
# COMBO_ENABLE      = yes 
# [firmware_size]  

#[MINE]
# HOLA = yes
# UCIS_ENABLE = yes  ( mine )
#SRC += notesapp.c  // I'm not able enough to split keymap.c into multiple files for make code more readable
#[mine]
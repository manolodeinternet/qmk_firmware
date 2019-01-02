# particular rules over general ones
#

#BACKLIGHT_ENABLE = yes  # Enable keyboard backlight functionality
#

#BACKLIGHT_BREATHING = yes # Enable keyboard backlight breathing
#

#TAP_DANCE_ENABLE = yes	# Enable Tap Dance (comment if not being implemented)
#

#UNICODE_ENABLE = yes
#

# HOLA = yes
#

#SLEEP_LED_ENABLE = no # Breathing sleep LED during USB suspend
#
# UNICODEMAP_ENABLE = yes
# UCIS_ENABLE = yes  ( mine )
#
#
#If ProMicro has QMK DFU bootloader instead of Caterina,
#run "make <keyboard>:<keymap> dfu=qmk" when compiling to ensure it is flagged properly after being flashed

ifeq ($(strip $(dfu)), qmk)
    BOOTLOADER = qmk-dfu
endif
#

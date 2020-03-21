SRC += /Users/navarro/qmk_firmware/users/manolodeinternet/manolodeinternet.c

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp

# MCU name
MCU                 = atmega32u4

BOOTLOADER          = caterina

#If ProMicro has QMK DFU bootloader instead of Caterina,
#run "make <keyboard>:<keymap> dfu=qmk" when compiling to ensure it is flagged properly after being flashed
ifeq ($(strip $(dfu)), qmk)
    BOOTLOADER = qmk-dfu
endif

# if next feature doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE         = yes # USB Nkey Rollover

BOOTMAGIC_ENABLE    = no  # Virtual DIP switch configuration(+1000)
EXTRAKEY_ENABLE     = no  # Audio control and System control(+450)
AUDIO_ENABLE        = no  # Toggles audio mode

DEBUG_ENABLE        = no  # Toggles debug mode
CONSOLE_ENABLE      = no  # Console for debug(+400)
COMMAND_ENABLE      = no  # Commands for debug and configuration

BACKLIGHT_ENABLE    = yes # Enable keyboard backlight functionality
RGBLIGHT_ENABLE     = no  # Enable keyboard RGB       functionality
BACKLIGHT_BREATHING = yes # Enable keyboard backlight breathing
SLEEP_LED_ENABLE    = no  # Breathing sleep LED during USB suspend

LAYOUTS             = ortho_3x10

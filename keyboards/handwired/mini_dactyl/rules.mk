SRC += matrix.c \
	   split_util.c \
	   serial.c \
	   ssd1306.c
#	   i2c.c \

#      following file is included in 'users/manolodeinternet/rules.mk'
# 	   /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c

# MCU name
# MCU = at90usb1287
MCU = atmega32u4

# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.
F_CPU = 16000000

#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
#     This will define a symbol, F_USB, in all source code files equal to the
#     input clock frequency (before any prescaling is performed) in Hz. This value may
#     differ from F_CPU if prescaling is used on the latter, and is required as the
#     raw input clock is fed directly to the PLL sections of the AVR for high speed
#     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
#     at the end, this will be done automatically to create a 32-bit value in your
#     source code.
#
#     If no clock division is performed on the input clock inside the AVR (via the
#     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
F_USB = $(F_CPU)

# Bootloader
#     This definition is optional, and if your keyboard supports multiple bootloaders of
#     different sizes, comment this out, and the correct address will be loaded 
#     automatically (+60). See bootloader.mk for all options.
BOOTLOADER = caterina

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#

# https://docs.qmk.fm/#/config_options?id=behaviors-that-can-be-configured
#define RGBLIGHT_SPLIT
# Needed if both halves of the board have RGB LEDs wired directly to the RGB output pin on the controllers...
# ...instead of passing the output of the left half to the input of the right half
# SPLIT_KEYBOARD = yes // 2020/02/17

TAP_DANCE_ENABLE = yes

BOOTMAGIC_ENABLE = no        # Virtual DIP switch configuration(+1000)

EXTRAKEY_ENABLE  = no  #yes  # Audio control and System control(+450)
CONSOLE_ENABLE   = no        # Console for debug(+400)
COMMAND_ENABLE   = no  #yes  # Commands for debug and configuration

#//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
NKRO_ENABLE      = yes #no   # Nkey Rollover - if this doesn't work, see here:
# https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

MIDI_ENABLE      = no        # MIDI controls
AUDIO_ENABLE     = no        # Audio output on port C6
UNICODE_ENABLE   = no        # Unicode
BLUETOOTH_ENABLE = no        # Enable Bluetooth with the Adafruit EZ-Key HID

#//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
SUBPROJECT_rev1  = no #yes

#//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
USE_I2C          = no #yes

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no        # Breathing sleep LED during USB suspend

MOUSEKEY_ENABLE  = no #yes       # Mouse keys(+4700)

#//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
CUSTOM_MATRIX    = yes #no


LAYOUTS          = ortho_6x12

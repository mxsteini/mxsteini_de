# Although no rules are defined,
# presence of this file is required for QMK to compile it.
# Bootloader selection
# BOOTLOADER = rp2040
SRC += additional.c
OLED_ENABLE = no
MXSTEINI_OLED_ENABLE = yes
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGB_MATRIX_ENABLE = no     # Disable keyboard RGB matrix, as it is enabled by default on rev3
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow

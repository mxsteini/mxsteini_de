#include "quantum/quantum.h"

#include QMK_KEYBOARD_H

bool should_process_keypress(void) { return true; }

void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}

void keyboard_post_init_user(void) {
    // Initialize RGB to static black
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_BLACK);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}

bool oled_task_user(void) {

    oled_clear();
    if(is_keyboard_left()) {
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 0:
                oled_write_P(PSTR("Quertz\n"), false);
                break;
            case 1:
                oled_write_P(PSTR("Functions\n"), false);
                break;
            case 2:
                oled_write_P(PSTR("Braces\n"), false);
                break;
            case 3:
                oled_write_P(PSTR("Gui-Nav\n"), false);
                break;
            case 4:
                oled_write_P(PSTR("Macros:\n"), false);
                oled_write_P(PSTR("r: locate\n"), false);
                oled_write_P(PSTR("t: tag\n"), false);
                break;

            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }
	} else {
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case 0:
                oled_write_P(PSTR("Quertz\n"), false);
                break;
            case 1:
                oled_write_P(PSTR("Numbers\n"), false);
                break;
            case 2:
                oled_write_P(PSTR("Symbols\n"), false);
                break;
            case 3:
                oled_write_P(PSTR("Cursor\n"), false);
                break;
            case 4:
                oled_write_P(PSTR("Shorcuts\n"), false);
                oled_write_P(PSTR("l: format\n"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }
	}

    return false;
}

void housekeeping_task_user(void) {
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case 0:
            // Default layer
            rgblight_setrgb_at(RGB_BLACK, 0);
            break;
        case 1:
            rgblight_setrgb_at(  0,   0, 20, 0);
            break;
        case 2:
            rgblight_setrgb_at(17,   0,   0, 0);
            break;
        case 3:
            rgblight_setrgb_at(  0, 15,   0, 0);
            break;
        case 4:
            rgblight_setrgb_at(17,  3, 18, 0);
            break;

    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_1:
                // phpstorm: locate file in tree
                SEND_STRING(SS_LALT(SS_TAP(X_F1))SS_DELAY(200)"1");
                return false;
            case QK_MACRO_0:
                // phpstorm: wrap with tag
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_LCTL) "t" SS_UP(X_LCTL) SS_UP(X_LALT) "t");
                return false;
            case QK_MACRO_2:
                SEND_STRING("ding!\a");
                return false;
            case QK_MACRO_3:
                SEND_STRING(SS_TAP(X_F1)SS_DELAY(1000)SS_TAP(X_PGDN));
                return false;
        }
    }

    return true;
};


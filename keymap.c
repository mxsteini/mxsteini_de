#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_5(RALT_T(KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, LGUI_T(KC_NUHS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LALT_T(KC_QUOT), LCTL_T(KC_RBRC), KC_Z, KC_X, KC_C, KC_V, KC_B, LT(3,KC_SPC), KC_ENT, KC_TAB, LT(3,KC_SPC), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RCTL_T(KC_PSLS), TT(4), TT(2), TT(1), KC_LSFT, KC_DEL, KC_BSPC, KC_RSFT, TT(1), TT(2), TT(4)),
	[1] = LAYOUT_split_3x6_5(TO(0), KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_7, KC_8, KC_9, KC_EQL, RALT(KC_RBRC), KC_LALT, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_4, KC_5, KC_6, KC_MINS, KC_RALT, KC_LCTL, KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_RSFT, KC_RCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_5(TO(0), KC_NO, LGUI(KC_W), LGUI(KC_E), KC_NUBS, LSFT(KC_NUBS), RALT(KC_Q), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_EQL), KC_GRV, KC_LALT, KC_NO, RALT(KC_NUBS), RALT(KC_MINS), RALT(KC_7), RALT(KC_0), RALT(KC_MINS), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_MINS), KC_RALT, KC_LCTL, KC_LSFT, LAG(KC_NUBS), LGUI(KC_C), RALT(KC_8), RALT(KC_9), KC_LCTL, KC_NO, KC_NO, KC_NO, LSFT(KC_0), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), KC_RSFT, KC_RCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_5(TO(0), KC_VOLU, RGB_TOG, RGB_MOD, RGB_RMOD, KC_LCTL, KC_NO, KC_PGUP, KC_PSCR, KC_PGDN, KC_NO, KC_NO, KC_LALT, KC_VOLD, LGUI(KC_PGUP), LGUI(KC_UP), LGUI(KC_PGDN), KC_NO, LSA(KC_NUBS), KC_HOME, KC_UP, KC_END, KC_NO, KC_RALT, KC_LCTL, KC_LSFT, LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_NO, KC_TRNS, KC_NO, TO(0), KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_RCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_5(TO(0), KC_NO, QK_MACRO_3, QK_MACRO_2, QK_MACRO_1, QK_MACRO_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, LCA(KC_L), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)






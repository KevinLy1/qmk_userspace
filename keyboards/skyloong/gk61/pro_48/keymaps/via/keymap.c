// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_all(
        'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L',
        'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L',
        'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L',
        'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R',
        'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R'
    );

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP),
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_MUTE, KC_SPC, KC_RALT, RGUI_T(KC_LEFT), LT(1,KC_DOWN), RCTL_T(KC_RGHT)
    ),

    [1] = LAYOUT_all(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        KC_TAB, KC_HOME, KC_UP, KC_END, KC_DEL, KC_INS, KC_SCRL, KC_PAUS, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_PSCR,
        MO(3), KC_LEFT, KC_DOWN, KC_RIGHT, KC_PSCR, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, RGB_VAD, RGB_VAI, KC_ENT,
        KC_LSFT, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_MUTE, KC_SPC, KC_RALT, KC_RGUI, KC_NO, KC_RCTL
    ),

    [2] = LAYOUT_all(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        KC_TAB, KC_HOME, KC_UP, KC_END, KC_DEL, KC_INS, KC_SCRL, KC_PAUS, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_PSCR,
        KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PSCR, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, RGB_VAD, RGB_VAI, KC_ENT,
        KC_LSFT, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, RSFT_T(KC_PGUP),
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_MUTE, KC_SPC, KC_RALT, KC_HOME, LT(3,KC_PGDN), RCTL_T(KC_END)
    ),

    [3] = LAYOUT_all(
        KC_GRV, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_DEL,
        KC_TAB, KC_HOME, KC_UP, KC_END, KC_DEL, KC_INS, KC_SCRL, KC_PAUS, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_PSCR,
        KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PSCR, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_MOD, RGB_VAD, RGB_VAI, KC_ENT,
        KC_LSFT, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_MUTE, KC_SPC, KC_RALT, KC_RGUI, KC_NO, KC_RCTL
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RM_HUED, RM_HUEU) },
    [2] = { ENCODER_CCW_CW(RM_HUED, RM_HUEU) },
    [3] = { ENCODER_CCW_CW(RM_HUED, RM_HUEU) }
};
#endif

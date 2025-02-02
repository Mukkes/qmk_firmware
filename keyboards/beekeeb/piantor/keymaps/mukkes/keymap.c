// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,           KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,           KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,           KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, SFT_T(KC_SPC), LT(2, KC_ENT),     LT(1, KC_ENT), RSFT_T(KC_SPC), KC_LCTL
    ),
    [1] = LAYOUT_split_3x6_3(
        S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                         S(KC_6),   S(KC_7),    S(KC_8),    S(KC_9), S(KC_0),    S(KC_MINS),
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,      KC_7,       KC_8,       KC_9,    KC_0,       KC_MINS,
        KC_TRNS,   _______, _______, KC_LBRC, KC_RBRC, KC_EQL,                          S(KC_EQL), S(KC_LBRC), S(KC_RBRC), KC_BSLS, S(KC_BSLS), KC_TRNS,
                                              KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS,   KC_TRNS
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_F1,   KC_F2,  KC_F3,   KC_F4,   KC_F5,                                KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
        KC_CAPS, KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS,                              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_F12,
        KC_TRNS, KC_TRNS, KC_DEL, KC_END,  KC_PGDN, KC_TRNS,                              KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS
    )
    // [] = LAYOUT_split_3x6_3(
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //                                         KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS
    // )
};

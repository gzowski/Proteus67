// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_layer {
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x14(
        KC_ESC , KC_1  ,KC_2   ,KC_3   , KC_4  , KC_5  , KC_NO  , 			KC_NO  , KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_GRV ,
	KC_TAB , KC_Q  ,KC_W   ,KC_E   , KC_R  , KC_T  , KC_NO  , 			KC_NO  , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   ,KC_MINUS,
	KC_LCTL, KC_A  ,KC_S   ,KC_D   , KC_F  , KC_G  , KC_NO  , 			KC_NO  , KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN,KC_QUOT ,
        KC_LSFT, KC_Z  ,KC_X   ,KC_C   , KC_V  , KC_B  , KC_LBRC, 			KC_RBRC, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_RSFT,
             KC_NO  , KC_NO ,KC_LGUI,KC_LALT,       KC_SPC ,		KC_MUTE,            KC_COMM ,		KC_ESC , KC_BSPC , KC_ESC , KC_ESC
),
    [_LOWER] = LAYOUT_5x14(
        KC_ESC , KC_1  ,KC_2   ,KC_3   , KC_4  , KC_5  , KC_NO  ,                       KC_NO  , KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_GRV ,
        KC_TAB , KC_Q  ,KC_W   ,KC_E   , KC_R  , KC_T  , KC_NO  ,                       KC_NO  , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   ,KC_MINUS,
        KC_LCTL, KC_A  ,KC_S   ,KC_D   , KC_F  , KC_G  , KC_NO  ,                       KC_NO  , KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN,KC_QUOT ,
        KC_LSFT, KC_Z  ,KC_X   ,KC_C   , KC_V  , KC_B  , KC_LBRC,                       KC_RBRC, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_RSFT,
             KC_NO  , KC_NO ,KC_LGUI,KC_LALT,       KC_SPC ,            KC_MUTE,            KC_COMM ,           KC_ESC , KC_BSPC , KC_ESC , KC_ESC),
    [_RAISE] = LAYOUT_5x14(
        KC_ESC , KC_1  ,KC_2   ,KC_3   , KC_4  , KC_5  , KC_NO  ,                       KC_NO  , KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_GRV ,
        KC_TAB , KC_Q  ,KC_W   ,KC_E   , KC_R  , KC_T  , KC_NO  ,                       KC_NO  , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   ,KC_MINUS,
        KC_LCTL, KC_A  ,KC_S   ,KC_D   , KC_F  , KC_G  , KC_NO  ,                       KC_NO  , KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN,KC_QUOT ,
        KC_LSFT, KC_Z  ,KC_X   ,KC_C   , KC_V  , KC_B  , KC_LBRC,                       KC_RBRC, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_RSFT,
             KC_NO  , KC_NO ,KC_LGUI,KC_LALT,       KC_SPC ,            KC_MUTE,            KC_COMM ,           KC_ESC , KC_BSPC , KC_NO , KC_DEL)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_LOWER] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
}

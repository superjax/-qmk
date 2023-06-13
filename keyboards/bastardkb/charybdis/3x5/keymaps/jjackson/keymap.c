/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum {
    QWERTY,
    PROG,
    NAV,
    NUM,
    QMK,
    GAME,
    TOTAL,
};

// #define CTL_BSP CTL_T(KC_BSPC)
// #define SFT_SPC SFT_T(KC_SPC)
// #define GUI_ENT GUI_T(KC_ENT)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT(
             KC_Q,         KC_W,         KC_E,         KC_R,           KC_T,    /**/             KC_Y,        KC_U,         KC_I,         KC_O,            KC_P,
     LGUI_T(KC_A),  ALT_T(KC_S), LSFT_T(KC_D),  LCTL_T(KC_F), LT(PROG, KC_G),    /**/   LT(PROG, KC_H), CTL_T(KC_J), SFT_T(KC_K),   ALT_T(KC_L), RGUI_T(KC_SCLN),
    LT(QMK, KC_Z),         KC_X,         KC_C,         KC_V,           KC_B,    /**/     LT(QMK, KC_N),        KC_M,     KC_COMM,        KC_DOT,         KC_SLSH,
                         LT(PROG, KC_SPC),  LT(NAV, KC_BSPC),  SFT_T(KC_DEL),   /**/  LT(PROG, KC_ENT),  LT(NUM, KC_SPC)
  ),

  [PROG] = LAYOUT(
   KC_ESC, KC_TILD, _______, _______,  _______,     /**/        KC_PIPE,   KC_LT,   KC_GT, KC_LCBR, KC_RCBR,
  _______, _______, _______, _______,  TG(NUM),     /**/        KC_BSLS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC,
  _______, _______, _______, _______, TG(GAME),     /**/        KC_MINS, KC_PPLS, KC_DQUO, KC_QUOT,  KC_GRV,
                    KC_UNDS, _______,  DRG_TOG,     /**/        _______, KC_UNDS
  ),

  [NAV] = LAYOUT(
  _______, _______, _______, _______, _______,     /**/        KC_HOME,    KC_PGDN,    KC_PGUP,  KC_END, _______,
  _______, _______, _______, _______, _______,     /**/        KC_LEFT,    KC_DOWN,      KC_UP, KC_RGHT, _______,
  _______, _______, _______, _______, _______,     /**/        _______, KC_MS_BTN1, KC_MS_BTN2, _______, _______,
                    _______, _______, _______,     /**/        _______, _______
  ),
  [NUM] = LAYOUT(
     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     /**/            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  _______, _______, _______, _______, _______,     /**/         KC_PPLS,    KC_4,    KC_5,    KC_6, KC_ASTR,
  _______, _______, _______, _______, _______,     /**/         KC_MINS,    KC_1,    KC_2,    KC_3, KC_SLSH,
                    _______, _______, _______,     /**/ LT(PROG, KC_DOT),    KC_0
  ),
  [QMK] = LAYOUT(
    RESET, RGB_RMOD, RGB_MOD, RGB_VAD, RGB_VAI,     /**/          RESET, _______, _______, _______, _______,
  _______,  RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI,     /**/        _______, _______, _______, _______, _______,
  _______,  RGB_SPD, RGB_SPI, _______, _______,     /**/        _______, _______, _______, _______, _______,
                     _______, _______, _______,     /**/        _______, _______
  ),
  [GAME] = LAYOUT(
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     /**/           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     /**/ LT(PROG, KC_H),    KC_J,    KC_K,    KC_L, KC_SCLN,
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     /**/           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
                     KC_SPC, KC_BSPC,  KC_LSFT,    /**/        _______, _______
  ),
//   [NEW_LAYER] = LAYOUT(
//   _______, _______, _______, _______, _______,     /**/        _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______,     /**/        _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______,     /**/        _______, _______, _______, _______, _______,
//                     _______, _______, _______,     /**/        _______, _______
//   ),

};
// clang-format on

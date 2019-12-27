#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * | `  | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp | ESC|
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgUp|
   * |----------------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgDn|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Fcn  | Up| DEL|
   * |----------------------------------------------------------------|
   * |CODE|Alt |Cmd |        Space          |Cmd|Alt|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */
[_BL] = LAYOUT_ansi(
  KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, KC_ESC, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, \
  KC_LCTL, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,        KC_ENT,KC_PGDN,  \
  KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,  MO(_FL), KC_UP, KC_DEL, \
  LSFT(LCTL(LGUI(KC_4))), KC_LALT, KC_LGUI,           KC_SPC,          KC_RGUI, KC_RALT, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RGHT),

  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * | ~ | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10| _ | + |Shft-Del|Ins|
   * |----------------------------------------------------------------|
   * |Shft-Tab|   |Up |   |   |   |   |   |   |   |   |   |   |   |Hme|
   * |----------------------------------------------------------------|
   * |CapsLock|<- |Dn | ->|   |   |   |   |   |   |   |   |      |End |
   * |----------------------------------------------------------------|
   * |        |   |   |Bl-|BL |BL+|   |VU-|VU+|MUT|   |   McL|MsU|McR |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |MsL|MsD|MsR |
   * `----------------------------------------------------------------'
   */
[_FL] = LAYOUT_ansi(
  RSFT(KC_GRV), KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RSFT(KC_MINS), RSFT(KC_EQL), RSFT(KC_BSPC), KC_INS, \
  RSFT(KC_TAB), RSFT(KC_Q),RSFT(KC_W),RSFT(KC_E),RSFT(KC_R),RSFT(KC_T),RSFT(KC_Y),RSFT(KC_U),RSFT(KC_I),RSFT(KC_O),RSFT(KC_P),RSFT(KC_LBRC),RSFT(KC_RBRC),RSFT(KC_BSLS),KC_HOME, \
  KC_CAPSLOCK , RSFT(KC_A),RSFT(KC_S),RSFT(KC_D),RSFT(KC_F),RSFT(KC_G),RSFT(KC_H),RSFT(KC_J),RSFT(KC_K),RSFT(KC_L),RSFT(KC_SCLN),RSFT(KC_QUOT),RSFT(KC_ENT),KC_END, \
  KC_LSFT,RSFT(KC_Z),RSFT(KC_X),RSFT(KC_C),RSFT(KC_V),RSFT(KC_B),RSFT(KC_N),RSFT(KC_M),RSFT(KC_COMM),RSFT(KC_DOT), RSFT(KC_SLSH),MO(_FL), KC_UP, KC_DEL, \
  _______,RSFT(KC_LALT),RSFT(KC_LGUI),                 RSFT(KC_SPC),               RSFT(KC_RGUI),_______,_______,KC_MS_L,KC_MS_D, KC_MS_R),
};

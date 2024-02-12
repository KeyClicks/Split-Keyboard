#include QMK_KEYBOARD_H
#include "w_corne_choc_v3.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3

#define _BASE 0
#define _FN 1
#define _LAYER_2 2
#define _LAYER_3 3
#define _LAYER_4 4
#define _LAYER_5 5
#define _LAYER_6 6
#define _LAYER_7 7

enum custom_keycodes {
  BASE = SAFE_RANGE,
  FN,
  LAYER_2,
  LAYER_3,
  LAYER_4,
  LAYER_5,
  LAYER_6,
  LAYER_7
};

// Shortcut to make keymap more readable
// #define SYM_L   MO(_SYMB)

// #define KC_ALAS LALT_T(KC_PAST)
// #define KC_CTPL LCTL_T(KC_BSLS)

// #define KC_NAGR LT(_NAV, KC_GRV)
// #define KC_NAMI LT(_NAV, KC_MINS)

// #define KC_ADEN LT(_ADJUST, KC_END)
// #define KC_ADPU LT(_ADJUST, KC_PGUP)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *    ┌───┐  ┌───┬───┬───┬───┬───┬───┬───┐         ┌───┬───┬───┬───┬───┬───┬───┐
     *    │Esc│  │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │         │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     *   ┌┴──┬┘ ┌┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘       ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┐
     *   │PUp│  │ Tab │ Q │ W │ E │ R │ T │          │ Y │ U │ I │ O │ P │ [ │ ] │   \  │
     *  ┌┴──┬┘ ┌┴─────┼───┼───┼───┼───┼───┤          └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┴┐
     *  │PDn│  │ Caps │ A │ S │ D │ F │ G │           │ H │ J │ K │ L │ ; │ ' │   Enter  │
     * ┌┴──┬┘ ┌┴──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐        ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬┴──────────┴┐
     * │Del│  │ Shift  │ Z │ X │ C │ V │ B │        │ N │ M │ , │ . │ / │ Up │    Shift   │
     * └───┘  ├─────┬──┴──┬┴───┴┬──┴───┴┬──┴──┐     ├───┴───┴──┬┴───┴┬──┴────┴─────┬──┴──┬┘
     *        │ Ctl │     │ Alt │       │ GUI │     │          │ Alt │             │ Ctl │
     *        └─────┘     └─────┴───────┴─────┘     └──────────┴─────┘             └─────┘
     */
    [_BASE] = LAYOUT(
      KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_BSPC, KC_P, KC_O, KC_I, KC_U, KC_Y, 
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_ENT, KC_SCLN, KC_L, KC_K, KC_J, KC_H, 
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RSFT, KC_UP, KC_DOT, KC_COMM, KC_M, KC_N, 
      KC_LCTL, KC_LGUI, KC_SPC, KC_LCTL, KC_LGUI, KC_SPC
    ),
    [_FN] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_2] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_3] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_4] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_5] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_6] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LAYER_7] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _BASE:
            break;
        case _FN:
            break;
        case _LAYER_2:
            break;
        case _LAYER_3:
            break;
        case _LAYER_4:
            break;

        case _LAYER_5:
            break;

        case _LAYER_6:
            break;

        case _LAYER_7:
            break;

        default:
            break;
    }
  return state;
}

// led_config_t g_led_config = { {
//         {0, 1, 2, 3}
//     }, {
//         // LED 对应到物理位置，可以参考下面这个公式
//         // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
//         // y = 64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
//         {0, 0}, {75, 0}, {149, 0}, {224, 0}

//     }, {
//         // 分组，如果没有自己做灯光的需求用处其实不大
//         1, 1, 1, 1
//     }
// };

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}

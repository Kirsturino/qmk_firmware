#include QMK_KEYBOARD_H
#include "gpio.h"

// Turn power LED OFF
void keyboard_pre_init_user(void) {
    gpio_set_pin_output(24);
    gpio_write_pin_high(24);
}

#define L_BASE      0
#define L_NAV       1
#define L_NUM       2
#define L_SYM       3
#define L_MEDIA     4
#define L_FUN       5
#define L_GAME      6
#define L_BUTTON    7
#define L_UNITY     8
#define L_SETTINGS  9
#define L_MOUSE     10

#define LT_NAV      LT(L_NAV,      KC_SPC)
#define LT_NUM      LT(L_NUM,      KC_BSPC)
#define LT_SYM      LT(L_SYM,      KC_PENT)
#define LT_FUN      LT(L_FUN,      KC_TAB)
#define LT_BUTTON   LT(L_BUTTON,   KC_Z)
#define LT_MOUSE    LT(L_MOUSE,    KC_C)

#define TG_GAME     TG(L_GAME)
#define TO_UNITY    TO(L_UNITY)
#define TO_BASE     TO(L_BASE)
#define TO_GAME     TO(L_GAME)

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
        LGUI_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,                       KC_H,           RSFT_T(KC_J),   RCTL_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_QUOTE),
        LT_BUTTON,      RALT_T(KC_X),   LT_MOUSE,       KC_V,           KC_B,                       KC_N,           KC_M,           KC_COMM,        RALT_T(KC_DOT), KC_SLSH,
                                                        LT_FUN,         LT_NAV,                     LT_SYM,         LT_NUM
    ),

    [L_NAV] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_HOME,        KC_COPY,        KC_NO,          KC_PASTE,       KC_END,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                      CW_TOGG,        KC_LEFT,        KC_UP,          KC_RIGHT,       KC_CAPS,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      MS_BTN4,        KC_PAGE_UP,     KC_DOWN,        KC_PAGE_DOWN,   MS_BTN5,
                                                        KC_TRNS,        KC_TRNS,                    KC_HOME,        KC_END
    ),

    [L_NUM] = LAYOUT(
        KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQL,                     KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_GRV,         KC_1,           KC_2,           KC_3,           KC_BSLS,                    KC_NO,          KC_NO,          KC_TRNS,        KC_TRNS,        KC_NO,
                                                        KC_0,           KC_MINS,                    KC_TRNS,        KC_TRNS
    ),

    [L_SYM] = LAYOUT(
        KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_RPRN,        KC_RCBR,                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                    KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_LPRN,        KC_UNDS,                    KC_TRNS,        KC_TRNS
    ),

    [L_MEDIA] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_MPRV,        KC_VOLU,        KC_MNXT,        KC_NO,                      KC_NO,          KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,
        KC_NO,          KC_NO,          KC_VOLD,        KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_MUTE,        KC_MPLY,                    KC_TRNS,        KC_TRNS
    ),

    [L_FUN] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                      KC_F11,         KC_F4,          KC_F5,          KC_F6,          TO_GAME,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,
                                                        KC_TRNS,        KC_TRNS,                    TO_UNITY,       TO_BASE
    ),

    [L_GAME] = LAYOUT(
        KC_TAB,         KC_Q,           KC_X,           KC_E,           KC_R,                       KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,
        KC_LSFT,        KC_A,           KC_W,           KC_D,           KC_F,                       KC_G,           KC_H,           KC_J,           KC_K,           KC_L,
        KC_LALT,        KC_Z,           KC_S,           KC_C,           KC_V,                       KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,
                                                        KC_LCTL,        KC_SPC,                     TG_GAME,        KC_TILD
    ),

    [L_BUTTON] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          LCTL(KC_Z),     LCTL(KC_Y),     KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRNS,        LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_PENT,                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_BSPC,        KC_DEL,                     KC_NO,          KC_NO
    ),
    
    [L_UNITY] = LAYOUT(
        KC_TAB,         KC_Q,           KC_X,           KC_E,           KC_R,                       KC_T,           KC_E,           KC_NO,          KC_R,           LSFT(KC_U),
        KC_LSFT,        KC_A,           KC_W,           KC_D,           KC_F,                       KC_G,           KC_LEFT,        KC_UP,          KC_RIGHT,       LSFT(KC_L),
        KC_LCTL,        KC_Z,           KC_S,           KC_C,           KC_V,                       LCTL(KC_P),     KC_NO,          KC_DOWN,        KC_NO,          LSFT(KC_G),
                                                        KC_LALT,        KC_SPC,                     TO_BASE,        KC_K
    ),

    [L_SETTINGS] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                      KC_NO,          QK_BOOT,        DB_TOGG,        EE_CLR,         QK_RBT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRNS,        KC_TRNS,                    KC_NO,          KC_NO
    ),

    [L_MOUSE] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          MS_BTN1,        KC_NO,          MS_BTN2,        KC_NO,                      KC_NO,          MS_LEFT,        MS_UP,          MS_RGHT,        KC_NO,
        KC_NO,          KC_NO,          KC_TRNS,        KC_NO,          KC_NO,                      KC_NO,          KC_NO,          MS_DOWN,        KC_NO,          KC_NO,
                                                        KC_NO,          KC_NO,                      MS_BTN1,        MS_BTN2
    )

    //[L_TEMPLATE] = LAYOUT(
    //    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    //    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    //    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    //                                                    KC_NO,          KC_NO,                      KC_NO,          KC_NO
    //)
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_J):
        case LSFT_T(KC_F):
            return TAPPING_TERM;
            
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
            return TAPPING_TERM * 1.1;

        case LALT_T(KC_S):
        case LALT_T(KC_L):
            return TAPPING_TERM * 1.2;

        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOTE):
            return TAPPING_TERM * 1.5;

        case LT_BUTTON:
            return TAPPING_TERM;

        default:
            return TAPPING_TERM;
    }
}

enum combos {
    QW_ESC,
    QW_ESC_GAME,
    QR_GAME,
    QR_GAME_END,
    O_BASE,
    A_BASE
};
// Combo ref layer not base on game layer, so some combos may seem weird
const uint16_t PROGMEM c_esc[] =            {KC_Q,              KC_W,           COMBO_END};
const uint16_t PROGMEM c_esc_game[] =       {KC_TAB,            KC_Q,           COMBO_END};
const uint16_t PROGMEM c_game[] =           {KC_Q,              KC_T,           COMBO_END};
const uint16_t PROGMEM c_game_end[] =       {KC_TAB,            KC_R,           COMBO_END};
const uint16_t PROGMEM c_base_o[] =         {KC_O,              KC_P,           COMBO_END};
const uint16_t PROGMEM c_base_a[] =         {LGUI_T(KC_A),      LALT_T(KC_S),   COMBO_END};

combo_t key_combos[] = {
    [QW_ESC] = COMBO(c_esc,                 KC_ESC),
    [QW_ESC_GAME] = COMBO(c_esc_game,       KC_ESC),
    [QR_GAME] = COMBO(c_game,               TG_GAME),
    [QR_GAME_END] = COMBO(c_game_end,       TG_GAME),
    [O_BASE] = COMBO(c_base_o,              RALT(KC_O)),
    [A_BASE] = COMBO(c_base_a,              RALT(KC_A)),
};

// Mod morph
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, LT_NUM, KC_DEL);
const key_override_t *key_overrides[] = {
	&delete_key_override
};

// Tri-state layers
layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, L_NUM, L_SYM, L_MEDIA);
    state = update_tri_layer_state(state, L_NAV, L_FUN, L_SETTINGS);
    return state;
}

// Set up timer
static uint16_t combo_disabler;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	
	combo_disabler = timer_read();
    return true;
}

// Combo timeout timer, disable combos on layers other than base, game and unity
bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
	if (timer_elapsed(combo_disabler) < 200) {
		return false;
    }
	
	if (layer_state_is(L_GAME)) {
        switch (combo_index) {
            case QW_ESC_GAME:
            case QR_GAME_END:
            return true;

            default:
            return false;
        }
	}
    else if (!layer_state_is(L_BASE) && !layer_state_is(L_UNITY)) {
        return false;
    }
    
    return true;
}

// Always get combos from base layer, unless on game layer
uint8_t combo_ref_from_layer(uint8_t layer) {
    switch (get_highest_layer(layer_state)) {
        case L_GAME:
        return L_GAME;

        default:
        return L_BASE;
    }
}

// Must tap all combos
bool get_combo_must_tap(uint16_t combo_index, combo_t *combo) {
    return true;
}

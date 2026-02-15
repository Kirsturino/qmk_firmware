#include QMK_KEYBOARD_H

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

#define LT_NAV      LT(L_NAV,      KC_SPC)
#define LT_NUM      LT(L_NUM,      KC_BSPC)
#define LT_SYM      LT(L_SYM,      KC_PENT)
#define LT_FUN      LT(L_FUN,      KC_TAB)
#define LT_BUTTON   LT(L_BUTTON,   KC_Z)

#define TG_GAME     TG(L_GAME)
#define TO_UNITY    TO(L_UNITY)
#define TO_BASE     TO(L_BASE)

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
        LGUI_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,                       KC_H,           RSFT_T(KC_J),   RCTL_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_QUOTE),
        LT_BUTTON,      KC_X,           KC_C,           KC_V,           KC_B,                       KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,
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
        KC_NO,          KC_MPRV,        KC_VOLU,        KC_MNXT,        KC_NO,                      KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_RIGHT,
        KC_NO,          KC_NO,          KC_VOLD,        KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_MUTE,        KC_MPLY,                    KC_TRNS,        KC_TRNS
    ),

    [L_FUN] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                      KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,
                                                        KC_TRNS,        KC_TRNS,                    KC_TRNS,        KC_TRNS
    ),

    [L_GAME] = LAYOUT(
        KC_TAB,         KC_Q,           KC_X,           KC_E,           KC_R,                       KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,
        KC_LSFT,        KC_A,           KC_W,           KC_D,           KC_F,                       KC_G,           KC_H,           KC_J,           KC_K,           KC_L,
        KC_LALT,        KC_Z,           KC_S,           KC_C,           KC_V,                       KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,
                                                        KC_LCTL,        KC_SPC,                     KC_P,           KC_TILD
    ),

    [L_BUTTON] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_UNDO,        KC_AGIN,        KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRNS,        KC_CUT,         KC_COPY,        KC_PASTE,       KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_BSPC,        KC_DEL,                     KC_NO,          KC_NO
    ),

    [L_UNITY] = LAYOUT(
        KC_TAB,         KC_Q,           KC_X,           KC_E,           KC_R,                       KC_T,           KC_E,           KC_NO,          KC_R,           LSFT(KC_U),
        KC_LSFT,        KC_A,           KC_W,           KC_D,           KC_F,                       KC_G,           KC_LEFT,        KC_UP,          KC_RIGHT,       LSFT(KC_L),
        KC_LCTL,        KC_Z,           KC_S,           KC_C,           KC_V,                       LCTL(KC_P),     KC_NO,          KC_DOWN,        KC_NO,          LSFT(KC_G),
                                                        KC_LALT,        KC_SPC,                     KC_B,           KC_K
    ),

    [L_SETTINGS] = LAYOUT(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,        KC_NO,                      KC_NO,          QK_BOOT,        DB_TOGG,        EE_CLR,         QK_RBT,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRNS,        KC_TRNS,                    KC_NO,          KC_NO
    )
};              

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_J):
        case LSFT_T(KC_F):
            return TAPPING_TERM;
            
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
            return TAPPING_TERM * 1.2;

        case LALT_T(KC_S):
        case LALT_T(KC_L):
            return TAPPING_TERM * 1.5;

        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOTE):
            return TAPPING_TERM * 2;

        case LT_BUTTON:
            return TAPPING_TERM * 2;

        default:
            return TAPPING_TERM;
    }
}

const uint16_t PROGMEM c_esc[] =            {KC_Q,      KC_W,   COMBO_END};
const uint16_t PROGMEM c_game[] =           {KC_Q,      KC_R,   COMBO_END};
const uint16_t PROGMEM c_unity_left[] =     {KC_SPC,    KC_D,   COMBO_END};
const uint16_t PROGMEM c_unity_right[] =    {KC_PENT,   KC_K,   COMBO_END};
const uint16_t PROGMEM c_base_left[] =      {KC_SPC,    KC_F,   COMBO_END};
const uint16_t PROGMEM c_base_right[] =     {KC_PENT,   KC_J,   COMBO_END};
combo_t key_combos[] = {
    COMBO(c_esc,            KC_ESC),
    COMBO(c_game,           TG_GAME),
    COMBO(c_unity_left,     TO_UNITY),
    COMBO(c_unity_right,    TO_UNITY),
    COMBO(c_base_left,      TO_BASE),
    COMBO(c_base_right,     TO_BASE)
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t *key_overrides[] = {
	&delete_key_override
};


layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, L_NUM, L_SYM, L_MEDIA);
  state = update_tri_layer_state(state, L_NAV, L_FUN, L_SETTINGS);
  return state;
}

void keyboard_post_init_user(void) {  
    rgblight_enable_noeeprom();  
    rgblight_sethsv_noeeprom(HSV_BLACK);  
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);  
}


void housekeeping_task_user(void) {
    // Layer LED
    switch (get_highest_layer(layer_state | default_layer_state))
    {  
        case 0:  
            rgblight_setrgb_at(RGB_BLACK, 0);
            rgblight_setrgb_at(RGB_BLACK, 1);
            break;  
        case 1:  
            rgblight_setrgb_at(RGB_BLUE, 0);
            rgblight_setrgb_at(RGB_BLUE, 1);
            break;  
        case 2:  
            rgblight_setrgb_at(RGB_AZURE, 0);
            rgblight_setrgb_at(RGB_AZURE, 1);
            break;  
        case 3:  
            rgblight_setrgb_at(RGB_CYAN, 0);
            rgblight_setrgb_at(RGB_CYAN, 1);
            break;
        case 4:  
            rgblight_setrgb_at(RGB_SPRINGGREEN, 0);
            rgblight_setrgb_at(RGB_SPRINGGREEN, 1);
            break;  
        case 5:  
            rgblight_setrgb_at(RGB_GREEN, 0);
            rgblight_setrgb_at(RGB_GREEN, 1);
            break;  
        case 6:  
            rgblight_setrgb_at(RGB_CHARTREUSE, 0);
            rgblight_setrgb_at(RGB_CHARTREUSE, 1);
            break;  
        case 7:  
            rgblight_setrgb_at(RGB_YELLOW, 0);
            rgblight_setrgb_at(RGB_YELLOW, 1);
            break;
        case 8:  
            rgblight_setrgb_at(RGB_ORANGE, 0);
            rgblight_setrgb_at(RGB_ORANGE, 1);
            break;  
        case 9:  
            rgblight_setrgb_at(RGB_RED, 0); 
            rgblight_setrgb_at(RGB_RED, 1); 
            break;
        default:
            rgblight_setrgb_at(RGB_PINK, 0);
            rgblight_setrgb_at(RGB_PINK, 1);
        break;
    }  
}

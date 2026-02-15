#pragma once

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 150

// Mod tap settings
#define TAPPING_TERM_PER_KEY
#define FLOW_TAP_TERM 150
#define CHORDAL_HOLD
#define SPECULATIVE_HOLD
#define PERMISSIVE_HOLD

#define COMBO_TERM 50
#define COMBO_STRICT_TIMER
#define COMBO_ONLY_FROM_LAYER 0

// Eager debounce
#define DEBOUNCE 5

// Manually set polling rate in case
#define USB_POLLING_INTERVAL_MS 1

// RGB LED used for layer indication
#undef WS2812_DI_PIN  
#define WS2812_DI_PIN 25
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 2
#undef RGBLED_SPLIT  
#define RGBLED_SPLIT {1, 1}

// Power LED used for caps lock
#define LED_CAPS_LOCK_PIN 24  
#define LED_PIN_ON_STATE 0

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

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

// Pressing both right thumb buttons enters media layer
#define TRI_LAYER_LOWER_LAYER   2
#define TRI_LAYER_UPPER_LAYER   3
#define TRI_LAYER_ADJUST_LAYER  4

// Eager debounce
#define DEBOUNCE 5

// Manually set polling rate in case
#define USB_POLLING_INTERVAL_MS 1

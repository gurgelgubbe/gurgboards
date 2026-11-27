/*
 * Swedish (sv-SE) keycodes for ZMK, in the style of duckyb's keymap_italian.h
 * Ported from QMK quantum/keymap_extras/keymap_swedish.h
 * Set host input language to "Swedish" — these emit key POSITIONS.
 */
#pragma once
#include <dt-bindings/zmk/keys.h>

/* ── Letters ────────────────────────────────────────────────────────────── */
#define SE_A ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A)
#define SE_B ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B)
#define SE_C ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C)
#define SE_D ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D)
#define SE_E ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)
#define SE_F ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F)
#define SE_G ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G)
#define SE_H ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H)
#define SE_I ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)
#define SE_J ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J)
#define SE_K ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K)
#define SE_L ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L)
#define SE_M ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)
#define SE_N ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N)
#define SE_O ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O)
#define SE_P ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P)
#define SE_Q ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q)
#define SE_R ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R)
#define SE_S ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)
#define SE_T ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T)
#define SE_U ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U)
#define SE_V ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V)
#define SE_W ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)
#define SE_X ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X)
#define SE_Y ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)
#define SE_Z ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)

/* ── Unshifted ──────────────────────────────────────────────────────────── */
#define SE_SECT  GRAVE          /* §   */
#define SE_1 N1
#define SE_2 N2
#define SE_3 N3
#define SE_4 N4
#define SE_5 N5
#define SE_6 N6
#define SE_7 N7
#define SE_8 N8
#define SE_9 N9
#define SE_0 N0
#define SE_PLUS  MINUS          /* +   */
#define SE_ACUT  EQUAL          /* ´   (dead) */
#define SE_ARNG  LBKT           /* å   */
#define SE_DIAE  RBKT           /* ¨   (dead) */
#define SE_ODIA  SEMI           /* ö   */
#define SE_ADIA  APOS           /* ä   */
#define SE_QUOT  NON_US_HASH    /* '   */
#define SE_LABK  NON_US_BSLH    /* <   */
#define SE_COMM  COMMA          /* ,   */
#define SE_DOT   PERIOD         /* .   */
#define SE_MINS  SLASH          /* -   */

/* ── Shifted ────────────────────────────────────────────────────────────── */
#define SE_HALF  LS(GRAVE)          /* ½  */
#define SE_EXLM  LS(N1)             /* !  */
#define SE_DQUO  LS(N2)             /* "  */
#define SE_HASH  LS(N3)             /* #  */
#define SE_CURR  LS(N4)             /* ¤  */
#define SE_PERC  LS(N5)             /* %  */
#define SE_AMPR  LS(N6)             /* &  */
#define SE_SLSH  LS(N7)             /* /  */
#define SE_LPRN  LS(N8)             /* (  */
#define SE_RPRN  LS(N9)             /* )  */
#define SE_EQL   LS(N0)             /* =  */
#define SE_QUES  LS(MINUS)          /* ?  */
#define SE_GRV   LS(EQUAL)          /* `  */
#define SE_CIRC  LS(RBKT)           /* ^  */
#define SE_ASTR  LS(NON_US_HASH)    /* *  */
#define SE_RABK  LS(NON_US_BSLH)    /* >  */
#define SE_SCLN  LS(COMMA)          /* ;  */
#define SE_COLN  LS(PERIOD)         /* :  */
#define SE_UNDS  LS(SLASH)          /* _  */

/* ── AltGr ──────────────────────────────────────────────────────────────── */
#define SE_AT    RA(N2)             /* @  */
#define SE_PND   RA(N3)             /* £  */
#define SE_DLR   RA(N4)             /* $  */
#define SE_EUR   RA(N5)             /* €  */
#define SE_LCBR  RA(N7)             /* {  */
#define SE_LBRC  RA(N8)             /* [  */
#define SE_RBRC  RA(N9)             /* ]  */
#define SE_RCBR  RA(N0)             /* }  */
#define SE_BSLS  RA(MINUS)          /* \  */
#define SE_TILD  RA(RBKT)           /* ~  */
#define SE_PIPE  RA(NON_US_BSLH)    /* |  */
#define SE_MICR  RA(M)              /* µ  */

/* ── Back-compat aliases (names your current keymap/atreus62 use) ───────── */
#define SE_A_RING SE_ARNG
#define SE_A_UMLAUT SE_ADIA
#define SE_O_UMLAUT SE_ODIA
#define SE_APOSTROPHE SE_QUOT
#define SE_APOS SE_QUOT
#define SE_SEMI SE_SCLN
#define SE_GRAVE SE_ACUT
#define SE_TILDE SE_TILD
#define SE_LEFT_PARENTHESIS SE_LPRN
#define SE_RIGHT_PARENTHESIS SE_RPRN
#define SE_LEFT_BRACKET SE_LBRC
#define SE_RIGHT_BRACKET SE_RBRC

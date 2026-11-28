/*
 * keys_se.h — Swedish (sv-SE) keycode names for ZMK
 *
 * Written from the sv-SE keyboard layout itself: which physical HID usage
 * sits under which legend, at which level. Names follow the SE_ convention.
 *
 * HID usages are POSITIONS, not characters. The host's layout decides the
 * glyph, so this file only has to answer "which position is this legend on?"
 *
 * Levels:  plain = level 1,  LS() = level 2 (Shift),  RA() = level 3 (AltGr)
 * RA() is RIGHT ALT. LA() is left alt and produces nothing useful here.
 *
 * Dead keys (´ ` ¨ ^ ~) are sent, not composed — the host holds the dead-key
 * state and combines it with the next keystroke. Bare accents need a macro
 * that appends a space; see the keymaps.
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

/* ── Row 1 ────────────────────────────────────────────────────────────── */
#define SE_SECT GRAVE     /* §   */
#define SE_1    N1        /* 1   */
#define SE_2    N2        /* 2   */
#define SE_3    N3        /* 3   */
#define SE_4    N4        /* 4   */
#define SE_5    N5        /* 5   */
#define SE_6    N6        /* 6   */
#define SE_7    N7        /* 7   */
#define SE_8    N8        /* 8   */
#define SE_9    N9        /* 9   */
#define SE_0    N0        /* 0   */
#define SE_PLUS MINUS     /* +   US minus position */
#define SE_ACUT EQUAL     /* ´   dead acute, US equals position */

/* ── Row 2 ────────────────────────────────────────────────────────────── */
#define SE_Q    Q
#define SE_W    W
#define SE_E    E
#define SE_R    R
#define SE_T    T
#define SE_Y    Y
#define SE_U    U
#define SE_I    I
#define SE_O    O
#define SE_P    P
#define SE_ARNG LBKT      /* Å   US [ position */
#define SE_DIAE RBKT      /* ¨   dead diaeresis, US ] position */

/* ── Row 3 ────────────────────────────────────────────────────────────── */
#define SE_A    A
#define SE_S    S
#define SE_D    D
#define SE_F    F
#define SE_G    G
#define SE_H    H
#define SE_J    J
#define SE_K    K
#define SE_L    L
#define SE_ODIA SEMICOLON /* Ö   US ; position */
#define SE_ADIA SQT       /* Ä   US ' position */
#define SE_QUOT NUHS      /* '   ISO key right of Ä, US \ position */

/* ── Row 4 ────────────────────────────────────────────────────────────── */
#define SE_LABK NUBS      /* <   ISO extra key, left of Z */
#define SE_Z    Z
#define SE_X    X
#define SE_C    C
#define SE_V    V
#define SE_B    B
#define SE_N    N
#define SE_M    M
#define SE_COMM COMMA
#define SE_DOT  DOT
#define SE_MINS SLASH     /* -   US / position */

/* ── Level 2: Shift ───────────────────────────────────────────────────── */
#define SE_HALF LS(SE_SECT)   /* ½  */
#define SE_EXLM LS(SE_1)      /* !  */
#define SE_DQUO LS(SE_2)      /* "  */
#define SE_HASH LS(SE_3)      /* #  */
#define SE_CURR LS(SE_4)      /* ¤  */
#define SE_PERC LS(SE_5)      /* %  */
#define SE_AMPR LS(SE_6)      /* &  */
#define SE_SLSH LS(SE_7)      /* /  */
#define SE_LPRN LS(SE_8)      /* (  */
#define SE_RPRN LS(SE_9)      /* )  */
#define SE_EQL  LS(SE_0)      /* =  */
#define SE_QUES LS(SE_PLUS)   /* ?  */
#define SE_GRV  LS(SE_ACUT)   /* `  dead grave */
#define SE_CIRC LS(SE_DIAE)   /* ^  dead circumflex */
#define SE_ASTR LS(SE_QUOT)   /* *  */
#define SE_RABK LS(SE_LABK)   /* >  */
#define SE_SCLN LS(SE_COMM)   /* ;  */
#define SE_COLN LS(SE_DOT)    /* :  */
#define SE_UNDS LS(SE_MINS)   /* _  */

/* ── Level 3: AltGr ───────────────────────────────────────────────────── */
#define SE_AT   RA(SE_2)      /* @  */
#define SE_PND  RA(SE_3)      /* £  */
#define SE_DLR  RA(SE_4)      /* $  */
#define SE_EURO RA(SE_5)      /* €  also on AltGr+E */
#define SE_LCBR RA(SE_7)      /* {  */
#define SE_LBRC RA(SE_8)      /* [  */
#define SE_RBRC RA(SE_9)      /* ]  */
#define SE_RCBR RA(SE_0)      /* }  */
#define SE_BSLS RA(SE_PLUS)   /* \  AltGr + '+' position */
#define SE_TILD RA(SE_DIAE)   /* ~  dead tilde */
#define SE_PIPE RA(SE_LABK)   /* |  */
#define SE_MICR RA(SE_M)      /* µ  */

/* ── Non-character keys ───────────────────────────────────────────────── */
#define SE_SPC  SPACE
#define SE_SPACE SPACE
#define SE_ESC  ESC
#define SE_TAB  TAB
#define SE_DEL  DEL
#define SE_ENT  RET
#define SE_BSPC BSPC

/* ── Spelling variants used in older revisions of this keymap ─────────── */
#define SE_A_RING   SE_ARNG
#define SE_A_UMLAUT SE_ADIA
#define SE_O_UMLAUT SE_ODIA
#define SE_APOS     SE_QUOT
#define SE_DQT      SE_DQUO
#define SE_STAR     SE_ASTR
#define SE_BSLH     SE_BSLS
#define SE_TILDE    SE_TILD
#define SE_GRAVE    SE_GRV
#define SE_EQUAL    SE_EQL
#define SE_QUESTION SE_QUES
#define SE_DOLLAR   SE_DLR
#define SE_MINUS    SE_MINS
#define SE_SLASH    SE_SLSH
#define SE_COMMA    SE_COMM
#define SE_LT       SE_LABK
#define SE_GT       SE_RABK

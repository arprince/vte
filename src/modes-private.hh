/*
 * Copyright © 2018 Christian Persch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * Modes for SM_DEC/RM_DEC.
 *
 * Most of these are not implemented in VTE.
 *
 * References: VT525
 *             XTERM
 *             KITTY
 *             MINTTY
 *             MLTERM
 *             RLogin
 *             URXVT
 *             WY370
 */

/* Supported modes: */

/* DEC */

/*
 * DECCKM - cursor keys mode
 */
MODE(DEC_APPLICATION_CURSOR_KEYS, 1)

/*
 * DECCOLM: 132 column mode
 */
MODE(DEC_132_COLUMN, 3)

/*
 * DECSCNM - screen mode
 */
MODE(DEC_REVERSE_IMAGE,  5)

/*
 * DECOM - origin mode
 */
MODE(DEC_ORIGIN, 6)

/*
 * DECAWM - auto wrap mode
 */
MODE(DEC_AUTOWRAP, 7)

/*
 * DECTCEM - text cursor enable
 */
MODE(DEC_TEXT_CURSOR, 25)

/*
 * DECNKM - numeric/application keypad mode
 */
MODE(DEC_APPLICATION_KEYPAD, 66)

/* XTERM */

MODE(XTERM_MOUSE_X10,                   9)
MODE(XTERM_DECCOLM,                    40)
MODE(XTERM_ALTBUF,                     47)
MODE(XTERM_MOUSE_VT220,              1000)
MODE(XTERM_MOUSE_VT220_HIGHLIGHT,    1001)
MODE(XTERM_MOUSE_BUTTON_EVENT,       1002)
MODE(XTERM_MOUSE_ANY_EVENT,          1003)
MODE(XTERM_FOCUS,                    1004)
MODE(XTERM_MOUSE_EXT_SGR,            1006)
MODE(XTERM_ALTBUF_SCROLL,            1007)
MODE(XTERM_META_SENDS_ESCAPE,        1036)
MODE(XTERM_OPT_ALTBUF,               1047)
MODE(XTERM_SAVE_CURSOR,              1048)
MODE(XTERM_OPT_ALTBUF_SAVE_CURSOR,   1049)
MODE(XTERM_READLINE_BRACKETED_PASTE, 2004)

/* URXVT */

MODE(URXVT_MOUSE_EXT, 1015)

/* Not supported modes: */

/* DEC */

MODE_FIXED(DECANM,      2, ALWAYS_SET)
MODE_FIXED(DECSCLM,     4, ALWAYS_RESET)
MODE_FIXED(DECARM,      8, ALWAYS_SET)
MODE_FIXED(DECLTM,     11, ALWAYS_RESET)
MODE_FIXED(DECEKEM,    16, ALWAYS_RESET)
MODE_FIXED(DECCPFF,    18, ALWAYS_RESET)
MODE_FIXED(DECPEX,     19, ALWAYS_RESET)
MODE_FIXED(DECRLM,     34, ALWAYS_RESET)
MODE_FIXED(DECHEBM,    35, ALWAYS_RESET)
MODE_FIXED(DECHEM,     36, ALWAYS_RESET)
MODE_FIXED(DECNRCM,    42, ALWAYS_RESET)
MODE_FIXED(DECGEPM,    43, ALWAYS_RESET) /* from VT330 */
/* MODE_FIXED(DECGPCM,    44, ALWAYS_RESET) * from VT330, conflicts with XTERM_MARGIN_BELL */
/* MODE_FIXED(DECGPCS,    45, ALWAYS_RESET) * from VT330, conflicts with XTERM_REVERSE_WRAP */
/* MODE_FIXED(DECGPBM,    46, ALWAYS_RESET) * from VT330, conflicts with XTERM_LOGGING */
/* MODE_FIXED(DECGRPM,    47, ALWAYS_RESET) * from VT330, conflicts with XTERM_ALTBUF */
MODE_FIXED(DEC131TM,   53, ALWAYS_RESET)
MODE_FIXED(DECNAKB,    57, ALWAYS_RESET)
/* MODE_FIXED(DECKKDM,    59, ALWAYS_SET) * Kanji/Katakana Display Mode, from VT382-Kanji */
MODE_FIXED(DECHCCM,    60, ALWAYS_RESET)
MODE_FIXED(DECVCCM,    61, ALWAYS_RESET)
MODE_FIXED(DECPCCM,    64, ALWAYS_RESET)
MODE_FIXED(DECBKM,     67, ALWAYS_RESET)
MODE_FIXED(DECKBUM,    68, ALWAYS_RESET)
MODE_FIXED(DECVSSM,    69, ALWAYS_RESET) /* aka DECLRMM */
MODE_FIXED(DECXRLM,    73, ALWAYS_RESET)
/* MODE_FIXED(DECSDM,    80, ALWAYS_RESET) ! Conflicts with WY161 */
MODE_FIXED(DECKPM,     81, ALWAYS_RESET)
MODE_FIXED(DECTHAISCM, 90, ALWAYS_RESET) /* Thai Space Compensating Mode, from VT382-Thai */
MODE_FIXED(DECNCSM,    95, ALWAYS_RESET)
MODE_FIXED(DECRLCM,    96, ALWAYS_RESET)
MODE_FIXED(DECRCRTSM,  97, ALWAYS_RESET)
MODE_FIXED(DECARSM,    98, ALWAYS_RESET)
MODE_FIXED(DECMCM,     99, ALWAYS_RESET)
MODE_FIXED(DECAAM,    100, ALWAYS_RESET)
MODE_FIXED(DECANSM,   101, ALWAYS_RESET)
MODE_FIXED(DECNULM,   102, ALWAYS_RESET)
MODE_FIXED(DECHDPXM,  103, ALWAYS_RESET)
MODE_FIXED(DECESKM,   104, ALWAYS_RESET)
MODE_FIXED(DECOSCNM,  106, ALWAYS_RESET)
MODE_FIXED(DECCAPSLK, 109, ALWAYS_RESET)
MODE_FIXED(DECFWM,    111, ALWAYS_RESET)
MODE_FIXED(DECRPL,    112, ALWAYS_RESET)
MODE_FIXED(DECHWUM,   113, ALWAYS_RESET)
MODE_FIXED(DECATCUM,  114, ALWAYS_RESET)
MODE_FIXED(DECATCBM,  115, ALWAYS_RESET)
MODE_FIXED(DECBBSM,   116, ALWAYS_RESET)
MODE_FIXED(DECECM,    117, ALWAYS_RESET)

/* DRCSTerm */
/* Modes 8800…8804 */

/* KITTY */

MODE_FIXED(KITTY_STYLED_UNDERLINES, 2016, ALWAYS_SET)
MODE_FIXED(KITTY_EXTENDED_KEYBOARD, 2017, ALWAYS_RESET)

/* MinTTY */

MODE_FIXED(MINTTY_REPORT_CJK_AMBIGUOUS_WIDTH,           7700, ALWAYS_RESET)
MODE_FIXED(MINTTY_REPORT_SCROLL_MARKER_IN_CURRENT_LINE, 7711, ALWAYS_RESET)
MODE_FIXED(MINTTY_APPLICATION_ESCAPE,                   7727, ALWAYS_RESET)
MODE_FIXED(MINTTY_ESCAPE_SENDS_FS,                      7728, ALWAYS_RESET)
MODE_FIXED(MINTTY_SIXEL_SCROLLING_END_POSITION,         7730, ALWAYS_RESET)
MODE_FIXED(MINTTY_SCROLLBAR,                            7766, ALWAYS_RESET)
MODE_FIXED(MINTTY_REPORT_FONT_CHANGES,                  7767, ALWAYS_RESET)
MODE_FIXED(MINTTY_SHORTCUT_OVERRIDE,                    7783, ALWAYS_RESET)
MODE_FIXED(MINTTY_ALBUF_MOUSEWHEEL_TO_CURSORKEYS,       7786, ALWAYS_RESET)
MODE_FIXED(MINTTY_MOUSEWHEEL_APPLICATION_KEYS,          7787, ALWAYS_RESET)
MODE_FIXED(MINTTY_BIDI_DISABLE_IN_CURRENT_LINE,         7796, ALWAYS_RESET)
MODE_FIXED(MINTTY_SIXEL_SCROLL_CURSOR_RIGHT,            8452, ALWAYS_RESET)
/* MinTTY also knows mode 77096 'BIDI disable", and 77000..77031
 * "Application control key" which are outside of the supported range
 * for CSI parameters.
 */

/* RLogin */

/* RLogin appears to use many modes
 * [https://github.com/kmiya-culti/RLogin/blob/master/RLogin/TextRam.h#L131]:
 * 1406..1415, 1420..1425, 1430..1434, 1436, 1452..1481,
 * 8400..8406, 8416..8417, 8428..8429, 8435, 8437..8443,
 * 8446..8458,
 * and modes 7727, 7786, 8200 (home cursor on [ED 2]),
 * 8800 (some weird Unicode plane 17 mapping?), 8840 (same as 8428).
 *
 * We're not going to implement them, but avoid these ranges
 * when assigning new mode numbers.
 *
 * The following are the ones from RLogin that MLTerm knows about:
 */

/* MODE_FIXED(RLOGIN_APPLICATION_ESCAPE,                7727, ALWAYS_RESET) */
/* MODE_FIXED(RLOGIN_MOUSEWHEEL_TO_CURSORKEYS,          7786, ALWAYS_RESET) */

/* Ambiguous-width characters are wide (reset) or narrow (set) */
MODE_FIXED(RLOGIN_AMBIGUOUS_WIDTH_CHARACTERS_NARROW, 8428, ALWAYS_RESET)

/* MODE_FIXED(RLOGIN_CURSOR_TO_RIGHT_OF_SIXEL,          8452, ALWAYS_RESET) */

/* XTERM also knows this one */
/* MODE_FIXED(RLOGIN_SIXEL_SCROLL_CURSOR_RIGHT,         8452, ALWAYS_RESET) */

/* RXVT */

MODE_FIXED(RXVT_TOOLBAR,            10, ALWAYS_RESET)
MODE_FIXED(RXVT_SCROLLBAR,          30, ALWAYS_RESET)
/* MODE_FIXED(RXVT_SHIFT_KEYS,        35, ALWAYS_RESET) ! Conflicts with DECHEBM */
MODE_FIXED(RXVT_SCROLL_OUTPUT,    1010, ALWAYS_RESET)
MODE_FIXED(RXVT_SCROLL_KEYPRES,   1011, ALWAYS_RESET)
/* Bold/blink uses normal (reset) or high intensity (set) colour */
MODE_FIXED(RXVT_INTENSITY_STYLES, 1021, ALWAYS_SET)

/* Wyse */

MODE_FIXED(WYTEK,  38, ALWAYS_RESET)
MODE_FIXED(WY161,  80, ALWAYS_RESET)
MODE_FIXED(WY52,   83, ALWAYS_RESET)
MODE_FIXED(WYENAT, 84, ALWAYS_RESET)
MODE_FIXED(WYREPL, 85, ALWAYS_RESET)

/* XTERM */

MODE_FIXED(XTERM_ATT610_BLINK,                    12, ALWAYS_RESET)
MODE_FIXED(XTERM_CURSOR_BLINK,                    13, ALWAYS_RESET)
MODE_FIXED(XTERM_CURSOR_BLINK_XOR,                14, ALWAYS_RESET)
MODE_FIXED(XTERM_CURSES_HACK,                     41, ALWAYS_RESET)
MODE_FIXED(XTERM_MARGIN_BELL,                     44, ALWAYS_RESET)
MODE_FIXED(XTERM_REVERSE_WRAP,                    45, ALWAYS_RESET)
MODE_FIXED(XTERM_LOGGING,                         46, ALWAYS_RESET)
MODE_FIXED(XTERM_MOUSE_EXT,                     1005, ALWAYS_RESET)
MODE_FIXED(XTERM_8BIT_META,                     1034, ALWAYS_RESET)
MODE_FIXED(XTERM_NUMLOCK,                       1035, ALWAYS_RESET)
MODE_FIXED(XTERM_DELETE_IS_DEL,                 1037, ALWAYS_RESET)
MODE_FIXED(XTERM_ALT_SENDS_ESCAPE,              1039, ALWAYS_RESET)
MODE_FIXED(XTERM_KEEP_SELECTION,                1040, ALWAYS_RESET)
MODE_FIXED(XTERM_KEEP_CLIPBOARD,                1044, ALWAYS_RESET)
MODE_FIXED(XTERM_SELECT_TO_CLIPBOARD,           1041, ALWAYS_RESET)
MODE_FIXED(XTERM_BELL_URGENT,                   1042, ALWAYS_RESET)
MODE_FIXED(XTERM_PRESENT_ON_BELL,               1043, ALWAYS_RESET)
MODE_FIXED(XTERM_ALLOW_ALTBUF,                  1046, ALWAYS_SET)
MODE_FIXED(XTERM_FKEYS_TERMCAP,                 1050, ALWAYS_RESET)
MODE_FIXED(XTERM_FKEYS_SUN,                     1051, ALWAYS_RESET)
MODE_FIXED(XTERM_FKEYS_HP,                      1052, ALWAYS_RESET)
MODE_FIXED(XTERM_FKEYS_SCO,                     1053, ALWAYS_RESET)
MODE_FIXED(XTERM_FKEYS_LEGACY,                  1060, ALWAYS_RESET)
MODE_FIXED(XTERM_FKEYS_VT220,                   1061, ALWAYS_RESET)
MODE_FIXED(XTERM_SIXEL_PRIVATE_COLOR_REGISTERS, 1070, ALWAYS_SET)
MODE_FIXED(XTERM_READLINE_BUTTON1_MOVE_POINT,   2001, ALWAYS_RESET)
MODE_FIXED(XTERM_READLINE_BUTTON2_MOVE_POINT,   2002, ALWAYS_RESET)
MODE_FIXED(XTERM_READLINE_DBLBUTTON3_DELETE,    2003, ALWAYS_RESET)
MODE_FIXED(XTERM_READLINE_PASTE_QUOTE,          2005, ALWAYS_RESET)
MODE_FIXED(XTERM_READLINE_PASTE_LITERAL_NL,     2006, ALWAYS_RESET)

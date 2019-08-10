#include "include/driver_framebuffer.h"
const uint8_t pixelade8pt7bBitmaps[] = {
  0x00, 0xFE, 0x80, 0xB6, 0x80, 0x28, 0x53, 0xF9, 0x4F, 0xE5, 0x0A, 0x00,
  0x23, 0xE9, 0x46, 0x1C, 0xBE, 0x20, 0x46, 0xA4, 0x84, 0x29, 0x38, 0x80,
  0x08, 0x60, 0xB6, 0x24, 0x95, 0x80, 0xE0, 0x2A, 0x49, 0x24, 0x92, 0x22,
  0x88, 0x92, 0x49, 0x24, 0xA8, 0x25, 0x5D, 0x52, 0x00, 0x22, 0xF2, 0x20,
  0x58, 0xF0, 0x80, 0x04, 0x20, 0x84, 0x21, 0x08, 0x00, 0x69, 0x99, 0x99,
  0x60, 0x75, 0x54, 0xE1, 0x16, 0x88, 0xF0, 0xE1, 0x16, 0x11, 0xE0, 0x99,
  0x97, 0x11, 0x10, 0xF8, 0x8C, 0x31, 0xE0, 0x68, 0x8E, 0x99, 0x60, 0xF1,
  0x12, 0x22, 0x20, 0x69, 0x96, 0x99, 0x60, 0x69, 0x97, 0x11, 0x60, 0x90,
  0x45, 0x80, 0x12, 0x48, 0x42, 0x10, 0xF0, 0xF0, 0x84, 0x21, 0x24, 0x80,
  0x69, 0x12, 0x40, 0x40, 0x39, 0x19, 0xEB, 0x99, 0x03, 0xC0, 0x69, 0x9F,
  0x99, 0x90, 0xE9, 0x9E, 0x99, 0xE0, 0x72, 0x49, 0x18, 0xE9, 0x99, 0x99,
  0xE0, 0xF8, 0x8E, 0x88, 0xF0, 0xF8, 0x8F, 0x88, 0x80, 0x78, 0x8B, 0x99,
  0x60, 0x99, 0x9F, 0x99, 0x90, 0xD5, 0x5C, 0x11, 0x11, 0x99, 0x60, 0x99,
  0xAC, 0xA9, 0x90, 0x88, 0x88, 0x88, 0xF0, 0x8E, 0x6F, 0x18, 0xC6, 0x20,
  0xCE, 0x6B, 0x5A, 0xCE, 0x60, 0x64, 0x63, 0x18, 0xC5, 0x80, 0xE9, 0x9E,
  0x88, 0x80, 0x69, 0x99, 0x99, 0x62, 0xE9, 0x9E, 0x99, 0x90, 0x78, 0x86,
  0x11, 0xE0, 0xF2, 0x22, 0x22, 0x20, 0x99, 0x99, 0x99, 0x60, 0x8C, 0x62,
  0xA5, 0x28, 0x80, 0x86, 0x19, 0x56, 0x59, 0x66, 0x80, 0x8A, 0x94, 0x45,
  0x2A, 0x20, 0x8C, 0x54, 0xA2, 0x10, 0x80, 0xF8, 0x44, 0x44, 0x43, 0xE0,
  0xF2, 0x49, 0x24, 0x92, 0x4E, 0x81, 0x02, 0x04, 0x08, 0x20, 0x40, 0xE4,
  0x92, 0x49, 0x24, 0x9E, 0x00, 0xF0, 0xB0, 0x61, 0x79, 0x70, 0x88, 0xE9,
  0x99, 0xE0, 0x72, 0x46, 0x11, 0x79, 0x99, 0x70, 0x69, 0xE8, 0x60, 0x34,
  0xC4, 0x44, 0x40, 0x69, 0x99, 0x71, 0x60, 0x88, 0xE9, 0x99, 0x90, 0xBE,
  0x45, 0x55, 0x80, 0x89, 0xAC, 0xA9, 0x90, 0xFE, 0xFA, 0x59, 0x65, 0x94,
  0xE9, 0x99, 0x90, 0x69, 0x99, 0x60, 0xE9, 0x99, 0xE8, 0x80, 0x79, 0x99,
  0x71, 0x10, 0xBC, 0x88, 0x80, 0x78, 0x61, 0xE0, 0xAE, 0xA4, 0x99, 0x99,
  0x70, 0x99, 0x95, 0x20, 0x86, 0x59, 0x65, 0x68, 0x8A, 0x88, 0xA8, 0x80,
  0x99, 0x99, 0x71, 0x60, 0xF1, 0x68, 0xF0, 0x69, 0x44, 0x98, 0xFE, 0xC9,
  0x14, 0xB0, 0x00 };

const GFXglyph pixelade8pt7bGlyphs[] = {
  {     0,   1,   1,   3,    0,    0 },   // 0x20 ' '
  {     1,   1,   9,   2,    0,   -6 },   // 0x21 '!'
  {     3,   3,   3,   4,    0,   -9 },   // 0x22 '"'
  {     5,   7,   7,   7,    0,   -6 },   // 0x23 '#'
  {    12,   5,   9,   7,    1,   -7 },   // 0x24 '$'
  {    18,   6,   7,   7,    0,   -6 },   // 0x25 '%'
  {    24,   6,   7,   7,    0,   -6 },   // 0x26 '&'
  {    30,   1,   3,   3,    1,   -6 },   // 0x27 '''
  {    31,   3,  13,   4,    0,   -9 },   // 0x28 '('
  {    36,   3,  13,   4,    0,   -9 },   // 0x29 ')'
  {    41,   5,   5,   6,    0,   -9 },   // 0x2A '*'
  {    45,   4,   5,   5,    0,   -4 },   // 0x2B '+'
  {    48,   2,   3,   3,    0,   -1 },   // 0x2C ','
  {    49,   4,   1,   5,    0,   -3 },   // 0x2D '-'
  {    50,   1,   1,   2,    0,    0 },   // 0x2E '.'
  {    51,   6,   7,   7,    0,   -6 },   // 0x2F '/'
  {    57,   4,   7,   6,    1,   -6 },   // 0x30 '0'
  {    61,   2,   7,   3,    0,   -6 },   // 0x31 '1'
  {    63,   4,   7,   6,    1,   -6 },   // 0x32 '2'
  {    67,   4,   7,   6,    1,   -6 },   // 0x33 '3'
  {    71,   4,   7,   6,    1,   -6 },   // 0x34 '4'
  {    75,   4,   7,   6,    1,   -6 },   // 0x35 '5'
  {    79,   4,   7,   6,    1,   -6 },   // 0x36 '6'
  {    83,   4,   7,   5,    0,   -6 },   // 0x37 '7'
  {    87,   4,   7,   6,    1,   -6 },   // 0x38 '8'
  {    91,   4,   7,   6,    1,   -6 },   // 0x39 '9'
  {    95,   1,   4,   3,    1,   -3 },   // 0x3A ':'
  {    96,   2,   5,   3,    0,   -3 },   // 0x3B ';'
  {    98,   4,   7,   6,    1,   -6 },   // 0x3C '<'
  {   102,   4,   3,   5,    0,   -4 },   // 0x3D '='
  {   104,   4,   7,   6,    1,   -6 },   // 0x3E '>'
  {   108,   4,   7,   6,    1,   -6 },   // 0x3F '?'
  {   112,   6,   7,   7,    0,   -4 },   // 0x40 '@'
  {   118,   4,   7,   6,    1,   -6 },   // 0x41 'A'
  {   122,   4,   7,   6,    1,   -6 },   // 0x42 'B'
  {   126,   3,   7,   5,    1,   -6 },   // 0x43 'C'
  {   129,   4,   7,   6,    1,   -6 },   // 0x44 'D'
  {   133,   4,   7,   5,    0,   -6 },   // 0x45 'E'
  {   137,   4,   7,   5,    0,   -6 },   // 0x46 'F'
  {   141,   4,   7,   6,    1,   -6 },   // 0x47 'G'
  {   145,   4,   7,   6,    1,   -6 },   // 0x48 'H'
  {   149,   2,   7,   3,    0,   -6 },   // 0x49 'I'
  {   151,   4,   7,   6,    1,   -6 },   // 0x4A 'J'
  {   155,   4,   7,   6,    1,   -6 },   // 0x4B 'K'
  {   159,   4,   7,   6,    1,   -6 },   // 0x4C 'L'
  {   163,   5,   7,   6,    0,   -6 },   // 0x4D 'M'
  {   168,   5,   7,   6,    0,   -6 },   // 0x4E 'N'
  {   173,   5,   7,   6,    0,   -6 },   // 0x4F 'O'
  {   178,   4,   7,   6,    1,   -6 },   // 0x50 'P'
  {   182,   4,   8,   6,    1,   -6 },   // 0x51 'Q'
  {   186,   4,   7,   6,    1,   -6 },   // 0x52 'R'
  {   190,   4,   7,   6,    1,   -6 },   // 0x53 'S'
  {   194,   4,   7,   6,    1,   -6 },   // 0x54 'T'
  {   198,   4,   7,   6,    1,   -6 },   // 0x55 'U'
  {   202,   5,   7,   6,    0,   -6 },   // 0x56 'V'
  {   207,   6,   7,   7,    0,   -6 },   // 0x57 'W'
  {   213,   5,   7,   6,    0,   -6 },   // 0x58 'X'
  {   218,   5,   7,   6,    0,   -6 },   // 0x59 'Y'
  {   223,   5,   7,   6,    0,   -6 },   // 0x5A 'Z'
  {   228,   3,  13,   4,    0,   -9 },   // 0x5B '['
  {   233,   6,   7,   7,    0,   -6 },   // 0x5C '\'
  {   239,   3,  13,   4,    0,   -9 },   // 0x5D ']'
  {   244,   1,   1,   4,    0,    0 },   // 0x5E '^'
  {   245,   4,   1,   6,    1,    0 },   // 0x5F '_'
  {   246,   2,   2,   3,    0,   -6 },   // 0x60 '`'
  {   247,   4,   5,   5,    0,   -4 },   // 0x61 'a'
  {   250,   4,   7,   5,    0,   -6 },   // 0x62 'b'
  {   254,   3,   5,   4,    0,   -4 },   // 0x63 'c'
  {   256,   4,   7,   6,    1,   -6 },   // 0x64 'd'
  {   260,   4,   5,   5,    0,   -4 },   // 0x65 'e'
  {   263,   4,   7,   6,    1,   -6 },   // 0x66 'f'
  {   267,   4,   7,   6,    1,   -4 },   // 0x67 'g'
  {   271,   4,   7,   6,    1,   -6 },   // 0x68 'h'
  {   275,   1,   7,   3,    1,   -6 },   // 0x69 'i'
  {   276,   2,   9,   3,    0,   -6 },   // 0x6A 'j'
  {   279,   4,   7,   6,    1,   -6 },   // 0x6B 'k'
  {   283,   1,   7,   3,    1,   -6 },   // 0x6C 'l'
  {   284,   6,   5,   7,    0,   -4 },   // 0x6D 'm'
  {   288,   4,   5,   6,    1,   -4 },   // 0x6E 'n'
  {   291,   4,   5,   5,    0,   -4 },   // 0x6F 'o'
  {   294,   4,   7,   5,    0,   -4 },   // 0x70 'p'
  {   298,   4,   7,   6,    1,   -4 },   // 0x71 'q'
  {   302,   4,   5,   5,    0,   -4 },   // 0x72 'r'
  {   305,   4,   5,   5,    0,   -4 },   // 0x73 's'
  {   308,   2,   7,   3,    0,   -6 },   // 0x74 't'
  {   310,   4,   5,   5,    0,   -4 },   // 0x75 'u'
  {   313,   4,   5,   5,    0,   -4 },   // 0x76 'v'
  {   316,   6,   5,   7,    0,   -4 },   // 0x77 'w'
  {   320,   5,   5,   6,    0,   -4 },   // 0x78 'x'
  {   324,   4,   7,   6,    1,   -4 },   // 0x79 'y'
  {   328,   4,   5,   5,    0,   -4 },   // 0x7A 'z'
  {   331,   3,   7,   4,    0,   -6 },   // 0x7B '{'
  {   334,   1,   7,   3,    1,   -6 },   // 0x7C '|'
  {   335,   3,   7,   4,    0,   -6 },   // 0x7D '}'
  {   338,   1,   1,   4,    0,    0 } }; // 0x7E '~'

const GFXfont pixelade8pt7b = {
  (uint8_t  *)pixelade8pt7bBitmaps,
  (GFXglyph *)pixelade8pt7bGlyphs,
  0x20, 0x7E, 12 };

// Approx. 1011 bytes

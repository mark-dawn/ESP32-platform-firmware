#include "include/driver_framebuffer.h"
const uint8_t org_0113pt7bBitmaps[] = {
  0x00, 0xFF, 0xFC, 0x0F, 0xC7, 0x8F, 0x18, 0x31, 0x83, 0x18, 0x31, 0x8F,
  0xFF, 0xFF, 0xF3, 0x18, 0x31, 0x83, 0x18, 0xFF, 0xFF, 0xFF, 0x31, 0x83,
  0x18, 0xFF, 0xFF, 0xFF, 0xC6, 0x0C, 0x60, 0xC6, 0x0F, 0xFF, 0xFF, 0xF0,
  0x63, 0x06, 0x30, 0x63, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x30,
  0x1C, 0x01, 0xC0, 0x60, 0x06, 0x03, 0x80, 0x38, 0x0C, 0x03, 0xC0, 0x3C,
  0x03, 0xFF, 0x9F, 0xF3, 0x06, 0x60, 0xCC, 0x19, 0xFF, 0xFF, 0xFE, 0x0C,
  0xC1, 0x98, 0x33, 0xF9, 0xFF, 0x30, 0xFC, 0x33, 0x3C, 0xCC, 0xCC, 0xCC,
  0x33, 0xCC, 0x43, 0x33, 0x33, 0x33, 0xCC, 0xC7, 0x8C, 0xE1, 0xCC, 0x78,
  0xF1, 0x80, 0x30, 0xCF, 0xFF, 0x30, 0xC3, 0x00, 0xFF, 0xFF, 0xFF, 0xC0,
  0xF0, 0x00, 0x30, 0x03, 0x00, 0x30, 0x1F, 0x01, 0xC0, 0x1C, 0x06, 0x00,
  0x60, 0x38, 0x03, 0x80, 0xC0, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0x03, 0x00, 0x3F,
  0xFF, 0xFF, 0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x30, 0x03, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x03, 0x00, 0x30,
  0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3F,
  0xFF, 0xFF, 0xF0, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0xFF, 0xFF,
  0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0F, 0xFF, 0xFF, 0xF0, 0x03, 0x00, 0x30,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0F,
  0xFF, 0xFF, 0xFC, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30,
  0x03, 0x00, 0x30, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3F,
  0xFF, 0xFF, 0xFC, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3F, 0xFF, 0xFF, 0xF0, 0x03, 0x00, 0x30,
  0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xC0, 0xF0, 0x3F, 0xC0, 0x0C, 0x30,
  0xCC, 0x33, 0x0C, 0x0C, 0x30, 0x30, 0xC3, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0xFE, 0xC1, 0x81, 0x01, 0xC3, 0x87, 0x01, 0x83, 0x38, 0x73,
  0x06, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0x03, 0x00, 0x30, 0x7F, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xC6,
  0x3C, 0x63, 0xC6, 0x3C, 0x7F, 0xC7, 0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3F, 0xFF, 0xFF,
  0xFC, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0x8F, 0xF8, 0xC0,
  0x4C, 0x03, 0xC0, 0x3F, 0xFC, 0xFF, 0x8C, 0x04, 0xC0, 0x3C, 0x03, 0xFF,
  0xCF, 0xF8, 0xFF, 0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0,
  0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xF8, 0xC0,
  0x4C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xFF,
  0xCF, 0xF8, 0xFF, 0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0F, 0xFF, 0xFF,
  0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x0C, 0x00, 0xC0, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xC0,
  0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x7F, 0xC7,
  0xFC, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xC0, 0x3F, 0xFF, 0xFF, 0xFC, 0x03, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06,
  0x00, 0x60, 0x06, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x3F, 0xF3, 0xFF, 0x01,
  0x80, 0x18, 0x01, 0x80, 0x18, 0x01, 0x80, 0x18, 0xC1, 0x8C, 0x18, 0xFF,
  0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0xFC, 0xCF, 0xCF, 0x00, 0xF0,
  0x0C, 0xFC, 0xCF, 0xCC, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x0C, 0x00, 0xC0,
  0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC6, 0x3C, 0x63, 0xC6, 0x3C, 0x63, 0xC6,
  0x3C, 0x63, 0xC6, 0x3C, 0x63, 0xC6, 0x3C, 0x63, 0xFF, 0xFF, 0xFF, 0xC0,
  0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x3C, 0x03, 0xC0, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xC0,
  0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xC0, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
  0xE0, 0x3C, 0x07, 0xFF, 0xFF, 0xFE, 0x0C, 0xC1, 0x98, 0x33, 0x06, 0x60,
  0xC0, 0xFF, 0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x0F, 0xFF, 0xFF, 0xF0,
  0x03, 0x00, 0x30, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00,
  0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00,
  0x60, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0x39, 0xC3, 0x9C, 0x06, 0x00,
  0x60, 0xC6, 0x3C, 0x63, 0xC6, 0x3C, 0x63, 0xC6, 0x3C, 0x63, 0xC6, 0x3C,
  0x63, 0xC6, 0x3C, 0x63, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0x40, 0x43,
  0x9C, 0x39, 0xC0, 0x60, 0x06, 0x03, 0x9C, 0x39, 0xCC, 0x03, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x33, 0x9C, 0x39, 0xC0,
  0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x00, 0x30,
  0x03, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0xC0, 0x0C, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xCC, 0xCC, 0xCC, 0xCC, 0xFF, 0xC0, 0x0C, 0x00, 0x40, 0x03,
  0x80, 0x06, 0x00, 0x60, 0x01, 0xC0, 0x1C, 0x00, 0x30, 0x03, 0x00, 0x30,
  0x03, 0xFF, 0x33, 0x33, 0x33, 0x33, 0xFF, 0x30, 0xC3, 0x33, 0xCC, 0xFF,
  0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xC0, 0x60, 0x30, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0xC0, 0x60, 0x30, 0x1F, 0xFF, 0xFE, 0x0F, 0x07, 0x83, 0xC1,
  0xE0, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xF0, 0x18, 0x0C, 0x06, 0x03, 0x01,
  0xFF, 0xFF, 0x80, 0x01, 0x80, 0xC0, 0x7F, 0xFF, 0xFE, 0x0F, 0x07, 0x83,
  0xC1, 0xE0, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x06, 0x03,
  0x01, 0xFF, 0xFF, 0x80, 0x3C, 0xF3, 0x0C, 0x33, 0xFF, 0xCC, 0x30, 0xC3,
  0x0C, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x80,
  0xC0, 0x60, 0xC0, 0x60, 0x30, 0x1F, 0xFF, 0xFE, 0x0F, 0x07, 0x83, 0xC1,
  0xE0, 0xF0, 0x78, 0x30, 0xFF, 0xFF, 0xC0, 0x33, 0x33, 0x33, 0x33, 0x3F,
  0xF0, 0xC0, 0x60, 0x30, 0x18, 0xCC, 0x67, 0xFF, 0xFF, 0x83, 0xC1, 0xE0,
  0xF0, 0x78, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC6, 0x3C, 0x63,
  0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x30, 0xFF, 0xFF, 0xF0, 0x78,
  0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0x80, 0xFF, 0xFF, 0xF0, 0x78, 0x3C,
  0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1E,
  0x0F, 0x07, 0xFF, 0xFF, 0xE0, 0x30, 0x00, 0xFF, 0xFF, 0xF0, 0x78, 0x3C,
  0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x83, 0x01, 0x80, 0xFF, 0xFF, 0xF0, 0x18,
  0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x00, 0x30, 0x18, 0x0F, 0xE7, 0xF0,
  0x18, 0x0C, 0x07, 0xFF, 0xFF, 0x80, 0x06, 0x00, 0x60, 0x06, 0x0F, 0xFF,
  0xFF, 0xF0, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60,
  0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x80, 0xC1,
  0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x06, 0x7F, 0x3F, 0x80, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x63, 0xC6, 0x3F, 0xFF, 0xFF, 0xF0,
  0xC1, 0xE0, 0xCF, 0x87, 0xC3, 0xE1, 0xF0, 0xF9, 0x83, 0xC1, 0x80, 0xC1,
  0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0x80, 0xC0, 0x60,
  0x06, 0x03, 0x3F, 0x9F, 0xCC, 0x06, 0x03, 0x01, 0xFF, 0xFF, 0x80, 0x0C,
  0x30, 0xCC, 0x33, 0xCF, 0x0C, 0x30, 0xC0, 0xC3, 0xFF, 0xFF, 0xFF, 0xC3,
  0x04, 0x0C, 0x30, 0xF3, 0xCC, 0x30, 0xCC, 0x30, 0x00, 0x30, 0x03, 0xFF,
  0xFF, 0xFF, 0xC0, 0x0C, 0x00, 0xC0, 0x00 };

const GFXglyph org_0113pt7bGlyphs[] = {
  {     0,   1,   1,  14,    0,    0 },   // 0x20 ' '
  {     1,   2,  12,   5,    1,  -11 },   // 0x21 '!'
  {     4,   7,   3,  10,    1,  -11 },   // 0x22 '"'
  {     7,  12,  12,  14,    1,  -11 },   // 0x23 '#'
  {    25,  12,  12,  14,    1,  -11 },   // 0x24 '$'
  {    43,  12,  12,  14,    1,  -11 },   // 0x25 '%'
  {    61,  11,  12,  14,    1,  -11 },   // 0x26 '&'
  {    78,   2,   3,   5,    1,  -11 },   // 0x27 '''
  {    79,   4,  12,   7,    1,  -11 },   // 0x28 '('
  {    85,   4,  12,   7,    1,  -11 },   // 0x29 ')'
  {    91,   7,   7,  10,    1,   -8 },   // 0x2A '*'
  {    98,   6,   7,  10,    1,   -8 },   // 0x2B '+'
  {   104,   2,   4,   5,    1,   -1 },   // 0x2C ','
  {   105,   9,   2,  12,    1,   -6 },   // 0x2D '-'
  {   108,   2,   2,   5,    1,   -1 },   // 0x2E '.'
  {   109,  12,  12,  14,    1,  -11 },   // 0x2F '/'
  {   127,  12,  12,  14,    1,  -11 },   // 0x30 '0'
  {   145,   2,  12,   5,    1,  -11 },   // 0x31 '1'
  {   148,  12,  12,  14,    1,  -11 },   // 0x32 '2'
  {   166,  12,  12,  14,    1,  -11 },   // 0x33 '3'
  {   184,  12,  12,  14,    1,  -11 },   // 0x34 '4'
  {   202,  12,  12,  14,    1,  -11 },   // 0x35 '5'
  {   220,  12,  12,  14,    1,  -11 },   // 0x36 '6'
  {   238,  12,  12,  14,    1,  -11 },   // 0x37 '7'
  {   256,  12,  12,  14,    1,  -11 },   // 0x38 '8'
  {   274,  12,  12,  14,    1,  -11 },   // 0x39 '9'
  {   292,   2,   9,   5,    1,   -8 },   // 0x3A ':'
  {   295,   2,   9,   5,    1,   -8 },   // 0x3B ';'
  {   298,   6,  12,  10,    1,  -11 },   // 0x3C '<'
  {   307,   9,   7,  12,    1,   -8 },   // 0x3D '='
  {   315,   7,  12,  10,    1,  -11 },   // 0x3E '>'
  {   326,  12,  12,  14,    1,  -11 },   // 0x3F '?'
  {   344,  12,  12,  14,    1,  -11 },   // 0x40 '@'
  {   362,  12,  12,  14,    1,  -11 },   // 0x41 'A'
  {   380,  12,  12,  14,    1,  -11 },   // 0x42 'B'
  {   398,  12,  12,  14,    1,  -11 },   // 0x43 'C'
  {   416,  12,  12,  14,    1,  -11 },   // 0x44 'D'
  {   434,  12,  12,  14,    1,  -11 },   // 0x45 'E'
  {   452,  12,  12,  14,    1,  -11 },   // 0x46 'F'
  {   470,  12,  12,  14,    1,  -11 },   // 0x47 'G'
  {   488,  12,  12,  14,    1,  -11 },   // 0x48 'H'
  {   506,  12,  12,  14,    1,  -11 },   // 0x49 'I'
  {   524,  12,  12,  14,    1,  -11 },   // 0x4A 'J'
  {   542,  12,  12,  14,    1,  -11 },   // 0x4B 'K'
  {   560,  12,  12,  14,    1,  -11 },   // 0x4C 'L'
  {   578,  12,  12,  14,    1,  -11 },   // 0x4D 'M'
  {   596,  12,  12,  14,    1,  -11 },   // 0x4E 'N'
  {   614,  12,  12,  14,    1,  -11 },   // 0x4F 'O'
  {   632,  12,  12,  14,    1,  -11 },   // 0x50 'P'
  {   650,  12,  12,  14,    1,  -11 },   // 0x51 'Q'
  {   668,  11,  12,  14,    1,  -11 },   // 0x52 'R'
  {   685,  12,  12,  14,    1,  -11 },   // 0x53 'S'
  {   703,  12,  12,  14,    1,  -11 },   // 0x54 'T'
  {   721,  12,  12,  14,    1,  -11 },   // 0x55 'U'
  {   739,  12,  12,  14,    1,  -11 },   // 0x56 'V'
  {   757,  12,  12,  14,    1,  -11 },   // 0x57 'W'
  {   775,  12,  12,  14,    1,  -11 },   // 0x58 'X'
  {   793,  12,  12,  14,    1,  -11 },   // 0x59 'Y'
  {   811,  12,  12,  14,    1,  -11 },   // 0x5A 'Z'
  {   829,   4,  12,   7,    1,  -11 },   // 0x5B '['
  {   835,  12,  12,  14,    1,  -11 },   // 0x5C '\'
  {   853,   4,  12,   7,    1,  -11 },   // 0x5D ']'
  {   859,   6,   5,  10,    1,  -11 },   // 0x5E '^'
  {   863,  12,   2,  14,    1,    1 },   // 0x5F '_'
  {   866,   2,   3,   5,    1,  -11 },   // 0x60 '`'
  {   867,   9,   9,  12,    1,   -8 },   // 0x61 'a'
  {   878,   9,  12,  12,    1,  -11 },   // 0x62 'b'
  {   892,   9,   9,  12,    1,   -8 },   // 0x63 'c'
  {   903,   9,  12,  12,    1,  -11 },   // 0x64 'd'
  {   917,   9,   9,  12,    1,   -8 },   // 0x65 'e'
  {   928,   6,  12,  10,    1,  -11 },   // 0x66 'f'
  {   937,   9,  11,  12,    1,   -8 },   // 0x67 'g'
  {   950,   9,  12,  12,    1,  -11 },   // 0x68 'h'
  {   964,   2,   9,   5,    1,   -8 },   // 0x69 'i'
  {   967,   4,  11,   7,    1,   -8 },   // 0x6A 'j'
  {   973,   9,  12,  12,    1,  -11 },   // 0x6B 'k'
  {   987,   2,  12,   5,    1,  -11 },   // 0x6C 'l'
  {   990,  12,   9,  14,    1,   -8 },   // 0x6D 'm'
  {  1004,   9,   9,  12,    1,   -8 },   // 0x6E 'n'
  {  1015,   9,   9,  12,    1,   -8 },   // 0x6F 'o'
  {  1026,   9,  11,  12,    1,   -8 },   // 0x70 'p'
  {  1039,   9,  11,  12,    1,   -8 },   // 0x71 'q'
  {  1052,   9,   9,  12,    1,   -8 },   // 0x72 'r'
  {  1063,   9,   9,  12,    1,   -8 },   // 0x73 's'
  {  1074,  12,  12,  14,    1,  -11 },   // 0x74 't'
  {  1092,   9,   9,  12,    1,   -8 },   // 0x75 'u'
  {  1103,   9,   9,  12,    1,   -8 },   // 0x76 'v'
  {  1114,  12,   9,  14,    1,   -8 },   // 0x77 'w'
  {  1128,   9,   9,  12,    1,   -8 },   // 0x78 'x'
  {  1139,   9,  11,  12,    1,   -8 },   // 0x79 'y'
  {  1152,   9,   9,  12,    1,   -8 },   // 0x7A 'z'
  {  1163,   6,  12,  10,    1,  -11 },   // 0x7B '{'
  {  1172,   2,  12,   5,    1,  -11 },   // 0x7C '|'
  {  1175,   6,  12,  10,    1,  -11 },   // 0x7D '}'
  {  1184,  12,   7,  14,    1,   -8 } }; // 0x7E '~'

const GFXfont org_0113pt7b = {
  (uint8_t  *)org_0113pt7bBitmaps,
  (GFXglyph *)org_0113pt7bGlyphs,
  0x20, 0x7E, 28 };

// Approx. 1867 bytes

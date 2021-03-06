#ifndef XXXIV_H
#define XXXIV_H

#include "quantum.h"

#define ZZ KC_NO

#define KEYMAP( \
  A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, \
  B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, \
  C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, \
              D0, D1, D2, D3              \
) { \
  { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9 }, \
  { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9 }, \
  { C0, C1, C2, C3, C4, C5, C6, C7, C8, C9 }, \
  { ZZ, ZZ, ZZ, D0, D1, D2, D3, ZZ, ZZ, ZZ }  \
}

#endif

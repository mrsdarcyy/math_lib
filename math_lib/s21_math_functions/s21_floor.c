#include "../s21_math.h"

long double s21_floor(double x) {
  long double out = 0;

  if (x != x || x == S21_INF_POS || x == S21_INF_NEG) {
    out = x;
  } else {
    int int_part = (int)x;
    int_part -= (x < 0 && (x - int_part));

    out = (long double)int_part;
  }

  return out;
}
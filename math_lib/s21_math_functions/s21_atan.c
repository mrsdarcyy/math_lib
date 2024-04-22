#include "../s21_math.h"

long double s21_atan(double x) {
  long double out = 0;
  if (x == S21_INF_POS || x == S21_INF_NEG) {
    out = (x == S21_INF_POS) ? (S21_PI / 2.0) : (-S21_PI / 2.0);
  } else {
    out = s21_asin((x) / (s21_sqrt(1 + x * x)));
  }

  return out;
}
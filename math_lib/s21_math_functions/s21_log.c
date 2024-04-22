#include "../s21_math.h"

long double s21_log(double x) {
  long double out = 0;

  if (x == S21_INF_POS) {
    out = x;
  } else if (x == 0) {
    out = S21_INF_NEG;
  } else if (x < 0) {
    out = S21_NAN;
  } else {
    long double compare = 0;
    int e_repeat = 0;
    for (; x >= S21_E; e_repeat++) x /= S21_E;

    for (int i = 0; i < 200; i++) {
      compare = out;
      out = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
    out += e_repeat;
  }

  return out;
}
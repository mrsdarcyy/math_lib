#include "../s21_math.h"

long double s21_sqrt(double x) {
  long double rez = 10, y = 0;
  int flag = 0;
  if (x == S21_INF_POS) {
    flag = 1;
    rez = S21_INF_POS;
  }
  while (s21_fabs(rez - y) > S21_EPS && flag != 1) {
    if (x < 0) {
      rez = S21_N_NAN;
      break;
    }
    y = rez;
    rez = (y + x / y) / 2;
  }
  return rez;
}

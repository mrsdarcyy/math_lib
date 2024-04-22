#include "../s21_math.h"

long double s21_cos(double x) {
  long double out = 0;
  x = s21_fmod(x, 2 * S21_PI);
  if (x == S21_PI || x == -S21_PI) {
    out = -1.0;
  } else {
    for (int n = 0; n < 100; n++) {  // Выберите нужное количество членов ряда
      out += s21_pow_int(-1, n) * s21_pow_int(x, 2 * n) / s21_factorial(2 * n);
    }
  }
  return out;
}
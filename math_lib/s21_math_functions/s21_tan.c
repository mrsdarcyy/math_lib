#include "../s21_math.h"

long double s21_tan(double x) {
  x = s21_fmod(x, S21_PI);
  return !s21_cos(x) ? S21_NAN : s21_sin(x) / s21_cos(x);
}
#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double out = 0;
  if (is_nan_answer(x, y)) {
    out = S21_NAN;
  } else if (S21_IS_INF(
                 y)) {  // Если делимое равно числу, а делитель бесконечности,
                        // то нужно вернуть делимое как остаток
    out = (long double)x;
  } else {
    long long int n = x / y;  // находим целую часть от деления
    // находим разность между делимым и умножением делителя на целую часть
    out = (long double)x - n * (long double)y;
    // возвращаем разность
  }

  return out;
}
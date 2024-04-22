#include "../s21_math.h"

long double s21_ceil(double x) {
  long double out = 0;
  if (x != x || x == S21_INF_POS || x == S21_INF_NEG) {
    out = x;
  } else {
    int int_part = (int)x;  // запоминаем целую часть

    /*
    ответ = целая часть +
    1 - если изначальное число положительное и целая часть меньше изначального
    числа; 0 - в любом другом случае
    */
    out = int_part + (x > 0 && (x - int_part));

    // меняем знак, если целая часть равна 0 и изначальное число меньше 0
    if (out == 0 && x < 0) out = -out;
  }

  return out;
}
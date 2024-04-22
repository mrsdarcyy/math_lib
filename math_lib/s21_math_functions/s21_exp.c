#include "../s21_math.h"

long double s21_exp(double x) {
  long double out = 0;

  if (x ==
      S21_INF_NEG) {  // если полученное значение бесконечно мало возвращаем 0
    out = 0;
  } else {
    for (int i = 0; i < 256; i++) {
      out += s21_pow_int(x, i) / s21_factorial(i);
    }
  }

  return out;
}

#include "../s21_math.h"

long double s21_factorial(long long int x) {
  long double out = 1.0;
  if (x < 0) {
    out = 0;
  } else {
    for (long long int i = 1; i <= x; i++) {
      out *= i;
    }
  }
  return out;
}
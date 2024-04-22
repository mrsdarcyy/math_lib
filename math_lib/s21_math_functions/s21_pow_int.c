#include "../s21_math.h"

long double s21_pow_int(double base, long long int exp) {
  long double answer = 1;
  exp *= (exp > 0) ? 1 : -1;  // если изначально exp меньше 0, меняем знак

  for (long long int i = 0; i < exp; i++)
    /*
    Если exp положительное,
    то переменная answer умножается на base.
    Если exp отрицательное,
    то переменная answer делится на base
    */
    answer = (exp > 0) ? answer * base : answer / base;
  return answer;
}

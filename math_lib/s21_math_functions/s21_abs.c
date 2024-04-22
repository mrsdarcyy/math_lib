#include "../s21_math.h"

int s21_abs(int x) {
  /*
  если x меньше 0 и при этом не выходит за границы минимального значения int
  возвращаем  -x, иначе оставляем как есть
  */
  return x < 0 && x > INT_MIN ? -x : x;
}
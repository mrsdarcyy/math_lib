#include "../s21_math.h"

int is_nan_answer(double x, double y) {
  /*
  Возвращаем true,
  если делитель равен 0,
  если делимое равно бесконечности
  если, и делимое, и делитель равны бесконечности, но при этом они не равны друг
  другу
  */
  return ((y == 0) || S21_IS_INF(x) ||
          (S21_IS_INF(x) && S21_IS_INF(y) && x != y));
}
#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(t_abs) {
  ck_assert_int_eq(s21_abs(-42534), abs(-42534));
  ck_assert_int_eq(s21_abs(5), abs(5));
  ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

START_TEST(t_acos) {
  ck_assert_double_eq_tol(s21_asin(0.21231), asin(0.21231), 0.000001);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 0.000001);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 0.000001);
  ck_assert_ldouble_nan(s21_acos(S21_NAN));
  ck_assert_ldouble_nan(s21_acos(S21_INF_POS));
  ck_assert_ldouble_nan(s21_acos(S21_INF_NEG));
}
END_TEST

START_TEST(t_asin) {
  ck_assert_double_eq_tol(s21_asin(0.21231), asin(0.21231), 0.000001);
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001);
  ck_assert_ldouble_nan(s21_asin(NAN));
  ck_assert_ldouble_nan(s21_asin(S21_INF_POS));
  ck_assert_ldouble_nan(s21_asin(S21_INF_NEG));
}
END_TEST

START_TEST(t_atan) {
  ck_assert_ldouble_eq_tol(s21_atan(0.4), atan(0.4), 0.000001);
  ck_assert_ldouble_eq_tol(s21_atan(-23.4), atan(-23.4), 0.000001);
  ck_assert_ldouble_eq_tol(s21_atan(S21_INF_POS), atan(S21_INF_POS), 0.000001);
  ck_assert_ldouble_eq_tol(s21_atan(S21_INF_NEG), atan(S21_INF_NEG), 0.000001);
  ck_assert_ldouble_nan(s21_atan(NAN));
}
END_TEST

START_TEST(t_ceil) {
  ck_assert_ldouble_eq_tol(s21_ceil(1.3234), ceil(1.3234), 0.000001);
  ck_assert_ldouble_eq_tol(s21_ceil(4.1), ceil(4.1), 0.000001);
  ck_assert_ldouble_eq_tol(s21_ceil(0.000009), ceil(0.000009), 0.000001);
  ck_assert_ldouble_nan(s21_ceil(S21_NAN));
  ck_assert_ldouble_eq(s21_ceil(S21_INF_POS), s21_ceil(S21_INF_POS));
  ck_assert_ldouble_eq(s21_ceil(S21_INF_NEG), s21_ceil(S21_INF_NEG));
}
END_TEST

START_TEST(t_cos) {
  ck_assert_double_eq_tol(s21_cos(1200000), cos(1200000), 0.000001);
  ck_assert_double_eq_tol(s21_cos(3.21231), cos(3.21231), 0.000001);
  ck_assert_double_eq_tol(s21_cos(S21_PI), cos(S21_PI), 0.000001);
  ck_assert_ldouble_nan(s21_cos(S21_NAN));
  ck_assert_ldouble_nan(s21_cos(S21_INF_POS));
  ck_assert_ldouble_nan(s21_cos(S21_INF_NEG));
}
END_TEST

START_TEST(t_exp) {
  ck_assert_ldouble_eq_tol(s21_exp(8), exp(8), 0.000001);
  ck_assert_ldouble_eq_tol(s21_exp(-12), exp(-12), 0.000001);
  ck_assert_ldouble_eq_tol(s21_exp(5.8), exp(5.8), 0.000001);
  ck_assert_ldouble_nan(s21_exp(S21_NAN));
  ck_assert_ldouble_eq(s21_exp(S21_INF_POS), exp(S21_INF_POS));
  ck_assert_ldouble_eq(s21_exp(S21_INF_NEG), exp(S21_INF_NEG));
}
END_TEST

START_TEST(t_fabs) {
  ck_assert_ldouble_eq(s21_fabs(-42534.5), fabs(-42534.5));
  ck_assert_ldouble_eq(s21_fabs(45.5), fabs(45.5));
  ck_assert_ldouble_eq(s21_fabs(1.0), fabs(1.0));
  ck_assert_ldouble_nan(s21_fabs(S21_NAN));
  ck_assert_ldouble_eq(s21_fabs(S21_INF_POS), fabs(S21_INF_POS));
  ck_assert_ldouble_eq(s21_fabs(S21_INF_NEG), fabs(S21_INF_NEG));
}
END_TEST

START_TEST(t_floor) {
  ck_assert_ldouble_eq(s21_floor(-42.5), floor(-42.5));
  ck_assert_ldouble_eq(s21_floor(1.1381881), floor(1.1381881));
  ck_assert_ldouble_eq(s21_floor(-131.13123), floor(-131.13123));
  ck_assert_ldouble_nan(s21_floor(S21_NAN));
  ck_assert_ldouble_eq(s21_floor(S21_INF_POS), floor(S21_INF_POS));
  ck_assert_ldouble_eq(s21_floor(S21_INF_NEG), floor(S21_INF_NEG));
}
END_TEST

START_TEST(t_fmod) {
  ck_assert_ldouble_eq(s21_fmod(232.13111, 2.5), fmod(232.13111, 2.5));
  ck_assert_ldouble_eq(s21_fmod(9.1234122, 3.9), fmod(9.1234122, 3.9));
  ck_assert_ldouble_eq(s21_fmod(23213.0002, S21_INF_NEG),
                       fmod(23213.0002, S21_INF_NEG));
  ck_assert_ldouble_nan(s21_fmod(S21_NAN, S21_NAN));
  ck_assert_ldouble_nan(s21_fmod(S21_INF_POS, S21_INF_POS));
  ck_assert_ldouble_nan(s21_fmod(S21_INF_NEG, S21_INF_NEG));
}
END_TEST

START_TEST(t_log) {
  ck_assert_ldouble_eq(s21_log(0), log(0));
  ck_assert_ldouble_eq_tol(s21_log(123.2123), log(123.2123), 0.000001);
  ck_assert_ldouble_nan(s21_log(S21_NAN));
  ck_assert_ldouble_eq(s21_log(S21_INF_POS), log(S21_INF_POS));
  ck_assert_ldouble_nan(s21_log(S21_INF_NEG));
}
END_TEST

START_TEST(t_pow) {
  ck_assert_ldouble_eq(s21_pow(0, 0), pow(0, 0));
  ck_assert_ldouble_eq_tol(s21_pow(1.21, 1.21), pow(1.21, 1.21), 0.000001);
  ck_assert_ldouble_eq(s21_pow(-3, 0), pow(-3, 0));
  ck_assert_ldouble_eq(s21_pow(S21_INF_NEG, S21_INF_POS),
                       pow(S21_INF_NEG, S21_INF_POS));
  ck_assert_ldouble_eq(s21_pow(S21_INF_NEG, S21_INF_NEG),
                       pow(S21_INF_NEG, S21_INF_NEG));
  ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_NAN));
  ck_assert_ldouble_nan(s21_pow(-3, S21_NAN));
}
END_TEST

START_TEST(t_sin) {
  ck_assert_uint_eq(s21_sin(25), sin(25));
  ck_assert_double_eq_tol(s21_sin(3.212), sin(3.212), 0.000001);
  ck_assert_ldouble_nan(s21_sin(S21_INF_NEG));
  ck_assert_ldouble_nan(s21_sin(S21_INF_POS));
  ck_assert_ldouble_nan(s21_sin(NAN));
}
END_TEST

START_TEST(t_sqrt) {
  ck_assert_uint_eq(s21_sqrt(25), sqrt(25));
  ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), 0.000001);
  ck_assert_ldouble_eq(s21_sqrt(S21_INF_POS), sqrt(S21_INF_POS));
  ck_assert_ldouble_nan(s21_sqrt(S21_INF_NEG));
  ck_assert_ldouble_nan(s21_sqrt(NAN));
}
END_TEST

START_TEST(t_tan) {
  ck_assert_uint_eq(s21_tan(25), tan(25));
  ck_assert_double_eq_tol(s21_tan(3.21231), tan(3.21231), 0.000001);
  ck_assert_ldouble_nan(s21_tan(NAN));
  ck_assert_ldouble_nan(s21_tan(S21_INF_POS));
  ck_assert_ldouble_nan(s21_tan(S21_INF_NEG));
}
END_TEST

START_TEST(t_fac) { ck_assert_double_eq_tol(s21_factorial(-1), 0, 0.000001); }
END_TEST

Suite *example_suite_create(void) {
  Suite *suite = suite_create("S21 MATH TESTS");

  TCase *TcAbs = tcase_create("s21_abs");
  tcase_add_test(TcAbs, t_abs);
  suite_add_tcase(suite, TcAbs);

  TCase *TcAcos = tcase_create("s21_acos");
  tcase_add_test(TcAcos, t_acos);
  suite_add_tcase(suite, TcAcos);

  TCase *TcAsin = tcase_create("s21_asin");
  tcase_add_test(TcAsin, t_asin);
  suite_add_tcase(suite, TcAsin);

  TCase *TcAtan = tcase_create("s21_atan");
  tcase_add_test(TcAtan, t_atan);
  suite_add_tcase(suite, TcAtan);

  TCase *TcCeil = tcase_create("s21_ceil");
  tcase_add_test(TcCeil, t_ceil);
  suite_add_tcase(suite, TcCeil);

  TCase *TcCos = tcase_create("s21_cos");
  tcase_add_test(TcCos, t_cos);
  suite_add_tcase(suite, TcCos);

  TCase *TcExp = tcase_create("s21_exp");
  tcase_add_test(TcExp, t_exp);
  suite_add_tcase(suite, TcExp);

  TCase *TcFabs = tcase_create("s21_fabs");
  tcase_add_test(TcFabs, t_fabs);
  suite_add_tcase(suite, TcFabs);

  TCase *TcFloor = tcase_create("s21_floor");
  tcase_add_test(TcFloor, t_floor);
  suite_add_tcase(suite, TcFloor);

  TCase *TcFmod = tcase_create("s21_fmod");
  tcase_add_test(TcFmod, t_fmod);
  suite_add_tcase(suite, TcFmod);

  TCase *TcLog = tcase_create("s21_log");
  tcase_add_test(TcLog, t_log);
  suite_add_tcase(suite, TcLog);

  TCase *TcPow = tcase_create("s21_pow");
  tcase_add_test(TcPow, t_pow);
  suite_add_tcase(suite, TcPow);

  TCase *TcSin = tcase_create("s21_sin");
  tcase_add_test(TcSin, t_sin);
  suite_add_tcase(suite, TcSin);

  TCase *TcSqrt = tcase_create("s21_sqrt");
  tcase_add_test(TcSqrt, t_sqrt);
  suite_add_tcase(suite, TcSqrt);

  TCase *TcTan = tcase_create("s21_tan");
  tcase_add_test(TcTan, t_tan);
  suite_add_tcase(suite, TcTan);

  TCase *TcFac = tcase_create("s21_factorial");
  tcase_add_test(TcFac, t_fac);
  suite_add_tcase(suite, TcFac);

  return suite;
}

int main() {
  Suite *suite = example_suite_create();

  SRunner *runner = srunner_create(suite);
  srunner_run_all(runner, CK_NORMAL);

  int fail = srunner_ntests_failed(runner);
  srunner_free(runner);

  return fail ? EXIT_FAILURE : EXIT_SUCCESS;
}

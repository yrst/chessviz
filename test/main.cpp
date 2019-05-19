//#define CTEST_MAIN

//#include "../thirdparty/ctest.h"
#include <stdio.h>
#include <stdlib.h>
int test1();
int test2();
int test3();
int test4();
int test5();
int test6();
int test7();
int test8();
int test9();
int test10();
int test11();
int test12();
int test13();
int test14();
int main(int argc, const char **argv) {
  int res = 0;
  int lasttest = 0;

  lasttest = test1();
  res += !lasttest;
  fprintf(stderr, "1 Проверка на принадлежность фигуры команде : %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test2();
  res += !lasttest;
  fprintf(stderr, "2 Проверка на принадлежность фигуры команде : %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test3();
  res += !lasttest;
  fprintf(stderr, "3 Проверка на принадлежность фигуры команде : %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test4();
  res += !lasttest;
  fprintf(stderr, "4 Проверка на принадлежность фигуры команде : %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test5();
  res += !lasttest;
  fprintf(stderr, " 5 Проверка на возможность хода e2-a7 : %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test6();
  res += !lasttest;
  fprintf(stderr, "6 Проверка на возможность хода a2-a3: %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test7();
  res += !lasttest;
  fprintf(stderr, "7 Проверка на возможнось хода a6-a7: %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test8();
  res += !lasttest;
  fprintf(stderr, "8 Проверка на возмжность хода a1-a2: %s\n", lasttest ? "TRUE" : "FALSE");

  lasttest = test9();
  res += !lasttest;
  fprintf(stderr, "9 Проверка на возможность хода b1-c3: %s\n", lasttest ? "TRUE" : "FALSE");

lasttest = test10();
  res += !lasttest;
  fprintf(stderr, "10 Проверка на возможность хода c1-a3: %s\n", lasttest ? "TRUE" : "FALSE");

lasttest = test11();
  res += !lasttest;
  fprintf(stderr, "11 Проверка на возможность хода d1-d2: %s\n", lasttest ? "TRUE" : "FALSE");

lasttest = test12();
  res += !lasttest;
  fprintf(stderr, "12 Проверка на возможность хода e1-e2: %s\n", lasttest ? "TRUE" : "FALSE");

lasttest = test13();
  res += !lasttest;
  fprintf(stderr, "13 Проверка на наличие координаты i4: %s\n", lasttest ? "TRUE" : "FALSE");

lasttest = test14();
  res += !lasttest;
  fprintf(stderr, "14 Проверка на наличие координаты a9: %s\n", lasttest ? "TRUE" : "FALSE");

  return res;
  //    return ctest_main(argc, argv);
}

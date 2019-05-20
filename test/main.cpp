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
int main(int argc, const char** argv)
{
    int res = 0;
    int lasttest = 0;

    lasttest = test1();
    res += !lasttest;
    fprintf(stderr,
            "1 Проверка на принадлежность фигуры стороне, возможность хода "
            "этой фигурой, в следствии вывод возможности хода в зависимости от "
            "стороны : %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test2();
    res += !lasttest;
    fprintf(stderr,
            "2 Проверка на принадлежность фигуры стороне, возможность хода "
            "этой фигурой, в следствии вывод возможности хода в зависимости от "
            "стороны (2): %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test3();
    res += !lasttest;
    fprintf(stderr,
            "3 Проверка на принадлежность фигуры стороне, возможность хода "
            "этой фигурой, в следствии вывод возможности хода в зависимости от "
            "стороны (3): %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test4();
    res += !lasttest;
    fprintf(stderr,
            "4 Проверка на принадлежность фигуры стороне, возможность хода "
            "этой фигурой, в следствии вывод возможности хода в зависимости от "
            "стороны (4) : %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test5();
    res += !lasttest;
    fprintf(stderr,
            " 5 Проверка на возможность хода фигурой по координатам e2-a7 : "
            "%s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test6();
    res += !lasttest;
    fprintf(stderr,
            "6 Проверка на возможность хода фигурой по координатам  a2-a3: "
            "%s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test7();
    res += !lasttest;
    fprintf(stderr,
            "7 Проверка на возможнось хода фигурой по координатам  a6-a7: %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test8();
    res += !lasttest;
    fprintf(stderr,
            "8 Проверка на возмжность хода фигурой по координатам  a1-a2: %s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test9();
    res += !lasttest;
    fprintf(stderr,
            "9 Проверка на возможность хода фигурой по координатам  b1-c3: "
            "%s\n",
            lasttest ? "TRUE" : "FALSE");

    lasttest = test10();
    res += !lasttest;
    fprintf(stderr,
            "10 Проверка на возможность хода фигурой по координатам  c1-a3: "
            "%s\n",
            lasttest ? "TRUE" : "FALSE");

    return res;
    //    return ctest_main(argc, argv);
}

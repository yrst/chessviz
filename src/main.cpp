#include "move.h"
#include "print.h"
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    while (true) {
        ChessField(pole);
        Move(pole);
    }
    return 0;
}

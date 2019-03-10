#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  char pole [9][9]={
    {8, r, n, b, q, k, b, n, r},
    {7, p, p, p, p, p, p, p, p},
    {6,  ,  ,  ,  ,  ,  ,  ,  },
    {4,  ,  ,  ,  ,  ,  ,  ,  },
    {4,  ,  ,  ,  ,  ,  ,  ,  },
    {3,  ,  ,  ,  ,  ,  ,  ,  },
    {2, P, P, P, P, P, P, P, P},
    {1, R, N, B, Q, K, B, N, R},
    { , a, b, c, d, e, f, g, h}
  }
  for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
          cout << setw(4) << pole[i][j];
      }
      cout << endl;
  }
  system("PAUSE");
  return 0;
}

#include <stdio.h>

int main() {
  int i, n;
  int t[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };

  int( * a)[3] = t;

  for (int i = 0; i < 4; i++) {
    for (int n = 0; n < 3; n++) {
      printf("%d ", a[i][n]);
    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>

void swapnum(int * i, int * n) {
  int temp = * i;
  * i = * n;
  * n = temp;
}

int main() {
  int a = 10;
  int b = 20;

  printf("befor\n");
  printf("value A is %d and B is %d\n", a, b);
  printf("address A is %d and B is %d\n", & a, & b);
  printf("-------------------\n");
  swapnum( & a, & b);
  printf("after\n");
  printf("value A is %d and B is %d\n", a, b);
  printf("address A is %d and B is %d\n", & a, & b);
  return 0;
}

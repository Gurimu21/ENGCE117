#include <stdio.h>

void cal(int i) {
  printf("in cal()\n");
  printf("value i = %d\n", i);
  printf("address i = %d\n", & i);
  i = +10;
}

int main() {
  int i = 10;
  printf("befor\n");
  printf("value i = %d\n", i);
  printf("address i = %d\n", & i);
  printf("-------------------\n");
  cal(i);
  printf("-------------------\n");
  printf("after\n");
  printf("value i = %d\n", i);
  printf("address i = %d\n", & i);

  return 0;
}


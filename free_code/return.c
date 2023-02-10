#include <stdio.h>

void calc(int x, int y, int *a1, int *a2);

int main(void) {
  int addition;
  int subtraction;
  calc(30, 10, &addition, &subtraction);
  printf("%d\n", addition);
  printf("%d\n", subtraction);
  return 0;
}

void calc(int x, int y, int *a1, int *a2) {
  *a1 = x + y;
  *a2 = x - y;

}
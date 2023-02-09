#include <stdio.h>

int main(void) {
 int apple = 10;
 int *hoge;
 hoge = &apple;
  printf("%d\n", apple);
  printf("%d\n", *hoge);
  return 0;
}
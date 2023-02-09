#include <stdio.h>

int main(void) {
  int apple, *hoge;
  hoge = &apple;
  printf("%p\n", &apple);
  printf("%p\n", hoge);
  return 0;
}
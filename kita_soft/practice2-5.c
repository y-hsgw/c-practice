#include <stdio.h>

int main() {
  int x = 3;
  int y = 7;
  int z = 0;
  z = x;
  x = y;
  y = z;
  printf("x=%d,y=%d\n", x, y);

  return 0;
}

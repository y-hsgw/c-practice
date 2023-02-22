#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char str1[] = "256";
  char str2[] = "2.56";
  int number = atoi(str1);
  double _float = atoi(str2);
  printf("%d\n", number);
  printf("%f\n", _float);
  return 0;
}

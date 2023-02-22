#include <stdio.h>
#include <string.h>

int main(void) {
  char str[20];
  char str1[] = "Star";
  char str2[] = "Wars";
  int i = 3;
  sprintf(str, "%s%s%d", str1, str2, i);
  printf("%s\n", str);
  return 0;
}
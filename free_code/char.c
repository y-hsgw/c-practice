#include <stdio.h>

int main(void) {
  char c = 'A';
  char str[5] = {'J', '0', 'H', 'N', '\0'};
  char str2[] = "john";

  printf("%c\n", c);
  printf("%s\n", str);
  printf("%s\n", str2);
  return 0;
}

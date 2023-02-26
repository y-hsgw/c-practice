#include <stdio.h>

void null_letter() {
  char *str = "YUKI \0 RENA \0 MIMI";
  printf("%s\n%s\n%s\n", str, str + 7, str + 14);
}

int main() {
  char *str = "kitty on your lap";

  printf("先頭アドレス = %c\n", *str);
  printf("格納文字列 = %s\n", str);

  null_letter();

  return 0;
}
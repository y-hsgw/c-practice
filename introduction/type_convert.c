#include <stdio.h>

void cast() {
  float var1 = 1234.5678f;

  printf("全体 = %f\n", var1);
  printf("実数 = %d\n", (int)var1);
  printf("小数 = %g\n", var1 - (int)var1);
}

void assignment_type_conversion() {
  unsigned char var1 = 128;
  int var2 = var1;

  printf("%d\n", var2);

  int var3 = 1279;
  unsigned char var4 = var3;

  // unsigned charが格納できるのは255までの整数なので255になる
  printf("%d\n", var4);
};

int main() {
  int var1 = 100;
  float var2 = 200.123;
  printf("%g\n", var1 + var2);
  assignment_type_conversion();
  cast();
  return 0;
}
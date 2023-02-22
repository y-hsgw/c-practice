#include <stdio.h>

void cast() {
  char cast[][2][18] = {{"レイ(南斗)", "塩沢兼人"}, {"レイ(エヴァ)", "林原めぐみ"}};

  printf("キャスト\n%s\t%s\n", cast[0][0], cast[0][1]);
  printf("%s\t%s\n", cast[1][0], cast[1][1]);
}

int main() {
  char name[3][5] = {"Rena", "Yuki", "Mimi"};
  printf("%s\n%s\n%s\n", name[0], name[1], name[2]);

  cast();

  return 0;
}
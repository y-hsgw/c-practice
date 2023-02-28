#include <stdio.h>

struct {
  char *name;
  int age;
} taro, sato;

int main() {
  taro.name = "田中";
  taro.age = 17;
  sato.name = "佐藤";
  sato.age = 13;

  printf("名前\t\t年齢\n");
  printf("%s\t%d\n", taro.name, taro.age);
  printf("%s\t%d\n", sato.name, sato.age);

  return 0;
}

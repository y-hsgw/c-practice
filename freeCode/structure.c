#include <stdio.h>

struct Student {
  int year;
  char name[64];
  double weight;
  double height;
};

int main(void) {
  struct Student Taro;
  Taro.year = 10;
  printf("%d\n", Taro.year);
  return 0;
}
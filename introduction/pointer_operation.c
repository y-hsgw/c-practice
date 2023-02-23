#include <stdio.h>

int main() {
  int ary[2] = {1000, 2000};
  int *po;

  po = &ary[0];
  printf("po\t = %p\n", po);
  po++;
  printf("po++\t = %p\n", po);
  printf("*po++\t = %d\n", *po);

  return 0;
}
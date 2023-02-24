#include <stdio.h>

void multi_array() {
  int ary[3][4] = {
      {10, 20, 30, 40},
      {50, 60, 70, 80},
      {90, 100, 110, 120},
  };
  int *ary_p;
  ary_p = (int *)ary;

  printf("間接参照\t=%d,%d,%d,%d\n", *(ary_p + (1 * 4)), *(ary_p + (1 * 4) + 1),
         *(ary_p + (1 * 4) + 2), *(ary_p + (1 * 4) + 3));
  printf("添え字指定\t=%d,%d,%d,%d\n", ary[1][0], ary[1][1], ary[1][2], ary[1][3]);
}

int main() {
  int ary[3] = {10, 20, 30};
  int *ary_p;
  ary_p = ary;

  printf("間接参照\t=%d,%d,%d\n", *ary_p, *(ary_p + 1), *(ary_p + 2));
  printf("添え字指定\t=%d,%d,%d\n", ary[0], ary[1], ary[2]);

  multi_array();

  return 0;
}
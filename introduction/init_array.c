#include <stdio.h>

void multi_array() {
  int count1 = 0;
  int count2 = 0;
  int ary[3][3] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000};

  while (1) {
    printf("ary[%d][%d] = %d\n", count1, count2, ary[count1][count2]);
    count2++;
    if (count2 == 3) {
      count1++;
      count2 = 0;
    }
    if (count1 == 3)
      break;
  }
}

int main() {
  int ary[5] = {1, 10, 100, 1000, 10000};
  int count;
  const int length = sizeof(ary) / sizeof(int);

  for (count = 0; count < length; count++) {
    printf("要素番号ary[%d] = %d\n", count, ary[count]);
  }

  multi_array();

  return 0;
}
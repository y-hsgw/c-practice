#include <stdio.h>

int main(void) {
  int array[10] = {12, 13, 14};
  printf("%d\n", array[0]);
  printf("%d\n", array[1]);
  printf("%d\n", array[2]);

  int i;
  for(i=0; i<sizeof(array) / sizeof(array[0]); i++){
    printf("%d番目：%d\n", i, array[i]);
  }
  return 0;
}

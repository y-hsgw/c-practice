#include <stdio.h>

/*
ポインタ：アドレスと格納するための変数
メモリ（記憶領域）
$：アドレス演算子
*：関節演算子
*/

void swap(int *pa, int *pb){
  int tmp;
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

int main(void){

  int a = 5;
  int b = 10;
  swap(&a, &b);
  printf("a:%d, b:%d\n", a, b);

  return 0;
}
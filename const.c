#include <stdio.h>


void function() {
  static int a = 0; /* 静的変数*/
  a++;
  printf("a:%d\n", a);
}

int main(void){
  function();
  function();
  function();
  return 0;
}
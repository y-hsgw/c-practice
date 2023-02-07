#include <stdio.h>

/*
文字列：charの配列（※ 終端は「\0」）
int i;
× string s;
*/

int main(void){
  char s[] = "abc";
  printf("%c\n", s[1]);
  return 0;
}
#include <stdio.h>


/* プロトタイプ宣言 */
float getMax(float a, float b);

/*
返り血の型 関数名（引数） {
  ...処理;
  return 返り血
}
*/
int main(void){
  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);
  return 0;
}

float getMax(float a, float b) {
  if(a >= b){
    return a;
  } else {
    return b;
  }
}
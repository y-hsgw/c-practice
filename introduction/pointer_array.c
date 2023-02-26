#include <stdio.h>

int main() {
  int get_n;
  char *ary[] = {"ドラえもん", "アンパンマン", "ガンダム"};
  printf("どんなキャラクターが好きですか?\n");
  printf("青色たぬき = 1\nあんぱん = 2\n白機械 = 3\n");
  printf("1～3の半角英数>");

  scanf("%d", &get_n);
  if ((get_n <= 3) && (get_n >= 1))

    printf("あなたは%sさんが好きなんですね!\n", ary[get_n - 1]);
  else
    printf("不正な値です\n");

  return 0;
}
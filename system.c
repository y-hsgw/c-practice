#include <stdio.h>
#include <stdlib.h>

int main() {
  const char *command = "open http://www.google.com";
  int result = system(command);

  //実行結果をチェック
  if (result == 0) {
      printf("ブラウザが正常に起動しました。\n");
  } else {
      printf("ブラウザの起動に失敗しました。\n");
  }

  return 0;
}

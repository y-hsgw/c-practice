#include <stdio.h>

void print(int length, const char** pp){
  for(int i = 0; i < length; i++){
    printf("%s\n",pp[i]);
  }
}

int main(){
  const char* p[] = {
    "AKB","SKE","NMB","HKT"
  };
  int length = sizeof(p) / sizeof(p[0]);
  const char** pp = p;
  print(length, p);
  return 0;
}
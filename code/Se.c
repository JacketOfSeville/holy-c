#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
  bool a;
  bool b;
  bool c;

  a = true;
  b = false;
  c = true;

  
  if (a) {
    printf("A é verdadeiro\n");
  } else if (b) {
    printf("B é verdadeiro\n");
  } else if (c) {
    printf("C é verdadeiro\n");
  }
  
  return 0;
}
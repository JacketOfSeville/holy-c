#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
  bool a = false;
  bool b = true;
  bool c = true;

  if (a) {
    printf("A é verdadeiro\n");
  } else if (b ) {
    printf("B é verdadeiro\n");
  } else if (c) {
    printf("C é verdadeiro\n");
  }
  
  return 0;
}
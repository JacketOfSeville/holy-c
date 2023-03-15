#include <stdio.h>
#include <stdlib.h>

int a;
int x;
int b;

int main() {
  printf("Informe o valor para A: ");
  scanf("%d", &a);

  printf("Informe o valor para B: ");
  scanf("%d", &b);
  
  if (a > b) {
    x = a;
    a = b;
    b = x;
  }

  printf("Os valores ordenados são: %d %d", a, b);
  return 0;
}
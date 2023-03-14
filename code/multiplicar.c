#include <stdio.h>
#include <stdlib.h>

int i;
int mult = 3;
int multiplicador = 3;
int saida;

int main() {
  for (i=0; i<multiplicador ; i++){
    saida = saida + mult;
  }
  
  printf("%d x %d = %d",mult,multiplicador,saida);
  return 0;
}
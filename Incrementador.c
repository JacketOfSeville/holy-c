#include <stdio.h>
#include <stdlib.h>

int i = 1;
int objetivo = 179;

int main () {   // Pacote a ser utilizado
  do {
    printf("Num. %d\n", i); // Imprime o número contido em 'i'
    i++; // Incrementa 'i' em 1
  }
    while (i < objetivo); // Loop enquanto 'i' for menor que 'objetivo'

  if (i == objetivo) {
    printf("Objetivo de %d alcançado",objetivo);
  }
}
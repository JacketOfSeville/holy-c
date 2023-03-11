#include <stdio.h>
#include <stdlib.h>

int LerPalavra (void) {
  char palavra[256]; // Variável de String de 256 Caracteres
  printf("Digite algo: "); // Imprime
  scanf("%s", palavra); // Lê o dado e armazena na palavra
  printf("Você escreveu %s\n", palavra); // Imprime a palavra
  return 0;
}
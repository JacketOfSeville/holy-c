#include <stdio.h>
#include <stdlib.h>

int NomeIdade (void) {
  char palavra[256]; // Variável de String de 256 Caracteres
  int idade;
  
  printf("Digite sua idade: "); // Imprime
  scanf("%d", &idade);

  printf("Digite seu nome: ");
  scanf("%s", palavra); // Lê o dado e armazena na palavra
  
  printf("Nome: %s | Idade: %d\n", palavra, idade); // Imprime a palavra
  return 0;
}
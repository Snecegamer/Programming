#include <stdio.h>
int main() {
  int TamMax = 15;
  int numeros[TamMax];
  int par = 0;
  int impar = 0;

  //entrada de dados
  for (int i = 0; i < TamMax; i++) {
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //verificação se o valor é par ou impar
  for (int i = 1; i < TamMax; i++) {
    if (numeros[i] % 2 == 0) {
      par += 1;
    }
    else if (numeros[i] % 2 != 0) {
      impar += 1;
    }
  //mostra dos valores do vetor
  printf("Dos valores\n");
  for (int i = 0; i < TamMax; i++) {
      printf("%d\n", numeros[i]);
    }
  //mostra da quantidade de numeros pares e impares
  printf("%d deles são pares e %d deles são impares\n", par, impar);

  return 0;
}

//Copyright (c) 2026 Matheus Fernandes Salomão. All Rights Reserved.

#include <stdio.h>
int main() {
  int TamMax = 10;
  int numeros[TamMax];
  int maior;

  //Entrada dos dados
  for (int i = 0; i < TamMax; i++) {
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //Comparação dos dados
  maior = numeros[0];
  for (int i = 1; i < TamMax; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
  }
  //Mostra dos valores do vetor
  printf("Dos valores\n");
  for (int i = 0; i < TamMax; i++) {
    printf("%d\n", numeros[i]);
  }
  //Mostra do maior valor
  printf("O número %d é o maior.", maior);
}



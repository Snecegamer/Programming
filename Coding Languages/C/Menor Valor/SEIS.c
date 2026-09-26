#include <stdio.h>
int main(){
  int TamMax = 10;
  int numeros[TamMax];
  int pos = 0;
  int menor;
  //Entrada de dados
  for (int i = 0; i < TamMax; i++) {
    printf("digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //Comparação dos dados
  menor = numeros[0];
  for (int i = 1; i < TamMax; i++) {
    if (numeros[i] < menor){
      menor = numeros[i];
      pos = i;
    }
  }
  //mostra dos valores do vetor
  printf("dos valores\n");
  for (int i = 0; i < TamMax; i++) {
    printf("%d\n", numeros[i]);
  }
  //mostra do menor valor
  printf("O número %d é o menor e está na posição %d\n", menor, pos);

  return 0;
}

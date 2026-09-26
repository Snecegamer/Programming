#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];

  //entrada dos valores
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //saída de dados
  printf("Dos números\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numeros[i]);
  }
  printf("São pares os números:\n");
  for (int i = 0; i < tamMax; i++){
    if (numeros[i] %2 == 0){
      printf("%d\n", numeros[i]);
    }
  }
  printf("São ímpares os números:\n");
  for (int i = 0; i < tamMax; i++){
    if (numeros[i] %2 != 0){
      printf("%d\n", numeros[i]);
    }
  }

  return 0;
}


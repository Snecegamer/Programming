#include <stdio.h>
int main(){
  int tamMax = 10;
  int numerosA[tamMax];
  int numerosB[tamMax];
  int numerosC[tamMax];

  //entrada de valores para A
  printf("Vetor A:\n");
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numerosA[i]);
  }
  //entrada de valores para B
  printf("Vetor B:\n");
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numerosB[i]);
  }
  //soma dos dois vetores em um vetor
  for (int i = 0; i < tamMax; i++){
    numerosC[i] = numerosA[i] + numerosB[i];
  }
  //saida dos dados
  printf("Vetor C:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numerosC[i]);
  }
}

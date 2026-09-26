#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];
  int numUsuario;
  int numerosMultiplicados[tamMax];

  //entrada de dados
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  printf("Digite um número para o Usuário\n");
  scanf("%d", &numUsuario);
 //multiplicação dos numeros
 for (int i = 0; i < tamMax; i++){
    numerosMultiplicados[i] = numeros[i] * numUsuario;
  }

  //saida dos dados
  printf("vetor antigo:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numeros[i]);
  }

  printf("vetor novo:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numerosMultiplicados[i]);
  }

  return 0;
}

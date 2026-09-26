#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];

  //entrada de dados
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d\n", &numeros[i]);
  }
  //saida de dados
  printf("Vetor Original:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numeros[i]);
  }
  for (int i = 0; i < tamMax; i++){
    if (numeros[i] < 0){
      numeros[i] = 0;
    }
  }
  printf("Vetor Modificado:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numeros[i]);
  }
  
  return 0;
}

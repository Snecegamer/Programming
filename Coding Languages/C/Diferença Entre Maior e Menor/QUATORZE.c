#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];
  int maior;
  int menor;
  int diferença;

  //entrada de dados
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //comparação de dados
  maior = numeros[0];
  for (int i = 1; i < tamMax; i++){
    if (numeros[i] > maior){
      maior = numeros[i];
    }
  }
  menor = numeros[0];
  for (int i = 1; i < tamMax; i++){
    if (numeros[i] < menor){
      menor = numeros[i];
    }
  }
  printf("maior valor: %d, menor valor: %d\n", maior, menor);
  diferença = maior - menor;
  printf("diferença entre o maior e menor valor: %d\n", diferença);

  return 0;
}

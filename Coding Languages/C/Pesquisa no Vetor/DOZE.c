#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];
  int numeroP;
  int quantidade = 0;

  //entrada de dados
  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  //números para pesquisa
  printf("Digite um número para pesquisa\n");
  scanf("%d", &numeroP);
  for (int i = 0; i < tamMax; i++){
    if (numeros[i] == numeroP){
      quantidade += 1;
    }
  }
  //saida de dados
  printf("No vetor:\n");
  for (int i = 0; i < tamMax; i++){
    printf("%d\n", numeros[i]);
  }
  printf("O número %d aparece %d vezes\n", numeroP, quantidade);

  return 0;
}

#include <stdio.h>
int main(){
  int TamMax = 15;
  float numeros[TamMax];
  int negativos = 0;

  //entrada dos dados
  for (int i = 0; i < TamMax; i++){
    printf("Digite um número\n");
    scanf("%f", &numeros[i]);
  }
  //saída dos dados
  printf("Dos números\n");
  for (int i = 0; i < TamMax; i++){
    printf("%.2f\n", numeros[i]);
  }
  printf("são positivos os números\n");
  for (int i = 0; i < TamMax; i++){
    if (numeros[i] > 0){
      printf("%.2f\n", numeros[i]);
    }
    else {
      negativos += 1;
    }
  }
  printf("e %d deles são negativos", negativos);

  return 0;
}

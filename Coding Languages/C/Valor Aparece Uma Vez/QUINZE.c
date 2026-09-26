#include <stdio.h>
int main(){
  int tamMax = 10;
  int numeros[tamMax];
  int repetiu;

  for (int i = 0; i < tamMax; i++){
    printf("Digite um número\n");
    scanf("%d", &numeros[i]);
  }
  for (int i = 0; i < tamMax; i++){
    repetiu = 0;
      for (int j = 0; j < i; j++){
      if (numeros[i] == numeros[j]){
        repetiu = 1;
        break
      }
    }
    if (repetiu = 0){
      printf("%d\n", numeros[i]);
    }
  }

  return 0;
}

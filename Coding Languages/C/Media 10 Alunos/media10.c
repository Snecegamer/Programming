#include <stdio.h>
int main() {
  int TamMax = 10;
  int notas[TamMax];
  int soma = 0;
  int media;

  //entrada dos dados
  for (int i = 0; i < TamMax; i++) {
    printf("Digite a nota do aluno %d\n", i);
    scanf("%d", &notas[i]);
  }
  //soma dos valores declarados
  for (int i = 0; i < TamMax; i++) {
    soma += notas[i];
  }
  //calculo da media
  media = soma / TamMax;
  //saida dos dados
  printf("media da turma: %d\n", media); 
  return 0;
}

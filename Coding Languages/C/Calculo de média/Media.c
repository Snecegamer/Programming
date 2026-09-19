#include <stdio.h>

float calcularMedia(float t1, float t2, float t3) {
    return (t1 + t2 + t3) / 3.0;
}

float lervalor(char* texto) {
    float tempo;
    printf("Digite o %s tempo: ", texto);
    scanf("%f", &tempo);
    return tempo;
}    

void classificarDesempenho(float media) {
    if (media < 50) {
        printf("Desempenho excelente\n");
    }
    else if (media <= 100) {
        printf("Desempenho satisfatorio\n");
    }
    else {
        printf("Desempenho insatisfatorio\n");
    }
}

int main() {
    float tempo1, tempo2, tempo3;
    float media;

    tempo1 = lervalor("primeiro");
    tempo2 = lervalor("segundo");
    tempo3 = lervalor("terceiro");

    media = calcularMedia(tempo1, tempo2, tempo3);

    printf("\nTempo medio: %.2f ms\n", media);
    classificarDesempenho(media);

    return 0;
}

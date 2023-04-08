169)
#include <stdio.h>

void Notas(float *nota1, float *nota2);
void Medias(float nota1, float nota2, float *mediaSimples, float *mediaPonderada);

int main() {
    float nota1, nota2, mediaSimples, mediaPonderada;
    
    Notas(&nota1, &nota2);
    Medias(nota1, nota2, &mediaSimples, &mediaPonderada);
    
    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);
    
    return 0;
}

void Notas(float *nota1, float *nota2) {
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", nota1);
    } while (*nota1 < 0 || *nota1 > 10);
    
    do {
        printf("Digite a segunda nota: ");
        scanf("%f", nota2);
    } while (*nota2 < 0 || *nota2 > 10);
}

void Medias(float nota1, float nota2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (nota1 + nota2) / 2;
    *mediaPonderada = (nota1 + nota2 * 2) / 3;
}

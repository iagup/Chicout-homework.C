#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int atraso;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da primeira lista de exercicios: ");
    scanf("%f", &nota2);

    printf("A proposta de trabalho foi entregue atrasada? (0 para nao e 1 para sim): ");
    scanf("%d", &atraso);

    if (atraso == 1) {
        nota3 = 0.8; // se houver atraso, a nota máxima do trabalho é 8 em 10
    } else {
        nota3 = 1; // se não houver atraso, a nota máxima do trabalho é 10 em 10
    }

    printf("\nNotas para ser aprovado:\n");

    for (float i = 0; i <= 10 - nota1 - nota2 - nota3; i += 0.01) {
        for (float j = 0; j <= 10 - nota1 - nota2 - nota3 - i; j += 0.01) {
            float nota4 = 10 - nota1 - nota2 - nota3 - i - j;
            if (nota4 >= 0) {
                printf("Segunda prova: %.2f\n", i + nota1);
                printf("Segunda lista: %.2f\n", j + nota2);
                printf("Nota final do trabalho: %.2f\n", nota4 * 10);
                printf("\n");
                break;
            }
        }
    }

    return 0;
}

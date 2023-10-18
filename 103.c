#include <stdio.h>

int main() {
    int valores[10];
    int i, j, aux;

    printf("Digite 10 valores numericos:\n");


    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);

        for (j = 0; j < i; j++) {
            if (valores[j] > valores[i]) {
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
        }
    }

    printf("Valores em ordem crescente:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}

#include <stdio.h>

void preencheArray(int* array, int valor, int tamanho) {
    int i;
    for(i = 0; i < tamanho; i++) {
        *(array + i) = valor;
    }
}

int main() {
    int array[5];
    preencheArray(array, 10, 5);
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]); // deverá imprimir "10 10 10 10 10"
    }
    return 0;
}

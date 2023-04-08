#include <stdio.h>

int main() {
    int matriz[3][3];
    int colunas[3] = {0, 0, 0};
    int i, j;
    
    printf("Entre com a matriz de 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            colunas[j] += matriz[i][j];
        }
    }
    
    printf("\nArray unidimensional com a soma dos valores de cada coluna:\n");
    for (j = 0; j < 3; j++) {
        printf("%d ", colunas[j]);
    }
    
    return 0;
}

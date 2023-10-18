#include <stdio.h>

int main() {
    int A[3][3], B[3][3];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    printf("\nMatriz B = A^2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

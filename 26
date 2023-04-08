#include <stdio.h>

int main() {
    int a, b, soma;
    for (a = 0; a <= 81; a++) { 
        for (b = 0; b <= 81; b++) {
            if (2*(b - a + b) == a && a != b) { 
                soma = a + b;
                if (soma == 81) {
                    printf("Idade de A: %d\n", a);
                    printf("Idade de B: %d\n", b);
                    return 0;
                }
            }
        }
    }
    printf("Não foi possível encontrar as idades de A e B.\n");
    return 0;
}

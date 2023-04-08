#include <stdio.h>

int main() {
    int n, i, id_mais_gordo, id_mais_magro;
    float peso, peso_mais_gordo, peso_mais_magro;

    n = 10;

    float pesos[n];
    int ids[n];

    for (i = 0; i < n; i++) {
        printf("Digite o peso do boi %d: ", i + 1);
        scanf("%f", &peso);

        if (peso == 0) {
            n = i;
            break;
        }

        pesos[i] = peso;
        ids[i] = i + 1;

        if (i == 0 || peso > peso_mais_gordo) {
            peso_mais_gordo = peso;
            id_mais_gordo = i + 1;
        }

        if (i == 0 || peso < peso_mais_magro) {
            peso_mais_magro = peso;
            id_mais_magro = i + 1;
        }
    }

    printf("Lista de bois:\n");
    for (i = 0; i < n; i++) {
        printf("Boi %d - peso: %.2f\n", ids[i], pesos[i]);
    }

    printf("Boi mais gordo: %d - peso: %.2f\n", id_mais_gordo, peso_mais_gordo);
    printf("Boi mais magro: %d - peso: %.2f\n", id_mais_magro, peso_mais_magro);

    return 0;
}

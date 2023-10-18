#include <stdio.h>
#include <string.h>

#define MAX_LOJAS 100

struct loja {
    char nome[50];
    char telefone[20];
    float preco_tablet;
};

int main() {
    struct loja lojas[MAX_LOJAS];
    int n_lojas;
    float media_precos = 0;

    printf("Digite o número de lojas que vendem tablets: ");
    scanf("%d", &n_lojas);

    printf("Digite os dados das lojas:\n");
    for (int i = 0; i < n_lojas; i++) {
        printf("Loja %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", lojas[i].nome);
        printf("Telefone: ");
        scanf("%s", lojas[i].telefone);
        printf("Preço do tablet: ");
        scanf("%f", &lojas[i].preco_tablet);

        media_precos += lojas[i].preco_tablet;
    }

    media_precos /= n_lojas;

    printf("Lojas com preço abaixo da média (%.2f):\n", media_precos);
    for (int i = 0; i < n_lojas; i++) {
        if (lojas[i].preco_tablet < media_precos) {
            printf("%s - %s\n", lojas[i].nome, lojas[i].telefone);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

#define TAM_MAX_MSG 1000

int main() {
    char mensagem[TAM_MAX_MSG];
    int chave;

    printf("Digite a mensagem a ser criptografada: ");
    fgets(mensagem, TAM_MAX_MSG, stdin);

    printf("Digite o valor da chave: ");
    scanf("%d", &chave);

    int tam = strlen(mensagem);
    for (int i = 0; i < tam; i++) {
        if (mensagem[i] == ' ') {
            mensagem[i] = 'a' - 1;
        }
        mensagem[i] = ((mensagem[i] - 'a') + chave) % 27 + 'a';
    }

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}

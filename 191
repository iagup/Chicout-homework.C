#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int conta(char* strin1, char* strin2) {
    int contador = 0;
    int strin1_len = strlen(strin1);
    int strin2_len = strlen(strin2);


    for (int i = 0; i < strin1_len - strin2_len + 1; i++) {
        int found = 1;

       
        for (int j = 0; j < strin2_len; j++) {
            if (strin1[i+j] != strin2[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char strin1[MAX_SIZE + 1];
    char strin2[MAX_SIZE + 1];

    printf("Digite uma string de no máximo %d caracteres: ", MAX_SIZE);
    scanf("%s", strin1);

    printf("Digite a segunda string a ser contada: ");
    scanf("%s", strin2);

    int contador = conta(strin1, strin2);

    printf("A string '%s' ocorre %d vezes dentro de '%s'.\n", strin2, contador, strin1);

    return 0;
}

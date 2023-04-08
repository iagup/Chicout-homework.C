#include <stdio.h>

int main() {
    int numeros, ant = 0, cont = 0, maxCont = 0;
    
    while (1) {
        printf("Digite um número inteiro positivo (digite 0 ou negativo para parar): ");
        scanf("%d", &numeros);

        if (numeros <= 0) {
            break;
        }

        if (numeros > ant) {
            cont++;
        } else {
            if (cont > maxCont) {
                maxCont = cont;
            }
            cont = 1;
        }
        
        ant = numeros;
    }

    if (cont > maxCont) {
        maxCont = cont;
    }

    printf("A maior sequência crescente tem tamanho %d.\n", maxCont);

    return 0;
}

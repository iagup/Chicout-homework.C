#include <stdlib.h>
#include <stdio.h>

int main() { 
    int usuario[10],i;

    for (i=1;i<=9;i++) {
        do  {

            printf("digite o %d numero.: ",i);
            scanf("%d",&usuario[i]);
        }
        while(usuario[i]<=1);
    }

    for (i=1;i<=9;i++) {

        if(usuario[i]==2) {
            printf("\nnumero %d e primo e esta na posicao %d do vetor\n",usuario[i],i);
        } else  if(usuario[i] %2==0) {
            printf("\nnumero %d nao e primo e esta na posicao %d do vetor\n",usuario[i],i);
        } else
            printf("\nnumero %d e primo e esta na posicao %d do vetor\n",usuario[i],i);
    }
}

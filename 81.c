#include <stdio.h>

int main() {
   int vetor[10], i;
   

   for (i = 0; i < 10; i++) {
      printf("Digite o valor da posição %d: ", i);
      scanf("%d", &vetor[i]);
   }
   

   for (i = 0; i < 10; i++) {
      if (vetor[i] < 0) {
         vetor[i] = 0;
      }
   }
   

   printf("\nVetor atualizado: ");
   for (i = 0; i < 10; i++) {
      printf("%d ", vetor[i]);
   }
   
   return 0;
}

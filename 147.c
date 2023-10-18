#include <stdio.h>

int main() {
    int a, aa, b, bb;
    int *ptr_a, *ptr_b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    ptr_a = &a;
    ptr_b = &b;
    aa = ptr_a;
    bb = ptr_b;
    
    if (a > b){
        printf("Conteúdo do maior endereço: %d\n", *ptr_a);
    } else {
        printf("Conteúdo do maior endereço: %d\n", *ptr_b);
    }
    
    return 0;
}

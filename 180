#include <stdio.h>
#include <stdlib.h>

int divs(int num, int* max, int* min) {
    int i;

    int primo = 1;

    
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        
        return 0;
    } else {
        *max = i;
        *min = num / i;
        return 1;
    }
}

int main() {
    int num, max, min;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (divs(num, &max, &min)) {
        printf("%d não é primo. Seus divisores são %d e %d.\n", num, max, min);
    } else {
        printf("%d é primo.\n", num);
    }

    return 0;
}

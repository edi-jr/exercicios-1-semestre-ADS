#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, res;

    printf("Digite um valor: ");
    scanf("%f", &n1);
    printf("Digite outro valor: ");
    scanf("%f", &n2);
    res = n1 + n2;
    if (res <= 20) {
        res = res - 5;
        printf("O resultado subtraido 5 e de: %.2f\n", res);
    }
    else {
        res = res + 8;
        printf("O resultado acrescentado 8 e de: %.2f\n", res);
    }
    
    return 0;
}
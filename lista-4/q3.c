#include <stdio.h>

int main() {
    int n1, res;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n1);
    res = n1 %2;
    
    if(n1 >0 && res == 1) {
        printf("Seu valor e impar! \n");
    }
    else if(n1 >0 && res == 0) {
        printf("Seu valor e par! \n");
    }
    else if(n1 == 0) {
        printf("Seu valor e nulo! \n");
    }
    else {
        printf("Erro.");
    }

    return 0;
}
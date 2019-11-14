#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;
    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 2 || i == 5) soma += A[i];
        else if (i == 3) A[i] = 100;
    }
    printf("Soma: %d\n", soma);
    for(int i = 0; i < 6; i++){
        printf("Valor da posicao %d: %d\n", i, A[i]);
    }
    return 0;
}
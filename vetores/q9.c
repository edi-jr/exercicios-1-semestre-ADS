#include <stdio.h>

int main(){
    int x[20], par = 0, impar = 0, nulo = 0;
    for(int i = 0; i < 20; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &x[i]);
        if(x[i] % 2 == 0 && x[i] > 0) par++;
        else if(x[i] % 2 == 1 && x[i] > 0) impar++;
        else nulo++;    
    }
    printf("Temos um total de %d pares.\n", par);
    printf("Temos um total de %d impares.\n", impar);
    printf("Temos um total de %d nulos.\n", nulo);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    float x[10], x2[10];
    for(int i = 0; i < 10; i++){
        printf("Digite um valor real: ");
        scanf("%f", &x[i]);
        x2[i] = pow(x[i], 2);
    }
    for(int i = 0; i < 6; i++){
        printf("%.2f  ", x[i]);
        printf("%.2f  ", x2[i]);
    }
    return 0;
}
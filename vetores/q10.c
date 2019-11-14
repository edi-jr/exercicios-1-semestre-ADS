#include <stdio.h>

int main(){
    float x[10], ma, me;
    int pMa = 0, pMe = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &x[i]);
        if(i == 0){
            ma = x[i];
            me = x[i];
        }
        if(x[i] > ma){
            ma = x[i];
            pMa = i;
        }
        else if(x[i] < me){
           me = x[i];
           pMe = i;
        }  
    }
    printf("\nO maior valor foi %.2f, o qual se encontra na posicao %d do vetor\n", ma, pMa);
    printf("O menor valor foi %.2f, o qual se encontra na posicao %d do vetor\n", me, pMe);
    system("pause");
    return 0;
}
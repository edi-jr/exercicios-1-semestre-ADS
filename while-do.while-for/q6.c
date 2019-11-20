#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], vetor3[20], i2 = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor1[i]);
        system("cls");
    }

    for(int i = 0; i < 10; i++){
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vetor2[i]);
        system("cls");
    }

    for(int i = 0; i < 20; i += 2){
        vetor3[i] = vetor1[i2];
        vetor3[i + 1] = vetor2[i2];
        i2++;
    }

    // caso queira imprimir o terceiro vetor para testar, só "descomente"
    // for(int i = 0; i < 20; i++) printf("%d\n", vetor3[i]);

    getch();
}
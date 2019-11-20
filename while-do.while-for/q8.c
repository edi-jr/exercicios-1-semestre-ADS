#include <stdio.h>

int main() {
    int somaP = 0, quantN = 0, valores[50];
    for (int i = 0; i < 50; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
        if (valores[i] < 0) quantN++;
        else somaP += valores[i];
    }
    printf("\nSoma dos positivos: %d\n", somaP);
    printf("Quantidade de negativos: %d\n", quantN);

    getch();
}
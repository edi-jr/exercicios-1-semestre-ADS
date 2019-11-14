#include <stdio.h>

int main () {
    int km;

    printf("Digite a velocidade do carro em Km/h: ");
    scanf("%d", &km);

    if (km > 60) 
    {
        printf("O motorista recebera uma multa de R$100,00! \n");
    }
    else 
    {
        printf("O motorista esta dentro do limite de velocidade. \n");
    }
    
    return 0;
}
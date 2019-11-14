#include <stdio.h>

int main () {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Seu numero e positivo ");
    }
    else if (n < 0)
    {
        printf("Seu numero e negativo ");
    } 
    else
    {
        printf("Seu numero e nulo!");
        return 0;
    } 

    if (n != 0 && n %2 == 0)
    {
        printf("e par! \n");
    }
    else
    {
        printf("e impar! \n");
    }

    return 0;
}
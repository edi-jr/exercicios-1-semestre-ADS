#include <stdio.h>

int main(){
    float x, mediaX = 0;
    int contX = 0;

    printf("Digite um numero real\n[0 - SAIR]\n");
    scanf("%f", &x);
    if(x != 0){
        mediaX += x;
        contX++;
        while(x != 0){
            system("cls");
            printf("Digite um numero real\n[0 - SAIR]\n");
            scanf("%f", &x);
            if(x == 0) break;
            else{
                contX++;
                mediaX += x;
            }
        }
        system("cls");
        printf("Temos um total de %d numeros.\n", contX);
        printf("A media foi de %.2f.\n", mediaX / contX);
    }
    getch();
}
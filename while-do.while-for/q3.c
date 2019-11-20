#include <stdio.h>

int main(){
    int n, somaN = 0;
    printf("Digite um numero n\n(n deve ser inteiro e maior do que 1)\n");
    scanf("%d", &n);
    if (n > 1){
        for(int i = 0; i <= n; i++) somaN += i;
        printf("Soma dos numeros de 1 ate n: %d\n", somaN);
    }
    else printf("Erro.\n");
    
    getch();
}
#include <stdio.h>

int main() {
    int somaPares = 0, valores[823];
    for (int i = 85; i < 908; i++) {
        if(i % 2 == 0){
            printf("%d\n", i);
            somaPares += i;
        }
    }
    printf("Soma dos pares: %d\n", somaPares);
}
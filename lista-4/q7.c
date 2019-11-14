#include <stdio.h>

int main() {
    int id;

    printf("Digite a idade do nadador, sera informado sua categoria. \n");
    scanf("%d", &id);
    if (id >= 5 && id <= 7) {
        printf("Categoria: Infantil A. \n");
    }
    else if (id >= 8 && id <= 10) {
        printf("Categoria: Infantil B. \n");
    }
    else if (id >= 11 && id <= 13) {
        printf("Categoria: Juvenil A. \n");
    }
    else if (id >= 14 && id <= 17) {
        printf("Categoria: Juvenil B. \n");
    }
    else if (id >= 18) {
        printf("Categoria: Adulto. \n");
    }
    else {
        printf("Nao se encaixa em nenhuma categoria.");
    }

    return 0;
}
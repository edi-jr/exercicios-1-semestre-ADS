#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define a 5
#define b 30


int main(){
    char firstName[a][b], lastName[a][b], name[a][b], fullName[a][100],
         *firstVowel;
    int length[a], repetitionsFirstName = 0, repetitionsLastName = 0, repetitionsFullName = 0;

    for(int i = 0; i < a; i++) {
        printf("Digite um nome: ");
        scanf("%s", name[i]);
        strupr(name[i]);
        strcpy(firstName[i], name[i]);
        strcpy(fullName[i], name[i]);

        printf("Digite um sobrenome: ");
        scanf("%s", name[i]);
        strupr(name[i]);
        strcpy(lastName[i], name[i]);
        strcat(strcat(fullName[i], " "), name[i]);

        length[i] = strlen(fullName[i]);

        system("cls");
    }

    for(int i = 0; i < a; i++) {
        printf("\nPrimeiro nome na posicao %d: %s\n", i, firstName[i]);
        firstVowel = strpbrk(firstName[i], "AEIOU");
        printf("Primeira vogal no primeiro nome: %c\n", *firstVowel);
        printf("Ultimo nome na posicao %d: %s\n", i, lastName[i]);
        firstVowel = strpbrk(lastName[i], "AEIOU");
        printf("Primeira vogal no ultimo nome: %c\n", *firstVowel);
        printf("Nome completo na posicao %d: %s\n", i, fullName[i]);
        printf("Nome completo invertido na posicao %d: %s\n", i, strrev(fullName[i]));
        printf("Tamanho do nome completo na posicao %d: %d\n\n", i, length[i]);
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j <= a; j++){
            if(j == i) break;
            else if(strcmp(firstName[i], firstName[j]) == 0) repetitionsFirstName++;
            if(j == i) break;
            else if(strcmp(lastName[i], lastName[j]) == 0) repetitionsLastName++;
            if(j == i) break;
            else if(strcmp(fullName[i], fullName[j]) == 0) repetitionsFullName++;
        }
    }

    printf("\nTivemos %d repeticoes de primeiros nomes.\n", repetitionsFirstName);
    printf("Tivemos %d repeticoes de ultimos nomes.\n", repetitionsLastName);
    printf("Tivemos %d repeticoes de nomes completos.\n\n", repetitionsFullName);

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	char titulo1[30], autor1[30], editora1[30],
        titulo2[30], autor2[30], editora2[30],
        titulo3[30], autor3[30], editora3[30], busca[30];
	
    for(int i = 0; i < 30; i++){
        titulo1[i] = '\0', autor1[i] = '\0', editora1[i] = '\0',
        titulo2[i] = '\0', autor2[i] = '\0', editora2[i] = '\0',
        titulo3[i] = '\0', autor3[i] = '\0', editora3[i] = '\0', busca[i] = '\0';
    }

    printf("Digite o titulo do primeiro livro: ");
    fflush(stdin);
    gets(titulo1);
    printf("Digite o(a) autor(a) do primeiro livro: ");
    fflush(stdin);
    gets(autor1);
    printf("Digite a editora do primeiro livro: ");
    fflush(stdin);
    gets(editora1);
    system("cls");

    printf("Digite o titulo do segundo livro: ");
    fflush(stdin);
    gets(titulo2);
    printf("Digite o(a) autor(a) do segundo livro: ");
    fflush(stdin);
    gets(autor2);
    printf("Digite a editora do segundo livro: ");
    fflush(stdin);
    gets(editora2);
    system("cls");

    printf("Digite o titulo do terceiro livro: ");
    fflush(stdin);
    gets(titulo3);
    printf("Digite o(a) autor(a) do terceiro livro: ");
    fflush(stdin);
    gets(autor3);
    printf("Digite a editora do terceiro livro: ");
    fflush(stdin);
    gets(editora3);
    system("cls");

    printf("Busque um livro (a busca pode ser feita por nome do autor(a) ou titulo)\n");
    fflush(stdin);
    gets(busca);
    if (strcmp(busca, titulo1) == 0 || strcmp(busca, autor1) == 0) printf("Livro encontrado.\n");
    else if (strcmp(busca, titulo2) == 0 || strcmp(busca, autor2) == 0) printf("Livro encontrado.\n");
    else if (strcmp(busca, titulo3) == 0 || strcmp(busca, autor3) == 0) printf("Livro encontrado.\n");
    else printf("Livro nao encontrado.\n");

    getch();
}

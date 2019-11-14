#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	char nome[100];
	
	for(int i = 0; i < 100; i++){
		nome[i] = '\0';
	}
	
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	
	for(int i = 99; i >= 0; i--){
		if (nome[i] != NULL) printf("%c", nome[i]);
	}
	
	getch();
	return 0;
}
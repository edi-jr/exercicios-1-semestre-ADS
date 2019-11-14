#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	char cpf1[11], cpf2[11], cpf3[11], cpf_busca[11];
	int x = 1;
	
	for (int i = 0; i < 11; i++){
		cpf1[i] = '\0';
		cpf2[i] = '\0';
		cpf3[i] = '\0';
		cpf_busca[i] = '\0';
	}
	
	printf("Digite o primeiro CPF:\n");
	fflush(stdin);
	gets(cpf1);
	printf("Digite o segundo CPF:\n");
	fflush(stdin);
	gets(cpf2);
	printf("Digite o terceiro CPF:\n");
	fflush(stdin);
	gets(cpf3);
	
	while(x == 1){	
		system("cls");
		
		printf("Digite outro CPF:\n");
		fflush(stdin);
		gets(cpf_busca);
		
		if (strcmp(cpf1, cpf_busca) == 0 ){
		   printf("O CPF existe!\n");	
		} else if (strcmp(cpf2, cpf_busca) == 0 ){
		   printf("O CPF existe!\n");	
		} else if (strcmp(cpf3, cpf_busca) == 0 ){
		printf("O CPF existe!\n");
		} else{
			printf("O CPF nao existe!\n");
		}
		
		printf("Quer conferir mais uma vez? [1 - SIM]\n");
		scanf("%d", &x);
	}
	
	getch();
	return 0;
}
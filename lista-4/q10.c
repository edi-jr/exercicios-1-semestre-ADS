#include <stdio.h>

int main() {
	long long int cpf1, cpf2, cpf3, cpf4;
	
	printf("Digite o primeiro CPF: (apenas numeros) \n");
	scanf("%lld", &cpf1);
	printf("Digite o segundo CPF: (apenas numeros) \n");
	scanf("%lld", &cpf2);
	printf("Digite o terceiro CPF: (apenas numeros) \n");
	scanf("%lld", &cpf3);
	printf("Os CPFS foram armazenados! \n");
	printf("Digite um numero de CPF: \n");
	scanf("%lld", &cpf4);
	if(cpf4 == cpf1 || cpf4 == cpf2 || cpf4 == cpf3) {
		printf("O CPF informado ja existe! \n");
		printf("%lld\n", cpf1);
		printf("%lld\n", cpf2);
		printf("%lld\n", cpf3);
	}
	else {
		int esc;
		printf("Quer armazenar esse CPF tambem? [1 para NAO / 2 para SIM] \n");
		scanf("%d", &esc);
		switch (esc) {
			case 1:
			printf("%lld\n", cpf1);
			printf("%lld\n", cpf2);
			printf("%lld\n", cpf3);
			break;
			case 2:
			printf("%lld\n", cpf1);
			printf("%lld\n", cpf2);
			printf("%lld\n", cpf3);
			printf("%lld\n", cpf4);
			break;
		}
	}
	
}
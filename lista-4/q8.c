#include <stdio.h>

int main() {
	char car;
	float sal;
	
	printf("--------------------------- \n");
	printf("Cargos militares: \n Coronel\n Major\n Tenente \n");
	printf("--------------------------- \n");
	printf("Digite apenas a inicial do cargo do militar: ");
	scanf("%s", &car);
	printf("Digite o salario do militar: ");
	scanf("%f", &sal);
	switch (car) {
		float aum, totsal;
		case 't':
		case 'T':
			aum = (sal * 20) /100;
			totsal = sal + aum;
			printf("O militar recebera um aumento de R$ %.2f\n", aum); 
			printf("Seu novo salario sera de R$ %.2f\n", totsal);
			break;
		case 'm':
		case 'M':
			aum = (sal * 40) /100;
			totsal = sal + aum;
			printf("O militar recebera um aumento de R$ %.2f\n", aum); 
			printf("Seu novo salario sera de R$ %.2f\n", totsal);
			break;
		case 'c':
		case 'C':
			aum = (sal * 60) /100;
			totsal = sal + aum;
			printf("O militar recebera um aumento de R$ %.2f\n", aum); 
			printf("Seu novo salario sera de R$ %.2f\n", totsal);
			break;
		default:
			printf("Erro.");
	}
}
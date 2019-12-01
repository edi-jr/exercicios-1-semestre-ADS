#include <stdio.h>
#include <stdlib.h>

int main(){
	float x;
	int cont = 0;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	do{
		x = x / 2;
		cont++;
	}while(x > 1);
	
	printf("O resultado e: %f\n", x);
	printf("Foram realizadas %d divisoes", cont);
	
	return 0;
}
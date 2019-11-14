#include <stdio.h>
#include <stdlib.h>

int main(){
	int somaP, quantN, jorisbildo[10];
	
	for(int i = 0; i < 10; i++){
		printf("Digite o %do valor: ", i + 1);
		scanf("%d", &jorisbildo[i]);
		if(jorisbildo[i] < 0) quantN++;
		else somaP += jorisbildo[i];
	}
	printf("\nSoma dos positivos: %d\n", somaP);
	printf("Quantidade de negativos: %d\n", quantN);
	return 0;
}
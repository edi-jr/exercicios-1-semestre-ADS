#include <stdio.h>

int main(){
	int i = 0, x, r;
	long long int vetor[20];
	
	printf("Digite o numero incial: ");
	scanf("%d", &vetor[0]);
	printf("Digite a razao: ");
	scanf("%d", &r);
	printf("%d\n", vetor[0]);
	
	for(int i = 1; i < 20; i++){
		vetor[i] = vetor[i - 1] * r;
		printf("%d\n", vetor[i]);
	}

	return 0;
}
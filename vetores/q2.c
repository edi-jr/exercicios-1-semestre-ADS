#include <stdio.h>

int main(){
	int x, r, vetor[20];
	
	printf("Digite o numero incial: ");
	scanf("%d", &vetor[0]);
	printf("Digite a razao: ");
	scanf("%d", &r);
	for(int i = 0; i < 20; i++){
		if (i == 0) printf("%d\n", vetor[0]);
		else {
			vetor[i] = vetor[i - 1] + r; 
			printf("%d\n", vetor[i]);
		}
	}

	return 0;
}
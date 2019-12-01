#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, tPar = 0, tImpar = 0;
	char resp;
	
	do{
		printf("Digite um valor: ");
		scanf("%d", &x);
		
		if(x % 2 == 1){
			tImpar++;	
		} else{
			tPar++;
		}
		
		printf("Deseja digitar outro numero? [S - SIM / N - NAO] \n");
		scanf("%s", &resp);
		
		if (resp == 'n'){
			resp = 'N';
		}

	} while (resp != 'N');
	
	printf("Foram digitados %d pares. \n", tPar);
	printf("Foram digitados %d impares. \n", tImpar);
	
	return 0;
}
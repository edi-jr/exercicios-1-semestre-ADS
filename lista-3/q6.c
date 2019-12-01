#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 0, id = 0, m18 = 0, cont = 1;
	
	do{

        printf("Digite a %da idade ou digite 0 se quiser parar: ", cont);
	    scanf("%d", &id);

        if (id >= 18){
            m18++;
        } else if (id == 0){
            cont = 11;
        }

		cont++;

	}while(cont <= 10);
	
	printf("Temos um total de %d maiores de 18.", m18);
	
	return 0;
}
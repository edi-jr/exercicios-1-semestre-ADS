#include <stdio.h>

int main () {
	float l, desc, vt;
	char comb;
	
	printf("----------------------------- \n");
	printf("Tabela de precos: \n");
	printf("Alcool - R$4,19 \n");
	printf("Gasolina - R$4,98 \n");
	printf("------------------------------ \n");
	printf("Descontos: \n");
	printf("Alcool - 3%% por litro ate 20 litros, acima disso 5%% por litro! \n");	
	printf("Gasolina - 4%% por litro ate 20 litros, acima disso 6%% por litro! \n");
	printf("------------------------------- \n");	
	printf("Quantos litros quer abastecer? \n");
	scanf("%f", &l);
	printf("Com que combustivel? [A para Alcool e G para Gasolina]");
	scanf("%c", &comb);
	
	switch (comb) {
		case 'a':
		case 'A':
			vt = 4.19 * l;			
			if (l <= 20) {
				desc = (l * 3) /100;
				printf("O total a pagar e de: %.2f", vt-desc);
			}
			else {
				desc = (l * 5) /100;
				printf("O total a pagar e de: %.2f", vt-desc);
			}
			break;
		case 'g':
		case 'G':
			vt = 4.98 * l;			
			if (l <= 20) {
				desc = (l * 4) /100;
				printf("O total a pagar e de: %.2f", vt-desc);
			}
			else {
				desc = (l * 6) /100;
				printf("O total a pagar e de: %.2f", vt-desc);
			}
			break;
		default:
			printf("Erro.");
			break;		
	}
}
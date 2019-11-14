#include <stdio.h>

int main() {
	float n1, n2, n3, m;
	printf("Digite a primeira nota: [0 - 10] \n");
	scanf("%f", &n1);
	printf("Digite a segunda nota: [0 - 10] \n");
	scanf("%f", &n2);
	printf("Digite a terceira nota: [0 - 10] \n");
	scanf("%f", &n3);
	m = (n1 + n2 + n3) / 3;
	if (n1 <0 || n1 >10 || n2 <0 || n2 >10 || n3 <0 || n3 >10) { //para garantir que o usuário não digite um valor <0 ou >10
		printf("Erro.");
	}
	else if (m < 7) {
		printf("Sua media e de: %.2f\n", m);
		printf("Voce esta reprovado! \n");
	}
	else if (m >= 7 && m <=9.9) {
		printf("Sua media e de: %.2f\n", m);
		printf("Voce esta aprovado! \n");
	}
	else if (m == 10) {
		printf("Sua media e de: %.2f\n", m);
		printf("Voce esta aprovado, parabens pelo 10! \n");
	}
	else {
		printf("Erro!");
	}
}
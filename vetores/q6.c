#include <stdio.h>
#include <stdlib.h>

int main(){
	int id, me170 = 0, i15 = 0, alunos[5];
	float alt, mAlt = 0, mId = 0;
	
	for(int i = 0; i < 5; i++){
		printf("Digite a idade do %do aluno: ", i + 1);
		scanf("%d", &id);
		printf("Digite a altura do %do aluno: ", i+ 1);
		scanf("%f", &alt);
		if(alt < 1.70){
			mId += id; 
			me170++;	
		}
		if(id == 15){
			mAlt += alt; 
			i15++;
		} 
	}
	printf("\nIdade media dos alunos com menos de 1.70: %.2f\n", mId / me170);
	printf("Altura media dos alunos com 15 anos: %.2f\n", mAlt / i15);
	return 0;	
}
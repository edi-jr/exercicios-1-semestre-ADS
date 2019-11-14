#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
	int vetor[25];
	
	srand(time(NULL));
	
	for(int i = 0; i < 25; i++){
		vetor[i] = rand() % 100;
	}
	
	for(int i = 24; i >= 0; i--){
		printf("%d - %d\n", i, vetor[i]);
	}
	
	getch();
	return 0;
}
#include <stdio.h>

int main() 
{
  int x, y;
  
  printf("Digite um valor para a variavel x: ");
  scanf("%d", &x);
  printf("Digite um valor para a variavel y: ");
  scanf("%d", &y);
  
  if(&x > &y) 
  {
    printf("\nO endereco da varialvel x eh maior.\n");
    printf("Valor no endereco da variavel x = %d\n", x);
  }  
  else
  {
    printf("\nO endereco da varialvel y eh maior.\n");
    printf("Valor no endereco da variavel y = %d\n", y);
  }

  return 0;
}

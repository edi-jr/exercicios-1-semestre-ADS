#include <stdio.h>

void maior_e_menor(int *pa, int *pb);

int main()
{
  int a, b;
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  maior_e_menor(&a, &b);
  printf("\nMaior valor = %d\nMenor valor = %d\n", a, b);
  return 0;
}

void maior_e_menor(int *pa, int *pb)
{
  if (*pb > *pa)
  {
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
  }
}
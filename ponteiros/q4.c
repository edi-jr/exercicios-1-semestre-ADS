#include <stdio.h>

void troca(int *pa, int *pb);

int main()
{
  int a = 15, b = 34;
  printf("Valor de a = %d\n", a);
  printf("Valor de b = %d\n", b);

  troca(&a, &b);
  printf("Valor de a apos troca por referencia = %d\n", a);
  printf("Valor de b apos troca por referencia = %d\n", b);
  return 0;
}

void troca(int *pa, int *pb)
{
  int aux = *pa;
  *pa = *pb;
  *pb = aux;
}
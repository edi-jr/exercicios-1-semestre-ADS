#include <stdio.h>

void somar(int *pa, int *pb);

int main()
{
  int a, b;
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  somar(&a, &b);
  printf("O valor de a apos a funcao eh %d e de b eh %d\n", a, b);
  return 0;
}

void somar(int *pa, int *pb)
{
  *pa = *pa + *pb;
}

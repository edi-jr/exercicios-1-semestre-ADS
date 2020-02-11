#include <stdio.h>

int main()
{
  int vet[5], i;
  int *p = vet;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &p[i]);
  }
  for (i = 0; i < 5; i++)
    printf("Valor da posicao %d dobrado: %d\n", i, p[i] * 2);
  return 0;
}
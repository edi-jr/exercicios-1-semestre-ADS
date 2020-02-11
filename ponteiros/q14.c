#include <stdio.h>

void preencher_vet(int *p_vet, int n);

int main()
{
  int vet[5], x = 3;
  preencher_vet(vet, x);
  for (int i = 0; i < 5; i++)
    printf("Posicao %d: %d\n", i, vet[i]);
  return 0;
}

void preencher_vet(int *p_vet, int n)
{
  for (int i = 0; i < 5; i++, p_vet++)
    *p_vet = n;
}
#include <stdio.h>

void imprimir_vet(int *p_vet);

int main()
{
  int vet[5] = {6, 4, 3, 2, 5};
  imprimir_vet(vet);
  return 0;
}

void imprimir_vet(int *p_vet)
{
  for (int i = 0; i < 5; i++)
    printf("Elemento na posicao %d: %d\n", i, *(p_vet + i));
}
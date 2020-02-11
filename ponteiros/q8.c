#include <stdio.h>

int main()
{
  float vet[10];
  int i;
  for (i = 0; i < 10; i++)
    printf("Endereco posicao %d: %p\n", i, &vet[i]);
  return 0;
}
#include <stdio.h>

int main()
{
  int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p;
  p = vet;
  printf("Valores antes do incremento: \n");
  for (int i = 0; i < 10; i++)
    printf("Elemento - %d: %d\n", i, *(p + i));
  for (int i = 0; i < 10; i++)
    *(p + i) += 1;
  printf("Valores apos incremento: \n");
  for (int i = 0; i < 10; i++)
    printf("Elemento - %d: %d\n", i, *(p + i));
  return 0;
}
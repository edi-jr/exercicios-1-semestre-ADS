#include <stdio.h>

void encontrar_maior(int i, int l, int *pvet, int *m);

int main()
{
  int len, cont = 0;
  printf("Insira o numero de elementos a serem armazenados: ");
  scanf("%d", &len);
  int vet[len];
  for (int i = 0; i < len; i++)
  {
    printf("elemento - %d: ", i);
    scanf("%d", &vet[i]);
  }
  int maior = vet[0];
  encontrar_maior(cont, len, vet, &maior);
  printf("O maior elemento eh: %d", maior);
  return 0;
}

void encontrar_maior(int i, int l, int *pvet, int *m)
{
  if (*(pvet + i) > *m)
    *m = *(pvet + i);
  if (i != (l - 1))
    return encontrar_maior(i + 1, l, pvet, m);
}
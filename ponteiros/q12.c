#include <stdio.h>

int ordenar(int *px, int *py, int *pz);

int main()
{
  int x, y, z;
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("Digite o segundo valor: ");
  scanf("%d", &y);
  printf("Digite o terceiro valor: ");
  scanf("%d", &z);
  if (ordenar(&x, &y, &z))
    printf("Os valores sao iguais!\n");
  else
    printf("Os valores sao diferentes!\n");
  printf("Valores ordenados(do menor para o maior):\n%d\n%d\n%d\n", x, y, z);
  return 0;
}

int ordenar(int *px, int *py, int *pz)
{
  int aux, vet[3] = {*px, *py, *pz};
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 2; j++)
      if (vet[i] < vet[j])
      {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
  *px = vet[0];
  *py = vet[1];
  *pz = vet[2];
  if (*px == *py || *px == *pz || *py == *pz)
    return 1;
  else
    return 0;
}
#include <stdio.h>

int somar_arrays(int *p_vet, int *p_vet1, int *p_vet_soma, int tam, int tam1);

int main()
{
  int vet[100], vet1[100], vet_soma[100], n, n1;
  printf("Digite o tamanho do primeiro array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &vet[i]);
  }
  printf("Digite o tamanho do segundo array: ");
  scanf("%d", &n1);
  for (int i = 0; i < n1; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &vet1[i]);
  }
  if (somar_arrays(vet, vet1, vet_soma, n, n1))
  {
    printf("\nArray gerado pela soma dos dois outros arrays:\n");
    for (int i = 0; i < n1; i++)
      printf("Elemento %d: %d\n", i, vet_soma[i]);
  }
  else
    printf("Nenhum array foi gerado pois os tamanhos dos 2 arrays sao diferentes.\n");
  return 0;
}

int somar_arrays(int *p_vet, int *p_vet1, int *p_vet_soma, int tam, int tam1)
{
  if (tam == tam1)
    for (int i = 0; i < tam; i++)
      *(p_vet_soma + i) = *(p_vet + i) + *(p_vet1 + i);
  else
    return 0;
  return 1;
}
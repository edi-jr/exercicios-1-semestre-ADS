#include <stdio.h>

int negativos(float *vet, int n);

int main()
{
  int n;
  float vet[100];
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Digite o valor para posicao %d: ", i);
    scanf("%f", &vet[i]);
  }
  printf("Total de negativos: %d\n", negativos(vet, n));
  return 0;
}

int negativos(float *vet, int n)
{
  int qtd_negativos = 0;
  for (int i = 0; i < n; i++)
    if (vet[i] < 0)
      qtd_negativos++;
  return qtd_negativos;
}
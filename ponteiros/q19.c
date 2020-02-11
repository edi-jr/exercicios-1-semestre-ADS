#include <stdio.h>

void array(int *p_vet, int tam, int *maior, int *freq_maior);

int main()
{
  int vet[100], n, maior, freq_m = 0;
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Elemento - %d: ", i);
    scanf("%d", &vet[i]);
  }
  array(vet, n, &maior, &freq_m);
  printf("Maior elemento do array: %d\n", maior);
  printf("Quantidade de vezes que esse elemento aparece no vetor: %d\n", freq_m);
  return 0;
}

void array(int *p_vet, int tam, int *maior, int *freq_maior)
{
  *maior = p_vet[0];
  for (int i = 0; i < tam; i++)
    if (p_vet[i] > *maior)
      *maior = p_vet[i];
  for (int i = 0; i < tam; i++)
    if (p_vet[i] == *maior)
      *freq_maior += 1;
}
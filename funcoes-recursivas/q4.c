#include <stdio.h>
int a = 0;

int imprimir_vetor(int l, int *p);

int main()
{
  int len;
  printf("Insira o numero de elementos a serem armazenados: ");
  scanf("%d", &len);
  int vet[len];
  for (int i = 0; i < len; i++)
  {
    printf("elemento - %d: ", i);
    scanf("%d", &vet[i]);
  }
  printf("Os elementos no vetor sao: ");
  imprimir_vetor(len, vet);
}

int imprimir_vetor(int l, int *p)
{
  if (a == l)
    return 1;
  printf("%d ", p[a]);
  a++;
  return imprimir_vetor(l, p);
}
#include <stdio.h>

int n[2];
int troca(int vet[2]);

int main()
{
  printf("Insira o primeiro numero: ");
  scanf("%d", &n[0]);
  printf("Insira o segundo numero: ");
  scanf("%d", &n[1]);
  printf("Antes de trocar: n1 = %d, n2 = %d\n", n[0], n[1]);
  troca(n);
  printf("Apos a troca: n1 = %d, n2 = %d\n", n[0], n[1]);

  return 0;
}

int troca(int vet[2])
{
  int aux = vet[0];
  vet[0] = vet[1];
  vet[1] = aux;
}
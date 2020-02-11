#include <stdio.h>

int fatorial(int n);

int main()
{
  int n = 0;

  while (n <= 0)
  {
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0)
      printf("Invalido. O numero digitado deve ser um numero inteiro positivo.\n\n");
  }

  printf("O fatorial de %d eh %d.\n", n, fatorial(n));

  return 0;
}

int fatorial(int n)
{
  int fatorial = 1;
  for (int i = 1; i <= n; i++)
    fatorial *= i;

  return fatorial;
}
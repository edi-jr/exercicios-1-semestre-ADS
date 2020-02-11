#include <stdio.h>

int encontrar_divisores(int n);

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

  printf("O numero de divisores de %d eh %d.\n", n, encontrar_divisores(n));

  return 0;
}

int encontrar_divisores(int n)
{
  int divi = 0;
  for (int i = 1; i <= n; i++)
    if (n % i == 0)
      divi++;

  return divi;
}
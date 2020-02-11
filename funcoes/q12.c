#include <stdio.h>

int somar_serie();

int main()
{
  printf("A soma da serie eh: %d.\n", somar_serie());
  return 0;
}

int somar_serie()
{
  int n = 5, fatorial, soma = 0;
  for (int i = 1; i <= n; i++)
  {
    fatorial = 1;
    for (int j = 1; j <= i; j++)
      fatorial *= j;
    soma += (fatorial / i);
  }
  return soma;
}
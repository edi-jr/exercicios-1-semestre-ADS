#include <stdio.h>

int soma_intervalo(int n);

int main()
{
  int a, soma;
  printf("Insira o numero do intervalo a partir de 1: ");
  scanf("%d", &a);
  soma = soma_intervalo(a);
  printf("A soma dos números de 1 a %d: %d\n", a, soma);
  return 0;
}

int soma_intervalo(int n)
{
  int x = 1;
  if (n > 0)
  {
    if (n == x)
      return 1;
    else
      return n + soma_intervalo(n - 1);
  }
  else
  {
    if (n == x)
      return 1;
    else
      return n + soma_intervalo(n + 1);
  }
}
#include <stdio.h>

int transformar_em_binario(int n);

int main()
{
  int n = 0;

  while (n <= 0)
  {
    printf("Insira qualquer numero decimal: ");
    scanf("%d", &n);
    if (n <= 0)
      printf("Invalido. O numero digitado deve ser um numero inteiro positivo.\n\n");
  }

  printf("O valor binario eh %d\n", transformar_em_binario(n));

  return 0;
}

int transformar_em_binario(int n)
{
  int n_binario = n % 2, casas = 10;

  n /= 2;
  while (n != 0 && n != 1)
  {
    n_binario += (n % 2) * casas;
    n /= 2;
    casas *= 10;
  }
  n_binario += n * casas;

  return n_binario;
}
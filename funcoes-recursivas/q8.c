#include <stdio.h>

int transformar_em_binario(int n, int *pnbin, int casas);

int main()
{
  int n = 0, n_binario, casas = 1;

  while (n <= 0)
  {
    printf("Insira qualquer numero decimal: ");
    scanf("%d", &n);
    if (n <= 0)
      printf("Invalido. O numero digitado deve ser um numero inteiro positivo.\n\n");
  }
  printf("O valor binario eh %d\n", transformar_em_binario(n, &n_binario, casas));

  return 0;
}

int transformar_em_binario(int n, int *pnbin, int casas)
{
  *pnbin += (n % 2) * casas;
  casas *= 10;
  n /= 2;
  if (n != 0 && n != 1)
    transformar_em_binario(n, pnbin, casas);
  else
    *pnbin += n * casas;
  return *pnbin;
}
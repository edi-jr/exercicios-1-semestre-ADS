#include <stdio.h>

int encontrar_mdc(int n, int n1, int n2, int mdc);

int main()
{
  int x, y, z = 1, mdc;
  printf("Insira o primeiro numero: ");
  scanf("%d", &x);
  printf("Insira o segundo numero: ");
  scanf("%d", &y);
  if (x == 0)
    mdc = y;
  else if (y == 0)
    mdc = x;
  else
    mdc = encontrar_mdc(x, y, z, mdc);
  printf("O mdc de %d e %d eh: %d", x, y, mdc);
  return 0;
}

int encontrar_mdc(int n, int n1, int n2, int mdc)
{
  if ((n % n2 == 0) && (n1 % n2 == 0))
    mdc = n2;
  if ((n2 <= n) && (n2 <= n1))
    return encontrar_mdc(n, n1, n2 + 1, mdc);
  return mdc;
}
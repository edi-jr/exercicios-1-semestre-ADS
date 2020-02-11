#include <stdio.h>

int encontrar_mdc(int n, int n1, int n2, int mdc);

int main()
{
  int x, y, z = 1, mdc;
  printf("Insira o primeiro numero do MMC: ");
  scanf("%d", &x);
  printf("Insira o segundo numero do MMC: ");
  scanf("%d", &y);
  mdc = encontrar_mdc(x, y, z, mdc);
  if (x < 0 || y < 0)
    printf("O MMC de %d e %d eh: %d", x, y, (-1 * (x * y) / mdc));
  else
    printf("O MMC de %d e %d eh: %d", x, y, (x * y) / mdc);
}

int encontrar_mdc(int n, int n1, int n2, int mdc)
{
  if ((n % n2 == 0) && (n1 % n2 == 0))
    mdc = n2;
  if ((n2 <= n) && (n2 <= n1))
    return encontrar_mdc(n, n1, n2 + 1, mdc);
  return mdc;
}
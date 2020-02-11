#include <stdio.h>

int eh_primo(int n, int divisor);

int main()
{
  int x = 0, y = 2;
  while (x < 1)
  {
    printf("Insira qualquer numero positivo(qualquer numero maior que 0): ");
    scanf("%d", &x);
  }
  if (eh_primo(x, y))
    printf("O numero %d e um numero primo.\n", x);
  else
    printf("O numero %d nao e um numero primo.\n", x);
  return 0;
}

int eh_primo(int n, int divisor)
{
  if (n == 1)
    return 0;
  if ((divisor < n) && (n % divisor == 0))
    return 0;
  else if ((divisor < n) && (n % divisor != 0))
    eh_primo(n, divisor + 1);
  else
    return 1;
}
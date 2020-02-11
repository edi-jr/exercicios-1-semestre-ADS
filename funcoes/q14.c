#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n);

int main()
{
  int x = 0, result;

  while (x <= 0)
  {
    printf("Digite um numero positivo: ");
    scanf("%d", &x);
  }
  if (eh_primo(x))
    printf("O numero %d eh um numero primo.\n", x);
  else
    printf("O numero %d nao eh um numero primo.\n", x);

  return 0;
}

int eh_primo(int n)
{
  if (n == 1)
    return 0;
  else
    for (int i = 2; i < n; i++)
      if (n % i == 0)
        return 0;
  return 1;
}
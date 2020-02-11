#include <stdio.h>

int eh_impar(int n);

int main()
{
  int x;
  printf("Digite qualquer numero: ");
  scanf("%d", &x);
  if (eh_impar(x))
    printf("O numero digitado eh impar.\n");
  else
    printf("O numero digitado nao eh impar.\n");

  return 0;
}

int eh_impar(int n)
{
  return n % 2;
}
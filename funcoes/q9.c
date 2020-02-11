#include <stdio.h>

float quadrado(float n);

int main()
{
  float n;

  printf("Insira qualquer numero para o quadrado: ");
  scanf("%f", &n);

  printf("O quadrado de %.2f eh %.2f.\n", n, quadrado(n));

  return 0;
}

float quadrado(float n)
{
  return n * n;
}
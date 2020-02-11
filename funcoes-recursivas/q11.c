#include <stdio.h>

void calc_pow(int base, int exp, int indice, int *r);

int main()
{
  int x, y, i = 1, result = 1;
  printf("Insira o valor da base: ");
  scanf("%d", &x);
  printf("Insira o valor do expoente: ");
  scanf("%d", &y);
  calc_pow(x, y, i, &result);
  printf("A potendia de base %d e expoente %d eh: %d\n", x, y, result);
  return 0;
}

void calc_pow(int base, int exp, int indice, int *r)
{
  if (indice <= exp)
  {
    *r *= base;
    calc_pow(base, exp, indice + 1, r);
  }
}
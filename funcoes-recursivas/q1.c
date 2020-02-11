#include <stdio.h>

int imprimir_naturais(int a);

int main()
{
  int x = 1;
  printf("Os numeros naturais sao: \n");
  imprimir_naturais(x);
  return 0;
}

int imprimir_naturais(int a)
{
  printf("%d\n", a);
  if (a == 50)
    return 1;
  else
    return a + imprimir_naturais(a + 1);
}
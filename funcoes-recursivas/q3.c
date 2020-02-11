#include <stdio.h>

int fibonacci(int n);

int main()
{
  int a = 0;
  while (a < 1 || a >= 20)
  {
    printf("Número de entrada de termos para a série (>0 e <20): ");
    scanf("%d", &a);
  }
  printf("As series sao: \n");
  for (int i = 1; i <= a; i++)
    printf("%d ", fibonacci(i));
  printf("\n\n");
  return 0;
}

int fibonacci(int n)
{
  if (n <= 2)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}
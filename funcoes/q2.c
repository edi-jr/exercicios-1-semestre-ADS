#include <stdio.h>

int eh_perfeito(int n);

int main()
{
  int n;

  printf("ENCONTRAR NUMEROS PERFEITOS\n\n");
  printf("Digite um numero qualquer: ");
  scanf("%d", &n);

  if (eh_perfeito(n))
    printf("%d eh um numero perfeito.\n", n);
  else
    printf("%d nao eh um numero perfeito.\n", n);

  return 0;
}

int eh_perfeito(int n)
{
  int divi = 0;
  if (n <= 0)
    return 0;
  else
  {
    for (int i = 1; i < n; i++)
      if (n % i == 0)
        divi += i;
  }
  if (n == divi)
    return 1;
  else
    return 0;
}
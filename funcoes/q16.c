#include <stdio.h>
#include <string.h>

int calc_pow(int base, int exp);
int eh_perfeito(int n);
int eh_numero_de_armstrong(int n);

int main()
{
  int x;

  printf("ENCONTRAR NUMEROS PERFEITOS E NUMEROS DE ARMSTRONG\n\n");
  printf("Digite um numero qualquer: ");
  scanf("%d", &x);

  if (eh_numero_de_armstrong(x))
    printf("%d eh um numero de Armstrong.\n", x);
  else
    printf("%d nao eh um numero de Armstrong.\n", x);

  if (eh_perfeito(x))
    printf("%d eh um numero perfeito.\n", x);
  else
    printf("%d nao eh um numero perfeito.\n", x);

  return 0;
}

int eh_numero_de_armstrong(int n)
{
  char str[100];
  int soma_alg = 0;

  sprintf(str, "%d", n);

  for (int i = 0; i < strlen(str); i++)
    soma_alg += calc_pow(str[i] - '0', strlen(str));

  if (n == soma_alg)
    return 1;
  else
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

int calc_pow(int base, int exp)
{
  int pow_result = 1;

  for (int i = 1; i <= exp; i++)
    pow_result *= base;

  return pow_result;
}
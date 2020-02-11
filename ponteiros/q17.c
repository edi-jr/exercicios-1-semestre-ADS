#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void frac(float num, int *num_int, float *num_frac);

int main()
{
  float n, n_frac;
  int n_int;
  printf("Digite um numero real: ");
  scanf("%f", &n);
  frac(n, &n_int, &n_frac);
  printf("Parte inteira do numero: %d\n", n_int);
  printf("Parte fracionaria do numero: %.0f\n", n_frac);
  return 0;
}

void frac(float num, int *num_int, float *num_frac)
{
  char num_char[100], ponto[2] = ".";
  char *token;
  int i = 0;
  sprintf(num_char, "%.2f", num);
  for (token = strtok(num_char, "."); token != NULL; token = strtok(NULL, "."))
    if (i == 0)
    {
      *num_int = atoi(token);
      i++;
    }
    else
      *num_frac = atof(token);
}
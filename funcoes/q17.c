#include <stdio.h>

int encontrar_numeros_perfeitos(int inicio, int final);

int main()
{
  int x, y;

  printf("ENCONTRANDO NUMEROS PERFEITOS EM DETERMINADO INTERVALO\n\n");
  printf("Insira o o numero ao qual voce deseja iniciar a pesquisa: ");
  scanf("%d", &x);
  getchar();
  printf("Insira o o numero ao qual voce deseja terminar a pesquisa: ");
  scanf("%d", &y);
  getchar();
  printf("Os numeros perfeitos entre %d e %d sao:\n", x, y);
  encontrar_numeros_perfeitos(x, y);
  printf("\n");

  getchar();
  return 0;
}

int encontrar_numeros_perfeitos(int inicio, int final)
{
  for (int i = inicio; i <= final; i++)
  {
    int divi = 0;
    for (int j = 1; j < i; j++)
      if (i % j == 0)
        divi += j;
    if (i == divi)
      printf("%d ", i);
  }
}
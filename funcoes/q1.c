#include <stdio.h>

int dias_de_idade(int anos, int meses, int dias);

int main()
{
  int dias, meses, anos;

  printf("Quantos anos de idade voce tem? ");
  scanf("%d", &anos);
  printf("Quantos meses? ");
  scanf("%d", &meses);
  printf("Quantos dias? ");
  scanf("%d", &dias);

  printf("Sua idade em dias eh: %d\n", dias_de_idade(anos, meses, dias));
  return 0;
}

int dias_de_idade(int anos, int meses, int dias)
{
  dias += anos * 365;
  dias += meses * 30;
  return dias;
}
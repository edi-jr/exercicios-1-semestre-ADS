#include <stdio.h>
#include <ctype.h>

float peso_ideal(float alt, char sexo);

int main()
{
  float alt = 0;
  char sexo;

  printf("ENCONTRAR PESO IDEAL\n\n");
  while (alt < 1 || sexo != 'F' && sexo != 'M')
  {
    printf("Digite sua altura: ");
    scanf("%f", &alt);
    printf("Digite seu sexo (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    if (alt < 1 || sexo != 'F' && sexo != 'M')
      printf("Invalido. Digite altura e/ou sexo validos.\n\n");
  }

  printf("%.2f eh seu peso ideal.\n", peso_ideal(alt, sexo));

  return 0;
}

float peso_ideal(float alt, char s)
{
  float kg;

  if (s == 'F')
    kg = (62.1 * alt) - 44.7;
  else
    kg = (72.7 * alt - 58);

  return kg;
}
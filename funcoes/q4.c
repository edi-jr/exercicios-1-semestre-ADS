#include <stdio.h>

char nota_conceito(float m);

int main()
{
  float n1 = -1, n2, media;
  char conceito;

  while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
  {
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
      printf("Invalido. As notas devem ter valor minimo de 0 e maximo de 10\n");
  }
  media = (n1 + n2) / 2;
  conceito = nota_conceito(media);
  printf("Conceita da media: %c", conceito);

  return 0;
}

char nota_conceito(float m)
{
  if (m < 5)
    return 'D';
  else if (m < 7)
    return 'C';
  else if (m < 9)
    return 'B';
  else
    return 'A';
}
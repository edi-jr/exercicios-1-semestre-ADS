#include <stdio.h>

int tam;
int maior(int m[][tam]);

int main()
{
  int m;

  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);
  int matriz[tam][tam];
  printf("Insira os elementos na matriz: \n");
  for (int i = 0; i < tam; i++)
    for (int j = 0; j < tam; j++)
    {
      printf("elemento[%d][%d] - ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  m = maior(matriz);
  printf("O maior elemento na matriz eh: %d\n", m);

  return 0;
}

int maior(int m[][tam])
{
  int maior = 0;

  for (int i = 0; i < tam; i++)
    for (int j = 0; j < tam; j++)
      if (m[i][j] > maior)
        maior = m[i][j];

  return maior;
}
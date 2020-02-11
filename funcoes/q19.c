#include <stdio.h>

int tam;
int maior_elemento(int m[][tam]);
int menor_elemento(int m[][tam]);

int main()
{
  int maior, menor;

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

  maior = maior_elemento(matriz);
  menor = menor_elemento(matriz);

  printf("O maior elemento na matriz eh: %d\n", maior);
  printf("O menor elemento na matriz eh: %d\n", menor);

  return 0;
}

int maior_elemento(int m[][tam])
{
  int maior = m[0][0];

  for (int i = 0; i < tam; i++)
    for (int j = 0; j < tam; j++)
      if (m[i][j] > maior)
        maior = m[i][j];

  return maior;
}

int menor_elemento(int m[][tam])
{
  int menor = m[0][0];

  for (int i = 0; i < tam; i++)
    for (int j = 0; j < tam; j++)
      if (m[i][j] < menor)
        menor = m[i][j];

  return menor;
}
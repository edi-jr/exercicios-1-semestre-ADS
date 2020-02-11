#include <stdio.h>

int main()
{
  float mat[3][3];
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      printf("Endereco[%d][%d]: %p\n", i, j, &mat[i][j]);
  return 0;
}
#include <stdio.h>

int main()
{
  int x, y;

  if (&x > &y)
  {
    printf("O endereco da varialvel x eh maior.\n");
    printf("Endereco x = %p\n", &x);
  }
  else
  {
    printf("O endereco da varialvel y eh maior.\n");
    printf("Endereco y = %p\n", &y);
  }

  return 0;
}

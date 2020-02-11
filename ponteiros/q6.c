#include <stdio.h>

int dobrar_e_somar(int *pa, int *pb);

int main()
{
  int a, b, soma_do_dobro;
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  soma_do_dobro = dobrar_e_somar(&a, &b);
  printf("O dobro de a eh %d e o dobro de b eh %d\n", a, b);
  printf("A soma do dobro eh: %d\n", soma_do_dobro);
  return 0;
}

int dobrar_e_somar(int *pa, int *pb)
{
  *pa *= 2;
  *pb *= 2;
  return *pa + *pb;
}

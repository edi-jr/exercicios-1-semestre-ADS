#include <stdio.h>

int main()
{
  int inteiro = 15, *pi;
  float real = 7.8, *pr;
  char caractere = 'a', *pc;
  printf("Variavel inteira = %d\n", inteiro);
  printf("Variavel real = %.2f\n", real);
  printf("Variavel char = %c\n", caractere);
  pi = &inteiro;
  pr = &real;
  pc = &caractere;
  *pi = 34;
  *pr = 12.26;
  *pc = 's';
  printf("Variavel inteira apos modificacao = %d\n", inteiro);
  printf("Variavel real apos modificacao = %.2f\n", real);
  printf("Variavel char apos modificacao = %c\n", caractere);
  return 0;
}

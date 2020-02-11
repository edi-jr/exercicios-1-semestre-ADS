#include <stdio.h>
#include <stdbool.h>

bool eh_positivo(int n);

int main()
{
  int n = 0;
  
  while(n == 0) {
    printf("Digite um numero (deve ser diferente de 0): ");
    scanf("%d", &n);
  }
  
  if (eh_positivo(n))
    printf("%d eh positivo.\n", n);
  else
    printf("%d eh negativo.\n", n);

  return 0;
}

bool eh_positivo(int n)
{
  bool p = true;
  if (n < 0)
    p = false;
  return p;
}
#include <stdio.h>

int soma(int n1, int n2);

int main() {
  int x = 5, y = 6, result;
  
  result = soma(x, y);
  
  printf("O total eh %d\n", result);
}

int soma(int n1, int n2) 
{
  int s;
  s = n1 + n2;
  return s;
}
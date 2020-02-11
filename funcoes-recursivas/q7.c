#include <stdio.h>
#include <string.h>

void inverter_string(char *str, int l, char *rev, int i);

int main()
{
  char str[100], rev_str[100];
  int i = 0;
  printf("Digite a string a ser revertida: ");
  scanf("%[^\n]", str);
  inverter_string(str, strlen(str) - 1, rev_str, i);
  rev_str[strlen(str)] = '\0';
  printf("String reversa: %s\n", rev_str);
}

void inverter_string(char *str, int l, char *rev, int i)
{
  if (i <= l)
  {
    rev[l - i] = str[i];
    return inverter_string(str, l, rev, i + 1);
  }
}
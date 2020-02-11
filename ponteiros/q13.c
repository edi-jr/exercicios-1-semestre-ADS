#include <stdio.h>
#include <string.h>

int esta_contido(char *str, char *str1);

int main()
{
  char str[100], str1[100];
  printf("Digite a primeira string: ");
  scanf("%[^\n]", str);
  getchar();
  printf("Digite a segunda string: ");
  scanf("%[^\n]", str1);
  if (esta_contido(str, str1))
    printf("A segunda string esta contida na primeira!\n");
  else
    printf("A segunda string nao esta contida na primeira!\n");
  return 0;
}

int esta_contido(char *str, char *str1)
{
  int cont = 0;
  for (int i = 0; i < strlen(str); i++)
    if (*(str + i) == *str1)
    {
      for (int j = 0; j < strlen(str1); i++, j++)
        if (*(str + i) == *(str1 + j))
          cont++;
      if (cont == strlen(str1))
        return 1;
    }
  return 0;
}
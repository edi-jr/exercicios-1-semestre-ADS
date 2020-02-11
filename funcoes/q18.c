#include <stdio.h>
#include <string.h>

int eh_anagrama(char *string, char *string1);

int main()
{
  char str[100], str1[100], string[100], string1[100];

  printf("Insira a primeira String: ");
  scanf(" %[^\n]s", str);
  printf("Insira a segunda String: ");
  scanf(" %[^\n]s", str1);

  strcpy(string, strlwr(str));
  strcpy(string1, strlwr(str1));

  if (eh_anagrama(string, string1))
    printf("%s e %s sao anagramas.\n", str, str1);
  else
    printf("%s e %s nao sao anagramas.\n", str, str1);

  return 0;
}

int eh_anagrama(char *string, char *string1)
{
  if (strlen(string) != strlen(string1))
    return 0;
  else
  {
    char aux;
    for (int i = 0; i < strlen(string); i++)
      for (int j = 0; j < strlen(string) - 1; j++)
      {
        if (string[i] < string[j])
        {
          aux = string[i];
          string[i] = string[j];
          string[j] = aux;
        }
        if (string1[i] < string1[j])
        {
          aux = string1[i];
          string1[i] = string1[j];
          string1[j] = aux;
        }
      }

    if (strcmp(string, string1) == 0)
      return 1;
    else
      return 0;
  }
}
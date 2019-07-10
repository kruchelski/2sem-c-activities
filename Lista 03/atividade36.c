#include<stdio.h>
#include<stdlib.h>

void limpastring(char s[], int max)
{
  int i;
  for (i = max-1; i >= 0; i--)
  {
    if (s[i] == 10 || s[i] == 13)
    {
      s[i] = '\0';
    }
  }
}

void escreve(char s[], int max)
{
  fgets(s, max, stdin);
  limpastring(s, max);
}

void contapalavras(char s[])
{
  int i = 0, wrd = 1;
  if (s[0] == '\0')
  {
    printf("Zero palavras\n");
  }
  else
  {
    while (s[i])
    {
      if (s[i] == 32 || s[i] == '\0')
      {
        wrd +=1;
      }
      i++;
    }
    printf("Numero de palavras: %d\n", wrd);
  }
}

int main(int argc, char *argv[])
{
  char st[201];
  printf("Digite uma frase: \n");
  escreve(st, 201);
  contapalavras(st);

  return 0;
}

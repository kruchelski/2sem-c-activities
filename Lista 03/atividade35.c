//Ativdade 34 - Escrever uma frase e dizer qual símbolo aparece mais.
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

void contasimb(char s[])
{
  int asc[256], i, j;

  for (i = 0; i <= 255; i++)
  {
    asc[i] = 0;
  }
  i = 0;
  while (s[i] != '\0')
  {
    asc[s[i]] += 1;
    i++;
  }
  printf("O histograma de ocorrencia eh: \n");
  printf("ASCII\t| Simb\t| Ocorr\n");
  for (i = 0; i <= 255; i++)
  {
    if (asc[i] > 0)
    {
      printf("%d\t| %c\t| %d\t", i, i, asc[i]);
      for (j = 0; j < asc[i]; j++)
      {
        printf("]");
      }
      printf("\n");
    }
  }
}

int main (int argc, char *argv[])
{
  char st[201];

  printf("Digite uma frase: \n");
  escreve(st, 201);
  contasimb(st);
}

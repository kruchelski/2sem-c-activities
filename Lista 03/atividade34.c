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

void contasimb(char s[], int asc[])
{
  int i = 0, maior, no = 0;
  for (i = 0; i <= 255; i++)
  {
    asc[i] = 0;
  }
  i = 0;
  while (s[i] != '\0')
  {
    printf("%d: %d\n", i, s[i]);
    asc[s[i]] += 1;
    i++;
  }
  maior = asc[32];
  for (i = 32; i <= 127; i++)
  {
    if (asc[i] > maior)
    {
      maior = i;
      no = asc[i];
    }
  }
  printf("O simbolo que mais ocorreu foi %c ...\n", maior);
  printf("E ocorreu: %d vezes \n\n",no);
}

int main (int argc, char *argv[])
{
  int tab[256];
  char st[201];
  printf("Digite uma frase: \n");
  escreve(st, 201);
  contasimb(st, tab);
}

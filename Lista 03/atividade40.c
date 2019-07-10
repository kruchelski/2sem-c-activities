//Atividade 38 usando alocação dinâmica.
#include <stdio.h>
#include <stdlib.h>

void limpastring(char s[], int max)
{
  int i;
  for (i = max; i >= 0; i--)
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
  limpastring(s, max-1);
}

int contaletra(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

void inverte(char *s, int l)
{
  char aux;
  char *p=NULL;
  char *u=NULL;

  for (p = s, u = &s[l - 1]; p < u; p++, u--)
  {
    aux = *p;
    *p = *u;
    *u = aux;
  }
}

int main (int argc, char *argv[])
{
  char st[201];
  int len;
  printf("Escreva uma frase: \n");
  escreve(st, 201);
  len = contaletra(st);
  printf("\nSTRING ORIGINAL:\n");
  printf("%s\n", st);
  inverte(st, len);
  printf("\nSTRING INVERTIDA:\n");
  printf("%s\n\n", st);
  return 0;
}

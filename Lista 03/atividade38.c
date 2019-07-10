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

void copia(char v1[], char v2[])
{
  while (*v1)
  {
    *v2 = *v1;
    v1++;
    v2++;
  }
}

int main (int argc, char *argv[])
{
  char st[201];
  char *cp;
  int n;
  printf("Escreva uma frase: \n");
  escreve(st, 201);
  n = contaletra(st);

  cp = (char*)malloc(sizeof(char) * n);
  copia(st, cp);
  printf("String original:\n");
  printf("%s\n\n", st);
  printf("String copiada:\n");
  printf("%s\n", cp);

  free(cp);

  return 0;
}

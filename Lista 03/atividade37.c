#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int contaletra(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

int indice(int n)
{
  return (int)ceil(sqrt(n));
}

void imprimex(char s[], int n)
{
  printf("quant linhas %d\n\n", n);
  int i = 0;
  while(*s)
  {
    if (i % n == 0)
    {
      printf("\n");
    }
    printf("%c", *s);
    s++;
    i++;
  }
  printf("\n");
}

int main (int argc, char * argv[])
{
  int n, i;
  char st[201];

  printf("Digite uma frase:\n");
  escreve(st, 200);
  n = contaletra(st);
  printf("Num letras %d\n", n);
  n = indice(n);
  printf("\n\n");
  imprimex(st, n);

  return 0;
}

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

void copia(char *s1, char *s2, int p, int n)
{
  int i = 0;
  while ((s1[p] != '\0') && n > 0)
  {
    s2[i] = s1[p];
    p++;
    i++;
    n--;
  }
  s2[i] = '\0';
  printf("PRINT TESTE DENTRO DA FUNCAO COPIA\n");
  printf("%s\n",s1);
  printf("%s\n",s2);
  printf("-----------------------------------\n");

}

void verifica(int l, int p, int n, char s1[], char **s2)
{
  if (p > l)
  {
    printf("Posicao inicial maior que o tamanho da string. Encerrando\n");
  }
  else if (p < 0)
  {
    printf("Posicao inicial deve ser 0 ou maior. Encerrando\n");
  }
  else if (p + n > l)
  {
    printf("Aviso: Quantidade de caracteres eh superior ao tamanho da string\n");
    printf("Copia sera feita apenas ate o final da string\n\n");
    *s2 = (char *)malloc(sizeof(char) * (l - (p)));
    copia(s1, *s2, p-1, n);
  }
  else
  {
    *s2 = (char *) malloc(sizeof(char) * (n+1));
    copia(s1, *s2, p-1, n);
  }
}

int main (int argc, char *argv[])
{
  char st[201];
  char *cp=NULL;
  int len, p, n;
  printf("Escreva uma frase: \n");
  escreve(st, 201);
  len = contaletra(st);
  printf("Digite a posicao inicial: ");
  scanf("%d", &p);
  printf("\nDigite quantas letras deseja copiar: ");
  scanf("%d", &n);
  verifica(len, p, n, st, &cp);
  if (*cp)
  {
    printf("String original:\n");
    printf("%s\n\n", st);
    printf("String copiada:\n");
    printf("%s\n", cp);
    free(cp);
  }
  else
  {
    printf("Copia nao realizada \n");
  }

  return 0;
}

//Atividade 32 (parecida com a 31, mas a informação das posições é invertida)
#include<stdio.h>
#include<stdlib.h>

void limpastring(char *s, int max)
{
	int i;
	for (i = max; i >= 0; i--)
	{
		if (s[i] == 13 || s[i] == 10)
		{
			s[i] = '\0';
		}
	}
}

void escreve(char *s, int max)
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

void upper(char *s, int max)
{
	int i = 0;
	while (s[i] != '\0' && i <= max)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
}

void achaletra(char s[], char c, int len)
{
  int i, aux = 0;
  for (i = len; i >= 0; i--)
  {
    if (s[i] == c)
    {
      aux = 1;
      printf("Posicao: %d\n", i+1);
    }
  }
  if (aux == 0)
  {
    printf("A letra %c nao foi encontrada na string\n",c);
  }
}


int main(int argc, char *argv[])
{
	char str[201];
  char letra;
  int len = 0;
	printf("Digite uma frase:\n");
	escreve(str, 201);
  printf("Digite uma letra para ser buscada na frase:\n");
  scanf("%c", &letra);
  len = contaletra(str);
  upper(str,len);
  if ((letra >= 97) && (letra <= 122))
  {
    letra -= 32;
  }
  achaletra(str,letra,len);

	return 0;
}

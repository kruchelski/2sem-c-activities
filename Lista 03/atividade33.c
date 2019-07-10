//Atividade 33 (parecida com a 31, mas ao invés de letra é uma palavra
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

void achapalavra(char s[], char c[], int len1, int len2)
{
  int i, j, k, aux, ocor = 0;
  for (i = 0; i < len1; i++)
  {
		aux = 0;
		k = i;
		for (j = 0; j < len2; j++)
		{
			if (s[k] == c[j])
			{
				k++;
				aux = 1;

			}
			else
			{
				aux = 0;
				break;
			}
		}
		if (aux == 1)
		{
			printf("Ocorrencia na posicao: %d\n", i+1);
			ocor = 1;
		}
	}
	if (ocor == 0)
	{
		printf("Nao foram encontradas ocorrencias\n");
	}
}


int main(int argc, char *argv[])
{
	char str[201];
  char busca[201];
  int len1 = 0, len2 = 0;
	printf("Digite uma frase:\n");
	escreve(str, 201);
  printf("Digite uma palavra para ser buscada na frase:\n");
  escreve(busca, 201);
  len1 = contaletra(str);
	len2 = contaletra(busca);
  upper(str,len1);
	upper(busca,len2);
  achapalavra(str,busca,len1, len2);

	return 0;
}

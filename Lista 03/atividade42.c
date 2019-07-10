#include <stdio.h>
#include <stdlib.h>
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
	limpastring(s, max-1);
}

void imprime(char *s)
{
	int i, j = 0;
	while (*s)
	{
		for (i = 0; i < j; i++)
		{
			printf(" ");
		}
		printf("%c\n", *s);
		s++;
		j++;
	}
}

int main(int argc, char *argv[])
{
	char st[201];
	printf("Escreva uma frase:\n");
	escreve(st, 201);
	imprime(st);
	return 0;
}
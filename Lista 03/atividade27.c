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

int main(int argc, char *argv[])
{
	char str[81];
	printf("Digite um nome:\n");
	escreve(str, 81);
	printf("\nO nome lido contem %d caracteres\n", contaletra(str));

	system("PAUSE");
	return 0;
}
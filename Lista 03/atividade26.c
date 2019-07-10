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

void lower(char *s, int max)
{
	int i = 0;
	while (s[i] != '\0' && i <= max)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] += 32;
		}
		i++;
	}
}

void upperone(char *s, int max)
{
	int i = 0, espaco = 1;
	
	while (s[i] != '\0' and i <= max)
	{
		if (s[i] == 32)
		{
			espaco = 1;
		}
		else if (espaco == 1 and (s[i] >= 97 and s[i] <= 122))
		{
			s[i] = s[i] - 32;
			espaco = 0;
		}
		else
		{
			espaco = 0;
		}
		i++;	
	}

}

int main(int argc, char *argv[])
{
	char str[81];
	printf("Digite alguma coisa:\n");
	escreve(str, 81);
	printf("Texto lido - original:\n");
	printf("%s\n\n", str);
	
	upper(str, 81);
	printf("Texto lido - UPPER CASE:\n");
	printf("%s\n\n", str);
	
	lower(str, 81);
	printf("Texto lido - LOWER:\n");
	printf("%s\n\n", str);

	upperone(str, 81);
	printf("Texto lido - Primeiras maiusculas:\n");
	printf("%s\n\n", str);

	system("PAUSE");
	return 0;
}
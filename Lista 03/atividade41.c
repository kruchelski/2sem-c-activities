#include <stdio.h>
#include <stdlib.h>
void superclean(char *s, char *c)
{
	int i = 0, j = 0;
	while(s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 90) || s[i] == '\0')
		{
			c[j] = s[i];
			j++;
		}
		i++;
	}
	c[j] = '\0';
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
	for (i = max; i >= 0; i--)
	{
		if (s[i] == 32 && (s[i + 1] == 32 || s[i + 1] == '\0'))
		{
			s[i] = '\0';
		}
	}
	upper(s, max);
}

void escreve(char *s, int max)
{
	fgets(s, max, stdin);
	limpastring(s, max-1);
}

int compara(char s1[], char s2[], int len)
{
	int i = 0;
	while (i <= len)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return 0;
			break;
		}
		else if (s1[i] == '\0' && s2[i] != '\0')
		{
			return 2;
			break;
		}
		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			return 1;
			break;
		}
		else if (s1[i] > s2[i])
		{
			return 1;
			break;
		}
		else if (s2[i] > s1[i])
		{
			return 2;
			break;
		}
		i++;
	}
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

void inverte (char *s, char *c, int max, int len)
{
	int i, j;
	for (i = 0; i <= max; i++)
	{
		s[i] = '\0';
	}
	for (i = 0, j = len-1; i <= len; i++, j--)
	{
		s[j] = c[i];
	}

}

int main (int argc, char *argv[])
{
	char st[201];
	char cp[201];
	int n;
	printf("Escreva uma frase:\n");
	escreve(st, 201);
	superclean(st, cp);
	n = contaletra(cp);
	inverte(st, cp, 200, n);
	printf("%s\n",st);
	printf("%s\n",cp);
	if (compara(st, cp, n) != 0)
	{
		printf("Nao eh palindromo\n");
	}
	else
	{
		printf("Eh palindromo. Eeeee\n");

	}

	return 0;
}
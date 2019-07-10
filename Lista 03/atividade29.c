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
	for (i = max; i >= 0; i--)
	{
		if (s[i] == 32 && (s[i + 1] == 32 || s[i + 1] == '\0'))
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

int compara(char s1[], char s2[], int len)
{
	int i = 0;
	while (1 <= len)
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

int main(int argc, char *argv[])
{
	char str1[81];
	char str2[81];
	int r = 0;

	printf("Digite duas strings para serem comparadas:\n");
	printf("\nSTRING 1 -> ");
	escreve(str1, 81);
	printf("\nSTRING 2 -> ");
	escreve(str2, 81);
	upper(str1, 81);
	upper(str2, 81);
	r = compara(str1, str2, 81);
	if (r == 0)
	{
		printf("\n\n As duas strings sao iguais\n");
	}
	else
	{
		printf("\nA maior string eh a ");
		printf("%s\n", r > 1 ? "string 2" : "string 1");
	}

	system("PAUSE");
	return 0;
}
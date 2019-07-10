#include <stdio.h>
#include <stdlib.h>

void limpastring(char s[], int max)
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

void escreve(char s[], int max)
{
	fgets(s, max, stdin);
	limpastring(s, max);
}

int contaLetra(char *s1, char *s2)
{
	int cont = 0, i = 0;

	while (s1[i] != '\0')
	{
		cont++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		cont++;
		i++;
	}
	return cont;
}
void concatena(char *s1, char *s2, char *s3)
{
	int i = 0, j = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
}

int main(int argc, char *argv[])
{
	char st1[81], st2[81], *st3;

	printf("Digite a primeira string (maximo 80 caracteres)\n");
	escreve(st1, 81);
	printf("\nDigite a segunda sting (maximo 80 caracteres)\n");
	escreve(st2, 81);
	st3 = (char *)malloc(sizeof(char) * contaLetra(st1,st2));
	concatena(st1, st2, st3);
	printf("A primeira string digitada foi:\n");
	printf("%s\n", st1);
	printf("A segunda string digitada foi:\n");
	printf("%s\n", st2);
	printf("A string concatenada eh:\n");
	printf("%s\n", st3);

	free(st3);
	return 0;

}

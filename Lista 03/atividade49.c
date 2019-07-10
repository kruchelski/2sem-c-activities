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
	limpastring(s, max-1);
}

void codCesar(char *s){
	int i = 0;

	while (s[i] != '\0'){

		if ((s[i] + 3) > 122){
			s[i] = 96 + ((s[i] + 3) - 122);
		}
		else if ((s[i] + 3) > 90 && (s[i] + 3) < 97){
			s[i] = 64 + ((s[i] + 3) - 90);
		} 
		else if (s[i] >= 65 && s[i] <= 90){
			s[i] += 3;
			}
		else if (s[i] >= 97 && s[i] <= 122){
			s[i] += 3;
			}
			i++;
		}
}

int main(int argc, char *argv[]){
	char st[201];
	system("clear");
	printf("Escreva uma frase\n");
	printf(">> ");
	escreve(st, 201);
	printf("Frase original:\n");
	printf("$ %s\n\n", st);
	codCesar(st);
	printf("Frase codificada:\n");
	printf("$ %s\n\n", st);

	return 0;
}
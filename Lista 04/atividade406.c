// Pelo visto é igual à atividade 5 \_( '-')_/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 201

void limpastring(char *s, int max) {
	int i;
	for (i = max; i >= 0; i--) {
		if (s[i] == 10 || s[i] == 13) {
			s[i] = '\0';
		}
	}
}

void escreve(char *s, int max) {
	fgets(s, max, stdin);
	limpastring(s, max - 1);
}

void espelha(char *s) {
	char *p, *u, aux;

	for (p = s, u = &s[(strlen(s)) - 1]; p < u; p++, u--) {
		aux = *p;
		*p = *u;
		*u = aux;
	}
}

int main(int argc, char *argv[]){
	char str[MAX];

	printf("Digite uma string:\n");
	printf(">> ");
	escreve(str, MAX);
	system("clear");
	printf("\n\n String digitada:\n");
	printf(">> %s\n\n", str);
	espelha(str);
	printf("String espelhada:\n");
	printf("<< %s\n\n", str);

	return 0;
}
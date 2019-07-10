/*08) Faça um programa que leia uma lista de nomes, a leitura será terminada com 
“entrada vazia” (strlen == 0, str[0]==’\0’). Para cada nome lido aloque uma CEL 
em memória e coloque em uma lista dinâmica. No final, apresente a lista lida e 
libere corretamente os elementos de memória. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 81

typedef struct _CEL {
	char str[MAX];
	struct _CEL *link;
} CEL;


void limpastring(char *s, int max) {
	int i;
	for (i = max; i >= 0 ; i--) {
		if (s[i] == 10 || s[i] == 13) {
			s[i] = '\0';
		}
	}
}

void escreve(char *s, int max) {
	fgets(s, max, stdin);
	limpastring(s, max - 1);
}

int main (int argc, char *argv[]) {
	system("clear");
	CEL *primeiro = NULL, *using, *aux;
	char s[MAX];

	printf("Digite uma string:\n");
	printf("<< ");
	escreve(s, MAX);

	if (s[0] == '\0') {
		printf("ENCERRANDO...\n\n");
		exit(0);
	}
	else {
		primeiro = (CEL *)malloc(sizeof(CEL));
		strcpy(primeiro->str, s);
		primeiro->link = (CEL*)malloc(sizeof(CEL));
		using = primeiro->link;
		while (s[0] != '\0') {
			printf("Digite uma string:\n");
			printf("<< ");
			escreve(s, MAX);
			if (s[0] != '\0') {
				strcpy(using->str, s);
				using->link = (CEL*)malloc(sizeof(CEL));
				using = using->link;
			}
			else {
				using->link = NULL;
			}
		}

	}
	using = primeiro;
	printf("\n\nSTRINGS ARMAZENADAS NA LISTA:\n");
	while (using->link != NULL) {
		printf("%s\n", using->str);
		using = using->link;
	}
	while (primeiro != NULL) {
		aux = primeiro;
		free(primeiro);
		primeiro = aux->link;
	}
}
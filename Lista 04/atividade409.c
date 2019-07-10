/*09) Faça um programa que leia uma frase (com até 512 bytes e não precisa validar) e
apresente todos os sufixos da frase (use ponteiro e incremento de ponteiros, não use índices de vetor)
Ex: ao ser lido “casa” o programa deverá gerar:
casa asa as s */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 513

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

void sufixo(char *s, int f) {
	
	char *auxp, *auxu, *p, *u;
	if (f == 0) {
		p = s;
		u = &s[strlen(s) - 1];
		f = 1;
	}
	int change = 0;
	auxp = p;
	auxu = u;
	if (!(p < u)) {
		return;
	}
	while (p <= u) {
		printf("%c", *p);
		p++;
	}
	printf("\n");
	p = auxp;
	u = auxu;
	if (change == 0) {
		change = 1;
		p++;
		printf("CHANGE 0\n\n");
		sufixo("CASINHA", f);
	}
	else if (change ==1) {
		change = 0;
		u--;
		printf("CHANGE 1\n\n");
		sufixo("CASINHA", f);
	}
}

int main(int argc, char *argv[]) {
	sufixo("CASINHA", 0);

	return 0;
}

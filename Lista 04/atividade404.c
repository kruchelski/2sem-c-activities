#include <stdio.h>
#include <stdlib.h>

void contaVogalConsoante(char *s, int *v, int *c) {
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] != 32) {
			if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U')) {
				*v += 1;
			}
			else {
				*c += 1;
			}
		}
		i++;
	}
}
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


int main(int argc, char *argv[]) {
	char str[201];
	int vogal = 0, consoante = 0;
	printf("Digite uma string:\n");
	printf(">> ");
	escreve(str, 201);

	contaVogalConsoante(str, &vogal, &consoante);
	printf("A frase digitada foi: %s\n\n", str);
	printf("O numero de vogais na string eh: %d\n", vogal);
	printf("O numero de consoantes na string eh: %d\n", consoante);

	return 0;

}


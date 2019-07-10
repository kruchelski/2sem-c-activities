#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpastring(char *s, int max) {
	int i;
	for (i = max; i >=0; i--) {
		if (s[i] == 10 || s[i] == 13) {
			s[i] = '\0';
		}
	}
}

void escreve(char *s, int max) {
	fgets(s, max, stdin);
	limpastring(s, max-1);
}

char *localiza (char *s1, char *s2) {
	char *p, *auxp;
	int len1, len2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	auxp = s2;
	while (*s1 != '\0' && ((s1 + len2) < (&s1[len1 -1]))) {
		if (*s1 == *s2) {
			p = s1;
			while (*s2 != '\0') {
				if (*s1 == *s2) {
					s1++;
					s2++;
				}
				else {
					s1 = p;
					s2 = auxp;
					break;
				}
				if (*s2 == '\0') {
					return p;
					break;
				}
			}
		}
		s1++;	
	}
	return NULL;
}

int main(int argc, char *argv[]) {
	char str[201], srch[201], *p;
	int i;
	printf("Escreva uma string:\n");
	escreve(str, 201);
	printf("Escreva uma string pra buscar na outra:\n");
	escreve(srch, 201);

	p = localiza(str, srch);
	if (p == NULL) {
		printf("String não localizada. Ponteiro NULL\n");
	} else {
		printf("String localizada. Endereço do ponteiro: %x\n", p);
		for (i = 0; i < strlen(str); i++) {
			if (p == &str[i]) {
				printf("Na posição %d da string\n", i + 1);
			}
		}
	}
	return 0;
}
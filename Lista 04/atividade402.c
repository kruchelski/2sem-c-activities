#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 81

void limpastring(char *s, int max) {
	int i;
	for (i = max; i >=0; i--) {
		if (s[i] == 10 || s[i] == 13) {
			s[i] = '\0';
		}
	}
}



void swap (char *a, char *b) {
	char aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void permut(char *s, int a, int z) {
	int i;

	if (a == z) {
		printf("%s\n", s);
	}
	else {
		for (i = a; i <= z; i++) {
			if (i != a) {
				swap((s + a), (s + i));
			}
			permut(s, a + 1, z);
			if (i != a) {
				swap((s + a), (s + i));
			}
		}
	}
}

int main(int argc, char *argv[]) {
	char str[MAX];
	int n;

	printf("Escreva uma palavra (max 80 letras)\n");
	printf("$ ");
	scanf("%s", str);
	printf("\n");
	limpastring(str, MAX - 1);
	n = strlen(str);
	permut(str, 0, n - 1);
	return 0;

}
/*07) Faça uma função checkInterno que recebe os parâmetros ptr1, ptr2 e tam.
A função deve retornar verdadeiro se ptr1 estiver na região entre ptr2 e ptr2+tam.*/
//Versão B  - com o ptr 1 já alocado e o ptr 2 alocado dinamicamente
#include <stdio.h>
#include <stdlib.h>

int checkInterno(char *ptr1, char *ptr2, int tam) { //usando ponteiros de char pois o enunciado não especificou. Da pra fazer com variávies também

	while (tam >= 0) {
		if (ptr1 == ptr2) {
			return 1;
		}
		ptr2++;
		tam--;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	char p1[10], *p2 = NULL;
	int n;
	printf("Digite um numero n:\n");
	printf(">> ");
	scanf("%d", &n);
	p2 = (char*)malloc(sizeof(char) * n);
	printf("%s\n", checkInterno(p1, p2, n) == 1 ? "ptr1 dentro da regiao\n" : "ptr1 fora da regiao\n");
	free(p2);
	return 0;
}
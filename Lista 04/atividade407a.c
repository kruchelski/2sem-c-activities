/*07) Faça uma função checkInterno que recebe os parâmetros ptr1, ptr2 e tam.
A função deve retornar verdadeiro se ptr1 estiver na região entre ptr2 e ptr2+tam.*/
//Versão A  - com os dois ponteiros alocados
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
	char p1[10], p2[10];
	int n;
	printf("Digite um numero n:\n");
	printf(">> ");
	scanf("%d", &n);
	printf("%s\n", checkInterno(p1, p2, n) == 1 ? "ptr1 dentro da regiao\n" : "ptr1 fora da regiao\n");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 9

int limpaVerifica(char *s, int l){
	int i;
	for (i = l; i >=0; i--){
		if (s[i] == 10 || s[i] == 13 || s[i] == 32){
			s[i] = '\0';
		}
	}
	while (*s){
		if (!((*s >= 48 && *s <= 57) || *s == '\0')){
			return 1;
			break;
		}
		s++;
	}
	return 0;
}

int converte(char *s){
	int soma = 0, i = 0, j = 0;
	while (s[i] != '\0'){
		i++;
	}
	i -= 1;

	while (i >= 0){
		soma += (pow(10,j) * (s[i] - 48));
		i--;
		j++;
	}
	return soma;
}

int main(int argc, char *argv[])
{
	char st[MAX];
	printf("Escreva um numero (maximo 8 digitos):\n");
	fgets(st, MAX, stdin);
	if (limpaVerifica(st, MAX-1) == 1){
		printf("Numero digitado tem erro\n");
		printf("ENCERRANDO\n");
		exit(0);
	}
	else{
		printf("Numero escrito em formato de texto foi:\n");
		printf("%s\n\n", st);
		printf("Numero convertido em inteiro eh:\n");
		printf("%d\n\n", converte(st));
	}
	return 0;
}
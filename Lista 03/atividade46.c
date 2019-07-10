#include <stdio.h>
#include <stdlib.h>

int verificaDigitos(int n){
	int i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}

void converte(char *s, int n, int len){
	int i = 0;
	
	while (len > 0){
		s[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	
}



int main(int argc, char *argv[])
{
	system("clear");
	int n, length;
	char *s = NULL;
	printf("Digite um numero inteiro para ser convertido:\n");
	printf("Numero: ");
	scanf("%d", &n);
	printf("\n\n");
	length = verificaDigitos(n);
	if (length < 1){
		printf("ENCERRANDO\n");
		exit(0);
	}
	else{
		s = (char*)malloc(sizeof(char) * (length + 1));
		converte(s, n, length);
		printf("O numero digitado foi: %d\n\n", n);
		printf("O numero convertido em texto foi: %s\n\n", s);
	}

	return 0;
}
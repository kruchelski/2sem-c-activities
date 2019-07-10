#include <stdio.h>
#include <stdlib.h>

int isBit(int nro, int bit)
{
	int mask, test;
	mask = ~(1 << bit);
	test = nro | mask;
	if (mask == test)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main(int argc, char *argv[])
{
	int n, b;
	printf("Digite um numero inteiro\n");
	printf("Numero: ");
	scanf_s("%d", &n);
	do
	{
		printf("\nDigite uma posicao de bit do numero para ser verificar se eh 1:\n");
		printf("Posicao: ");
		scanf_s("%d", &b);
		if ((b < 0) || (b > 31))
		{
			printf("\n Numero invalido. Digite entre 0 e 31\n");
		}
	} while ((b < 0) || (b > 31));
	printf("\nBit do numero na posicao: %d esta com valor 1: ", b);
	isBit(n, b) == 0 ? printf("FALSO\n") : printf("VERDADEIRO\n");



	system("PAUSE");
	return 0;

}
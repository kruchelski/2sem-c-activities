#include <stdio.h>
#include <stdlib.h>

int resetBit(int nro, int bit)
{
	nro &= ~(1 << bit);
	return nro;
}

int main(int argc, char *argv[])
{
	int n, b;
	printf("Digite um numero inteiro\n");
	printf("Numero: ");
	scanf_s("%d", &n);
	do
	{
		printf("\nDigite uma posicao de bit do numero para ser setada como 0:\n");
		printf("Posicao: ");
		scanf_s("%d", &b);
		if ((b < 0) || (b > 31))
		{
			printf("\n Numero invalido. Digite entre 0 e 31\n");
		}
	} while ((b < 0) || (b > 31));
	printf("\n Numero com bit setado em 1 eh: %d\n", resetBit(n, b));



	system("PAUSE");
	return 0;

}
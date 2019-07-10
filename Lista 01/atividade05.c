#include <stdio.h>
#include <stdlib.h>

int getN()
{
	int n, op = 1;
	
	do
	{
		printf("N (maior ou igual a 1) = ");
		scanf_s("%d", &n);
		printf("\n");
		if (n < 1)
		{
			printf("NUMERO INCORRETO. \n ");
			printf("Deseja digitar outro numero ou encerrar? \n");
			do
			{
				printf("0 para encerrar \n");
				printf("1 para digitar novamente\n");
				printf("Opcao: ");
				scanf_s("%d", &op);
				if ((op < 0) && (op > 1))
				{
					printf("\nOpcao invalida. Digite novamente. \n\n");
				}
			} while ((op < 0) && (op > 1));

			printf("\n");
		}
	} while ((n < 1) && (op == 1));

	if (op == 0)
	{
		return 0;
	}
	else
	{
		return n;
	}

}

void printfibo()
{
	int N, x1 = 0, x2 = 0, x3 = 1, i, j;

	printf("Digite um numero N para mostrar os N termos da sequencia Fibonacci \n");
	N = getN();

	if (N == 0)
	{
		printf("\nENCERRANDO....\n\n");
	}
	else
	{
		printf("TERMO    | NUMERO FIBONACCI \n");
		for (i = 1; i <= N; i++)
		{
			printf("%d\t | %d\n", i, x2);
			x1 = x2;
			x2 = x3;
			x3 = x2 + x1;
		}
	}
}

int main(int argc, char *argv[])
{
	printfibo();

	system("PAUSE");
	return 0;
}
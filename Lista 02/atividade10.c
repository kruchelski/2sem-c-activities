#include <stdio.h>
#include <stdlib.h>

/*E10) Fa�a um programa que leia uma lista de n�meros inteiros terminados por 0, para cada
n�mero lido o programa deve informar o n�mero e se o n�mero � par ou �mpar.N�o utilize
vetores / matrizes.*/

void listanum()
{
	int x;

	do 
	{
		printf("Numero: ");
		scanf_s("%d", &x);
		printf("\n");
		printf("%d\n", x);
		if (x == 0)
		{
			printf("ENCERRANDO....");
		}
		else
		{
			printf("Numero digitado eh: %d \t|E ele eh ", x);
			if ((x % 2) == 0)
			{
				printf("PAR!\n\n");
			}
			else
			{
				printf("IMPAR!\n\n");
			}
		}
	} while (x != 0);
	

}

int main(int argc, char *argv[])
{
	printf("DIGITE NUMEROS. ENCERRE DIGITANDO 0 (ZERO)\n\n");
	listanum();

	system("PAUSE");
	return 0;
}
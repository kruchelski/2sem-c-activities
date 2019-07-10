#include <stdio.h>
#include <stdlib.h>

void ordena(int *vt, int tot)
{
	int troca = 0, j, aux;

	do
	{
		tot = tot - 1;
		troca = 0;
		for (j = 0; j < tot; j++)
		{
			if (vt[j] > vt[j + 1])
			{
				aux = vt[j];
				vt[j] = vt[j + 1];
				vt[j + 1] = aux;
				troca = 1;
			}
		}
	} while (troca == 1);
}

int main(int argc, char *argv[])
{
	int vet[3];
	int i;
	printf("Digite 3 numeros que depois serao ordenados");
	for (i = 0; i < 3; i++)
	{
		printf("\nNumero: ");
		scanf_s("%d", &vet[i]);
	}
	printf("\n\nNumeros digitados:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t%d", vet[i]);
	}
	printf("\nVALOR DE i: %d\n", i);
	
	ordena(vet, i);

	printf("\n\nNumeros digitados e ordenados:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t%d", vet[i]);
	}

	printf("\n\n");
	system("PAUSE");
	
	return 0;
}


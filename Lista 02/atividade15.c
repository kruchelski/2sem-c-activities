#include <stdio.h>
#include <stdlib.h>

void ordena(int *i, int *j)
{
	int aux = 0, iaux, jaux;
	iaux = *i;
	jaux = *j;
	if (iaux < 0)
	{
		iaux = iaux * (-1);
	}
	if (jaux < 0)
	{
		jaux = jaux * (-1);
	}
	if (jaux > iaux)
	{
		aux = *i;
		*i = *j;
		*j = aux;
	}

}

int maxdiv(int a, int b)
{
	int i;

	if (a < 0)
	{
		a = a * (-1);
	}
	if (b < 0)
	{
		b = b * (-1);
	}
	for (i = b; i > 1; i--)
	{
		if (((b % i) == 0) && ((a % i) == 0))
		{
			return i;
			break;
		}
	}
	return 0;
}



int main(int argc, char *argv[])
{
	int x, y, MDC;
	printf("Digite 2 numeros para achar o maior divisor comum: \n");
	printf("Numero 1: ");
	scanf_s("%d", &x);
	printf("Numero 2: ");
	scanf_s("%d", &y);
	if ((x == 0) || (y == 0))
	{
		printf("Numero digitado invalido. Encerrando...\n");
	}
	else
	{
		ordena(&x, &y);
		printf("\nX = %d\nY = %d\n", x, y);
		MDC = maxdiv(x, y);
		printf("\nO MDC entre os numeros %d e %d eh: ", x, y);
		if (MDC == 0)
		{
			printf("INEXISTENTE\n");
		}
		else
		{
			if ((MDC > x) && (MDC > y))
			{
				MDC = MDC * (-1);
			}
			printf("%d\n", MDC);
		}
	}
	system("PAUSE");
	return 0;

}
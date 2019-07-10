#include <stdio.h>
#include <stdlib.h>

void potencia(int b, int e)
{
	long long int i = 1;
	int j;
	double f;

	if (e >= 0)
	{
		for (j = e; j > 0; j--)
		{
			i = b * i;
		}
		printf("O valor de %d elevado a %d eh: %lld\n\n", b, e, i);
	}
	else
	{
		e = e * (-1);
		for (j = e; j > 0; j--)
		{
			i = b * i;
		}
		f = 1 / (double)i;
		printf("O valor e %d elevado a -%d eh: 1/%lld = %.3lf\n\n", b, e, i, f);
	}
}

int main(int argc, char *argv[])
{
	int base, expo;

	printf("CALCULO DE POTENCIA\n");
	printf("Digite o valor da base: ");
	scanf_s("%d", &base);
	printf("Digite o valor do expoente: ");
	scanf_s("%d", &expo);

	potencia(base, expo);

	system("PAUSE");
	return 0;
}
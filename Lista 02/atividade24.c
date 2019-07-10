#include <stdio.h>
#include <stdlib.h>

int arredonda(double x)
{
	int inteiro;
	double resto;

	inteiro = (int)x / 1;
	resto = x - inteiro;
	
	if (resto <= 0.5)
	{
		return inteiro;
	}
	else
	{
		return (inteiro + 1);
	}
}

int main(int argc, char *argv[])
{
	double n;
	printf("Digite um numero float:\n");
	printf("Numero: ");
	scanf_s("%lf", &n);
	printf("\n\nO numero %.10lf arredondado fica: %d\n\n", n, arredonda(n));

	system("PAUSE");
	return 0;
}
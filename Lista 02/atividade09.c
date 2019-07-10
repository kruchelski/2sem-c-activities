#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void separasemfmod(float x)
{
	int inteiro;
	float resto;

	inteiro = (int)x / 1;
	resto = x - inteiro;

	printf("CALCULOS SEM O fmod:\n");
	printf("Parte inteira: %d\n", inteiro);
	printf("Parte fracionario: %.2f\n\n", resto);
}

void separacomfmod(float x)
{
	int inteiro;
	float resto;

	inteiro = (int)x / 1;
	resto = fmod(x, 1);

	printf("CALCULOS COM O fmod:\n");
	printf("Parte inteira: %d\n", inteiro);
	printf("Parte fracionario: %.2f\n", resto);
}

int main()
{
	float x;

	printf("DIGITE UM NUMERO COM CASAS DECIMAIS. NA SEQUENCIA SERAO MOSTRADAS SUAS PARTES SEPARADAS\n");
	printf("Numero: ");
	scanf_s("%f", &x);
	separasemfmod(x);
	separacomfmod(x);

	system("PAUSE");
	return 0;
}

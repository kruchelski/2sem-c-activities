#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void coeficiente(float *a, float *b, float *c)
{
	printf("Digite o coeficiente A: ");
	scanf_s("%f", a);
	printf("\nDigite o coeficiente B: ");
	scanf_s("%f", b);
	printf("\nDigite o coeficiente de C: ");
	scanf_s("%f", c);
}

void bhaskara(float a, float b, float c)
{
	float d, x1, x2, k;
	if (a == 0)
	{
		printf("Nao eh uma equacao de segundo grau\n");
		printf("Encerrando...\n");
	}
	else
	{
		d = (pow(b, 2)) - 4 * a * c;
		printf("Valor de delta: %.2f\n", d);
		if (d > 0)
		{
			printf("Delta maior que 0, duas raizes distintas:\n");
			x1 = (((-1) * b) + sqrt(d)) / (2 * a);
			x2 = (((-1) * b) - sqrt(d)) / (2 * a);
			printf("Raiz 1 = %.2f\n", x1);
			printf("Raiz 2 = %.2f\n", x2);
		}
		else if (d == 0)
		{
			printf("Delta igual a 0, duas raizes iguais:\n");
			x1 = (((-1) * b) + sqrt(d)) / (2 * a);
			printf("Raiz 1 = Raiz 2 = %.2f\n", x1);
		}
		else
		{
			printf("Delta negativo. Raizes complexas:\n");
			d = d * (-1);
			k = (sqrt(d)) / (2 * a);
			x1 = ((-1) * b) / (2 * a);
			printf("Raiz 1 = %.2f + %.2fi\n", x1, k);
			printf("Raiz 2 = %.2f - %.2fi\n", x1, k);
		}
	}


}

int main(int argc, char *argv[])
{
	float a, b, c;
	coeficiente(&a, &b, &c);
	bhaskara(a, b, c);

	system("PAUSE");
	return 0;
}
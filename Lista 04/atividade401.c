#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct _PONTO {
	double x, y;
};

typedef struct _PONTO PONTO;

double distancia2d(PONTO *a, PONTO *b)
{
	double x, y;
	x = b->x - a->x;
	y = b->y - a->y;
	x = pow(x, 2);
	y = pow(y, 2);
	return sqrt(x + y);
}

void escreve(PONTO *a, PONTO *b)
{
	printf("Digite os valores do ponto p1\n");
	printf("P1/ x: ");
	scanf("%lf", &a->x);
	printf("P1/ y: ");
	scanf("%lf", &a->y);
	printf("\n\nDigite os valores do ponto p2\n");
	printf("P2/ x: ");
	scanf("%lf", &b->x);
	printf("P2/ y: ");
	scanf("%lf", &b->y);
}

int main(int argc, char *argv[])
{
	PONTO p1, p2;
	printf("Digite dois pontos:\n");
	escreve(&p1, &p2);
	printf("\nA distancia entre os pontos eh: %.3lf\n", distancia2d(&p1, &p2));
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void aloca(float **v, int n) {
	*v = (float *)malloc(sizeof(float) * n);
}

int main(int argc, char *argv[]) {
	float *v = NULL;
	int n, i;
	printf("%p\n", v);
	printf("Informe um numero de posicoes para o vetor:\n");
	printf(">>");
	scanf("%d", &n);

	//aloca(&v, n);
	v = (float*) malloc(sizeof(float) * n);
	printf("%p\n", v);

	for (i = 0; i < n; i++ ) {
		v[i] = 1.5 * i;
	}
	printf("Valores do vetor alocado:\n");
	for (i = 0; i < n; i++) {
		printf("%f\n", v[i]);
	}

	free(v);
	return 0;
}
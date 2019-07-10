#include <stdio.h>
#include <stdlib.h>

void imprime(int **a, int l, int c)
{
	int i, j;

	printf("Matriz normal:\n");
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz transposta:\n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%5d ", a[j][i]);
		}
		printf("\n");
	}
}

void preencheMatriz(int l, int c, int **m)
{
	int i, j, iaux, jaux;
	if ((l <= 3) && (c <= 3))
	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < c; j++)
			{
				system("clear");
				printf("Matriz ate o momento: \n\n");
				for (iaux = 0; iaux <i; iaux++)
				{
					for (jaux = 0; jaux <= (i > 0 ? c-1 : j); jaux++)
					{
						printf("%5d ", m[iaux][jaux]);
					}
					printf("\n");
				}
				printf("\n valor da posicao %d x %d : ",i+1, j+1);
				scanf("%d",&m[i][j]);
			}
		}
	}
	else
	{
		system("clear");
		printf("Matriz sera preenchida automaticamente\n");
		printf("Preenchimento ocorrera da seguinte forma:\n");
		printf("a[i][j] = i x j\n");
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < c; j++)
			{
				m[i][j] = (i + 1) * (j + 1);
			}
		}
	}
}

int** alocarMatriz(int l,int c)
{ 
  int i, j;
 
  int **m = (int**)malloc(l * sizeof(int*));

  for (i = 0; i < l; i++)
  { 
       m[i] = (int*) malloc(c * sizeof(int)); 
       for (j = 0; j < c; j++)
       { 
            m[i][j] = 0; 
       }
  }
return m;
}

int main(int argc, char *argv[])
{
	system("clear");
	int m, n;
	int **a;
	printf("A seguir serao digitados valores para linha e coluna...\n");
	printf("Se a quantidade de linhas ou colunas for maior que 3 o programa preenchera a coluna automaticamente\n\n");
	printf("Digite um valor para as linhas: ");
	scanf("%d", &m);
	printf("\nDigite um valor para as colunas: ");
	scanf("%d", &n);
	printf("\n");
	a = alocarMatriz(m, n);
	preencheMatriz(m, n, a);
	imprime(a, m, n);

	printf("\n");
	return 0;
}
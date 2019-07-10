#include <stdio.h>
#include <stdlib.h>

void printascii()
{
	int i, j, n = 1;
	int v[17][17];

	// preencher uma matriz com os números
	for (j = 0; j <= 16; j++)
	{
		for (i = 0; i <= 16; i++)
		{
			if ((j == 0) && (i > 0))
			{
				v[i][j] = i - 1;
			}
			else if ((i == 0) && (j > 0))
			{
				v[i][j] = j - 1;
			}
			else if ((i > 0)&&(j > 0))
			{
				if (n < 32)
				{
					v[i][j] = 32;
					n++;
				}
				else
				{
					v[i][j] = n;
					n++;
				}

			}

		}
	}
	// print da tabela
	for (i = 0; i <= 16; i++)
	{
		for (j = 0; j <= 16; j++)
		{
			if ((i > 0) && (j > 0))
			{
				printf("%c ", v[i][j]);
			}
			else if ((i == 0) && (j == 0))
			{
				printf("  ");
			}
			else
			{
				printf("%X ", v[i][j]);
			}

		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	printascii();

	system("PAUSE");
	return 0;
}
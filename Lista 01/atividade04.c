#include <stdio.h>
#include <stdlib.h>

void printprimos()
{
	int i, x, j;

	printf("** Numeros primos ate 100 **\n\n");
	for (i = 2; i <= 100; i++)
	{
		x = 0;
		for (j = 1; j <= i; j++)
		{
			if (x > 2)
			{
				break;
			}
			else
			{
				if ((i % j) == 0)
				{
					x++;
				}
			}
		}
		if (x <= 2)
		{
			printf("%d\n", i);
		}
		
	}
}

int main(int argc, char *argv[])
{
	printprimos();

	system("PAUSE");
	return 0;
}
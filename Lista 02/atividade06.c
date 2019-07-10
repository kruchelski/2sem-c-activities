#include <stdio.h>
#include <stdlib.h>

void swapnum(int x, int y)
{
	printf("VARIAVEIS ANTES DO SWAP:\n");
	printf("x = %d\t| y = %d\n\n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("VARIAVEIS APOS SWAP:\n");
	printf("x = %d\t| y = %d\n\n", x, y);

}

int main()
{
	int x = 5, y = -10;

	swapnum(x, y);

	system("PAUSE");
	return 0;
}

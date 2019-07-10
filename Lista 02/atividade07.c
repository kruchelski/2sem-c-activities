#include <stdio.h>
#include <stdlib.h>

void swapbitabit(int x, int y)
{
	printf("VARIAVEIS ANTES DO SWAP: \n");
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
	x = x ^ y;
	y = y ^ x;
	x = x ^ y;
	printf("VARIAVEIS APOS O SWAP: \n");
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
}

int main(int argc, char *argv[])
{
	int x = 5, y = -10;

	swapbitabit(x, y);

	system("PAUSE");
	return 0;
}
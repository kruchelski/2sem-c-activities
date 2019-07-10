#include <stdio.h>
#include <stdlib.h>

void listatriangulo()
{
	int i, x = 0, y = 1;

	for (i = 1; i <= 15; i++)
	{
		printf("%d ", i);
		x++;
		if (x == y)
		{
			printf("\n");
			x = 0;
			y++;
		}
	}
}

int main(int argc, char *argv[])
{
	listatriangulo();

	system("PAUSE");
	return 0;
}
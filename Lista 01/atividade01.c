#include <stdio.h>
#include <stdlib.h>

void listanumeros()
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			printf("\t");
		}
		printf("%d\n",i);
	}

}

int main(int argc, char *argv[])
{
	listanumeros();
	
	system("PAUSE");
	return 0;
}
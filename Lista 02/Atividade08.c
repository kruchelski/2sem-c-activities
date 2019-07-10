#include <stdio.h>
#include <stdlib.h>

void maiornum()
{
	int i, m, mi, x;
	printf("DIGITE 10 NUMEROS INTEIROS... EM SEGUIDA SERA MOSTRADO O MAIOR.\n");

	for (i = 1; i <= 10; i++)
	{
		printf("\nNumero %d: ", i);
		scanf_s("%d", &x);
		if (i == 1)
		{
			m = x;
			mi = i;
		}
		else if (x > m)
		{
			m = x;
			mi = i;
		}
	}
	printf("O maior numero digitado foi o %d%c numero: %d\n\n", mi, 167, m);
}

int main()
{
	maiornum();

	system("PAUSE");
	return 0;
}

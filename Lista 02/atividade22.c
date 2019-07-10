#include <stdio.h>
#include <stdlib.h>

int randomize()
{
	srand(time(NULL)); // semente de rand baseado na quantidade de segundos desde 1970
	return rand() % 100;
}

void adivinha(int n)
{
	int op, i;
	for (i = 10; i > 0; i--)
	{
		printf("\n\nChance: %d --> ", i);
		scanf_s("%d", &op);
		if (n > op)
		{
			printf("\n**Chutou baixo**");
		}
		else if (n < op)
		{
			printf("\n**Chutou alto**");
		}
		else if (n == op)
		{
			break;
		}
	}
	if (n == op)
	{
		printf("\n!!PARABENS!! ACERTOU!! AEEEEE!! UHUULLL!!");
	}
	else if (n != op && i == 0)
	{
		printf("\nVISH... ERROU... DEU RUIM");
	}
	printf("\nNumero sorteado: %d\n", n);
}

int main(int argc, char *argv[])
{
	adivinha(randomize());

	system("PAUSE");
	return 0;
}
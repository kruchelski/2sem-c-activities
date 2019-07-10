#include <stdio.h>
#include <stdlib.h>

void dectobin(char *v, int n)
{
	int resto, i = 31, j = 0;
	char aux[33];
	aux[32] = '\0';
	while (n > 1)
	{
		aux[i] = (n % 2) + 48;
		n = n / 2;
		i--;

	}
	aux[i] = n + 48;
	for (i = 0; i < 32; i++)
	{
		if (aux[i] == 48 || aux[i] == 49)
		{
			v[j] = aux[i];
			j++;
		}
	}
	for (j = 0; j <= 32; j++)
	{
		if (v[j] != 48 && v[j] != 49)
		{
			v[j] = '\0';
		}
	}
}

void dectooct(int n)
{
	printf("%o\n", n);
}

void dectohex(int n)

{
	printf("%X\n", n);
}

int main(int argc, char *argv[])
{
	int num;
	char vet[33];
	printf("DIGITE UM NUMERO: ");
	scanf_s("%d", &num);
	printf("\n=========================\n");
	printf("NUMERO EM DECIMAL: %d\n", num);
	dectobin(vet, num);
	printf("NUMERO EM BINARIO: %s\n", vet);
	printf("NUMERO EM OCTAL: ");
	dectooct(num);
	printf("NUMERO EM HEXADECIMAL: ");
	dectohex(num);


	system("PAUSE");
	return 0;


}
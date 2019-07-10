#include <stdio.h>
#include <stdlib.h>

void dectobin(char *v, int n)
{
	int resto, i = 31;
	v[32] = '\0';
	while (n > 1)
	{
		v[i] = (n % 2) + 48;
		n = n / 2;
		i--;

	}
	v[i] = n + 48;
}

int main(int argc, char *argv[])
{
	int num;
	char vet[33];
	printf("DIGITE UM NUMERO: ");
	scanf_s("%d", &num);
	dectobin(vet, num);
	printf_s("\n\nNUMERO EM BINARIO: %s\n", vet);

	system("PAUSE");
	return 0;


}
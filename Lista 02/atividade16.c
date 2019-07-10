#include <stdio.h>
#include <stdlib.h>

void questa(int num)
{
	num = 0x55;
	printf("SUBQUESTAO A\n\n");
	printf("Decimal normal: %d\n", num);
	printf("Hexadecimal normal: %X\n", num);
	printf("Decimal invertido: %d\n", ~(num));
	printf("Hexadecimal invertido: %X\n", ~(num));
}

void questb(int num)
{
	num = 0x09;
	printf("\nSUBQUESTAO B\n\n");
	printf("Decimal normal: %d\n", num);
	printf("Hexadecimal normal: %X\n", num);
	printf("Decimal shift left 2: %d\n", (num << 2));
	printf("Hexadecimal shift left 2: %X\n", (num << 2));
}

void questc(int num)
{
	num = 0x09;
	printf("\nSUBQUESTAO C\n\n");
	printf("Decimal normal: %d\n", num);
	printf("Hexadecimal normal: %X\n", num);
	printf("Decimal shift right 2: %d\n", (num >> 2));
	printf("Hexadecimal shift right: %X\n", (num >> 2));
}

void questd(int num)
{
	num = 0xFF;
	printf("\nSUBQUESTAO D\n\n");
	printf("Decimal normal: %d\n", num);
	printf("Hexadecimal normal: %X\n", num);
	printf("Decimal shift right 2: %d\n", (num >> 2));
	printf("Hexadecimal shift right: %X\n", (num >> 2));
}

void queste(int num)
{
	num = 0xFF;
	printf("\nSUBQUESTAO E\n\n");
	printf("Decimal normal: %d\n", num);
	printf("Hexadecimal normal: %X\n", num);
	printf("Decimal shift left 2: %d\n", (num << 2));
	printf("Hexadecimal shift left 2: %X\n", (num << 2));
}

int main(int argc, char *argv[])
{
	int num = 0;

	questa(num);
	questb(num);
	questc(num);
	questd(num);
	queste(num);

	printf("\n");
	system("PAUSE");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void menu()
{
	char op;
	do
	{
		printf("\n====================================\n");
		printf("=               MENU               =\n");
		printf("====================================\n");
		printf("-> opcao 1\n");
		printf("-> opcao 2\n");
		printf("-> opcao 3\n");
		printf("-> opcao 4 (esta opcao encerra o programa)\n\n");
		printf("opcao: ");
		scanf_s("%c",&op);
		getchar();
		switch (op)
		{
		case '1':
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			printf("ENCERRANDO\n");
			return;
		default:
			printf("\nOPCAO INVALIDA. DIGITE NOVAMENTE\n");
			break;

		}
	} while (op != '4');
}
int main(int argc, char *argv[])
{
	menu();

	system("PAUSE");
	return 0;
}
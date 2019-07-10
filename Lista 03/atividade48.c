#include<stdio.h>
#include<stdlib.h>

void randomize(int *v){
	int i, j, n, numok, numreap;
	srand(time(NULL));
	for (i = 0; i <= 9; i++){
		//printf("numero %d\n",i + 1); // qual, dos 10 numeros esta na vez de ser sorteado
		numreap = 0;
		numok = 0;
		do{
			n = rand() % 100;
			//printf("%d ", n); //mostrar o numero que esta sendo sorteado
			if (i > 0){
				for (j = 0; j <= i; j++){
					if (n == v[j]){
						numreap = 1;
					}
				}
			}
			if (numreap != 1){
				v[i] = n;
				numok = 1;
			}

		}while(numok != 1);
	}

}

int main(int argc, char *argv[]){
	int vt[10], i;
	system("clear");
	printf("1O NUMEROS RANDOMICOS NAO REPETIDOS\n");
	printf("-----------------------------------\n\n");
	randomize(vt);
	printf("\n");
	for (i = 0; i <= 9; i++)
	{
		printf("%3d ", vt[i]);
	}
	printf("\n\n");

	return 0;
}
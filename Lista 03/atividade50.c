#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int limpaVerifica(char *s, int l){
	int i;
	if (s[2] != '/' || s[5] != '/'){
		return 2;
	}
	for (i = l; i >=0; i--){
		if (s[i] == 10 || s[i] == 13 || s[i] == 32){
			s[i] = '\0';
		}
	}
	i = 0;
	while (s[i] != '\0'){
		if (!((*s >= 48 && *s <= 57) || *s == '\0')){
			return 1;
			break;
		}
		i++;
	}
	return 0;

}

int converte(char *s){
	int soma = 0, i = 0, j = 0;
	while (s[i] != '\0'){
		i++;
	}
	i -= 1;

	while (i >= 0){
		soma += (pow(10,j) * (s[i] - 48));
		i--;
		j++;
	}
	return soma;
}

void extract(char *s, int *a, int *m, int *d){
	char an[5];
	char me[3];
	char di[3];
	int i = 0, j = 0, op = 1;

	for (i = 0; i < 2; i++){
		di[j] = s[i];
		j++;
	}
	di[j] = '\0';
	j = 0;
	
	for (i = 3; i < 5; i++){
		me[j] = s[i];
		j++;
	}
	me[j] = '\0';
	j = 0;
	
	for (i = 6; i < 10; i++){
		an[j] = s[i];
		j++;
	}
	an[j] = '\0';
	*a = converte(an);
	*m = converte(me);
	*d = converte(di);
}


int main(int argc, char *argv[]){
	char st[10];
	int ano, mes, dia, sit;

	system("clear");
	printf("Digite uma data no seguinte formato: DD/MM/AAAA\n");
	printf(">> ");
	fgets(st, 11, stdin);
	printf("\n");
	sit = limpaVerifica(st, 10);
	if (sit == 1){
		printf("Erro de digitação. Encerrando...\n");
		exit(0);
	}
	else if (sit == 2){
		printf("Separadores em lugar errado. Encerrando...\n");
		exit(0);
	}
	else{
		extract(st, &ano, &mes, &dia);
		printf("\nO QUE FOI ORIGINALMENTE DIGITADO:\n");
		printf("$ %s\n\n", st);
		printf("CONVERTIDOS PARA INT:\n");
		printf("$ Dia: %d\n", dia);
		printf("$ Mes: %d\n", mes);
		printf("$ Ano: %d\n", ano);
		printf("\n");
	}
	return 0;
}

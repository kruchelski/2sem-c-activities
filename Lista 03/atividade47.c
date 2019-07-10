#include<stdio.h>
#include<stdlib.h>

void maiorPalavra(char *s){
	int i = 0, l = 0, lmaior = 0, p = 0, pmaior = 0;

	while (s[i] != '\0'){
		p = i;
		l = 0;
		while ((s[i] != 32) && (s[i] != '\0'))
		{
			l++;
			i++;
		}
		if (l > lmaior)
		{
			lmaior = l;
			pmaior = p;
		}
		i++;
	}
	printf("A maior palavra possui tamanho %d\n\n", lmaior);
	printf("e eh: ");
	for (i = pmaior; i <= (pmaior + lmaior); i++){
		printf("%c", s[i]);
	}
	printf("\n\n");
}

void limpastring(char s[], int max)
{
  int i;
  for (i = max; i >= 0; i--)
  {
    if (s[i] == 10 || s[i] == 13)
    {
      s[i] = '\0';
    }
  }
}

void escreve(char s[], int max)
{
  fgets(s, max, stdin);
  limpastring(s, max-1);
}

int main(int argc, char *argv[]){
	char st[201];
	system("clear");

	printf("Escreva uma frase:\n");
	printf(">> ");
	escreve(st, 201);
	maiorPalavra(st);

	return 0;
}
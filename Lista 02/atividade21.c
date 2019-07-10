#include <stdio.h>
#include <stdlib.h>

void digita(int *h1, int *m1, int *s1, int *h2, int *m2, int *s2)
{
	do
	{
		printf("HA: ");
		scanf_s("%d", h1);
		if (*h1 < 0 || *h1 > 23)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*h1 < 0 || *h1 > 23);
	
	do
	{
		printf("\nMA: ");
		scanf_s("%d", m1);
		if (*m1 < 0 || *m1 > 59)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*m1 < 0 || *m1 > 59);

	do
	{
		printf("\nSA: ");
		scanf_s("%d", s1);
		if (*s1 < 0 || *s1 > 59)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*s1 < 0 || *s1 > 59);

	do
	{
		printf("\nHB: ");
		scanf_s("%d", h2);
		if (*h2 < 0 || *h2 > 23)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*h2 < 0 || *h2 > 23);

	do
	{
		printf("\nMB: ");
		scanf_s("%d", m2);
		if (*m2 < 0 || *m2 > 59)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*m2 < 0 || *m2 > 59);

	do
	{
		printf("\nSB: ");
		scanf_s("%d", s2);
		if (*s2 < 0 || *s2 > 59)
		{
			printf("Valor invalido, digite novamente\n");
			system("PAUSE");
		}
	} while (*s2 < 0 || *s2 > 59);
}

void compara(int h1, int m1, int s1, int h2, int m2, int s2)
{
	int aux, hr, mr, sr;

	if (h1 > h2)
	{
		aux = h2;
		h2 = h1;
		h1 = aux;
		aux = m2;
		m2 = m1;
		m1 = aux;
		aux = s2;
		s2 = s1;
		s1 = aux;
	}
	else if (h1 == h2)
	{
		if (m1 > m2)
		{
			aux = m2;
			m2 = m1;
			m1 = aux;
			aux = s2;
			s2 = s1;
			s1 = aux;
		}
		else if (m1 == m2)
		{
			if (s1 > s2)
			{
				aux = s2;
				s2 = s1;
				s1 = aux;
			}
		}
	}

	hr = h2 - h1;
	mr = m2 - m1;
	sr = s2 - s1;

	if (sr < 0)
	{
		sr = 60 + sr;
		mr = mr - 1;
	}
	if (mr < 0)
	{
		mr = 60 + mr;
		hr = hr - 1;
	}
	printf("\nVALORES DIGITADOS: %2dh%2dm%2ds e %2dh%2dm%2ds\n", h1, m1, s1, h2, m2, s2);
	printf("VALOR RESULTANTE: %2dh%2dm%2ds\n\n", hr, mr, sr);
}




int main(int argc, char *argv[])
{
	int ha, ma, sa, hb, mb, sb;
	printf("DIGITE DOIS CONJUNTOS DE HORARIOS (HH:MM:SS)\n\n");
	digita(&ha, &ma, &sa, &hb, &mb, &sb);
	compara(ha, ma, sa, hb, mb, sb);

	system("PAUSE");
	return 0;

}
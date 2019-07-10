#include<stdio.h>
#include<stdlib.h>

void limpastring(char s[], int max)
{
  int i;
  for (i = max-1; i >= 0; i--)
  {
    if (s[i] == 10 || s[i] == 13 || s[i] == 32)
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

void contasimb(char s[], int asc[])
{
  int i;

  for (i = 0; i <= 255; i++)
  {
    asc[i] = 0;
  }
  i = 0;
  while (s[i] != '\0')
  {
    asc[s[i]] += 1;
    i++;
  }
}

  int compara(int a1[], int a2[])
  {
    int i, ctrl = 0;
    for (i = 0; i <=255; i++)
    {
      if (a1[i] != a2[i])
      {
        ctrl = 1;
        break;
      }
      else
      {
        ctrl = 0;
      }
    }
    return ctrl;
  }

  int main (int argc, char *argv[])
  {
    system("clear");
    char s1[81], s2[81];
    int asc1[256], asc2[256];
    printf("AVISO: para este programa, sao validas apenas palavras...\n");
    printf("Qualquer coisa a mais sera desconsiderada.\n\n");
    printf("Escreva a primeira palavra\n");
    escreve(s1, 81);
    printf("Escreva a segunda palavra\n");
    escreve(s2, 81);
    printf("\nPALAVRAS DIGITADAS:\n");
    printf("Palavra 1: %s\n", s1);
    printf("Palavra 2: %s\n", s2);
    contasimb(s1, asc1);
    contasimb(s2, asc2);
    printf("%s\n", (compara(asc1, asc2) == 0 ? "Sao anagramas" : "Nao sao anagramas"));

    return 0;

  }
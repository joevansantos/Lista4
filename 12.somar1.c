#include <stdio.h>

char palavra[50];
int i;


void ler()
{
  printf("digite uma palavra no maximo 50 letras:");
  gets(palavra);
}


void calcule()
{
    for (i = 0;i < strlen(palavra);i++)
    {
        printf("\n%d",palavra[i] + 1);
    }
}

int main()
{
  ler();
  calcule();
  return 0;
}

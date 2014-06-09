#include <stdio.h>

char palavra[100];
int i;

void ler()
{
  printf ("Digite uma palavra:");
  gets (palavra);
}


void imprime()
{
    for (i= 0;i < 4;i++)
    {
        printf("%c",palavra[i]);
    }
}


int main()
{
    ler();
    imprime();
    return 0;
}

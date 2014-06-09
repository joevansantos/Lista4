
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
    i = strlen(palavra);
    printf("O tamanho da palavra e:%d",i);
}


int main()
{
    ler();
    imprime();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int i,tam ; char n[15],n2[15];

void ler()
{
    printf("Digite um nome de no maximo 15 letras:");
    gets(n);
}


void calcule()
{
    strcpy (n2, n);
    tam = strlen(n2);
}


void imprime()
{
    printf("A string antiga e:%s",n);
    printf("\nA string nova ao contrario e:");
    for (i = tam;i > 0 - 1;i--)
    {
       printf("%c",n2[i]);
    }
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}


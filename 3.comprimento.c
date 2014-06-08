#include <stdio.h>

int tamanho; char palavra[80];


void ler()
{
  printf("Digite uma palavra:");
    gets(palavra);
}


void calcule()
{
  tamanho = strlen(palavra);
}


void imprime()
{
  printf("%d",tamanho);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}

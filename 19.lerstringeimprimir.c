#include <stdio.h>

char n[30];

void ler()
{
    printf("Digite uma palavra:");
    gets(n);
}


void imprime()
{
   printf("%s",n);
}

int main()
{
  ler();
  imprime();
  return 0;
}

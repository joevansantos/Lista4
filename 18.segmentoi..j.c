#include <stdio.h>

char n[30]; int i,j;

void ler()
{
    printf("Digite uma palavra:");
    gets(n);
    printf("Digite um numero:");
    scanf("%d",&i);
    printf("Digite outro numero maior:");
    scanf("%d",&j);
}


void calcule()
{

}


void imprime()
{
   while  (i < j)
   {
      printf("%c",n[i]);
      i++;
    }
}

int main()
{
  ler();
  imprime();
  return 0;
}

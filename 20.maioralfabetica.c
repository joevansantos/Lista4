#include <stdio.h>

char n[30],n2[30];
int menor,maior,i = 0;

void ler()
{
    printf("Digite uma palavra:");
    scanf("%s",&n);
    printf("Digite uma palavra:");
    scanf("%s",&n2);
}


void calcule()
{
    if (strlen(n) < strlen(n2))
    {
       menor = strlen(n);
       maior = strlen(n2);
    }

    if (strlen(n2) < strlen(n))
    {
      menor = strlen(n2);
      maior = strlen(n);
    }

    if (strlen(n2) ==  strlen(n))
    {
      maior = strlen(n);
    }
}


void imprime()
{
    while (i < menor )
    {

      if (n[i] > n2[i])
      {
         printf("A maior letra esta na primeira string!");
         i = maior + 1;
      }
      if (n[i] < n2[i])
      {
         printf("A maior letra esta na segunda string!");
         i = maior + 1;
      }
     if (n[i] == n2[i])
      {
         i++;
      }
      if (i == menor )
      {
        printf("As letras sao iguais");
      }


    }
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}

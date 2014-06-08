#include <stdio.h>

char n[30],letra;
int i,s=0,j;

void ler()
{
  printf("Digite uma palavra:");
  gets(n);
  printf("Digite um caracter:");
  scanf("%c",&letra);
  printf("Digite uma posicao:");
  scanf("%d",&i);
  j=i;
}


void calcule()
{
    while (i < strlen(n))
    {
        if (n[i] == letra)
        {
            printf("A posicao e :%c",n[i]);
            i = strlen(n) + 1;
        }

     else

        {
          i++;
        }
     }

}


void imprime()
{
    if (i == strlen(n))
    {
        while (s < j)
        {
          if (n[s] == letra)
          {
            printf("A posicao e:%c",n[s]);
          }
          s++;
       }

    }

    if (s == j)
    {
        printf("A letra nao se encontra!!");
    }
}

int main()
{
  ler();
  calcule();
  return 0;
}



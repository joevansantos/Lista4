#include <stdio.h>
#include <stdlib.h>

int i,j;
char n[80],char letra,char n2[80];

void ler()
{
    printf("Digite uma palavra:");
    gets(n);
    printf("Digite um caracter:");
    scanf("%c",&letra);
}


void calcule()
{
    for (i = 0;i < strlen(n);i++)
    {
      j = i;
      if (n[j] == letra)
      {
         while (j < strlen(n))
         {
           s  = j + 1;
           n[j] = n[s];
           j++;
         }
       }

    }
}




void imprime()
{
    strcpy(n2,n);
    printf("A string antiga e:%s",n2);
    printf("\nA nova string sem caracter:%s",n);

}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}




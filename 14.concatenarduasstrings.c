#include <stdio.h>

char s1[30],s2[30],s[30]; int tam,i,j,tam2,n = 0;


void ler()
{
    printf("Digite uma palavra:");
    gets(s1);
    printf("Digite outra palavra:");
    gets(s2);
    tam = strlen(s1);
}


void calcule()
{
    for (i = 0;i < tam;i++)
    {
        s[i] = s1[i] ;
    }
        tam2 = strlen(s2);


    s[i] = ' ';

}


void calcule2()
{
    for (j = tam + 1 ;j < tam + tam2  + 2 ;j++)
    {
        s[j] = s2[n];
        i++;
        n++;
    }
}


void imprime()
{
    printf("%s",s);
}


int main()
{
  ler();
  calcule();
  calcule2();
  imprime();
  return 0;
}


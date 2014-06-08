#include <stdio.h>
#include <stdlib.h>

int i,j;char frase[30],frase2[30];

void ler()
{
  printf("Digite uma frase:") ;
  gets(frase);
  printf("Digite outra frase:") ;
  gets(frase2);
}


void imprime()
{
 for (i = strlen(frase); i > 0 - 1 ; i--)
    {
        if (frase[i] == 'a' )
        {
            frase[i] = '*';
        }
        printf("%c",frase[i]) ;

    }
        printf("\n");

}

void imprime2()
{

    for (j = strlen(frase2); j > 0 - 1 ; j--)
    {
        if (frase[j] == 'a' )
        {
            frase[j] = '*';
        }
        printf("%c",frase2[j]) ;
    }
}
int main()
{
  ler();
  imprime();
  imprime2();
  return 0;
}


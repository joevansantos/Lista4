#include <stdio.h>

char palavra[100],letras[] = {'a','e','i','o','u'};
int i,cont = 0;

void ler()
{
  printf ("Digite uma palavra:");
  gets (palavra);
}


void calcule()
{
    for (i = 0;i < strlen(palavra);i++)
    {
      if (palavra[i] == letras[0] )
        {
        cont = cont + 1;
        }
    }

}

void imprime()
{
    printf("%d",cont);
}

int main()
{
    ler();
    calcule();
    imprime();
    return 0;
}


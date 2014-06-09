#include <stdio.h>

char palavra[100],letras[] = {'a','A'};

void ler()
{
  printf ("Digite uma palavra:");
  gets (palavra);
}


void imprime()
{
    if (palavra[0] == letras[0] || palavra[0] == letras[1]  )
    {
        printf("\n%s",palavra);
    }
}


int main()
{
    ler();
    imprime();
    return 0;
}


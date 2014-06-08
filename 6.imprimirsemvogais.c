#include <stdio.h>

char nome[30] ,vog[] = {'a','b'};
int i = 0;

void ler()
{
    printf("Digite uma palavra:");
    gets (nome);

}


void calcule()
{
   while (i < strlen(nome))

    {
        if (nome[i] == 'a' || nome[i] == 'e')
        {
            nome[i] = ' ' ;
            i++;
        }
    }
}


void imprime()
{
  printf("%s",nome);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}


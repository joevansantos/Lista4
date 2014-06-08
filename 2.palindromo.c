#include <stdio.h>

char palavra[80];int i = 0,j;


void leia()
{
  printf("Digite uma palavra:");
  gets(palavra);
}


void calcule()
{
  j = strlen(palavra);
}


void imprime()

{
  while (i < j)
    {
     if (palavra[i] == palavra[j] )
        {
            i++;
            j--;
        }

      else
         {
            i = j + 1;
            printf("nao e um palindromo");
         }
      }

        if(i == j)
        {
          printf("e um palindromo");
        }

}


int main()
{
  leia();
  calcule();
  imprime();
  return 0;
}

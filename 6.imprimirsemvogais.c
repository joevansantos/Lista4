#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, lenv; char frase[100], vogais[] = "aeiouAEIOU";

void ler ()
{
   lenv = strlen(vogais);
   printf("Digite uma frase:");
   gets(frase);
   printf("\n");
}

void calcule()
{
  for (i = 0; i < strlen(frase); i++)
    {

        for (j = 0; j < lenv; j++)
            if (frase[i] == vogais[j])
                break;

        if (j == lenv)
            printf("%c", frase[i]);
    }

}

int main()
{
  ler();
  calcule();
  return 0;

}

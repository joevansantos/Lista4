#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, lenv; char frase[100], branco[] = " ";

void ler ()
{
   printf("Digite uma frase:");
   gets(frase);
   printf("\n");
}

void calcule()
{
    for (i = 0; i < strlen(frase); i++)
    {
        for (j = 0; j < strlen(frase) ; j++)
            if (frase[i] == branco[0])
                break;

        if (j == strlen(frase))
            printf("%c", frase[i]);
    }

}

int main()
{
  ler();
  calcule();
  return 0;

}

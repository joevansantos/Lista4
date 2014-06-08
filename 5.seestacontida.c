#include <stdio.h>

int tamanho,tamanho2,i = 0,j;char palavra[80],n[80];

void ler()
{
  printf("Digite uma palavra:");
  scanf("%s",&palavra);
  printf("Digite uma palavra:");
  scanf("%s",&n);
}


void calcule()
{
 tamanho = strlen(palavra);
 tamanho2 = strlen(n);
 j = tamanho2;
}


void imprime()
{
 while (i < tamanho2)
 {
   if(palavra[tamanho] == n[j])
   {
      i++;
      tamanho--;
      j--;
   }

   else
   {
      i = 10;
   }
 }

   if(i == tamanho2)
   {
     printf(" esta contido");
   }
    else
   {
     printf("nao esta contido");
    }

}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}

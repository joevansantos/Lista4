#include <stdio.h>

char palavra[30];
int tamanho,i;

void leia()
{
   printf("Digite uma palavra:");
   gets(palavra);
   printf("Digite quanto vai se passar a frente:");
   scanf("%d",&tamanho);
}


void calcule()
{
  for(i = 0;i < strlen(palavra);i++ )
  {
      palavra[i] = palavra[i] + tamanho;
  }
}


void imprime()
{
  printf("%s",palavra);
}

int main()
{
  leia();
  calcule();
  imprime();
  return 0;
}

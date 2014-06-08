#include <stdio.h>

char string[20];


void ler()
{
    printf("Entre com a string :");
    scanf("%s",&string);
    printf("\n");
}


void imprime()
{
    printf("string digitada : %s\n",string);
    printf("\n");
    printf("Convertendo para maiúsculas : %s\n",strupr(string));
}

int main()
{
  ler();
  imprime();
  return 0;
}

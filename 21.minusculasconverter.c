#include <string.h>
#include <stdio.h>

char string[20];

void ler()
{
    printf("Entre com a string :");
    scanf("%s",&string);
}


void imprime()
{
    printf("string digitada : %s\n",string);
    printf("\n");
    printf("Convertendo para minúsculas : %s\n",strlwr(string));

}

int main()
{
  ler();
  imprime();
  return 0;
}

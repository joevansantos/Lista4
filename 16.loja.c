#include <stdio.h>

char n[30]; float valor,desconto;


void ler()
{
    printf("Digite o nome da mercadoria:");
    gets(n);
    printf("Digite o valor da mercadoria:");
    scanf("%f",&valor);
}


void calcule()
{
  desconto = valor * 0.10;
  printf("O nome da mercadoria e: %s",n);
  printf("\nO valor da mercadoria e: %.f.00",valor);
  printf("\nO valor do desconto da mercadoria: %.f.00",desconto);
  printf("\nO valor a ser pago pela mercadoria: %.f.00",valor - desconto);
}



int main()
{
  ler();
  calcule();
  return 0;
}


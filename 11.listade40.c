#include <stdio.h>

char lista[40];int i = 0,escolha[40];


void calcule()

{

    while (i < 40)
    {
        printf("Digite um nome de um aluno:");
        scanf("%s",&lista[i]);
        printf("Deseja colocar mais um nome?");
        printf("\n 1-Se deseja colocar\n 2-Se não deseja colocar...");
        scanf("%d",&escolha[i]);
        if (escolha[i] == 1)
        {
           i++;
        }

        if (escolha [i] == 2)
        {
           i = 41;
        }

    }
}


void imprime()
{
  printf("%s",lista);
}

int main()
{
  calcule();
  imprime();
  return 0;
}

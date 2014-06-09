#include <stdio.h>

int i,j,mat[5],cod[5],nota1[5],nota2[5];
char nome[5];

void ler()
{
    for(i = 0;i < 5;i++)
    {
        printf("Digite o nome do aluno:");
        scanf("%s",&nome[i]);
        printf("Digite o matricula:");
        scanf("%d",&mat[i]);
        printf("Digite o codigo:");
        scanf("%d",&cod[i]);
        printf("Digite a primeira nota:");
        scanf("%d",&nota1[i]);
        printf("Digite a segunda nota:");
        scanf("%d",&nota2[i]);
        printf("\n");

    }
}

void imprime()
{
  for(j = 0;j < 5;j++)
    {
        printf("\nnome do aluno:%s",nome[j]);
        printf("\nmatricula:%d",mat[j]);
        printf("\ncodigo:%d",cod[j]);
        printf("\nnota primeira:%d",nota1[j]);
        printf("\nsegunda nota:%d",nota2[j]);
        printf("\n");

    }
}


int main()
{
    ler();
    imprime();
    return 0;
}

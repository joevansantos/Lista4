#include <stdio.h>

int main()

{

    char nome[30],sexo;
    int idade;

    printf("Digite um nome:");
    gets(nome);
    printf("\nDigite o sexo:");
    scanf("%c",&sexo);
    printf("\nDigite a idade:");
    scanf("%d",&idade);

    if ((sexo == 'f') && (idade < 25) )
    {
        printf("%c",nome);
        printf("Aceita!!");
    }

    else
    {
        printf("Nao aceita!!");
    }


     return 0;
}

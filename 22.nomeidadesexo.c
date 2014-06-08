#include <stdio.h>

int main()
{
    char nome[30],sexo;
    int idade;


    printf("Digite um nome:");
    gets(nome);
        printf("Digite o sexo:");
            scanf("%c",&sexo);

            if (sexo != 'm' && sexo != 'f'` )
            {
                while ( (sexo != 'm') `&& (sexo != 'f') )
                {
                    printf("Digite o sexo novamente:");
                    scanf("%c",&sexo);
                }
            }

        else
        {
           printf("Digite a idade:");
           scanf("%d",&idade);
            if (idade < 0 && idade > 150)
            {
                while (idade < 0 && idade > 150)
                {
                    printf("Digite a idade novamente:");
                    scanf("%d",&idade);
                }
            }

        }


                    printf("%s",nome);
                    printf(",esta habilitado a dirigir do sexo %c",sexo );


     return 0;

}


#include <stdio.h>

int main()
{
    char nome[30];
    int i;

        printf("Digite um nome:");
        gets(nome);

            for (i = 0;i < 4;i++ )
            {
                printf("%c",nome[i]);
            }
    return 0;
}

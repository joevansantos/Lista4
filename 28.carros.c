#include <stdio.h>
#include <stdlib.h>


int main()

{
    int combust[5],i,j = 0,k = 0;
    char vet[5];
    {
        for(i = 0;i < 5;i++ )
        {
            printf("Digite um carro:");
            scanf(" %s ", &vet[i]);
        }

            while (j < 5)
            {
                printf("Digite o consumo:" );
                scanf(" %d ", &combust[j]);
                j++;
             }

                    while (k < 5)
                    {
                        printf(" %c ",vet[k]);
                        k++;
                    }



    }



    return 0;
}

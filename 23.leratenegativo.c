#include <stdio.h>
#include <stdlib.h>

int main()

{
    int idade[30],i ,p = 0;
    char nome[30],maior[30],string;


            while (p < 40 )
            {

                printf("Digite a idade:");
                    scanf("%d",&idade[p]);
                        if (idade[p] < 0)
                        {
                          for (i = 0;i < strlen(nome);i++ )
                              {
                                  printf("%d",idade[i]);
                                  printf("%s",nome[i]);
                              }
                              system("pause");
                        }

                            else

                            {
                                printf("Digite um nome:");
                                scanf("%s", &nome[p]);
                                p++;
                            }


            }


return 0;
}





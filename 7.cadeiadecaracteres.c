#include <stdio.h>
#include <stdlib.h>

int main()

{
    char a[80],b[80];
    printf("Digite uma palavra:");
    gets(a);
    printf("Digite outra palavra:");
    gets(b);
    calcule(a,b);
    return 0;

}


 int calcule(char c[80],char d[80])

 {
   int i = 0,n,cont = 0,j = 0,k;

    n = strlen(c);
    k = strlen(d);

    while(i < n)
    {
        if ( c[i] == d[j] )
        {
            i++;
            j++;
        }

        else
        {
            i++;
            j = 0;
        }

        if (j == k)
        {
            cont = cont + 1;
            j = 0;
        }

    }


    printf("A quantidade de vezes que aparece e:%d",cont);
    return 1;
}

#include <stdio.h>
#include <string.h>

void ler(char p[50])
{printf("digite a string \n");
fgets(p,50,stdin);
}

void compara(char p1[50],char p2[50],int t)
{
int i,aux;
aux=0;
for(i=0;i<t;i++)
{
if(p1[i]!=p2[i])
{printf("\n As duas strings nao sao iguais");
aux=1;
break;}
}
if(aux==0){printf("\n As duas strings sao iguais");}
}

	// programa principal
int main(){
	char pala1[50],pala2[50];
	int tamanho1,tamanho2;
	printf("\n Programa  \n\n");
	ler(pala1);
	ler(pala2);
	tamanho1=strlen(pala1) - 1;
	tamanho2=strlen(pala2) - 1;

		//ferifica tamanho
	if(tamanho1==tamanho2)
	{compara(pala1,pala2,tamanho1);}
	else
	{printf("os tamanhos sao diferentes logo as strings sao diferentes\n");}
    return(0);
}


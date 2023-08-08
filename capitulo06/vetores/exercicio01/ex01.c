/* 1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
 * tela os valores lidos */


#include <stdio.h> 


int main(int argc, const char *argv[])
{
    int numero [6];

    for(int k=0; k<6; k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);
    }
    for(int k=0; k<6; k++)
    {
        printf("%d\n",numero[k]);
    }
    return 0;
}

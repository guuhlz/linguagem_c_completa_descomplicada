/*2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
 * tela os valores lidos na ordem inversa.*/


#include <stdio.h>



int main(int argc, const char *argv[])
{
    int numero[6];

    for(int k=0; k<6; k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);

    }  
    for(int k=5; k>=0; k--)
    {
        printf("Numero: %d\n",numero[k]);

    } 
    return 0;
}


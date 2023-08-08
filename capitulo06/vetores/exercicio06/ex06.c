/*6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
 * quantos valores pares foram armazenados nesse vetor.*/


#include<stdio.h>


int main(int argc, const char *argv[])
{
    int numero [10];
    int pares = 0;

    for(int k =0; k<10; k++)
    {
        printf("[%d] Numero:",k+1);
        scanf("%d",&numero[k]);
        if (numero[k] % 2 == 0) pares = pares + 1;
    }
    printf("Pares: %d",pares);
    return 0;
}

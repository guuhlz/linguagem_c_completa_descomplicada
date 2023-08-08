/*5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
 * valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
 * deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero[8]; 
    int x,y;

    for (int k = 0; k < 7; k++) 
    {
        printf("Numero: ");   
        scanf("%d",&numero[k]);
    }
    printf("Posicao X:");
    scanf("%d",&x);

    printf("Posicao Y:");
    scanf("%d",&y);

    printf("%d\n",numero[x]+numero[y]);
    return 0;

}

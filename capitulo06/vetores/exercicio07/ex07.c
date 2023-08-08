/*7) Faça um programa que receba do usuário um vetor X com 10 posições. Em segui-
 * da deverão ser impressos o maior e o menor elemento desse vetor.*/

#include <stdio.h>
#include <limits.h>

int main(int argc, const char *argv[])
{
    int numero[10];
    int maior = INT_MIN;
    int menor = INT_MAX;


    for(int k=0;k<10;k++)
    {
        printf("[%d] Numero: ",k+1);
        scanf("%d",&numero[k]);

        if(numero[k] <= menor) menor = numero[k];
        if(numero[k] >= maior) maior = numero[k];
    }

    printf("Maior : %d\n",maior);
    printf("Menor: %d\n",menor);
    return 0;
}

/*3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
 * mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>


int main(int argc, const char *argv[])
{
    float numero[5];
    float media = 0;
    for (int k=0; k<5; k++)
    {
        printf("Numero: ");
        scanf("%f",&numero[k]);
    }
    for (int k=0; k<5; k++)
    {
        printf("Numero: %f\n",numero[k]);
        media = media + numero[k];
    }
    printf("Media: %f\n",media/5);
    
    return 0;
}

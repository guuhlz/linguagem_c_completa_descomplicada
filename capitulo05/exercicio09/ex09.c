/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
 * valor lido.*/


#include <stdio.h>


int main(int argc, const char *argv[])
{
    int numero = 0;
    int maior  = 0;
    int menor  = 1;


    for (int i =0; i<10; i++)
    {
        printf("Numero[%d]: ",i+1);
        scanf("%d",&numero);

        if(numero >= maior)
        {
            maior = numero;
        }
        if(numero <= menor)
        {
            menor = numero;
        }
    }

    printf("Maior: %d\n Menor: %d\n",maior,menor);
    return 0;
}




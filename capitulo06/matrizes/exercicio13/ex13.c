/* 13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
soma dos elementos dessa matriz que não pertencem à diagonal principal nem à
diagonal secundária.*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int matrixNumeros[5][5];
    int soma = 0;

    for(int k=0; k<5; k++)
    {
        for(int l=0; l<5; l++)
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d", &matrixNumeros[k][l]);

            if(k!=l && (k+l != 4)) soma += matrixNumeros[k][l];
        }
    }
    for(int k=0; k<5; k++)
    {
        for(int l=0; l<5; l++)
        {
            printf("[%d] ",matrixNumeros[k][l]);

        }
        printf("\n");
    }
    printf("Soma elementos fora da diagonal princial e secundaria: %d",soma);
    return 0;
}

/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que estão abaixo da diagonal principal.  */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrixNumeros[6][6];
    int soma = 0;

    for(int k=0; k<6; k++)
    {
        for(int l=0; l<6; l++)
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d", &matrixNumeros[k][l]);

            if(k>l) soma += matrixNumeros[k][l];
        }
    }
    for(int k=0; k<6; k++)
    {
        for(int l=0; l<6; l++)
        {
            printf("[%d] ",matrixNumeros[k][l]);

        }
        printf("\n");
    }
    printf("Soma elementos abaixo diagonal princial: %d",soma);
    return 0;
}

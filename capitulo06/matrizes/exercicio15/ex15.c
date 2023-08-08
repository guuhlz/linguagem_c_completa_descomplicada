/* Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A2. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrixA[5][5];
    int matrixB[5][5];

    for(int k=0; k<5; k++)
    {
        for(int l=0; l<5; l++)
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d", &matrixA[k][l]);

            matrixB[k][l] = matrixA[k][l] * matrixA[k][l];
        }
    }
    for(int k=0; k<5; k++)
    {
        for(int l=0; l<5; l++)
        {
            printf("[%d] ",matrixB[k][l]);

        }
        printf("\n");
    }
    return 0;
}

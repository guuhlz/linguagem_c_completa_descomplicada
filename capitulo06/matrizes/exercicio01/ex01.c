/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
 * menor valor contido nessa matriz. */
#include <stdio.h>
#include <limits.h>
int main(int argc, const char *argv[])
{
    int matriz[3][3];
    int menor = INT_MAX;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]Numero:", i+1, j+1);
            scanf("%d",&matriz[i][j]);

            if(matriz[i][j] <= menor)
            {
                menor = matriz[i][j];
            }
        }
    }
    printf("Menor: %d\n",menor);
    return 0;
}

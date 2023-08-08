/* 14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores. */

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int matrixNumeros[5][5];
    int somaDiagonais    = 0;
    int somaSemDiagonais = 0;

    for(int k=0; k<5; k++)
    {
        for(int l=0; l<5; l++)
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d", &matrixNumeros[k][l]);

            if(k!=l && (k+l != 4)) somaSemDiagonais += matrixNumeros[k][l];
            if(k==l || (k+l == 4)) somaDiagonais += matrixNumeros[k][l];
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
    printf("%d\n",somaDiagonais);
    printf("%d\n",somaSemDiagonais);

    printf("Diferenca :%d",somaDiagonais - somaSemDiagonais);
    return 0;
}

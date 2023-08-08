/* 7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
 * contidos em sua diagonal secundária. */

#include<stdio.h>

int main(int argc, const char *argv[])
{
    int matrixNumero[3][3];
    int soma = 0;


    for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d",&matrixNumero[k][l]);

            if(k+l == 2) soma += matrixNumero[k][l];
        }
    }
    printf("Soma diagonal secundaria: %d",soma);


    return 0;
}

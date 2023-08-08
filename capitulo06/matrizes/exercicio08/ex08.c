/*8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elemen-
tos são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i2 – 1 se i = j
A[i][j] = 4i3 + 5j2 + 1 se i > j  */


#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int matrixNumeros[10][10];

    for(int k=0; k<10; k++)
    {
        for(int l=0; l<10; l++)
        {
            if(k<l)
            {
                matrixNumeros[k][l] = (2*k) + (7*l) - 2;
            }
            else if(k==l)
            {
                matrixNumeros[k][l] = (3*k*k) - 1;
            }
            else if(k>l)
            {
                matrixNumeros[k][l] = (4*k*k*k) + (5*l*l) + 1;
            }      
            printf("%d ", matrixNumeros[k][l]);
        }
        printf("\t\n");
    }
    return 0;
}

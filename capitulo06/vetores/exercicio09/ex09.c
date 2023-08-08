/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números in-
 * teiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
 * do array C.*/

#include <stdio.h>


int main(int argc, const char *argv[])
{
    int A[10],B[10],C[10];

    for(int k =0; k<10; k++)
    {
        printf("[%d]A: ",k+1);
        scanf("%d",&A[k]);
        printf("[%d]B: ",k+1);
        scanf("%d",&B[k]);

        C[k] = A[k] - B[k];
    }
    for(int k=0;k<10;k++)
    {
        printf("A[%d] - B[%d] = %d\n",k+1,k+1,A[k]-B[k]);
    }
    return 0;
}

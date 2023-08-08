/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array. Por exemplo, a matriz
deverá gerar o vetor  */


#include <stdio.h>


int main(int argc, char const *argv[])
{
    int matrixNumero[3][3];
    int soma[3];

    for (int k = 0; k < 3; k++)
    {
        for(int l=0; l < 3; l++)    
        {
            printf("[%d][%d] Numero: ",k+1,l+1);
            scanf("%d",&matrixNumero[k][l]);
            
        }
    }
    printf("\n");
    for (int k = 0; k < 3; k++)
    {
        for(int l=0; l < 3; l++)    
        {
            printf("%d ",matrixNumero[k][l]);
            
        }
        printf("\n");
    }
    printf("\nSoma colunas\n");
    for(int k=0; k<3; k++)
    {
        soma[k] = matrixNumero[0][k] + matrixNumero[0][k] + matrixNumero[0][k]; 
        printf("%d ",soma[k]);
    }
    return 0;
}

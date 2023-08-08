/*4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
 * valores maiores do que 10 ela possui.  */


#include <stdio.h>

#define VALOR 10


int main(int argc, const char *argv[])
{
    int matrixNumero [4][4];
    int cont = 0;    

    for(int k=0; k<4; k++)
    {
        for(int l=0; l<4; l++)
        {
            printf("[%d][%d] Numero:",k+1,l+1);
            scanf("%d", &matrixNumero[k][l]);

            if(matrixNumero[k][l] > VALOR) cont++; 

        }
    }
    printf("Quantidade de valores maiores que %d : %d\n",VALOR,cont);
    return 0;
}

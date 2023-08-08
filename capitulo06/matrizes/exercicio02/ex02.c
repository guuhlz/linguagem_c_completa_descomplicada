/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o * maior valor 
 * contido nessa matriz e a sua localização (linha e coluna).  */ 
#include <stdio.h>
#include <limits.h>
int main(int argc, const char *argv[])
{
    int matriz[4][4];
    int maior    = INT_MIN;
    int coluna   = 0; 
    int linha    = 0;

    for(int i=0; i<4; i++)
    {     
        for(int j=0; j<4; j++)
        {
            printf("[%d][%d] Numero: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
                if(matriz[i][j] > maior)
            {
                maior   = matriz[i][j];
                linha   = i;
                coluna  = j;
            }
        }
    }
    printf("Maior :%d\nLinha :%d\nColuna:%d\n",maior,linha+1,coluna=1);
    return 0;
}

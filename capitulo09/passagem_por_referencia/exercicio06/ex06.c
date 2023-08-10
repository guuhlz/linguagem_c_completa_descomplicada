/* Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas.
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A,
então A[i][j] = B[j][i]). */

#include<stdio.h>
void matrizTransposta(int (*matriz)[5],int lin,int col);
int main (int argc, char *argv[])
{
    int lin=5, col =5;
    int matriz[lin][col];
    int count = 1;
    for(int k =0; k<lin;k++){
        for(int l=0; l<col; l++){
            matriz[k][l] = count++;
        }
    }
    for(int k =0; k<lin;k++){
        for(int l=0; l<col; l++){
            printf("%d\t",matriz[k][l]);
        }
        printf("\n");
    } 
    printf("\n\n");


    matrizTransposta(matriz,lin,col);
    for(int k =0; k<lin;k++){
        for(int l=0; l<col; l++){
            printf("%d\t",matriz[k][l]);
        }
        printf("\n");
    } 
   
        return 0;
}

void matrizTransposta(int (*matriz)[5],int lin, int col){
    int temp = 0;
    for(int k =0; k<lin;k++){
        for(int l=k+1; l<col; l++){
            temp = matriz[k][l];
            matriz[k][l] = matriz[l][k];
            matriz[l][k] = temp;
        }
    }
}

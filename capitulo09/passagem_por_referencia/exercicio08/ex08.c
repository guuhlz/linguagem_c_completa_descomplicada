/*  Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
sua diagonal principal e da sua diagonal secundária. */

#include <stdio.h>
#include <stdlib.h>

void somaDiagonal(int (*matriz)[6],int lin, int col,int *principal,int *secundaria);
void preencheMatriz(int (*matriz)[6],int lin, int col);
void imprimeMatriz(int (*matriz)[6],int lin, int col);

int main (int argc, char *argv[])
{
    int matriz[6][6];
    int lin = 6, col = 6;
    int principal = 0;
    int secundaria = 0;
    preencheMatriz(matriz,lin,col);
    imprimeMatriz(matriz,lin,col);
    somaDiagonal(matriz,lin,col,&principal,&secundaria);
    printf("Soma diagonal princial :%d\n",principal);
    printf("Soma diagonal secundaria :%d\n",secundaria);

    return 0;
}

void preencheMatriz(int (*matriz)[6],int lin, int col){
    int count= 0;
    
    for(int k=0;k<lin;k++){
        for(int l=0;l<lin;l++){
            matriz[k][l] =  rand() % 10;
        }
    }
}


void somaDiagonal(int (*matriz)[6],int lin, int col,int *principal, int *secundaria){

    for(int k=0; k<lin; k++){
        for(int l=0; l<col; l++){
            if(k == l) *principal += matriz[k][l];
            if (k+l == lin) *secundaria += matriz[l][l];
        }
    }
}
void imprimeMatriz(int (*matriz)[6],int lin, int col){
    for(int k=0;k<lin;k++){
        for(int l=0;l<lin;l++){
            printf("%d\t",matriz[k][l]);
        }
        printf("\n");
    }
    printf("\n");
}


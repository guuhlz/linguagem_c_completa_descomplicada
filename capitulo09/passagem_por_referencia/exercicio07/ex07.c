/*  Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e
retorne a soma dos seus elementos. */

#include <stdio.h>

int somaMatriz(int (*matriz)[10],int lin, int col);
void imprimeMatriz(int (*matriz)[10],int lin, int col);
void preencheMatriz(int (*matriz)[10],int lin, int col);

int main (int argc, char *argv[])
{
    int matriz[10][10];
    int lin = 10,col =10;
    
    preencheMatriz(matriz,lin,col);
    printf("Soma elementos matriz: %d\n",somaMatriz(matriz,lin,col));
    return 0;
}

int somaMatriz(int (*matriz)[10],int lin, int col){
    int result = 0;
    
    for(int k=0;k<lin;k++){
        for(int l=0;l<lin;l++){
            result += matriz[k][l];
        }
    }
    return result;
}

void imprimeMatriz(int (*matriz)[10],int lin, int col){
    for(int k=0;k<lin;k++){
        for(int l=0;l<lin;l++){
            printf("%d\t",matriz[k][l]);
        }
    }
    printf("\n\n");
}

void preencheMatriz(int (*matriz)[10],int lin, int col){
    int count= 0;
    
    for(int k=0;k<lin;k++){
        for(int l=0;l<lin;l++){
            matriz[k][l] = 1;
        }
    }
}


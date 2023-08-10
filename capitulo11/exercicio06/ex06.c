/* 6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As di-
mensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário. */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int valorNaMatriz(int **matriz, int linha, int coluna, int valor);

int main (int argc, char *argv[])
{
    int linha,coluna,valor;
    printf("Linha: ");
    scanf("%d",&linha);
    printf("Coluna: ");
    scanf("%d",&coluna);

    int **matriz = malloc(linha * sizeof(int*));

    for (int k=0; k<linha; k++) {
        *(matriz + k) = malloc(coluna * sizeof(int));

    }
    srand(time(NULL));

    for (int k=0; k<linha; k++){
        for(int l=0; l<coluna; l++){
            *(*(matriz + k) + l) = rand() % 100;
        }

    }
    for(int k=0; k<linha; k++){
        for(int l=0; l<coluna;l++){
            printf("%d\t",*(*(matriz + k) + l));
        }
        printf("\n");
    }

    printf("Numero: ");
    scanf("%d",&valor);

    if(valorNaMatriz(matriz,linha,coluna,valor) == 1){
        printf("Valor pertence na Matriz\n");
    }else {
        printf("Valor nao pertence a Matriz\n");
    }

    free(matriz);
    
    return 0;
}


int valorNaMatriz(int **matriz, int linha, int coluna,int valor){
    for(int k=0; k<linha; k++){
        for(int l=0; l<coluna; l++){
            if(valor == *(*(matriz + k) + l)) return 1;
        }
    }
    return -1;
}

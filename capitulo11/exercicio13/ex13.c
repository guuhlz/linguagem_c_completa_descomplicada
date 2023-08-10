/* 13) Escreva um programa que leia um inteiro N e crie uma matriz alocada dinami-
camente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor
−1 nos elementos abaixo da diagonal principal. */

#include <stdio.h>
#include <malloc.h>


int **ptrMatriz(int tamanhoMatriz);

int main (int argc, char *argv[])

{
    int n;
    int **ptr;
    printf("Tamanho matriz quadrada: ");
    scanf("%d",&n);

    ptr = ptrMatriz(n);

    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            printf("%d\t",*(*(ptr + k) + l));
        }
        printf("\n");
    }
    return 0;
}

int **ptrMatriz(int tamanhoMatriz){
    int **matriz = malloc(tamanhoMatriz * sizeof(int*));

    for (int k=0; k<tamanhoMatriz; k++) {
        *(matriz + k) = malloc(tamanhoMatriz* sizeof(int));
    }
    
    for(int k=0; k<tamanhoMatriz; k++){
        for(int l=0; l<tamanhoMatriz; l++){
            if(k==l){
                *(*(matriz + l) + k) = 0;
            }else if (k<l) {
                *(*(matriz + l) + k) = -1;
            }else if(k>l) {
                *(*(matriz + l) + k) = 1;
            }
        }
    }
    int **ptr = matriz;

    return ptr;
    
}

// 00 01 02
// 10 11 12
// 20 21 22



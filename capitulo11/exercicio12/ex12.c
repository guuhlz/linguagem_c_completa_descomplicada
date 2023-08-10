/* 12) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
matriz deve conter o valor 1 na diagonal secundaria e 0 nas demais posições.
 */

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
            if(k+l+1 == tamanhoMatriz){
                *(*(matriz + l) + k) = 1;
            }else {
                *(*(matriz + l) + k) = 0;
            }
        }
    }
    int **ptr = matriz;

    return ptr;
    
}




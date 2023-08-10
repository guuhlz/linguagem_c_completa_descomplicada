/* 16) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para
um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B.
 */

#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>

int *ptrProdutoMatVet(int **matriz, int *vetor, int tamanho);

int main (int argc, char *argv[])
{
    int tamanho;
    int *ptr;
    printf("Tamanho matriz NxN e Vetor N: ");
    scanf("%d",&tamanho);

    int *vetor = malloc(tamanho * sizeof(int));
    int **matriz = malloc(tamanho * sizeof(int*));

    srand(time(NULL));
    for (int k=0; k<tamanho; k++) {
        *(matriz + k) = malloc(tamanho* sizeof(int));
    }

    for(int k=0; k<tamanho; k++){
        for(int l=0; l<tamanho; l++){
            *(*(matriz + l) + k) = rand() % 10;
        }
        *(vetor +k) = rand() % 10;
    }
    for(int k=0; k<tamanho; k++){
        for(int l=0; l<tamanho; l++){
            printf("%d ",*(*(matriz + l) + k));
        }
        printf("\n");
    }

    printf("\n");

    for(int k=0; k<tamanho; k++){
        printf("%d ",*(vetor +k));
    }

    printf("\n");



    ptr = ptrProdutoMatVet(matriz,vetor,tamanho);

    for(int k=0; k<tamanho; k++){
        printf("%d ",*(ptr + k));
    }

    printf("\n");

    return 0;
}

int *ptrProdutoMatVet(int **matriz, int*vetor, int tamanho){
    int *result = malloc(tamanho * sizeof(int*));

    for(int k=0; k<tamanho; k++){
        for(int l=0; l<tamanho; l++){
            *(result +l) += *(*(matriz + k) + l) * (*(vetor + k));
        }
    }
    int *ptr = result;

    return ptr;

}

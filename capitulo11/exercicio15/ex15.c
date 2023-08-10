/* 14) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
N cada. A função deve retornar o ponteiro para um vetor C de tamanho N aloca-
do dinamicamente, em que C[i] = A[i] + B[i]. */

#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>

int *ptrSomaVetor(int *vetor1, int *vetor2, int tamanho);

int main (int argc, char *argv[])
{
    int n;
    printf("Tamanho vetor: ");
    scanf("%d",&n);
    int *vetor1 = malloc(n * sizeof(int));
    int *vetor2 = malloc(n * sizeof(int));
    int *ptr;


    srand(time(NULL));

    for(int k=0; k<n; k++){
        *(vetor1 + k) = rand() % 60; 
        *(vetor2 + k) = rand() % 60; 
    }

    ptr = ptrSomaVetor(vetor1,vetor2,n);

    for(int k=0; k<n; k++){
        printf("%d\t * %d\t = %d\t\n",*(vetor1 + k),*(vetor2 + k),*(ptr + k));
    }

    return 0;
}

int *ptrSomaVetor(int *vetor1, int *vetor2, int tamanho){
    int *somaVetor = malloc(tamanho * sizeof(int));
    int *ptr;

    for(int k=0; k<tamanho; k++){
        *(somaVetor + k) = *(vetor1 + k) * *(vetor2 + k);
    }

    ptr = somaVetor;

    return ptr;
}


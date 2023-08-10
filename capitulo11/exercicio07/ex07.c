/* 7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1. */

#include <stdio.h>
#include <malloc.h>

int *retornaVetor(int tamanho);

int main (int argc, char *argv[])
{
    int tamanho;
    printf("Tamanho vetor: ");
    scanf("%d",&tamanho);

    int *ptr = retornaVetor(tamanho);

    for(int k=0;k<tamanho;k++){
        printf("%d ",*(ptr + k));
    }
    printf("\n");
    return 0;
}

int *retornaVetor(int tamanho){
    int *vetor = malloc(tamanho * sizeof(int));
    
    for(int k=0; k<tamanho; k++){
        *(vetor + k) = k;
    }
    int *ptr = vetor;
    return ptr;
}


/* 4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima. */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
    int n;
    printf("Tamanho vetor: ");
    scanf("%d",&n);

    int *vetor = malloc(n * sizeof(int));

    for(int k=0;k<n;k++){
        *(vetor + k) = rand() % 100;
        printf("%d | ",*(vetor+k));
    }
    printf("\n");

    return 0;
}

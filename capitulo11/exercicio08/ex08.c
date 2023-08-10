/* 8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e re-
torne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
 */

#include <stdio.h>
#include <malloc.h>

int* ptrVetor(int tamanho);

int main (int argc, char *argv[])
{
    int n;
    printf("N: ");
    scanf("%d",&n);

    printf("Ponteiro = %p\n",ptrVetor(n));
    return 0;
}


int* ptrVetor(int tamanho){
    if(tamanho <=0) return NULL;

    int *vetor = malloc(tamanho * sizeof(int));
    int *ptr = vetor;
    return ptr;
}

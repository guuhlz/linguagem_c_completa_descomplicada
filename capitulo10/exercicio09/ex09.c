/* Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros. */

#include <stdio.h>

void imprimeVetor(int *vetor, int tam);

int main (int argc, char *argv[])
{
    int tam = 5;
    int vetor[] = {1,2,3,4,5};

    imprimeVetor(vetor,tam);
    return 0;
}


void imprimeVetor(int *vetor, int tam){
    int k = 0;
    while(k<tam){
        printf("%d\n",*vetor);
        vetor++;
        k++;
    }
}

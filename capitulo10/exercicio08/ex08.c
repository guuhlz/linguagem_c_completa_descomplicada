/* Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros. */

#include <stdio.h>

void preencheVetor(int *vetor, int *valor, int tam);
void imprimeVetor(int *vetor, int tam);

int main (int argc, char *argv[])
{
    int valor = 5;
    int tam = 5;
    int vetor[tam];

    preencheVetor(vetor,&valor,tam);
    imprimeVetor(vetor,tam);
    return 0;
}

void preencheVetor(int *vetor,int *valor, int tam){
    int k=0;
    while(k<tam){
        *vetor = *valor;
        k++;
        vetor++;
    }
}

void imprimeVetor(int *vetor, int tam){
    int k = 0;
    while(k<tam){
        printf("%d\n",*vetor);
        vetor++;
        k++;
    }
}

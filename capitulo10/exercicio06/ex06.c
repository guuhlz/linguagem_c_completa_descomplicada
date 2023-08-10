/*  Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares. */

#include <stdio.h>
#include <stdlib.h>
void preencheVetor(int *vetor,int tamanho);
void imprimeVetor(int *vetor,int tamanho);
void enderecoPar(int *vetor, int tamanho);

int main (int argc, char *argv[])
{
    int tamanho = 5;
    int vetor[tamanho];

    preencheVetor(vetor,tamanho);
    imprimeVetor(vetor,tamanho);
    enderecoPar(vetor,tamanho);
    
    return 0;
}

void preencheVetor(int *vetor, int tamanho){
    for(int k=0; k<tamanho;k++){
        vetor[k] = rand() % 50;
    }
}
void imprimeVetor(int *vetor, int tamanho){
    for(int k=0; k<tamanho;k++){
        printf("%d-%p\n",vetor[k],&vetor[k]);
    }
    printf("\n");
}

void enderecoPar(int *vetor, int tamanho){
    for(int k=0; k<tamanho; k++){
        if(vetor[k] % 2 == 0){
            printf("%p\n",&vetor[k]);
        }
    }
}

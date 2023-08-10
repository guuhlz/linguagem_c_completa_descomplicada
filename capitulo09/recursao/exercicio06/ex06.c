/*  Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros. */

#include <stdio.h>
#include <stdlib.h>

float mediaVetor(int *vetor, int tamanho,int sizeVet);
void preencheVetor(int *vetor, int *tamanho);
void imprimeVetor(int *vetor, int *tamanho);

int main (int argc, char *argv[])
{
    int tamanho = 0,quant = 0;
    float resultado = 0;
    printf("Tamanho vetor: ");
    scanf("%d",&tamanho);
    int vetor[tamanho];
    int sizeVet = tamanho;

    preencheVetor(vetor, &tamanho);
    imprimeVetor(vetor, &tamanho);
    printf("Media: %f\n",mediaVetor(vetor,tamanho,sizeVet));
    return 0;
}

float mediaVetor(int *vetor, int tamanho,int sizeVet){
    if(tamanho == 0){
        return 0; 
    }else if(tamanho == sizeVet){
        return (vetor[tamanho-1] + mediaVetor(vetor,tamanho-1,sizeVet))/tamanho;
    }else {
        return vetor[tamanho-1] + mediaVetor(vetor,tamanho-1,sizeVet);
    }
}

void imprimeVetor(int *vetor, int *tamanho){
     for(int k=0; k<(*tamanho); k++){
         printf("%d|",vetor[k]);
     }
     printf("\n");
 }

 void preencheVetor(int *vetor, int *tamanho){
     for(int k=0; k<(*tamanho); k++){
         vetor[k] = rand() % 100;
     }
     printf("\n");
 }

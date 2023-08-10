/*  Crie uma função recursiva que retorne a soma dos elementos de um vetor de in-
teiros. */

#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], int tam);
void preenche(int *vet, int tam);
void imprime (int *vet, int tam);

int main (int argc, char *argv[])
{
    int n;
    printf("Tamanho vetor: ");
    scanf("%d",&n);
    int numeros[n];

    preenche(numeros,n);
    imprime(numeros,n);
    printf("Soma vetor: %d\n",somaVetor(numeros,n));
    return 0;
}

int somaVetor(int vetor[], int tam){
    
    if(tam == 0){
        return 0;
    }else {
        return vetor[tam-1] + somaVetor(vetor,tam-1);
    }
}

 void imprime(int *vet, int size){
     for(int k=0; k<size; k++){
         printf("%d|",vet[k]);
     }
     printf("\n");
 }

 void preenche(int *vet, int size){
     for(int k=0; k<size; k++){
         vet[k] = rand() % 100;
     }
     printf("\n");
 }

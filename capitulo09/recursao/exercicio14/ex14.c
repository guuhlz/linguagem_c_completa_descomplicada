// Crie uma função recursiva que retorne o menor elemento em um vetor.

#include <stdio.h>
#include <limits.h>

int menorElemento(int *vetor, int tam);

int main (int argc, char *argv[])
{
    int vetor[5] = {1,2,3,4,5};
    int tamanho = 5;

    printf("Menor elemento: %d",menorElemento(vetor,tamanho));
    return 0;
}

int menorElemento(int *vetor, int tam){
    int menor = INT_MAX;
    if(tam == 0){
        return menor;
    }else 
        if(menor <= vetor[tam-1]){
            return menor = vetor[tam-1];
            menorElemento(vetor,tam-1);
        }
    
}


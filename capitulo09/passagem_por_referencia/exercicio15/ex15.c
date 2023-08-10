/* Elabore uma função que receba um vetor contendo N valores e retorne por refe-
rência o maior e o menor elemento desse vetor.
 */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void maiorElemento(int *numeros,int *maior, int *menori, int size);
void imprime(int *vet, int size);
void preenche(int *vet, int size);


int main (int argc, char *argv[])
{
    
    int N = 0, maior = INT_MIN ,menor = INT_MAX;
    printf("Tamanho vetor: ");
        scanf("%d",&N);
    int numeros[N];

    preenche(numeros,N);
    imprime(numeros,N);

    maiorElemento(numeros,&maior,&menor,N);

    printf("Maior elemento:%d\nMenor elemento:%d\n",maior,menor);

    return 0;

}

void maiorElemento(int *numeros, int *maior, int *menor, int size){
    for(int k=0; k<size; k++){
        if(numeros[k] >= *maior) *maior = numeros[k];
        if(numeros[k] < *menor) *menor = numeros[k];
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

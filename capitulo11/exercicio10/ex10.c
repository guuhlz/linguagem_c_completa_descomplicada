/* 10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e re-
torne o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor
deverá ter os seus elementos preenchidos com certo valor, também passado por
parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retor-
nado. */

#include <stdio.h>
#include <malloc.h>
#include <time.h>


int *ptrVetor(int tamanhoVetor, int numero);

int main (int argc, char *argv[])
{
    int n,numero;
    int *ptr;
    printf("Tamanho vetor: ");
    scanf("%d",&n);
    printf("Numero: ");
    scanf("%d",&numero);

    ptr = ptrVetor(n,numero);

    if(ptr == NULL){
        printf("%p\n",ptr);
    }else {
        for(int k=0; k<n; k++){
            printf("%d\n",*(ptr + k));
        }
    }

    return 0;
}

int *ptrVetor(int tamanhoVetor, int numero){
    if(tamanhoVetor <= 0) return NULL;

    int *vetor = malloc(tamanhoVetor * sizeof(int));
    int *ptr = vetor;

    for(int k=0; k<tamanhoVetor; k++){
        *(vetor + k) = numero;
    }

    return ptr;
}



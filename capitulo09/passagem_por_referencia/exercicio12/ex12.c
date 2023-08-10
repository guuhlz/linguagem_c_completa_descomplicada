/*  Escreva uma função que receba como parâmetro um vetor contendo N valores in-
teiros. Essa função deve retornar, por referência, dois valores: a soma dos números
pares e ímpares. */

#include <stdio.h>

void soma(int *numeros, int *somaPares, int *somaImpares, int *n);
void preencheNumeros(int *numeros, int *n);
int main (int argc, char *argv[])
{
    int n;
    int somaPares = 0;
    int somaImpares = 0;
    printf("Tamanho vetor: ");
    scanf("%d",&n);

    int numeros[n];

    preencheNumeros(numeros,&n);
    soma(numeros,&somaPares,&somaImpares,&n);
    printf("Soma pares: %d\nSoma impares: %d\n",somaPares,somaImpares);


    return 0;
}

void soma(int *numeros, int *somaPares, int *somaImpares, int *n){
    for(int k=0; k<(*n); k++){
        if (numeros[k] % 2 == 0){
            *somaPares += numeros[k];
        }else{
            *somaImpares += numeros[k];

        }
    }
}

void preencheNumeros(int *numeros, int *n){
    for(int k=0; k<(*n); k++){
        numeros[k] = k+1;
        printf("%d ",numeros[k]);
    }
    printf("\n");
}

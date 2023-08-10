/* 5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente. */

#include <stdio.h>
#include <malloc.h>

int main (int argc, char *argv[])
{
    int n = 0;
    while(n<=0){
        printf("Tamanho vetor: ");
        scanf("%d",&n);
        if(n <=0) printf("Valor invalido - N deve ser maior que 0");
    }

    int * vetor = malloc(n * sizeof(int));

    for(int k=0; k<n; k++){
        *(vetor + k) = (k+1)*2;
        printf("%d | ",*(vetor + k));
    }
    printf("\n");

    free(vetor);

    return 0;
}
